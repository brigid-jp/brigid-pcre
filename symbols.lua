#! /usr/bin/env lua

local handle = assert(io.popen "cc -DPCRE2_CODE_UNIT_WIDTH=8 -E -dM build/pcre2/include/pcre2.h || printf ERROR")
local source = handle:read "*a"
handle:close()
assert(not source:find "ERROR$")

local names = {}
for line in source:gmatch "(.-)\n" do
  local name, value = line:match "^#define PCRE2_([%w_]+) (%S+)$"
  if name then
    -- 整数定数
    if value:find "^%d+$" or value:find "^0x%x+u?$" or value:find "^%(%-%d+%)$" then
      if not name:find "^ERROR" then
        names[#names + 1] = name
      end
    elseif value:find "^%d+%-%d+%-%d+$" then
      assert(name == "DATE")
    end
  end
end
table.sort(names)

local handle = assert(io.open("symbols.cpp", "wb"))
handle:write [[
#include "common.hpp"

#define BRIGID_STRINGIZE_IMPL(text) #text
#define BRIGID_STRINGIZE(text) BRIGID_STRINGIZE_IMPL(text)

namespace brigid {
  void initialize_symbols(lua_State* L) {
]]

for _, name in ipairs(names) do
  handle:write(([[
#ifdef PCRE2_%s
    lua_pushinteger(L, PCRE2_%s);
    lua_setfield(L, -2, "%s");
#endif
]]):format(name, name, name))
end

handle:write [[
#ifdef PCRE2_DATE
    lua_pushstring(L, BRIGID_STRINGIZE(PCRE2_DATE));
    lua_setfield(L, -2, "DATE");
#endif
  }
}
]]
handle:close()
