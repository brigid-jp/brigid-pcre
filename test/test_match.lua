local pcre2 = require "brigid.pcre2"
local test = require "test"

local regex = assert(pcre2.compile[[(?<year>\d+)/(?<month>\d+)/(?<day>\d+)]])
assert(regex:info(pcre2.INFO_CAPTURECOUNT) == 3)
assert(regex:info(pcre2.INFO_NAMECOUNT) == 3)

local result, match = regex:match "abc2024/04/01def"
assert(result == 4)
assert(match:get_by_number(0) == "2024/04/01")
assert(match:get_by_number(1) == "2024")
assert(match:get_by_number(2) == "04")
assert(match:get_by_number(3) == "01")
test.assume_fail(function () return match:get_by_number(4) end)
assert(match:get_by_name "year" == "2024")
assert(match:get_by_name "month" == "04")
assert(match:get_by_name "day" == "01")
test.assume_fail(function () return match:get_by_name "" end)

assert(match:get(1) == "2024")
assert(match:get(2) == "04")
assert(match:get(3) == "01")
assert(match:get "year" == "2024")
assert(match:get "month" == "04")
assert(match:get "day" == "01")

assert(match:get(1) == "2024")
assert(match:get "year" == "2024")

local ov = match:get_ovector()
if test.debug then
  print(0, ov[0][1], ov[0][2])
  for i, o in ipairs(ov) do
    print(i, o[1], o[2])
  end
end
assert(ov[0][1] == 4)
assert(ov[0][2] == 13)
assert(ov[1][1] == 4)
assert(ov[1][2] == 7)
assert(ov[2][1] == 9)
assert(ov[2][2] == 10)
assert(ov[3][1] == 12)
assert(ov[3][2] == 13)
