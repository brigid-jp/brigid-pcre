local pcre2 = require "brigid.pcre2"
local test = require "test"

local regex = assert(pcre2.compile "foo(bar)")
assert(getmetatable(regex).__name == "brigid.pcre2.code")

test.assume_fail(pcre2.compile, "foo)bar(")
