#include "common.hpp"

namespace brigid {
  namespace {
    using self_t = match_data_t;

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
    }
    lua_setfield(L, -2, "match_data");
  }
}
