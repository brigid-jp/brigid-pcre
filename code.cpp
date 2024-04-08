#include "common.hpp"

#include <iostream>

namespace brigid {
  namespace {
    using self_t = code_t;

    lua_Integer translate_offset(lua_Integer offset, lua_Integer size) {
      if (offset < 0) {
        offset += size;
      } else {
        --offset;
      }
      if (offset < 0) {
        offset = 0;
      }
      if (offset > size) {
        offset = size;
      }
      return offset;
    }

    void impl_info(lua_State* L) {
      auto self = self_t::checkudata(L, 1);
      auto what = luaL_checkinteger(L, 2);
      auto size = check(pcre2_pattern_info(self, what, nullptr));

      switch (what) {
        case PCRE2_INFO_FIRSTBITMAP:
        case PCRE2_INFO_NAMETABLE:
          throw std::runtime_error("not supported");

        case PCRE2_INFO_JITSIZE:
        case PCRE2_INFO_SIZE:
          {
            std::size_t value = 0;
            if (size != sizeof(value)) {
              throw pcre2_error(PCRE2_ERROR_NOMEMORY);
            }
            check(pcre2_pattern_info(self, what, &value));
            lua_pushinteger(L, value);
          }
          return;
      }

      std::uint32_t value = 0;
      if (size != sizeof(value)) {
        throw pcre2_error(PCRE2_ERROR_NOMEMORY);
      }
      check(pcre2_pattern_info(self, what, &value));
      lua_pushinteger(L, value);
    }

    // regex:match(subject)
    // regex:match(subject, match)
    // regex:match(subject, offset)
    // regex:match(subject, offset, match)
    // regex:match(subject, offset, options)
    // regex:match(subject, offset, options, match)
    int impl_match(lua_State* L) {
      auto self = self_t::checkudata(L, 1);
      auto subject = checkstring(L, 2);
      lua_Integer offset = 1;
      std::uint32_t options = 0;
      pcre2_match_data* match = nullptr;
      int match_index = 0;

      if ((match = match_data_t::testudata(L, 3))) {
        match_index = 3;
      } else if ((match = match_data_t::testudata(L, 4))) {
        offset = luaL_optinteger(L, 3, offset);
        match_index = 4;
      } else if ((match = match_data_t::testudata(L, 5))) {
        offset = luaL_optinteger(L, 3, offset);
        options = luaL_optinteger(L, 4, options);
        match_index = 5;
      } else {
        offset = luaL_optinteger(L, 3, offset);
        options = luaL_optinteger(L, 4, options);
        auto match_data = match_data_t::make_unique(pcre2_match_data_create_from_pattern(
            self,
            nullptr));
        if (!match_data) {
          throw std::runtime_error("could not pcre2_match_data_create_from_pattern");
        }
        match = match_data_t::newuserdata(L, std::move(match_data));
        match_index = lua_gettop(L);
      }

      offset = translate_offset(offset, subject.size());

      auto result = check(pcre2_match(
          self,
          subject.data_u8(),
          subject.size(),
          offset,
          options,
          match,
          nullptr));

      lua_pushvalue(L, match_index);
      lua_pushinteger(L, result);
      return 2;
    }

    // regex:substitue(subject, replacement)
    // regex:substitue(subject, match, replacement)
    // regex:substitue(subject, offset, replacement)
    // regex:substitue(subject, offset, match, replacement)
    // regex:substitue(subject, offset, options, replacement)
    // regex:substitue(subject, offset, options, match, replacement)
    void impl_substitute(lua_State* L) {
      auto self = self_t::checkudata(L, 1);
      auto subject = checkstring(L, 2);

      lua_Integer offset = 1;
      std::uint32_t options = 0;
      pcre2_match_data* match = nullptr;
      string_reference replacement;

      if (lua_type(L, 3) == LUA_TSTRING) {
        replacement = checkstring(L, 3);
      } else if (lua_type(L, 4) == LUA_TSTRING) {
        if (!(match = match_data_t::testudata(L, 3))) {
          offset = luaL_optinteger(L, 3, offset);
        }
        replacement = checkstring(L, 4);
      } else if (lua_type(L, 5) == LUA_TSTRING) {
        offset = luaL_optinteger(L, 3, offset);
        if (!(match = match_data_t::testudata(L, 4))) {
          options = luaL_optinteger(L, 4, options);
        }
        replacement = checkstring(L, 5);
      } else {
        offset = luaL_optinteger(L, 3, offset);
        options = luaL_optinteger(L, 4, options);
        match = match_data_t::testudata(L, 5);
        replacement = checkstring(L, 6);
      }

      offset = translate_offset(offset, subject.size());
      std::vector<std::uint8_t> output(subject.size() * 2 + 1);
      std::size_t output_size = output.size();

      auto result = pcre2_substitute(
          self,
          subject.data_u8(),
          subject.size(),
          offset,
          options | PCRE2_SUBSTITUTE_OVERFLOW_LENGTH,
          match,
          nullptr,
          replacement.data_u8(),
          replacement.size(),
          output.data(),
          &output_size);

      // pcre2_substituteが成功した場合、output_sizeにNULを含まない長さが返され
      // る。失敗した場合、PCRE2_SUBSTITUTE_OVERFLOW_LENGTHを指定しているので、
      // NULを含めて必要な長さが返される。
      if (result == PCRE2_ERROR_NOMEMORY) {
        output.resize(output_size);
        output_size = output.size();

        result = pcre2_substitute(
            self,
            subject.data_u8(),
            subject.size(),
            offset,
            options,
            match,
            nullptr,
            replacement.data_u8(),
            replacement.size(),
            output.data(),
            &output_size);
      }

      check(result);

      lua_pushlstring(L, reinterpret_cast<const char*>(output.data()), output_size);
      lua_pushinteger(L, result);
    }
  }

  void initialize_code(lua_State* L) {
    lua_newtable(L);
    {
      newmetatable(L, self_t::name);
      lua_pushvalue(L, -2);
      lua_setfield(L, -2, "__index");
      setfield(L, -1, "__gc", self_t::destructor());
      lua_pop(L, 1);

      setfield(L, -1, "info", function<impl_info>());
      setfield(L, -1, "match", function_int<impl_match>());
      setfield(L, -1, "substitute", function<impl_substitute>());
    }
    lua_setfield(L, -2, "code");
  }
}
