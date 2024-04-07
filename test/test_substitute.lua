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
