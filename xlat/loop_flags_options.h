/* Generated by ./xlat/gen.sh from ./xlat/loop_flags_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(LO_FLAGS_READ_ONLY) || (defined(HAVE_DECL_LO_FLAGS_READ_ONLY) && HAVE_DECL_LO_FLAGS_READ_ONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LO_FLAGS_READ_ONLY) == (1), "LO_FLAGS_READ_ONLY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LO_FLAGS_READ_ONLY 1
#endif
#if defined(LO_FLAGS_USE_AOPS) || (defined(HAVE_DECL_LO_FLAGS_USE_AOPS) && HAVE_DECL_LO_FLAGS_USE_AOPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LO_FLAGS_USE_AOPS) == (2), "LO_FLAGS_USE_AOPS != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LO_FLAGS_USE_AOPS 2
#endif
#if defined(LO_FLAGS_AUTOCLEAR) || (defined(HAVE_DECL_LO_FLAGS_AUTOCLEAR) && HAVE_DECL_LO_FLAGS_AUTOCLEAR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LO_FLAGS_AUTOCLEAR) == (4), "LO_FLAGS_AUTOCLEAR != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LO_FLAGS_AUTOCLEAR 4
#endif
#if defined(LO_FLAGS_PARTSCAN) || (defined(HAVE_DECL_LO_FLAGS_PARTSCAN) && HAVE_DECL_LO_FLAGS_PARTSCAN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LO_FLAGS_PARTSCAN) == (8), "LO_FLAGS_PARTSCAN != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LO_FLAGS_PARTSCAN 8
#endif
#if defined(LO_FLAGS_DIRECT_IO) || (defined(HAVE_DECL_LO_FLAGS_DIRECT_IO) && HAVE_DECL_LO_FLAGS_DIRECT_IO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LO_FLAGS_DIRECT_IO) == (16), "LO_FLAGS_DIRECT_IO != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LO_FLAGS_DIRECT_IO 16
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat loop_flags_options[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat loop_flags_options[] = {
 XLAT(LO_FLAGS_READ_ONLY),

 XLAT(LO_FLAGS_USE_AOPS),

 XLAT(LO_FLAGS_AUTOCLEAR),

 XLAT(LO_FLAGS_PARTSCAN),

 XLAT(LO_FLAGS_DIRECT_IO),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */