#include "common.hpp"
#include <exception>

#define BRIGID_EXPORT __attribute__ ((visibility ("default")))

namespace brigid {
  void initialize_common(lua_State*);
  void initialize_code(lua_State*);
  void initialize_symbols(lua_State*);

  void initialize(lua_State* L) {
    initialize_common(L);
    initialize_code(L);
    initialize_symbols(L);
  }
}

extern "C" int BRIGID_EXPORT luaopen_brigid_pcre2(lua_State* L) {
  try {
    lua_newtable(L);
    brigid::initialize(L);
    return 1;
  } catch (const std::exception& e) {
    return luaL_error(L, "%s", e.what());
  }
}
