local pcre2 = require "brigid.pcre2"
local test = require "test"

local config_version = pcre2.config(pcre2.CONFIG_VERSION)
if test.debug then print(config_version) end

local source_version = pcre2.MAJOR.."."..pcre2.MINOR.." "..pcre2.DATE
if test.debug then print(source_version) end

assert(config_version == source_version)

assert(pcre2.config(pcre2.CONFIG_JIT) == 0)
test.assume_fail(pcre2.config, pcre2.CONFIG_JITTARGET)
