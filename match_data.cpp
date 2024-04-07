#include "common.hpp"

namespace brigid {
  namespace {
    using self_t = match_data_t;
    using substring_t = std::unique_ptr<std::uint8_t, decltype(&pcre2_substring_free)>;

    void impl_construct(lua_State* L) {
      auto code = code_t::checkudata(L, 1);
      auto self = self_t::make_unique(pcre2_match_data_create_from_pattern(
          code,
          nullptr));
      if (!self) {
        throw std::runtime_error("could not pcre2_match_data_create_from_pattern");
      }
      self_t::newuserdata(L, std::move(self));
    }

    void impl_get_by_name(lua_State* L) {
      auto self = self_t::checkudata(L, 1);
      auto name = checkstring(L, 2);
      std::uint8_t* data = nullptr;
      std::size_t size = 0;
      check(pcre2_substring_get_byname(self, name.data_u8(), &data, &size));
      lua_pushlstring(L, reinterpret_cast<const char*>(data), size);
      pcre2_substring_free(data);
    }

    void impl_get_by_number(lua_State* L) {
      auto self = self_t::checkudata(L, 1);
      auto number = luaL_checkinteger(L, 2);
      std::uint8_t* data = nullptr;
      std::size_t size = 0;
      check(pcre2_substring_get_bynumber(self, number, &data, &size));
      lua_pushlstring(L, reinterpret_cast<const char*>(data), size);
      pcre2_substring_free(data);
    }

    void impl_get(lua_State* L) {
      if (lua_type(L, 2) == LUA_TSTRING) {
        impl_get_by_name(L);
      } else {
        impl_get_by_number(L);
      }
    }

    void impl_get_ovector(lua_State* L) {
      auto self = self_t::checkudata(L, 1);
      auto data = pcre2_get_ovector_pointer(self);
      auto size = pcre2_get_ovector_count(self);
      lua_newtable(L);
      for (std::uint32_t i = 0; i < size; ++i) {
        lua_newtable(L);
        lua_pushinteger(L, data[i * 2] + 1);
        lua_rawseti(L, -2, 1);
        lua_pushinteger(L, data[i * 2 + 1]);
        lua_rawseti(L, -2, 2);
        lua_rawseti(L, -2, i);
      }
    }
  }

  void initialize_match_data(lua_State* L) {
    lua_newtable(L);
    {
      newmetatable(L, self_t::name);
      lua_pushvalue(L, -2);
      lua_setfield(L, -2, "__index");
      setfield(L, -1, "__gc", self_t::destructor());
      lua_pop(L, 1);

      lua_newtable(L);
      setfield(L, -1, "__call", function<impl_construct>());
      lua_setmetatable(L, -2);

      setfield(L, -1, "get_by_name", function<impl_get_by_name>());
      setfield(L, -1, "get_by_number", function<impl_get_by_number>());
      setfield(L, -1, "get", function<impl_get>());
      setfield(L, -1, "get_ovector", function<impl_get_ovector>());
    }
    lua_setfield(L, -2, "match_data");
  }
}
