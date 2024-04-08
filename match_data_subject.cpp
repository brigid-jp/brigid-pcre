#define PCRE2_CODE_UNIT_WIDTH 8
#include "pcre2_config.h"
#include "pcre2.h"
#include "pcre2_internal.h"

namespace brigid {
  PCRE2_SPTR match_data_subject(const pcre2_match_data* match_data) {
    return match_data->subject;
  }
}
