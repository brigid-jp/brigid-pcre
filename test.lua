local class = {
  debug = (tonumber(os.getenv "BRIGID_PCRE2_DEBUG") or 0) > 0;
}

function class.assume_fail(f, ...)
  local result, message = f(...)
  if class.debug then
    print("assume_fail: "..message)
  end
  assert(not result)
  assert(message)
  return message
end

return class
