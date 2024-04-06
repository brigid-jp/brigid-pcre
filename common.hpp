#ifndef BRIGID_PCRE2_COMMON_HPP
#define BRIGID_PCRE2_COMMON_HPP

#include <lua.hpp>

#define PCRE2_STATIC
#define PCRE2_CODE_UNIT_WIDTH 8
#include <pcre2.h>

#include <cstdint>
#include <array>
#include <exception>
#include <stdexcept>

namespace brigid {
  class pcre2_error : public std::runtime_error {
  public:
    pcre2_error(int code, const char* what) : std::runtime_error(what), code_(code) {}
    int code() const noexcept { return code_; }
  private:
    int code_;
  };

  template <void (*T)(lua_State*)>
  struct function {
    static int value(lua_State* L) {
      auto top = lua_gettop(L);
      try {
        T(L);
        auto result = lua_gettop(L) - top;
        if (result > 0) {
          return result;
        }
        if (lua_toboolean(L, 1)) {
          lua_pushvalue(L, 1);
        } else {
          lua_pushboolean(L, true);
        }
        return 1;
      } catch (const pcre2_error& e) {
        lua_pushnil(L);
        lua_pushstring(L, e.what());
        lua_pushinteger(L, e.code());
        return 3;
      } catch (const std::runtime_error& e) {
        lua_pushnil(L);
        lua_pushstring(L, e.what());
        return 2;
      } catch (const std::exception& e) {
        return luaL_error(L, "%s", e.what());
      }
    }
  };

  inline int absindex(lua_State* L, int index) {
#if LUA_VERSION_NUM >= 502
    return lua_absindex(L, index);
#else
    if (LUA_REGISTRYINDEX < index && index <= 0) {
      return lua_gettop(L) + index + 1;
    }
    return index;
#endif
  }

  template <void (*T)(lua_State*)>
  inline void setfield(lua_State* L, int index, const char* key, function<T>) {
    index = absindex(L, index);
    lua_pushcfunction(L, function<T>::value);
    lua_setfield(L, index, key);
  }

  inline int check(int result) {
    if (result < 0) {
      std::array<std::uint8_t, 128> buffer;
      if (pcre2_get_error_message(result, buffer.data(), buffer.size()) != PCRE2_ERROR_BADDATA) {
        throw pcre2_error(result, reinterpret_cast<const char*>(buffer.data()));
      }
    }
    return result;
  }
}

#endif
