local pcre2 = require "brigid.pcre2"
local test = require "test"

local regex = assert(pcre2.compile[[(foo|bar|baz)]])
local options = pcre2.SUBSTITUTE_GLOBAL

local result, n = assert(regex:substitute("foobarbaz", 1, options, "qux"))
assert(result == "quxquxqux")
assert(n == 3)

local result, n = assert(regex:substitute("foobarbaz", 1, options, "$1$1"))
assert(result == "foofoobarbarbazbaz")
assert(n == 3)

local result, n = assert(regex:substitute("foobarbaz", 1, options, "$1$1$1"))
assert(result == "foofoofoobarbarbarbazbazbaz")
assert(n == 3)

local result, n = assert(regex:substitute("foobarbaz", 5, options, "qux"))
assert(result == "foobarqux")
assert(n == 1)

local match = pcre2.match_data(regex)
local result, n = assert(regex:substitute("foobarbaz", 1, options, match, "$1$1$1"))
assert(result == "foofoofoobarbarbarbazbazbaz")
assert(n == 3)

test.assume_fail(function() return match:get(0) end)
test.assume_fail(function() return match:get(1) end)
local ov = match:get_ovector()
assert(ov[0][1] == 7)
assert(ov[0][2] == 9)
assert(ov[1][1] == 7)
assert(ov[1][2] == 9)
