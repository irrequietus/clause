# Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
#
# This file is part of the m4 macros for building odreex.
#
# odreex is free software: you can redistribute it and/or modify it under the
# terms of the GNU General Public License as published by the Free Software
# Foundation, either version 3 of the License, or (at your option) any later
# version.
#
# odreex is distributed in the hope that it will be useful, but WITHOUT ANY
# WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
# details.
#
# You should have received a copy of the GNU General Public License along with
# odreex. If not, see http://www.gnu.org/licenses/.
#

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
