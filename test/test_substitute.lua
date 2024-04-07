local pcre2 = require "brigid.pcre2"
local test = require "test"

local regex = assert(pcre2.compile[[(foo|bar|baz)]])
local options = pcre2.SUBSTITUTE_GLOBAL
local result, n = assert(regex:substitute("foobarbaz", 1, options, "qux"))
print(result, n)

