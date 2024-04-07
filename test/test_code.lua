local pcre2 = require "brigid.pcre2"
local test = require "test"

local message = test.assume_fail(pcre2.compile, "foo)bar(")
assert(message:find "at offset 4$")

local regex = assert(pcre2.compile "foo(bar)(baz)qux")
assert(getmetatable(regex).__name == "brigid.pcre2.code")

assert(regex:info(pcre2.INFO_JITSIZE) == 0)
assert(regex:info(pcre2.INFO_SIZE) > 0)
assert(regex:info(pcre2.INFO_CAPTURECOUNT) == 2)
assert(regex:info(pcre2.INFO_NAMECOUNT) == 0)
