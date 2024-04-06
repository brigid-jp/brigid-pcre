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
#ifdef PCRE2_ERROR_ALPHA_ASSERTION_UNKNOWN
    lua_pushinteger(L, PCRE2_ERROR_ALPHA_ASSERTION_UNKNOWN);
    lua_setfield(L, -2, "ERROR_ALPHA_ASSERTION_UNKNOWN");
#endif
#ifdef PCRE2_ERROR_BACKSLASH_C_CALLER_DISABLED
    lua_pushinteger(L, PCRE2_ERROR_BACKSLASH_C_CALLER_DISABLED);
    lua_setfield(L, -2, "ERROR_BACKSLASH_C_CALLER_DISABLED");
#endif
#ifdef PCRE2_ERROR_BACKSLASH_C_LIBRARY_DISABLED
    lua_pushinteger(L, PCRE2_ERROR_BACKSLASH_C_LIBRARY_DISABLED);
    lua_setfield(L, -2, "ERROR_BACKSLASH_C_LIBRARY_DISABLED");
#endif
#ifdef PCRE2_ERROR_BACKSLASH_C_SYNTAX
    lua_pushinteger(L, PCRE2_ERROR_BACKSLASH_C_SYNTAX);
    lua_setfield(L, -2, "ERROR_BACKSLASH_C_SYNTAX");
#endif
#ifdef PCRE2_ERROR_BACKSLASH_G_SYNTAX
    lua_pushinteger(L, PCRE2_ERROR_BACKSLASH_G_SYNTAX);
    lua_setfield(L, -2, "ERROR_BACKSLASH_G_SYNTAX");
#endif
#ifdef PCRE2_ERROR_BACKSLASH_K_IN_LOOKAROUND
    lua_pushinteger(L, PCRE2_ERROR_BACKSLASH_K_IN_LOOKAROUND);
    lua_setfield(L, -2, "ERROR_BACKSLASH_K_IN_LOOKAROUND");
#endif
#ifdef PCRE2_ERROR_BACKSLASH_K_SYNTAX
    lua_pushinteger(L, PCRE2_ERROR_BACKSLASH_K_SYNTAX);
    lua_setfield(L, -2, "ERROR_BACKSLASH_K_SYNTAX");
#endif
#ifdef PCRE2_ERROR_BACKSLASH_N_IN_CLASS
    lua_pushinteger(L, PCRE2_ERROR_BACKSLASH_N_IN_CLASS);
    lua_setfield(L, -2, "ERROR_BACKSLASH_N_IN_CLASS");
#endif
#ifdef PCRE2_ERROR_BACKSLASH_O_MISSING_BRACE
    lua_pushinteger(L, PCRE2_ERROR_BACKSLASH_O_MISSING_BRACE);
    lua_setfield(L, -2, "ERROR_BACKSLASH_O_MISSING_BRACE");
#endif
#ifdef PCRE2_ERROR_BACKSLASH_U_CODE_POINT_TOO_BIG
    lua_pushinteger(L, PCRE2_ERROR_BACKSLASH_U_CODE_POINT_TOO_BIG);
    lua_setfield(L, -2, "ERROR_BACKSLASH_U_CODE_POINT_TOO_BIG");
#endif
#ifdef PCRE2_ERROR_BADDATA
    lua_pushinteger(L, PCRE2_ERROR_BADDATA);
    lua_setfield(L, -2, "ERROR_BADDATA");
#endif
#ifdef PCRE2_ERROR_BADMAGIC
    lua_pushinteger(L, PCRE2_ERROR_BADMAGIC);
    lua_setfield(L, -2, "ERROR_BADMAGIC");
#endif
#ifdef PCRE2_ERROR_BADMODE
    lua_pushinteger(L, PCRE2_ERROR_BADMODE);
    lua_setfield(L, -2, "ERROR_BADMODE");
#endif
#ifdef PCRE2_ERROR_BADOFFSET
    lua_pushinteger(L, PCRE2_ERROR_BADOFFSET);
    lua_setfield(L, -2, "ERROR_BADOFFSET");
#endif
#ifdef PCRE2_ERROR_BADOFFSETLIMIT
    lua_pushinteger(L, PCRE2_ERROR_BADOFFSETLIMIT);
    lua_setfield(L, -2, "ERROR_BADOFFSETLIMIT");
#endif
#ifdef PCRE2_ERROR_BADOPTION
    lua_pushinteger(L, PCRE2_ERROR_BADOPTION);
    lua_setfield(L, -2, "ERROR_BADOPTION");
#endif
#ifdef PCRE2_ERROR_BADREPESCAPE
    lua_pushinteger(L, PCRE2_ERROR_BADREPESCAPE);
    lua_setfield(L, -2, "ERROR_BADREPESCAPE");
#endif
#ifdef PCRE2_ERROR_BADREPLACEMENT
    lua_pushinteger(L, PCRE2_ERROR_BADREPLACEMENT);
    lua_setfield(L, -2, "ERROR_BADREPLACEMENT");
#endif
#ifdef PCRE2_ERROR_BADSERIALIZEDDATA
    lua_pushinteger(L, PCRE2_ERROR_BADSERIALIZEDDATA);
    lua_setfield(L, -2, "ERROR_BADSERIALIZEDDATA");
#endif
#ifdef PCRE2_ERROR_BADSUBSPATTERN
    lua_pushinteger(L, PCRE2_ERROR_BADSUBSPATTERN);
    lua_setfield(L, -2, "ERROR_BADSUBSPATTERN");
#endif
#ifdef PCRE2_ERROR_BADSUBSTITUTION
    lua_pushinteger(L, PCRE2_ERROR_BADSUBSTITUTION);
    lua_setfield(L, -2, "ERROR_BADSUBSTITUTION");
#endif
#ifdef PCRE2_ERROR_BADUTFOFFSET
    lua_pushinteger(L, PCRE2_ERROR_BADUTFOFFSET);
    lua_setfield(L, -2, "ERROR_BADUTFOFFSET");
#endif
#ifdef PCRE2_ERROR_BAD_LITERAL_OPTIONS
    lua_pushinteger(L, PCRE2_ERROR_BAD_LITERAL_OPTIONS);
    lua_setfield(L, -2, "ERROR_BAD_LITERAL_OPTIONS");
#endif
#ifdef PCRE2_ERROR_BAD_OPTIONS
    lua_pushinteger(L, PCRE2_ERROR_BAD_OPTIONS);
    lua_setfield(L, -2, "ERROR_BAD_OPTIONS");
#endif
#ifdef PCRE2_ERROR_BAD_RELATIVE_REFERENCE
    lua_pushinteger(L, PCRE2_ERROR_BAD_RELATIVE_REFERENCE);
    lua_setfield(L, -2, "ERROR_BAD_RELATIVE_REFERENCE");
#endif
#ifdef PCRE2_ERROR_BAD_SUBPATTERN_REFERENCE
    lua_pushinteger(L, PCRE2_ERROR_BAD_SUBPATTERN_REFERENCE);
    lua_setfield(L, -2, "ERROR_BAD_SUBPATTERN_REFERENCE");
#endif
#ifdef PCRE2_ERROR_CALLOUT
    lua_pushinteger(L, PCRE2_ERROR_CALLOUT);
    lua_setfield(L, -2, "ERROR_CALLOUT");
#endif
#ifdef PCRE2_ERROR_CALLOUT_BAD_STRING_DELIMITER
    lua_pushinteger(L, PCRE2_ERROR_CALLOUT_BAD_STRING_DELIMITER);
    lua_setfield(L, -2, "ERROR_CALLOUT_BAD_STRING_DELIMITER");
#endif
#ifdef PCRE2_ERROR_CALLOUT_NO_STRING_DELIMITER
    lua_pushinteger(L, PCRE2_ERROR_CALLOUT_NO_STRING_DELIMITER);
    lua_setfield(L, -2, "ERROR_CALLOUT_NO_STRING_DELIMITER");
#endif
#ifdef PCRE2_ERROR_CALLOUT_NUMBER_TOO_BIG
    lua_pushinteger(L, PCRE2_ERROR_CALLOUT_NUMBER_TOO_BIG);
    lua_setfield(L, -2, "ERROR_CALLOUT_NUMBER_TOO_BIG");
#endif
#ifdef PCRE2_ERROR_CALLOUT_STRING_TOO_LONG
    lua_pushinteger(L, PCRE2_ERROR_CALLOUT_STRING_TOO_LONG);
    lua_setfield(L, -2, "ERROR_CALLOUT_STRING_TOO_LONG");
#endif
#ifdef PCRE2_ERROR_CLASS_INVALID_RANGE
    lua_pushinteger(L, PCRE2_ERROR_CLASS_INVALID_RANGE);
    lua_setfield(L, -2, "ERROR_CLASS_INVALID_RANGE");
#endif
#ifdef PCRE2_ERROR_CLASS_RANGE_ORDER
    lua_pushinteger(L, PCRE2_ERROR_CLASS_RANGE_ORDER);
    lua_setfield(L, -2, "ERROR_CLASS_RANGE_ORDER");
#endif
#ifdef PCRE2_ERROR_CODE_POINT_TOO_BIG
    lua_pushinteger(L, PCRE2_ERROR_CODE_POINT_TOO_BIG);
    lua_setfield(L, -2, "ERROR_CODE_POINT_TOO_BIG");
#endif
#ifdef PCRE2_ERROR_CONDITION_ASSERTION_EXPECTED
    lua_pushinteger(L, PCRE2_ERROR_CONDITION_ASSERTION_EXPECTED);
    lua_setfield(L, -2, "ERROR_CONDITION_ASSERTION_EXPECTED");
#endif
#ifdef PCRE2_ERROR_CONDITION_ATOMIC_ASSERTION_EXPECTED
    lua_pushinteger(L, PCRE2_ERROR_CONDITION_ATOMIC_ASSERTION_EXPECTED);
    lua_setfield(L, -2, "ERROR_CONDITION_ATOMIC_ASSERTION_EXPECTED");
#endif
#ifdef PCRE2_ERROR_CONVERT_SYNTAX
    lua_pushinteger(L, PCRE2_ERROR_CONVERT_SYNTAX);
    lua_setfield(L, -2, "ERROR_CONVERT_SYNTAX");
#endif
#ifdef PCRE2_ERROR_DEFINE_TOO_MANY_BRANCHES
    lua_pushinteger(L, PCRE2_ERROR_DEFINE_TOO_MANY_BRANCHES);
    lua_setfield(L, -2, "ERROR_DEFINE_TOO_MANY_BRANCHES");
#endif
#ifdef PCRE2_ERROR_DEPTHLIMIT
    lua_pushinteger(L, PCRE2_ERROR_DEPTHLIMIT);
    lua_setfield(L, -2, "ERROR_DEPTHLIMIT");
#endif
#ifdef PCRE2_ERROR_DFA_BADRESTART
    lua_pushinteger(L, PCRE2_ERROR_DFA_BADRESTART);
    lua_setfield(L, -2, "ERROR_DFA_BADRESTART");
#endif
#ifdef PCRE2_ERROR_DFA_RECURSE
    lua_pushinteger(L, PCRE2_ERROR_DFA_RECURSE);
    lua_setfield(L, -2, "ERROR_DFA_RECURSE");
#endif
#ifdef PCRE2_ERROR_DFA_UCOND
    lua_pushinteger(L, PCRE2_ERROR_DFA_UCOND);
    lua_setfield(L, -2, "ERROR_DFA_UCOND");
#endif
#ifdef PCRE2_ERROR_DFA_UFUNC
    lua_pushinteger(L, PCRE2_ERROR_DFA_UFUNC);
    lua_setfield(L, -2, "ERROR_DFA_UFUNC");
#endif
#ifdef PCRE2_ERROR_DFA_UINVALID_UTF
    lua_pushinteger(L, PCRE2_ERROR_DFA_UINVALID_UTF);
    lua_setfield(L, -2, "ERROR_DFA_UINVALID_UTF");
#endif
#ifdef PCRE2_ERROR_DFA_UITEM
    lua_pushinteger(L, PCRE2_ERROR_DFA_UITEM);
    lua_setfield(L, -2, "ERROR_DFA_UITEM");
#endif
#ifdef PCRE2_ERROR_DFA_WSSIZE
    lua_pushinteger(L, PCRE2_ERROR_DFA_WSSIZE);
    lua_setfield(L, -2, "ERROR_DFA_WSSIZE");
#endif
#ifdef PCRE2_ERROR_DUPLICATE_SUBPATTERN_NAME
    lua_pushinteger(L, PCRE2_ERROR_DUPLICATE_SUBPATTERN_NAME);
    lua_setfield(L, -2, "ERROR_DUPLICATE_SUBPATTERN_NAME");
#endif
#ifdef PCRE2_ERROR_END_BACKSLASH
    lua_pushinteger(L, PCRE2_ERROR_END_BACKSLASH);
    lua_setfield(L, -2, "ERROR_END_BACKSLASH");
#endif
#ifdef PCRE2_ERROR_END_BACKSLASH_C
    lua_pushinteger(L, PCRE2_ERROR_END_BACKSLASH_C);
    lua_setfield(L, -2, "ERROR_END_BACKSLASH_C");
#endif
#ifdef PCRE2_ERROR_ESCAPE_INVALID_IN_CLASS
    lua_pushinteger(L, PCRE2_ERROR_ESCAPE_INVALID_IN_CLASS);
    lua_setfield(L, -2, "ERROR_ESCAPE_INVALID_IN_CLASS");
#endif
#ifdef PCRE2_ERROR_ESCAPE_INVALID_IN_VERB
    lua_pushinteger(L, PCRE2_ERROR_ESCAPE_INVALID_IN_VERB);
    lua_setfield(L, -2, "ERROR_ESCAPE_INVALID_IN_VERB");
#endif
#ifdef PCRE2_ERROR_HEAPLIMIT
    lua_pushinteger(L, PCRE2_ERROR_HEAPLIMIT);
    lua_setfield(L, -2, "ERROR_HEAPLIMIT");
#endif
#ifdef PCRE2_ERROR_HEAP_FAILED
    lua_pushinteger(L, PCRE2_ERROR_HEAP_FAILED);
    lua_setfield(L, -2, "ERROR_HEAP_FAILED");
#endif
#ifdef PCRE2_ERROR_INTERNAL
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL);
    lua_setfield(L, -2, "ERROR_INTERNAL");
#endif
#ifdef PCRE2_ERROR_INTERNAL_BAD_CODE
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_BAD_CODE);
    lua_setfield(L, -2, "ERROR_INTERNAL_BAD_CODE");
#endif
#ifdef PCRE2_ERROR_INTERNAL_BAD_CODE_AUTO_POSSESS
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_BAD_CODE_AUTO_POSSESS);
    lua_setfield(L, -2, "ERROR_INTERNAL_BAD_CODE_AUTO_POSSESS");
#endif
#ifdef PCRE2_ERROR_INTERNAL_BAD_CODE_IN_SKIP
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_BAD_CODE_IN_SKIP);
    lua_setfield(L, -2, "ERROR_INTERNAL_BAD_CODE_IN_SKIP");
#endif
#ifdef PCRE2_ERROR_INTERNAL_BAD_CODE_LOOKBEHINDS
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_BAD_CODE_LOOKBEHINDS);
    lua_setfield(L, -2, "ERROR_INTERNAL_BAD_CODE_LOOKBEHINDS");
#endif
#ifdef PCRE2_ERROR_INTERNAL_CODE_OVERFLOW
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_CODE_OVERFLOW);
    lua_setfield(L, -2, "ERROR_INTERNAL_CODE_OVERFLOW");
#endif
#ifdef PCRE2_ERROR_INTERNAL_DUPMATCH
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_DUPMATCH);
    lua_setfield(L, -2, "ERROR_INTERNAL_DUPMATCH");
#endif
#ifdef PCRE2_ERROR_INTERNAL_MISSING_SUBPATTERN
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_MISSING_SUBPATTERN);
    lua_setfield(L, -2, "ERROR_INTERNAL_MISSING_SUBPATTERN");
#endif
#ifdef PCRE2_ERROR_INTERNAL_OVERRAN_WORKSPACE
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_OVERRAN_WORKSPACE);
    lua_setfield(L, -2, "ERROR_INTERNAL_OVERRAN_WORKSPACE");
#endif
#ifdef PCRE2_ERROR_INTERNAL_PARSED_OVERFLOW
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_PARSED_OVERFLOW);
    lua_setfield(L, -2, "ERROR_INTERNAL_PARSED_OVERFLOW");
#endif
#ifdef PCRE2_ERROR_INTERNAL_STUDY_ERROR
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_STUDY_ERROR);
    lua_setfield(L, -2, "ERROR_INTERNAL_STUDY_ERROR");
#endif
#ifdef PCRE2_ERROR_INTERNAL_UNEXPECTED_REPEAT
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_UNEXPECTED_REPEAT);
    lua_setfield(L, -2, "ERROR_INTERNAL_UNEXPECTED_REPEAT");
#endif
#ifdef PCRE2_ERROR_INTERNAL_UNKNOWN_NEWLINE
    lua_pushinteger(L, PCRE2_ERROR_INTERNAL_UNKNOWN_NEWLINE);
    lua_setfield(L, -2, "ERROR_INTERNAL_UNKNOWN_NEWLINE");
#endif
#ifdef PCRE2_ERROR_INVALIDOFFSET
    lua_pushinteger(L, PCRE2_ERROR_INVALIDOFFSET);
    lua_setfield(L, -2, "ERROR_INVALIDOFFSET");
#endif
#ifdef PCRE2_ERROR_INVALID_AFTER_PARENS_QUERY
    lua_pushinteger(L, PCRE2_ERROR_INVALID_AFTER_PARENS_QUERY);
    lua_setfield(L, -2, "ERROR_INVALID_AFTER_PARENS_QUERY");
#endif
#ifdef PCRE2_ERROR_INVALID_HEXADECIMAL
    lua_pushinteger(L, PCRE2_ERROR_INVALID_HEXADECIMAL);
    lua_setfield(L, -2, "ERROR_INVALID_HEXADECIMAL");
#endif
#ifdef PCRE2_ERROR_INVALID_HYPHEN_IN_OPTIONS
    lua_pushinteger(L, PCRE2_ERROR_INVALID_HYPHEN_IN_OPTIONS);
    lua_setfield(L, -2, "ERROR_INVALID_HYPHEN_IN_OPTIONS");
#endif
#ifdef PCRE2_ERROR_INVALID_OCTAL
    lua_pushinteger(L, PCRE2_ERROR_INVALID_OCTAL);
    lua_setfield(L, -2, "ERROR_INVALID_OCTAL");
#endif
#ifdef PCRE2_ERROR_INVALID_SUBPATTERN_NAME
    lua_pushinteger(L, PCRE2_ERROR_INVALID_SUBPATTERN_NAME);
    lua_setfield(L, -2, "ERROR_INVALID_SUBPATTERN_NAME");
#endif
#ifdef PCRE2_ERROR_JIT_BADOPTION
    lua_pushinteger(L, PCRE2_ERROR_JIT_BADOPTION);
    lua_setfield(L, -2, "ERROR_JIT_BADOPTION");
#endif
#ifdef PCRE2_ERROR_JIT_STACKLIMIT
    lua_pushinteger(L, PCRE2_ERROR_JIT_STACKLIMIT);
    lua_setfield(L, -2, "ERROR_JIT_STACKLIMIT");
#endif
#ifdef PCRE2_ERROR_LOOKBEHIND_INVALID_BACKSLASH_C
    lua_pushinteger(L, PCRE2_ERROR_LOOKBEHIND_INVALID_BACKSLASH_C);
    lua_setfield(L, -2, "ERROR_LOOKBEHIND_INVALID_BACKSLASH_C");
#endif
#ifdef PCRE2_ERROR_LOOKBEHIND_NOT_FIXED_LENGTH
    lua_pushinteger(L, PCRE2_ERROR_LOOKBEHIND_NOT_FIXED_LENGTH);
    lua_setfield(L, -2, "ERROR_LOOKBEHIND_NOT_FIXED_LENGTH");
#endif
#ifdef PCRE2_ERROR_LOOKBEHIND_TOO_COMPLICATED
    lua_pushinteger(L, PCRE2_ERROR_LOOKBEHIND_TOO_COMPLICATED);
    lua_setfield(L, -2, "ERROR_LOOKBEHIND_TOO_COMPLICATED");
#endif
#ifdef PCRE2_ERROR_LOOKBEHIND_TOO_LONG
    lua_pushinteger(L, PCRE2_ERROR_LOOKBEHIND_TOO_LONG);
    lua_setfield(L, -2, "ERROR_LOOKBEHIND_TOO_LONG");
#endif
#ifdef PCRE2_ERROR_MALFORMED_UNICODE_PROPERTY
    lua_pushinteger(L, PCRE2_ERROR_MALFORMED_UNICODE_PROPERTY);
    lua_setfield(L, -2, "ERROR_MALFORMED_UNICODE_PROPERTY");
#endif
#ifdef PCRE2_ERROR_MARK_MISSING_ARGUMENT
    lua_pushinteger(L, PCRE2_ERROR_MARK_MISSING_ARGUMENT);
    lua_setfield(L, -2, "ERROR_MARK_MISSING_ARGUMENT");
#endif
#ifdef PCRE2_ERROR_MATCHLIMIT
    lua_pushinteger(L, PCRE2_ERROR_MATCHLIMIT);
    lua_setfield(L, -2, "ERROR_MATCHLIMIT");
#endif
#ifdef PCRE2_ERROR_MISSING_CALLOUT_CLOSING
    lua_pushinteger(L, PCRE2_ERROR_MISSING_CALLOUT_CLOSING);
    lua_setfield(L, -2, "ERROR_MISSING_CALLOUT_CLOSING");
#endif
#ifdef PCRE2_ERROR_MISSING_CLOSING_PARENTHESIS
    lua_pushinteger(L, PCRE2_ERROR_MISSING_CLOSING_PARENTHESIS);
    lua_setfield(L, -2, "ERROR_MISSING_CLOSING_PARENTHESIS");
#endif
#ifdef PCRE2_ERROR_MISSING_COMMENT_CLOSING
    lua_pushinteger(L, PCRE2_ERROR_MISSING_COMMENT_CLOSING);
    lua_setfield(L, -2, "ERROR_MISSING_COMMENT_CLOSING");
#endif
#ifdef PCRE2_ERROR_MISSING_CONDITION_CLOSING
    lua_pushinteger(L, PCRE2_ERROR_MISSING_CONDITION_CLOSING);
    lua_setfield(L, -2, "ERROR_MISSING_CONDITION_CLOSING");
#endif
#ifdef PCRE2_ERROR_MISSING_NAME_TERMINATOR
    lua_pushinteger(L, PCRE2_ERROR_MISSING_NAME_TERMINATOR);
    lua_setfield(L, -2, "ERROR_MISSING_NAME_TERMINATOR");
#endif
#ifdef PCRE2_ERROR_MISSING_OCTAL_OR_HEX_DIGITS
    lua_pushinteger(L, PCRE2_ERROR_MISSING_OCTAL_OR_HEX_DIGITS);
    lua_setfield(L, -2, "ERROR_MISSING_OCTAL_OR_HEX_DIGITS");
#endif
#ifdef PCRE2_ERROR_MISSING_SQUARE_BRACKET
    lua_pushinteger(L, PCRE2_ERROR_MISSING_SQUARE_BRACKET);
    lua_setfield(L, -2, "ERROR_MISSING_SQUARE_BRACKET");
#endif
#ifdef PCRE2_ERROR_MIXEDTABLES
    lua_pushinteger(L, PCRE2_ERROR_MIXEDTABLES);
    lua_setfield(L, -2, "ERROR_MIXEDTABLES");
#endif
#ifdef PCRE2_ERROR_NOMATCH
    lua_pushinteger(L, PCRE2_ERROR_NOMATCH);
    lua_setfield(L, -2, "ERROR_NOMATCH");
#endif
#ifdef PCRE2_ERROR_NOMEMORY
    lua_pushinteger(L, PCRE2_ERROR_NOMEMORY);
    lua_setfield(L, -2, "ERROR_NOMEMORY");
#endif
#ifdef PCRE2_ERROR_NOSUBSTRING
    lua_pushinteger(L, PCRE2_ERROR_NOSUBSTRING);
    lua_setfield(L, -2, "ERROR_NOSUBSTRING");
#endif
#ifdef PCRE2_ERROR_NOUNIQUESUBSTRING
    lua_pushinteger(L, PCRE2_ERROR_NOUNIQUESUBSTRING);
    lua_setfield(L, -2, "ERROR_NOUNIQUESUBSTRING");
#endif
#ifdef PCRE2_ERROR_NO_SURROGATES_IN_UTF16
    lua_pushinteger(L, PCRE2_ERROR_NO_SURROGATES_IN_UTF16);
    lua_setfield(L, -2, "ERROR_NO_SURROGATES_IN_UTF16");
#endif
#ifdef PCRE2_ERROR_NULL
    lua_pushinteger(L, PCRE2_ERROR_NULL);
    lua_setfield(L, -2, "ERROR_NULL");
#endif
#ifdef PCRE2_ERROR_NULL_PATTERN
    lua_pushinteger(L, PCRE2_ERROR_NULL_PATTERN);
    lua_setfield(L, -2, "ERROR_NULL_PATTERN");
#endif
#ifdef PCRE2_ERROR_OCTAL_BYTE_TOO_BIG
    lua_pushinteger(L, PCRE2_ERROR_OCTAL_BYTE_TOO_BIG);
    lua_setfield(L, -2, "ERROR_OCTAL_BYTE_TOO_BIG");
#endif
#ifdef PCRE2_ERROR_PARENS_QUERY_R_MISSING_CLOSING
    lua_pushinteger(L, PCRE2_ERROR_PARENS_QUERY_R_MISSING_CLOSING);
    lua_setfield(L, -2, "ERROR_PARENS_QUERY_R_MISSING_CLOSING");
#endif
#ifdef PCRE2_ERROR_PARENTHESES_NEST_TOO_DEEP
    lua_pushinteger(L, PCRE2_ERROR_PARENTHESES_NEST_TOO_DEEP);
    lua_setfield(L, -2, "ERROR_PARENTHESES_NEST_TOO_DEEP");
#endif
#ifdef PCRE2_ERROR_PARENTHESES_STACK_CHECK
    lua_pushinteger(L, PCRE2_ERROR_PARENTHESES_STACK_CHECK);
    lua_setfield(L, -2, "ERROR_PARENTHESES_STACK_CHECK");
#endif
#ifdef PCRE2_ERROR_PARTIAL
    lua_pushinteger(L, PCRE2_ERROR_PARTIAL);
    lua_setfield(L, -2, "ERROR_PARTIAL");
#endif
#ifdef PCRE2_ERROR_PATTERN_STRING_TOO_LONG
    lua_pushinteger(L, PCRE2_ERROR_PATTERN_STRING_TOO_LONG);
    lua_setfield(L, -2, "ERROR_PATTERN_STRING_TOO_LONG");
#endif
#ifdef PCRE2_ERROR_PATTERN_TOO_COMPLICATED
    lua_pushinteger(L, PCRE2_ERROR_PATTERN_TOO_COMPLICATED);
    lua_setfield(L, -2, "ERROR_PATTERN_TOO_COMPLICATED");
#endif
#ifdef PCRE2_ERROR_PATTERN_TOO_LARGE
    lua_pushinteger(L, PCRE2_ERROR_PATTERN_TOO_LARGE);
    lua_setfield(L, -2, "ERROR_PATTERN_TOO_LARGE");
#endif
#ifdef PCRE2_ERROR_POSIX_CLASS_NOT_IN_CLASS
    lua_pushinteger(L, PCRE2_ERROR_POSIX_CLASS_NOT_IN_CLASS);
    lua_setfield(L, -2, "ERROR_POSIX_CLASS_NOT_IN_CLASS");
#endif
#ifdef PCRE2_ERROR_POSIX_NO_SUPPORT_COLLATING
    lua_pushinteger(L, PCRE2_ERROR_POSIX_NO_SUPPORT_COLLATING);
    lua_setfield(L, -2, "ERROR_POSIX_NO_SUPPORT_COLLATING");
#endif
#ifdef PCRE2_ERROR_QUANTIFIER_INVALID
    lua_pushinteger(L, PCRE2_ERROR_QUANTIFIER_INVALID);
    lua_setfield(L, -2, "ERROR_QUANTIFIER_INVALID");
#endif
#ifdef PCRE2_ERROR_QUANTIFIER_OUT_OF_ORDER
    lua_pushinteger(L, PCRE2_ERROR_QUANTIFIER_OUT_OF_ORDER);
    lua_setfield(L, -2, "ERROR_QUANTIFIER_OUT_OF_ORDER");
#endif
#ifdef PCRE2_ERROR_QUANTIFIER_TOO_BIG
    lua_pushinteger(L, PCRE2_ERROR_QUANTIFIER_TOO_BIG);
    lua_setfield(L, -2, "ERROR_QUANTIFIER_TOO_BIG");
#endif
#ifdef PCRE2_ERROR_QUERY_BARJX_NEST_TOO_DEEP
    lua_pushinteger(L, PCRE2_ERROR_QUERY_BARJX_NEST_TOO_DEEP);
    lua_setfield(L, -2, "ERROR_QUERY_BARJX_NEST_TOO_DEEP");
#endif
#ifdef PCRE2_ERROR_RECURSELOOP
    lua_pushinteger(L, PCRE2_ERROR_RECURSELOOP);
    lua_setfield(L, -2, "ERROR_RECURSELOOP");
#endif
#ifdef PCRE2_ERROR_RECURSIONLIMIT
    lua_pushinteger(L, PCRE2_ERROR_RECURSIONLIMIT);
    lua_setfield(L, -2, "ERROR_RECURSIONLIMIT");
#endif
#ifdef PCRE2_ERROR_REPMISSINGBRACE
    lua_pushinteger(L, PCRE2_ERROR_REPMISSINGBRACE);
    lua_setfield(L, -2, "ERROR_REPMISSINGBRACE");
#endif
#ifdef PCRE2_ERROR_SCRIPT_RUN_NOT_AVAILABLE
    lua_pushinteger(L, PCRE2_ERROR_SCRIPT_RUN_NOT_AVAILABLE);
    lua_setfield(L, -2, "ERROR_SCRIPT_RUN_NOT_AVAILABLE");
#endif
#ifdef PCRE2_ERROR_SUBPATTERN_NAMES_MISMATCH
    lua_pushinteger(L, PCRE2_ERROR_SUBPATTERN_NAMES_MISMATCH);
    lua_setfield(L, -2, "ERROR_SUBPATTERN_NAMES_MISMATCH");
#endif
#ifdef PCRE2_ERROR_SUBPATTERN_NAME_EXPECTED
    lua_pushinteger(L, PCRE2_ERROR_SUBPATTERN_NAME_EXPECTED);
    lua_setfield(L, -2, "ERROR_SUBPATTERN_NAME_EXPECTED");
#endif
#ifdef PCRE2_ERROR_SUBPATTERN_NAME_TOO_LONG
    lua_pushinteger(L, PCRE2_ERROR_SUBPATTERN_NAME_TOO_LONG);
    lua_setfield(L, -2, "ERROR_SUBPATTERN_NAME_TOO_LONG");
#endif
#ifdef PCRE2_ERROR_SUBPATTERN_NUMBER_TOO_BIG
    lua_pushinteger(L, PCRE2_ERROR_SUBPATTERN_NUMBER_TOO_BIG);
    lua_setfield(L, -2, "ERROR_SUBPATTERN_NUMBER_TOO_BIG");
#endif
#ifdef PCRE2_ERROR_SUPPORTED_ONLY_IN_UNICODE
    lua_pushinteger(L, PCRE2_ERROR_SUPPORTED_ONLY_IN_UNICODE);
    lua_setfield(L, -2, "ERROR_SUPPORTED_ONLY_IN_UNICODE");
#endif
#ifdef PCRE2_ERROR_TOOMANYREPLACE
    lua_pushinteger(L, PCRE2_ERROR_TOOMANYREPLACE);
    lua_setfield(L, -2, "ERROR_TOOMANYREPLACE");
#endif
#ifdef PCRE2_ERROR_TOO_MANY_CAPTURES
    lua_pushinteger(L, PCRE2_ERROR_TOO_MANY_CAPTURES);
    lua_setfield(L, -2, "ERROR_TOO_MANY_CAPTURES");
#endif
#ifdef PCRE2_ERROR_TOO_MANY_CONDITION_BRANCHES
    lua_pushinteger(L, PCRE2_ERROR_TOO_MANY_CONDITION_BRANCHES);
    lua_setfield(L, -2, "ERROR_TOO_MANY_CONDITION_BRANCHES");
#endif
#ifdef PCRE2_ERROR_TOO_MANY_NAMED_SUBPATTERNS
    lua_pushinteger(L, PCRE2_ERROR_TOO_MANY_NAMED_SUBPATTERNS);
    lua_setfield(L, -2, "ERROR_TOO_MANY_NAMED_SUBPATTERNS");
#endif
#ifdef PCRE2_ERROR_UCP_IS_DISABLED
    lua_pushinteger(L, PCRE2_ERROR_UCP_IS_DISABLED);
    lua_setfield(L, -2, "ERROR_UCP_IS_DISABLED");
#endif
#ifdef PCRE2_ERROR_UNAVAILABLE
    lua_pushinteger(L, PCRE2_ERROR_UNAVAILABLE);
    lua_setfield(L, -2, "ERROR_UNAVAILABLE");
#endif
#ifdef PCRE2_ERROR_UNICODE_DISALLOWED_CODE_POINT
    lua_pushinteger(L, PCRE2_ERROR_UNICODE_DISALLOWED_CODE_POINT);
    lua_setfield(L, -2, "ERROR_UNICODE_DISALLOWED_CODE_POINT");
#endif
#ifdef PCRE2_ERROR_UNICODE_NOT_SUPPORTED
    lua_pushinteger(L, PCRE2_ERROR_UNICODE_NOT_SUPPORTED);
    lua_setfield(L, -2, "ERROR_UNICODE_NOT_SUPPORTED");
#endif
#ifdef PCRE2_ERROR_UNICODE_PROPERTIES_UNAVAILABLE
    lua_pushinteger(L, PCRE2_ERROR_UNICODE_PROPERTIES_UNAVAILABLE);
    lua_setfield(L, -2, "ERROR_UNICODE_PROPERTIES_UNAVAILABLE");
#endif
#ifdef PCRE2_ERROR_UNKNOWN_ESCAPE
    lua_pushinteger(L, PCRE2_ERROR_UNKNOWN_ESCAPE);
    lua_setfield(L, -2, "ERROR_UNKNOWN_ESCAPE");
#endif
#ifdef PCRE2_ERROR_UNKNOWN_POSIX_CLASS
    lua_pushinteger(L, PCRE2_ERROR_UNKNOWN_POSIX_CLASS);
    lua_setfield(L, -2, "ERROR_UNKNOWN_POSIX_CLASS");
#endif
#ifdef PCRE2_ERROR_UNKNOWN_UNICODE_PROPERTY
    lua_pushinteger(L, PCRE2_ERROR_UNKNOWN_UNICODE_PROPERTY);
    lua_setfield(L, -2, "ERROR_UNKNOWN_UNICODE_PROPERTY");
#endif
#ifdef PCRE2_ERROR_UNMATCHED_CLOSING_PARENTHESIS
    lua_pushinteger(L, PCRE2_ERROR_UNMATCHED_CLOSING_PARENTHESIS);
    lua_setfield(L, -2, "ERROR_UNMATCHED_CLOSING_PARENTHESIS");
#endif
#ifdef PCRE2_ERROR_UNRECOGNIZED_AFTER_QUERY_P
    lua_pushinteger(L, PCRE2_ERROR_UNRECOGNIZED_AFTER_QUERY_P);
    lua_setfield(L, -2, "ERROR_UNRECOGNIZED_AFTER_QUERY_P");
#endif
#ifdef PCRE2_ERROR_UNSET
    lua_pushinteger(L, PCRE2_ERROR_UNSET);
    lua_setfield(L, -2, "ERROR_UNSET");
#endif
#ifdef PCRE2_ERROR_UNSUPPORTED_ESCAPE_SEQUENCE
    lua_pushinteger(L, PCRE2_ERROR_UNSUPPORTED_ESCAPE_SEQUENCE);
    lua_setfield(L, -2, "ERROR_UNSUPPORTED_ESCAPE_SEQUENCE");
#endif
#ifdef PCRE2_ERROR_UTF16_ERR1
    lua_pushinteger(L, PCRE2_ERROR_UTF16_ERR1);
    lua_setfield(L, -2, "ERROR_UTF16_ERR1");
#endif
#ifdef PCRE2_ERROR_UTF16_ERR2
    lua_pushinteger(L, PCRE2_ERROR_UTF16_ERR2);
    lua_setfield(L, -2, "ERROR_UTF16_ERR2");
#endif
#ifdef PCRE2_ERROR_UTF16_ERR3
    lua_pushinteger(L, PCRE2_ERROR_UTF16_ERR3);
    lua_setfield(L, -2, "ERROR_UTF16_ERR3");
#endif
#ifdef PCRE2_ERROR_UTF32_ERR1
    lua_pushinteger(L, PCRE2_ERROR_UTF32_ERR1);
    lua_setfield(L, -2, "ERROR_UTF32_ERR1");
#endif
#ifdef PCRE2_ERROR_UTF32_ERR2
    lua_pushinteger(L, PCRE2_ERROR_UTF32_ERR2);
    lua_setfield(L, -2, "ERROR_UTF32_ERR2");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR1
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR1);
    lua_setfield(L, -2, "ERROR_UTF8_ERR1");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR10
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR10);
    lua_setfield(L, -2, "ERROR_UTF8_ERR10");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR11
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR11);
    lua_setfield(L, -2, "ERROR_UTF8_ERR11");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR12
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR12);
    lua_setfield(L, -2, "ERROR_UTF8_ERR12");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR13
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR13);
    lua_setfield(L, -2, "ERROR_UTF8_ERR13");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR14
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR14);
    lua_setfield(L, -2, "ERROR_UTF8_ERR14");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR15
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR15);
    lua_setfield(L, -2, "ERROR_UTF8_ERR15");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR16
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR16);
    lua_setfield(L, -2, "ERROR_UTF8_ERR16");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR17
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR17);
    lua_setfield(L, -2, "ERROR_UTF8_ERR17");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR18
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR18);
    lua_setfield(L, -2, "ERROR_UTF8_ERR18");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR19
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR19);
    lua_setfield(L, -2, "ERROR_UTF8_ERR19");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR2
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR2);
    lua_setfield(L, -2, "ERROR_UTF8_ERR2");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR20
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR20);
    lua_setfield(L, -2, "ERROR_UTF8_ERR20");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR21
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR21);
    lua_setfield(L, -2, "ERROR_UTF8_ERR21");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR3
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR3);
    lua_setfield(L, -2, "ERROR_UTF8_ERR3");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR4
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR4);
    lua_setfield(L, -2, "ERROR_UTF8_ERR4");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR5
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR5);
    lua_setfield(L, -2, "ERROR_UTF8_ERR5");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR6
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR6);
    lua_setfield(L, -2, "ERROR_UTF8_ERR6");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR7
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR7);
    lua_setfield(L, -2, "ERROR_UTF8_ERR7");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR8
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR8);
    lua_setfield(L, -2, "ERROR_UTF8_ERR8");
#endif
#ifdef PCRE2_ERROR_UTF8_ERR9
    lua_pushinteger(L, PCRE2_ERROR_UTF8_ERR9);
    lua_setfield(L, -2, "ERROR_UTF8_ERR9");
#endif
#ifdef PCRE2_ERROR_UTF_IS_DISABLED
    lua_pushinteger(L, PCRE2_ERROR_UTF_IS_DISABLED);
    lua_setfield(L, -2, "ERROR_UTF_IS_DISABLED");
#endif
#ifdef PCRE2_ERROR_VERB_ARGUMENT_NOT_ALLOWED
    lua_pushinteger(L, PCRE2_ERROR_VERB_ARGUMENT_NOT_ALLOWED);
    lua_setfield(L, -2, "ERROR_VERB_ARGUMENT_NOT_ALLOWED");
#endif
#ifdef PCRE2_ERROR_VERB_NAME_TOO_LONG
    lua_pushinteger(L, PCRE2_ERROR_VERB_NAME_TOO_LONG);
    lua_setfield(L, -2, "ERROR_VERB_NAME_TOO_LONG");
#endif
#ifdef PCRE2_ERROR_VERB_UNKNOWN
    lua_pushinteger(L, PCRE2_ERROR_VERB_UNKNOWN);
    lua_setfield(L, -2, "ERROR_VERB_UNKNOWN");
#endif
#ifdef PCRE2_ERROR_VERSION_CONDITION_SYNTAX
    lua_pushinteger(L, PCRE2_ERROR_VERSION_CONDITION_SYNTAX);
    lua_setfield(L, -2, "ERROR_VERSION_CONDITION_SYNTAX");
#endif
#ifdef PCRE2_ERROR_ZERO_RELATIVE_REFERENCE
    lua_pushinteger(L, PCRE2_ERROR_ZERO_RELATIVE_REFERENCE);
    lua_setfield(L, -2, "ERROR_ZERO_RELATIVE_REFERENCE");
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
