#!/bin/bash

# odreex libraries autogen.sh implementation
# Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
# License: GPLv3+
# Website: https://github/com/irrequietus/odreex
#
# The reason for writing this is for assisting the generation of the necessary
# files required for autotools to work with odreex and it is written in GNU/bash
# because of conveniency.

function odreexgen_help() {
    printf "\n=============================================================\n"
    printf "odreex libraries autogen.sh implementation\n"
    printf "Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>\n"
    printf "License: GPLv3+\n"
    printf "Website: https://github.com/irrequietus/odreex\n"
    printf "=============================================================\n\n"
}


#
# @desc Create a Makefile.am for the source directories involved in the odreex
#       libraries.
#
function odreexgen_makefile() {
    local fl="" fheaders=() fsources=() fh="" fs=""
    
    while read fl; do
        case "$fl" in
            */ample/test/*.cc)           ;;
            *.hh) fheaders+=("${fl#*/}") ;;
            *.cc) fsources+=("${fl#*/}") ;;
        esac
        fx+=("${fl#*/}")
    done < <(find . -regextype posix-extended -regex '.+\.(hh|cc)' \
                    -not -path '*/appkit/*' -type f )
    
    fh="${fheaders[${#fheaders[@]}-1]}"
    fs="${fsources[${#fsources[@]}-1]}"
    unset fheaders[${#fheaders[@]}-1] fsources[${#fsources[@]}-1]
    
    { printf "nobase_odreex_include_HEADERS = \\\\\n"
      for((fl=0;fl!=${#fheaders[@]};fl++)); do
          printf "\t%s \\\\\n" "${fheaders[fl]}"
      done
      printf "\t$fh\n\n"
    } > "fheaders.mk"
    
    { printf "libodreex_@ODREEX_API_VERSION@_la_SOURCES = \\\\\n"
      for((fl=0;fl!=${#fsources[@]};fl++)); do
          printf "\t%s \\\\\n" "${fsources[fl]}"
      done
      printf "\t$fs\n\n"
    } > "fsources.mk"
    
    printf "ODREEX_GITHASH = %s\n" $(git rev-parse HEAD) > githash.mk
}

#
# @desc Perform recursive cleanup for backup files, remove autotools related
#       files and caches where appropriate.
#

function odreexgen_cleanup() {
    find . -name '*~' | xargs rm -rf
    rm -rf autom4te.cache aclocal.m4 compile \
           configure depcomp install-sh missing
    rm -rf stamp-h* dist ltmain.sh libtool ar-lib
    rm -rf autom4te.cache aclocal.m4 *.log *.status
    rm -rf Makefile Makefile.in missing stamp* *.sub
    rm -rf depcomp install-sh configure config.*
}

#
# @desc run autoreconf after having cleaned up and regenerated the makefile
#       required for the library to be built.
#
function odreexgen_reconf() {
    odreexgen_cleanup
    odreexgen_makefile
    test -n "$srcdir" || srcdir="$(dirname "$0")"
    test -n "$srcdir" || srcdir=.
    autoreconf --force --install --verbose "$srcdir"
    if patch -s --dry-run < patch/ltmain-as-needed.patch; then
        patch -s -p0 < patch/ltmain-as-needed.patch
        printf "ltmain.sh patched for --as-needed\n"
    else
        printf "ltmain.sh could not be patched for --as-needed\n"
    fi
    rm -rf autom4te.cache
    find . -name '*~' | xargs rm -rf
}

#
# @desc Just a make distcheck from clean slate
#
function odreexgen_distcheck() {
    odreexgen_cleanup
    odreexgen_makefile
    test -n "$srcdir" || srcdir="$(dirname "$0")"
    test -n "$srcdir" || srcdir=.
    autoreconf --force --install --verbose "$srcdir"
    if patch -s --dry-run < patch/ltmain-as-needed.patch; then
        patch -s -p0 < patch/ltmain-as-needed.patch
    else
        printf "ltmain.sh could not be patched for --as-needed\n"
        printf "will now abort instead of running make distcheck\n"
        exit 1
    fi
    rm -rf autom4te.cache
    find . -name '*~' | xargs rm -rf
    ./configure
    make distcheck
}

#
# @desc Run through a series of options and decide which one should apply. Only
#       the first command line option gets executed, the others are ignored.
#
function odreexgen_getopts() {
    local opts_var=""
    if [ -z "$@" ]; then
        odreexgen_reconf
        exit
    fi
    while getopts “hcrmd” opts_var; do
        case $opts_var in
        h)  odreexgen_help
            exit
            ;;
        c)  odreexgen_cleanup
            exit
            ;;
        r)  odreexgen_reconf
            exit
            ;;
        m)  odreexgen_makefile
            exit
            ;;
        d)  odreexgen_distcheck
            exit
            ;;
        *)  odreexgen_help
            exit
            ;;
        esac
    done
}


odreexgen_getopts "$@"
