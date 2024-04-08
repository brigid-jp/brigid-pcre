#ifndef BRIGID_PCRE2_COMMON_HPP
#define BRIGID_PCRE2_COMMON_HPP

#include <lua.hpp>

#define PCRE2_STATIC
#define PCRE2_CODE_UNIT_WIDTH 8
#include <pcre2.h>

#include <cstddef>
#include <cstdint>
#include <algorithm>
#include <array>
#include <exception>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

namespace brigid {
  inline std::string get_error_message(int code) {
    std::array<std::uint8_t, 128> buffer;
    int result = pcre2_get_error_message(code, buffer.data(), buffer.size());
    if (result == PCRE2_ERROR_BADDATA) {
      return get_error_message(result);
    }
    return reinterpret_cast<const char*>(buffer.data());
  }

  class pcre2_error : public std::runtime_error {
  public:
    explicit pcre2_error(int code) : std::runtime_error(get_error_message(code)), code_(code) {}
    pcre2_error(int code, const std::string& what) : std::runtime_error(what), code_(code) {}
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

  class string_reference {
  public:
    string_reference() : data_(), size_() {}
    string_reference(const char* data, std::size_t size) : data_(data), size_(size) {}
    const char* data() const { return data_; }
    const std::uint8_t* data_u8() const { return reinterpret_cast<const std::uint8_t*>(data_); }
    std::size_t size() const { return size_; }
  private:
    const char* data_;
    std::size_t size_;
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

  inline string_reference checkstring(lua_State* L, int arg) {
    std::size_t size = 0;
    const auto* data = luaL_checklstring(L, arg, &size);
    return string_reference(data, size);
  }

  inline void pushstring(lua_State* L, const string_reference& source) {
    lua_pushlstring(L, source.data(), source.size());
  }

  template <void (*T)(lua_State*)>
  inline void setfield(lua_State* L, int index, const char* key, function<T>) {
    index = absindex(L, index);
    lua_pushcfunction(L, function<T>::value);
    lua_setfield(L, index, key);
  }

  inline int newmetatable(lua_State* L, const char* name) {
#if LUA_VERSION_NUM >= 503
    return luaL_newmetatable(L, name);
#else
    if (luaL_newmetatable(L, name) == 0) {
      return 0;
    }
    lua_pushstring(L, name);
    lua_setfield(L, -2, "__name");
    return 1;
#endif
  }

  inline void setmetatable(lua_State* L, const char* name) {
#if LUA_VERSION_NUM >= 502
    luaL_setmetatable(L, name);
#else
    luaL_getmetatable(L, name);
    lua_setmetatable(L, -2);
#endif
  }

  inline void* testudata(lua_State* L, int index, const char* name) {
#if LUA_VERSION_NUM >= 502
    return luaL_testudata(L, index, name);
#else
    if (void* data = lua_touserdata(L, index)) {
      if (lua_getmetatable(L, index)) {
        luaL_getmetatable(L, name);
        if (!lua_rawequal(L, -1, -2)) {
          data = nullptr;
        }
        lua_pop(L, 2);
      }
      return data;
    }
    return nullptr;
#endif
  }

  inline int check(int result) {
    if (result < 0) {
      throw pcre2_error(result);
    }
    return result;
  }

  template <class U, class T, void (*T_free)(T*)>
  struct handle_t {
    static std::unique_ptr<T, void (*)(T*)> make_unique(T* handle) {
      return std::unique_ptr<T, void (*)(T*)>(handle, T_free);
    }

    static T* newuserdata(lua_State* L, std::unique_ptr<T, void (*)(T*)>&& ptr) {
      T** data = static_cast<T**>(lua_newuserdata(L, sizeof(T*)));
      *data = ptr.release();
      setmetatable(L, U::name);
      return *data;
    }

    static T* checkudata(lua_State* L, int arg) {
      return *static_cast<T**>(luaL_checkudata(L, arg, U::name));
    }

    static T* testudata(lua_State* L, int index) {
      if (T** data = static_cast<T**>(brigid::testudata(L, index, U::name))) {
        return *data;
      }
      return nullptr;
    }

    static void impl_destructor(lua_State* L) {
      if (T** data = static_cast<T**>(brigid::testudata(L, 1, U::name))) {
        if (*data) {
          T_free(*data);
          *data = nullptr;
        }
      }
    }

    using destructor = function<impl_destructor>;
  };

  struct code_t : public handle_t<code_t, pcre2_code, pcre2_code_free> {
    static constexpr const char* name = "brigid.pcre2.code";
  };

  struct match_data_t : public handle_t<match_data_t, pcre2_match_data, pcre2_match_data_free> {
    static constexpr const char* name = "brigid.pcre2.match_data";
  };
}

#endif
