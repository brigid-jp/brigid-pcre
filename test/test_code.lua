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

local regex = assert(pcre2.compile[[(?<year>\d+)/(?<month>\d+)/(?<day>\d+)]])
assert(regex:info(pcre2.INFO_CAPTURECOUNT) == 3)
assert(regex:info(pcre2.INFO_NAMECOUNT) == 3)

local result, match = regex:match "abc2024/04/01def"
assert(result == 4)
assert(match:get_bynumber(0) == "2024/04/01")
assert(match:get_bynumber(1) == "2024")
assert(match:get_bynumber(2) == "04")
assert(match:get_bynumber(3) == "01")
test.assume_fail(function () return match:get_bynumber(4) end)
assert(match:get_byname "year" == "2024")
assert(match:get_byname "month" == "04")
assert(match:get_byname "day" == "01")
test.assume_fail(function () return match:get_byname "" end)
