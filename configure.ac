## odreex configure.ac

AC_INIT([libodreex],
        [0.0.1],
        [irrequietus@gmail.com],
        [libodreex],
        [https://github.com/irrequietus/odreex])
        
AC_PREREQ([2.68])
LT_PREREQ([2.4.2])
AC_SUBST([LIBTOOL_DEPS])
AC_CONFIG_HEADERS([config.h odreexconfig.h])
AC_CANONICAL_HOST
AC_CONFIG_MACRO_DIR([m4])
AC_PREFIX_PROGRAM([make])

AM_INIT_AUTOMAKE([1.11 dist-bzip2 dist-xz -Wall no-define foreign tar-ustar])

m4_include([m4/ax_cxx_compile_stdcxx_11.m4])

AC_LANG([C++])
AM_PROG_AR
LT_INIT([disable-static])
AM_PROG_LIBTOOL
AC_PROG_CXX
AC_PROG_CXXCPP
AC_PROG_CXX_C_O

AC_SUBST([ODREEX_SO_VERSION], [0:1:0])
AC_SUBST([ODREEX_API_VERSION], [0.1])

AX_CXX_COMPILE_STDCXX_11(noext,mandatory)
AM_SILENT_RULES([yes])

AC_CONFIG_FILES([Makefile
                 odreex-${ODREEX_API_VERSION}.pc:odreex.pc.in])
AC_OUTPUT

cat <<EOF

$($CXX --version)

    *** Configuration report for odreex : $(date)
    C++ preprocessor .................. : ${CXXCPP}
    C++ compiler ...................... : ${CXX}
    C++ compiler flags ................ : ${CXXFLAGS} ${VISIBILITY_CXXFLAGS}
EOF
