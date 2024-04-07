#include "common.hpp"

namespace brigid {
  namespace {
    using self_t = code_t;

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
        offset = luaL_checkinteger(L, 3);
        match_index = 4;
      } else if ((match = match_data_t::testudata(L, 5))) {
        offset = luaL_checkinteger(L, 3);
        options = luaL_checkinteger(L, 4);
        match_index = 5;
      } else {
        offset = luaL_checkinteger(L, 3);
        options = luaL_checkinteger(L, 4);
        auto match_data = match_data_t::make_unique(pcre2_match_data_create_from_pattern(
            self,
            nullptr));
        if (!match_data) {
          throw std::runtime_error("could not pcre2_match_data_create_from_pattern");
        }
        match = match_data_t::newuserdata(L, std::move(match_data));
        match_index = lua_gettop(L);
      }

      if (offset < 0) {
        offset += subject.size();
      } else {
        --offset;
      }
      offset = std::max<lua_Integer>(offset, 0);
      offset = std::min<lua_Integer>(offset, subject.size() - 1);

      auto result = check(pcre2_match(
          self,
          subject.data_u8(),
          subject.size(),
          offset,
          options,
          match,
          nullptr));

      lua_pushinteger(L, result);
      lua_pushvalue(L, match_index);
      return 2;
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

      setfield(L, -1, "match", function_int<impl_match>());
    }
    lua_setfield(L, -2, "code");
  }
}
