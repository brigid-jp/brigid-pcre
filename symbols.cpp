#include "common.hpp"

#define BRIGID_STRINGIZE_IMPL(text) #text
#define BRIGID_STRINGIZE(text) BRIGID_STRINGIZE_IMPL(text)

namespace brigid {
  void initialize_symbols(lua_State* L) {
#ifdef PCRE2_ALLOW_EMPTY_CLASS
    lua_pushinteger(L, PCRE2_ALLOW_EMPTY_CLASS);
    lua_setfield(L, -2, "ALLOW_EMPTY_CLASS");
#endif
#ifdef PCRE2_ALT_BSUX
    lua_pushinteger(L, PCRE2_ALT_BSUX);
    lua_setfield(L, -2, "ALT_BSUX");
#endif
#ifdef PCRE2_ALT_CIRCUMFLEX
    lua_pushinteger(L, PCRE2_ALT_CIRCUMFLEX);
    lua_setfield(L, -2, "ALT_CIRCUMFLEX");
#endif
#ifdef PCRE2_ALT_VERBNAMES
    lua_pushinteger(L, PCRE2_ALT_VERBNAMES);
    lua_setfield(L, -2, "ALT_VERBNAMES");
#endif
#ifdef PCRE2_ANCHORED
    lua_pushinteger(L, PCRE2_ANCHORED);
    lua_setfield(L, -2, "ANCHORED");
#endif
#ifdef PCRE2_AUTO_CALLOUT
    lua_pushinteger(L, PCRE2_AUTO_CALLOUT);
    lua_setfield(L, -2, "AUTO_CALLOUT");
#endif
#ifdef PCRE2_BSR_ANYCRLF
    lua_pushinteger(L, PCRE2_BSR_ANYCRLF);
    lua_setfield(L, -2, "BSR_ANYCRLF");
#endif
#ifdef PCRE2_BSR_UNICODE
    lua_pushinteger(L, PCRE2_BSR_UNICODE);
    lua_setfield(L, -2, "BSR_UNICODE");
#endif
#ifdef PCRE2_CALLOUT_BACKTRACK
    lua_pushinteger(L, PCRE2_CALLOUT_BACKTRACK);
    lua_setfield(L, -2, "CALLOUT_BACKTRACK");
#endif
#ifdef PCRE2_CALLOUT_STARTMATCH
    lua_pushinteger(L, PCRE2_CALLOUT_STARTMATCH);
    lua_setfield(L, -2, "CALLOUT_STARTMATCH");
#endif
#ifdef PCRE2_CASELESS
    lua_pushinteger(L, PCRE2_CASELESS);
    lua_setfield(L, -2, "CASELESS");
#endif
#ifdef PCRE2_CODE_UNIT_WIDTH
    lua_pushinteger(L, PCRE2_CODE_UNIT_WIDTH);
    lua_setfield(L, -2, "CODE_UNIT_WIDTH");
#endif
#ifdef PCRE2_CONFIG_BSR
    lua_pushinteger(L, PCRE2_CONFIG_BSR);
    lua_setfield(L, -2, "CONFIG_BSR");
#endif
#ifdef PCRE2_CONFIG_COMPILED_WIDTHS
    lua_pushinteger(L, PCRE2_CONFIG_COMPILED_WIDTHS);
    lua_setfield(L, -2, "CONFIG_COMPILED_WIDTHS");
#endif
#ifdef PCRE2_CONFIG_DEPTHLIMIT
    lua_pushinteger(L, PCRE2_CONFIG_DEPTHLIMIT);
    lua_setfield(L, -2, "CONFIG_DEPTHLIMIT");
#endif
#ifdef PCRE2_CONFIG_HEAPLIMIT
    lua_pushinteger(L, PCRE2_CONFIG_HEAPLIMIT);
    lua_setfield(L, -2, "CONFIG_HEAPLIMIT");
#endif
#ifdef PCRE2_CONFIG_JIT
    lua_pushinteger(L, PCRE2_CONFIG_JIT);
    lua_setfield(L, -2, "CONFIG_JIT");
#endif
#ifdef PCRE2_CONFIG_JITTARGET
    lua_pushinteger(L, PCRE2_CONFIG_JITTARGET);
    lua_setfield(L, -2, "CONFIG_JITTARGET");
#endif
#ifdef PCRE2_CONFIG_LINKSIZE
    lua_pushinteger(L, PCRE2_CONFIG_LINKSIZE);
    lua_setfield(L, -2, "CONFIG_LINKSIZE");
#endif
#ifdef PCRE2_CONFIG_MATCHLIMIT
    lua_pushinteger(L, PCRE2_CONFIG_MATCHLIMIT);
    lua_setfield(L, -2, "CONFIG_MATCHLIMIT");
#endif
#ifdef PCRE2_CONFIG_NEVER_BACKSLASH_C
    lua_pushinteger(L, PCRE2_CONFIG_NEVER_BACKSLASH_C);
    lua_setfield(L, -2, "CONFIG_NEVER_BACKSLASH_C");
#endif
#ifdef PCRE2_CONFIG_NEWLINE
    lua_pushinteger(L, PCRE2_CONFIG_NEWLINE);
    lua_setfield(L, -2, "CONFIG_NEWLINE");
#endif
#ifdef PCRE2_CONFIG_PARENSLIMIT
    lua_pushinteger(L, PCRE2_CONFIG_PARENSLIMIT);
    lua_setfield(L, -2, "CONFIG_PARENSLIMIT");
#endif
#ifdef PCRE2_CONFIG_RECURSIONLIMIT
    lua_pushinteger(L, PCRE2_CONFIG_RECURSIONLIMIT);
    lua_setfield(L, -2, "CONFIG_RECURSIONLIMIT");
#endif
#ifdef PCRE2_CONFIG_STACKRECURSE
    lua_pushinteger(L, PCRE2_CONFIG_STACKRECURSE);
    lua_setfield(L, -2, "CONFIG_STACKRECURSE");
#endif
#ifdef PCRE2_CONFIG_TABLES_LENGTH
    lua_pushinteger(L, PCRE2_CONFIG_TABLES_LENGTH);
    lua_setfield(L, -2, "CONFIG_TABLES_LENGTH");
#endif
#ifdef PCRE2_CONFIG_UNICODE
    lua_pushinteger(L, PCRE2_CONFIG_UNICODE);
    lua_setfield(L, -2, "CONFIG_UNICODE");
#endif
#ifdef PCRE2_CONFIG_UNICODE_VERSION
    lua_pushinteger(L, PCRE2_CONFIG_UNICODE_VERSION);
    lua_setfield(L, -2, "CONFIG_UNICODE_VERSION");
#endif
#ifdef PCRE2_CONFIG_VERSION
    lua_pushinteger(L, PCRE2_CONFIG_VERSION);
    lua_setfield(L, -2, "CONFIG_VERSION");
#endif
#ifdef PCRE2_CONVERT_GLOB
    lua_pushinteger(L, PCRE2_CONVERT_GLOB);
    lua_setfield(L, -2, "CONVERT_GLOB");
#endif
#ifdef PCRE2_CONVERT_GLOB_NO_STARSTAR
    lua_pushinteger(L, PCRE2_CONVERT_GLOB_NO_STARSTAR);
    lua_setfield(L, -2, "CONVERT_GLOB_NO_STARSTAR");
#endif
#ifdef PCRE2_CONVERT_GLOB_NO_WILD_SEPARATOR
    lua_pushinteger(L, PCRE2_CONVERT_GLOB_NO_WILD_SEPARATOR);
    lua_setfield(L, -2, "CONVERT_GLOB_NO_WILD_SEPARATOR");
#endif
#ifdef PCRE2_CONVERT_NO_UTF_CHECK
    lua_pushinteger(L, PCRE2_CONVERT_NO_UTF_CHECK);
    lua_setfield(L, -2, "CONVERT_NO_UTF_CHECK");
#endif
#ifdef PCRE2_CONVERT_POSIX_BASIC
    lua_pushinteger(L, PCRE2_CONVERT_POSIX_BASIC);
    lua_setfield(L, -2, "CONVERT_POSIX_BASIC");
#endif
#ifdef PCRE2_CONVERT_POSIX_EXTENDED
    lua_pushinteger(L, PCRE2_CONVERT_POSIX_EXTENDED);
    lua_setfield(L, -2, "CONVERT_POSIX_EXTENDED");
#endif
#ifdef PCRE2_CONVERT_UTF
    lua_pushinteger(L, PCRE2_CONVERT_UTF);
    lua_setfield(L, -2, "CONVERT_UTF");
#endif
#ifdef PCRE2_COPY_MATCHED_SUBJECT
    lua_pushinteger(L, PCRE2_COPY_MATCHED_SUBJECT);
    lua_setfield(L, -2, "COPY_MATCHED_SUBJECT");
#endif
#ifdef PCRE2_DFA_RESTART
    lua_pushinteger(L, PCRE2_DFA_RESTART);
    lua_setfield(L, -2, "DFA_RESTART");
#endif
#ifdef PCRE2_DFA_SHORTEST
    lua_pushinteger(L, PCRE2_DFA_SHORTEST);
    lua_setfield(L, -2, "DFA_SHORTEST");
#endif
#ifdef PCRE2_DISABLE_RECURSELOOP_CHECK
    lua_pushinteger(L, PCRE2_DISABLE_RECURSELOOP_CHECK);
    lua_setfield(L, -2, "DISABLE_RECURSELOOP_CHECK");
#endif
#ifdef PCRE2_DOLLAR_ENDONLY
    lua_pushinteger(L, PCRE2_DOLLAR_ENDONLY);
    lua_setfield(L, -2, "DOLLAR_ENDONLY");
#endif
#ifdef PCRE2_DOTALL
    lua_pushinteger(L, PCRE2_DOTALL);
    lua_setfield(L, -2, "DOTALL");
#endif
#ifdef PCRE2_DUPNAMES
    lua_pushinteger(L, PCRE2_DUPNAMES);
    lua_setfield(L, -2, "DUPNAMES");
#endif
#ifdef PCRE2_ENDANCHORED
    lua_pushinteger(L, PCRE2_ENDANCHORED);
    lua_setfield(L, -2, "ENDANCHORED");
#endif
#ifdef PCRE2_EXTENDED
    lua_pushinteger(L, PCRE2_EXTENDED);
    lua_setfield(L, -2, "EXTENDED");
#endif
#ifdef PCRE2_EXTENDED_MORE
    lua_pushinteger(L, PCRE2_EXTENDED_MORE);
    lua_setfield(L, -2, "EXTENDED_MORE");
#endif
#ifdef PCRE2_EXTRA_ALLOW_LOOKAROUND_BSK
    lua_pushinteger(L, PCRE2_EXTRA_ALLOW_LOOKAROUND_BSK);
    lua_setfield(L, -2, "EXTRA_ALLOW_LOOKAROUND_BSK");
#endif
#ifdef PCRE2_EXTRA_ALLOW_SURROGATE_ESCAPES
    lua_pushinteger(L, PCRE2_EXTRA_ALLOW_SURROGATE_ESCAPES);
    lua_setfield(L, -2, "EXTRA_ALLOW_SURROGATE_ESCAPES");
#endif
#ifdef PCRE2_EXTRA_ALT_BSUX
    lua_pushinteger(L, PCRE2_EXTRA_ALT_BSUX);
    lua_setfield(L, -2, "EXTRA_ALT_BSUX");
#endif
#ifdef PCRE2_EXTRA_ASCII_BSD
    lua_pushinteger(L, PCRE2_EXTRA_ASCII_BSD);
    lua_setfield(L, -2, "EXTRA_ASCII_BSD");
#endif
#ifdef PCRE2_EXTRA_ASCII_BSS
    lua_pushinteger(L, PCRE2_EXTRA_ASCII_BSS);
    lua_setfield(L, -2, "EXTRA_ASCII_BSS");
#endif
#ifdef PCRE2_EXTRA_ASCII_BSW
    lua_pushinteger(L, PCRE2_EXTRA_ASCII_BSW);
    lua_setfield(L, -2, "EXTRA_ASCII_BSW");
#endif
#ifdef PCRE2_EXTRA_ASCII_DIGIT
    lua_pushinteger(L, PCRE2_EXTRA_ASCII_DIGIT);
    lua_setfield(L, -2, "EXTRA_ASCII_DIGIT");
#endif
#ifdef PCRE2_EXTRA_ASCII_POSIX
    lua_pushinteger(L, PCRE2_EXTRA_ASCII_POSIX);
    lua_setfield(L, -2, "EXTRA_ASCII_POSIX");
#endif
#ifdef PCRE2_EXTRA_BAD_ESCAPE_IS_LITERAL
    lua_pushinteger(L, PCRE2_EXTRA_BAD_ESCAPE_IS_LITERAL);
    lua_setfield(L, -2, "EXTRA_BAD_ESCAPE_IS_LITERAL");
#endif
#ifdef PCRE2_EXTRA_CASELESS_RESTRICT
    lua_pushinteger(L, PCRE2_EXTRA_CASELESS_RESTRICT);
    lua_setfield(L, -2, "EXTRA_CASELESS_RESTRICT");
#endif
#ifdef PCRE2_EXTRA_ESCAPED_CR_IS_LF
    lua_pushinteger(L, PCRE2_EXTRA_ESCAPED_CR_IS_LF);
    lua_setfield(L, -2, "EXTRA_ESCAPED_CR_IS_LF");
#endif
#ifdef PCRE2_EXTRA_MATCH_LINE
    lua_pushinteger(L, PCRE2_EXTRA_MATCH_LINE);
    lua_setfield(L, -2, "EXTRA_MATCH_LINE");
#endif
#ifdef PCRE2_EXTRA_MATCH_WORD
    lua_pushinteger(L, PCRE2_EXTRA_MATCH_WORD);
    lua_setfield(L, -2, "EXTRA_MATCH_WORD");
#endif
#ifdef PCRE2_FIRSTLINE
    lua_pushinteger(L, PCRE2_FIRSTLINE);
    lua_setfield(L, -2, "FIRSTLINE");
#endif
#ifdef PCRE2_INFO_ALLOPTIONS
    lua_pushinteger(L, PCRE2_INFO_ALLOPTIONS);
    lua_setfield(L, -2, "INFO_ALLOPTIONS");
#endif
#ifdef PCRE2_INFO_ARGOPTIONS
    lua_pushinteger(L, PCRE2_INFO_ARGOPTIONS);
    lua_setfield(L, -2, "INFO_ARGOPTIONS");
#endif
#ifdef PCRE2_INFO_BACKREFMAX
    lua_pushinteger(L, PCRE2_INFO_BACKREFMAX);
    lua_setfield(L, -2, "INFO_BACKREFMAX");
#endif
#ifdef PCRE2_INFO_BSR
    lua_pushinteger(L, PCRE2_INFO_BSR);
    lua_setfield(L, -2, "INFO_BSR");
#endif
#ifdef PCRE2_INFO_CAPTURECOUNT
    lua_pushinteger(L, PCRE2_INFO_CAPTURECOUNT);
    lua_setfield(L, -2, "INFO_CAPTURECOUNT");
#endif
#ifdef PCRE2_INFO_DEPTHLIMIT
    lua_pushinteger(L, PCRE2_INFO_DEPTHLIMIT);
    lua_setfield(L, -2, "INFO_DEPTHLIMIT");
#endif
#ifdef PCRE2_INFO_EXTRAOPTIONS
    lua_pushinteger(L, PCRE2_INFO_EXTRAOPTIONS);
    lua_setfield(L, -2, "INFO_EXTRAOPTIONS");
#endif
#ifdef PCRE2_INFO_FIRSTBITMAP
    lua_pushinteger(L, PCRE2_INFO_FIRSTBITMAP);
    lua_setfield(L, -2, "INFO_FIRSTBITMAP");
#endif
#ifdef PCRE2_INFO_FIRSTCODETYPE
    lua_pushinteger(L, PCRE2_INFO_FIRSTCODETYPE);
    lua_setfield(L, -2, "INFO_FIRSTCODETYPE");
#endif
#ifdef PCRE2_INFO_FIRSTCODEUNIT
    lua_pushinteger(L, PCRE2_INFO_FIRSTCODEUNIT);
    lua_setfield(L, -2, "INFO_FIRSTCODEUNIT");
#endif
#ifdef PCRE2_INFO_FRAMESIZE
    lua_pushinteger(L, PCRE2_INFO_FRAMESIZE);
    lua_setfield(L, -2, "INFO_FRAMESIZE");
#endif
#ifdef PCRE2_INFO_HASBACKSLASHC
    lua_pushinteger(L, PCRE2_INFO_HASBACKSLASHC);
    lua_setfield(L, -2, "INFO_HASBACKSLASHC");
#endif
#ifdef PCRE2_INFO_HASCRORLF
    lua_pushinteger(L, PCRE2_INFO_HASCRORLF);
    lua_setfield(L, -2, "INFO_HASCRORLF");
#endif
#ifdef PCRE2_INFO_HEAPLIMIT
    lua_pushinteger(L, PCRE2_INFO_HEAPLIMIT);
    lua_setfield(L, -2, "INFO_HEAPLIMIT");
#endif
#ifdef PCRE2_INFO_JCHANGED
    lua_pushinteger(L, PCRE2_INFO_JCHANGED);
    lua_setfield(L, -2, "INFO_JCHANGED");
#endif
#ifdef PCRE2_INFO_JITSIZE
    lua_pushinteger(L, PCRE2_INFO_JITSIZE);
    lua_setfield(L, -2, "INFO_JITSIZE");
#endif
#ifdef PCRE2_INFO_LASTCODETYPE
    lua_pushinteger(L, PCRE2_INFO_LASTCODETYPE);
    lua_setfield(L, -2, "INFO_LASTCODETYPE");
#endif
#ifdef PCRE2_INFO_LASTCODEUNIT
    lua_pushinteger(L, PCRE2_INFO_LASTCODEUNIT);
    lua_setfield(L, -2, "INFO_LASTCODEUNIT");
#endif
#ifdef PCRE2_INFO_MATCHEMPTY
    lua_pushinteger(L, PCRE2_INFO_MATCHEMPTY);
    lua_setfield(L, -2, "INFO_MATCHEMPTY");
#endif
#ifdef PCRE2_INFO_MATCHLIMIT
    lua_pushinteger(L, PCRE2_INFO_MATCHLIMIT);
    lua_setfield(L, -2, "INFO_MATCHLIMIT");
#endif
#ifdef PCRE2_INFO_MAXLOOKBEHIND
    lua_pushinteger(L, PCRE2_INFO_MAXLOOKBEHIND);
    lua_setfield(L, -2, "INFO_MAXLOOKBEHIND");
#endif
#ifdef PCRE2_INFO_MINLENGTH
    lua_pushinteger(L, PCRE2_INFO_MINLENGTH);
    lua_setfield(L, -2, "INFO_MINLENGTH");
#endif
#ifdef PCRE2_INFO_NAMECOUNT
    lua_pushinteger(L, PCRE2_INFO_NAMECOUNT);
    lua_setfield(L, -2, "INFO_NAMECOUNT");
#endif
#ifdef PCRE2_INFO_NAMEENTRYSIZE
    lua_pushinteger(L, PCRE2_INFO_NAMEENTRYSIZE);
    lua_setfield(L, -2, "INFO_NAMEENTRYSIZE");
#endif
#ifdef PCRE2_INFO_NAMETABLE
    lua_pushinteger(L, PCRE2_INFO_NAMETABLE);
    lua_setfield(L, -2, "INFO_NAMETABLE");
#endif
#ifdef PCRE2_INFO_NEWLINE
    lua_pushinteger(L, PCRE2_INFO_NEWLINE);
    lua_setfield(L, -2, "INFO_NEWLINE");
#endif
#ifdef PCRE2_INFO_RECURSIONLIMIT
    lua_pushinteger(L, PCRE2_INFO_RECURSIONLIMIT);
    lua_setfield(L, -2, "INFO_RECURSIONLIMIT");
#endif
#ifdef PCRE2_INFO_SIZE
    lua_pushinteger(L, PCRE2_INFO_SIZE);
    lua_setfield(L, -2, "INFO_SIZE");
#endif
#ifdef PCRE2_JIT_COMPLETE
    lua_pushinteger(L, PCRE2_JIT_COMPLETE);
    lua_setfield(L, -2, "JIT_COMPLETE");
#endif
#ifdef PCRE2_JIT_INVALID_UTF
    lua_pushinteger(L, PCRE2_JIT_INVALID_UTF);
    lua_setfield(L, -2, "JIT_INVALID_UTF");
#endif
#ifdef PCRE2_JIT_PARTIAL_HARD
    lua_pushinteger(L, PCRE2_JIT_PARTIAL_HARD);
    lua_setfield(L, -2, "JIT_PARTIAL_HARD");
#endif
#ifdef PCRE2_JIT_PARTIAL_SOFT
    lua_pushinteger(L, PCRE2_JIT_PARTIAL_SOFT);
    lua_setfield(L, -2, "JIT_PARTIAL_SOFT");
#endif
#ifdef PCRE2_LITERAL
    lua_pushinteger(L, PCRE2_LITERAL);
    lua_setfield(L, -2, "LITERAL");
#endif
#ifdef PCRE2_MAJOR
    lua_pushinteger(L, PCRE2_MAJOR);
    lua_setfield(L, -2, "MAJOR");
#endif
#ifdef PCRE2_MATCH_INVALID_UTF
    lua_pushinteger(L, PCRE2_MATCH_INVALID_UTF);
    lua_setfield(L, -2, "MATCH_INVALID_UTF");
#endif
#ifdef PCRE2_MATCH_UNSET_BACKREF
    lua_pushinteger(L, PCRE2_MATCH_UNSET_BACKREF);
    lua_setfield(L, -2, "MATCH_UNSET_BACKREF");
#endif
#ifdef PCRE2_MINOR
    lua_pushinteger(L, PCRE2_MINOR);
    lua_setfield(L, -2, "MINOR");
#endif
#ifdef PCRE2_MULTILINE
    lua_pushinteger(L, PCRE2_MULTILINE);
    lua_setfield(L, -2, "MULTILINE");
#endif
#ifdef PCRE2_NEVER_BACKSLASH_C
    lua_pushinteger(L, PCRE2_NEVER_BACKSLASH_C);
    lua_setfield(L, -2, "NEVER_BACKSLASH_C");
#endif
#ifdef PCRE2_NEVER_UCP
    lua_pushinteger(L, PCRE2_NEVER_UCP);
    lua_setfield(L, -2, "NEVER_UCP");
#endif
#ifdef PCRE2_NEVER_UTF
    lua_pushinteger(L, PCRE2_NEVER_UTF);
    lua_setfield(L, -2, "NEVER_UTF");
#endif
#ifdef PCRE2_NEWLINE_ANY
    lua_pushinteger(L, PCRE2_NEWLINE_ANY);
    lua_setfield(L, -2, "NEWLINE_ANY");
#endif
#ifdef PCRE2_NEWLINE_ANYCRLF
    lua_pushinteger(L, PCRE2_NEWLINE_ANYCRLF);
    lua_setfield(L, -2, "NEWLINE_ANYCRLF");
#endif
#ifdef PCRE2_NEWLINE_CR
    lua_pushinteger(L, PCRE2_NEWLINE_CR);
    lua_setfield(L, -2, "NEWLINE_CR");
#endif
#ifdef PCRE2_NEWLINE_CRLF
    lua_pushinteger(L, PCRE2_NEWLINE_CRLF);
    lua_setfield(L, -2, "NEWLINE_CRLF");
#endif
#ifdef PCRE2_NEWLINE_LF
    lua_pushinteger(L, PCRE2_NEWLINE_LF);
    lua_setfield(L, -2, "NEWLINE_LF");
#endif
#ifdef PCRE2_NEWLINE_NUL
    lua_pushinteger(L, PCRE2_NEWLINE_NUL);
    lua_setfield(L, -2, "NEWLINE_NUL");
#endif
#ifdef PCRE2_NOTBOL
    lua_pushinteger(L, PCRE2_NOTBOL);
    lua_setfield(L, -2, "NOTBOL");
#endif
#ifdef PCRE2_NOTEMPTY
    lua_pushinteger(L, PCRE2_NOTEMPTY);
    lua_setfield(L, -2, "NOTEMPTY");
#endif
#ifdef PCRE2_NOTEMPTY_ATSTART
    lua_pushinteger(L, PCRE2_NOTEMPTY_ATSTART);
    lua_setfield(L, -2, "NOTEMPTY_ATSTART");
#endif
#ifdef PCRE2_NOTEOL
    lua_pushinteger(L, PCRE2_NOTEOL);
    lua_setfield(L, -2, "NOTEOL");
#endif
#ifdef PCRE2_NO_AUTO_CAPTURE
    lua_pushinteger(L, PCRE2_NO_AUTO_CAPTURE);
    lua_setfield(L, -2, "NO_AUTO_CAPTURE");
#endif
#ifdef PCRE2_NO_AUTO_POSSESS
    lua_pushinteger(L, PCRE2_NO_AUTO_POSSESS);
    lua_setfield(L, -2, "NO_AUTO_POSSESS");
#endif
#ifdef PCRE2_NO_DOTSTAR_ANCHOR
    lua_pushinteger(L, PCRE2_NO_DOTSTAR_ANCHOR);
    lua_setfield(L, -2, "NO_DOTSTAR_ANCHOR");
#endif
#ifdef PCRE2_NO_JIT
    lua_pushinteger(L, PCRE2_NO_JIT);
    lua_setfield(L, -2, "NO_JIT");
#endif
#ifdef PCRE2_NO_START_OPTIMIZE
    lua_pushinteger(L, PCRE2_NO_START_OPTIMIZE);
    lua_setfield(L, -2, "NO_START_OPTIMIZE");
#endif
#ifdef PCRE2_NO_UTF_CHECK
    lua_pushinteger(L, PCRE2_NO_UTF_CHECK);
    lua_setfield(L, -2, "NO_UTF_CHECK");
#endif
#ifdef PCRE2_PARTIAL_HARD
    lua_pushinteger(L, PCRE2_PARTIAL_HARD);
    lua_setfield(L, -2, "PARTIAL_HARD");
#endif
#ifdef PCRE2_PARTIAL_SOFT
    lua_pushinteger(L, PCRE2_PARTIAL_SOFT);
    lua_setfield(L, -2, "PARTIAL_SOFT");
#endif
#ifdef PCRE2_SUBSTITUTE_EXTENDED
    lua_pushinteger(L, PCRE2_SUBSTITUTE_EXTENDED);
    lua_setfield(L, -2, "SUBSTITUTE_EXTENDED");
#endif
#ifdef PCRE2_SUBSTITUTE_GLOBAL
    lua_pushinteger(L, PCRE2_SUBSTITUTE_GLOBAL);
    lua_setfield(L, -2, "SUBSTITUTE_GLOBAL");
#endif
#ifdef PCRE2_SUBSTITUTE_LITERAL
    lua_pushinteger(L, PCRE2_SUBSTITUTE_LITERAL);
    lua_setfield(L, -2, "SUBSTITUTE_LITERAL");
#endif
#ifdef PCRE2_SUBSTITUTE_MATCHED
    lua_pushinteger(L, PCRE2_SUBSTITUTE_MATCHED);
    lua_setfield(L, -2, "SUBSTITUTE_MATCHED");
#endif
#ifdef PCRE2_SUBSTITUTE_OVERFLOW_LENGTH
    lua_pushinteger(L, PCRE2_SUBSTITUTE_OVERFLOW_LENGTH);
    lua_setfield(L, -2, "SUBSTITUTE_OVERFLOW_LENGTH");
#endif
#ifdef PCRE2_SUBSTITUTE_REPLACEMENT_ONLY
    lua_pushinteger(L, PCRE2_SUBSTITUTE_REPLACEMENT_ONLY);
    lua_setfield(L, -2, "SUBSTITUTE_REPLACEMENT_ONLY");
#endif
#ifdef PCRE2_SUBSTITUTE_UNKNOWN_UNSET
    lua_pushinteger(L, PCRE2_SUBSTITUTE_UNKNOWN_UNSET);
    lua_setfield(L, -2, "SUBSTITUTE_UNKNOWN_UNSET");
#endif
#ifdef PCRE2_SUBSTITUTE_UNSET_EMPTY
    lua_pushinteger(L, PCRE2_SUBSTITUTE_UNSET_EMPTY);
    lua_setfield(L, -2, "SUBSTITUTE_UNSET_EMPTY");
#endif
#ifdef PCRE2_UCP
    lua_pushinteger(L, PCRE2_UCP);
    lua_setfield(L, -2, "UCP");
#endif
#ifdef PCRE2_UNGREEDY
    lua_pushinteger(L, PCRE2_UNGREEDY);
    lua_setfield(L, -2, "UNGREEDY");
#endif
#ifdef PCRE2_USE_OFFSET_LIMIT
    lua_pushinteger(L, PCRE2_USE_OFFSET_LIMIT);
    lua_setfield(L, -2, "USE_OFFSET_LIMIT");
#endif
#ifdef PCRE2_UTF
    lua_pushinteger(L, PCRE2_UTF);
    lua_setfield(L, -2, "UTF");
#endif
#ifdef PCRE2_DATE
    lua_pushstring(L, BRIGID_STRINGIZE(PCRE2_DATE));
    lua_setfield(L, -2, "DATE");
#endif
  }
}
