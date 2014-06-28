## Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
## clause configure.ac

AC_INIT([libclause],
        [0.0.1],
        [https://github.com/irrequietus/clause/issues],
        [libclause],
        [https://github.com/irrequietus/clause])

AM_INIT_AUTOMAKE([1.11
    -Wno-portability
    dist-bzip2
    dist-xz
    no-define
    foreign
    tar-ustar])

AC_PREREQ([2.68])
LT_PREREQ([2.4.2])
AC_SUBST([LIBTOOL_DEPS])
AC_CONFIG_HEADERS([config.h clauseconfig.h])
AC_CANONICAL_HOST
AC_CONFIG_MACRO_DIR([m4])
AC_PREFIX_PROGRAM([make])

m4_include([m4/ax_cxx_compile_stdcxx_11.m4])
m4_include([m4/clause_config_options.m4])

AC_LANG([C++])
AM_PROG_AR
LT_INIT([disable-static])
AM_PROG_LIBTOOL
AC_PROG_CXX
AC_PROG_CXXCPP
AC_PROG_CXX_C_O
AC_PROG_GREP

AC_SUBST([CLAUSE_SO_VERSION], [0:1:0])
AC_SUBST([CLAUSE_API_VERSION], [0.1])

AX_CXX_COMPILE_STDCXX_11(noext,mandatory)

AM_SILENT_RULES([yes])

AC_CONFIG_FILES([Makefile
                 clause-${CLAUSE_API_VERSION}.pc:clause.pc.in])

AC_OUTPUT

cat <<EOF

$($CXX --version)

    *** Configuration report for clause : $(date)
    C++ preprocessor .................. : ${CXXCPP}
    C++ compiler ...................... : ${CXX}
    C++ compiler flags ................ : ${CXXFLAGS} ${VISIBILITY_CXXFLAGS}
    C++ preprocessor configuration..... : ${CPPFLAGS}
EOF
