#include "common.hpp"

namespace brigid {
  namespace {
    using self_t = code_t;
  }

  int new_metatable(lua_State* L, const char* name) {
#if LUA_VERSION_NUM >= 503
    return luaL_newmetatable(L, name);
#else
    if (luaL_newmetatable(L, name)) {
      lua_pushstring(L, name);
      lua_setfield(L, -2, "__name");
      return 1;
    } else {
      return 0;
    }
#endif
  }

  void initialize_code(lua_State* L) {
    lua_newtable(L);
    {
      newmetatable(L, self_t::name);
      lua_pushvalue(L, -2);
      lua_setfield(L, -2, "__index");
      setfield(L, -1, "__gc", self_t::destructor());
      lua_pop(L, 1);
    }
    lua_setfield(L, -2, "code");
  }
}
