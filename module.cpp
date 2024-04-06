#include <lua.hpp>
#include <exception>

#define BRIGID_EXPORT __attribute__ ((visibility ("default")))

namespace brigid {
}

extern "C" int BRIGID_EXPORT luaopen_brigid_pcre2(lua_State* L) {
  auto top = lua_gettop(L);
  try {
    lua_newtable(L);
    return 1;
  } catch (const std::exception& e) {
    lua_settop(L, top);
    return luaL_error(L, "%s", e.what());
  } catch (...) {
    lua_settop(L, top);
    return luaL_error(L, "unknown exception");
  }
}
