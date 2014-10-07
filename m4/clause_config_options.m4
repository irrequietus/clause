# Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
# 
# This file is part of 'clause', a highly generic C++ meta-programming library,
# subject to the terms and conditions of the Mozilla Public License v 2.0. If
# a copy of the MPLv2 license text was not distributed with this file, you can
# obtain it at: http://mozilla.org/MPL/2.0/.
# 
# The 'clause' library is an experimental library in active development with
# a source code repository at: https://github.com/irrequietus/clause.git and
# issue tracker at https://github.com/irrequietus/clause/issues.
# 
# For what concerns m4 macro files using the autotools build system, MPLv2 is
# fully compatible with GPLv3 and is an FSF approved license. Autoconf macros
# as distributed by the Autoconf repository carry a special exception that
# allow authors using them to "not follow the terms of the GNU General Public
# License when using or distributing such scripts, even though portions of the
# text of the Macro appear in them." All macros written for the 'clause' library
# must fall under the MPLv2 license; this is compatible with said exception in
# the Autoconf repository distributed macros.

AC_ARG_WITH([compiler],
AS_HELP_STRING([--with-compiler],
    [switch to a new compiler using full path]),
[ dnl switch to a new compiler using full path
    CXX="${withval}"; CXXCPP="${CXX} -E" ],
[])

AC_ARG_ENABLE([ansi-colors],
AS_HELP_STRING([--enable-ansi-colors],
    [enable ansi colors in terminal]),
[ dnl enable ansi colors in terminal
    CPPFLAGS="$CPPFLAGS -DUSE_ANSI_COLORS" ],
[])

AC_ARG_ENABLE([pedantry],
AS_HELP_STRING([--enable-pedantry],
    [enable -Wall -Wextra -Werror -pedantic flags]),
[ dnl enable -Wall -Wextra -Werror -pedantic flags
    CXXFLAGS="$CXXFLAGS -Wall -Wextra -Werror -pedantic" ],
[])

AC_ARG_ENABLE([template-depth],
AS_HELP_STRING([--enable-meta-depth],
    [ templates depth to medium (2048),maximum (4096),extreme (8192)]),
[ dnl templates depth to medium (2048),maximum (4096),extreme (8192)
    case "${enableval}" in
    default) ;;
    medium)  CXXFLAGS+=" -ftemplate-depth-2048";;
    maximum) CXXFLAGS+=" -ftemplate-depth-4096";;
    extreme) CXXFLAGS+=" -ftemplate-depth-8192";;
    esac
],
[])

AC_ARG_ENABLE([constexpr-depth],
AS_HELP_STRING([--enable-meta-depth],
    [constexpr depth to medium (2048),maximum (4096),extreme (8192)]),
[ dnl constexpr depth to medium (2048),maximum (4096),extreme (8192)
  case "${enableval}" in
    default) ;;
    medium)  CXXFLAGS+=" -fconstexpr-depth=2048";;
    maximum) CXXFLAGS+=" -fconstexpr-depth=4096";;
    extreme) CXXFLAGS+=" -fconstexpr-depth=8192";;
  esac
],
[])

AC_ARG_ENABLE([meta-depth],
AS_HELP_STRING([--enable-meta-depth],
    [templates, constexpr to medium (2048),maximum (4096),extreme (8192)]),
[ dnl templates, constexpr to medium (2048),maximum (4096),extreme (8192)
  case "${enableval}" in
    default) ;;
    medium)  CXXFLAGS+=" -ftemplate-depth-2048 -fconstexpr-depth=2048";;
    maximum) CXXFLAGS+=" -ftemplate-depth-4096 -fconstexpr-depth=4096";;
    extreme) CXXFLAGS+=" -ftemplate-depth-8192 -fconstexpr-depth=8192";;
  esac
],
[])

AC_LANG_PUSH([C++])
AC_COMPILE_IFELSE([AC_LANG_PROGRAM([
#if !(defined(__GNUG__) \
  && defined(__GNUC__) \
  && !defined(__clang__) \
  && !defined(__INTEL_COMPILER) \
  && __GNUC__ >= 4 && __GNUC_MINOR__ >= 8)
#error -ftrack-macro-expansion should be passed
#endif
])], [CXXFLAGS+=" -ftrack-macro-expansion=0"], [])
AC_LANG_POP([C++])
