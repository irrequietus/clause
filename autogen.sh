#!/bin/bash

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

# The reason for writing this is for assisting the generation of the necessary
# files required for autotools to work with clause and it is written in GNU/bash
# because of conveniency.

function clausegen_help() {
    printf "\n===============================================================\n"
    printf "'clause' library autogen.sh implementation\n"
    printf "Copyright (C) 2013,2014 George Makrydakis <george@irrequietus.eu>\n"
    printf "License: MPLv2\n"
    printf "Website: https://github.com/irrequietus/clause\n"
    printf "=================================================================\n"
    printf "\n"
}


#
# @desc Create a Makefile.am for the source directories involved in the clause
#       libraries.
#
function clausegen_makefile() {
    local fl="" fheaders=() fsources=() fh="" fs=""
    
    while read fl; do
        case "$fl" in
            */ample/test/*.cc)   ;;
            */tests/*.hh)        ;;
            */tests/*.cc)        ;;
            *.hh) fheaders+=("${fl#*/}") ;;
            *.cc) fsources+=("${fl#*/}") ;;
        esac
        fx+=("${fl#*/}")
    done < <(find . -regextype posix-extended -regex '.+\.(hh|cc)' -type f )
    fh="${fheaders[${#fheaders[@]}-1]}"
    fs="${fsources[${#fsources[@]}-1]}"
    unset fheaders[${#fheaders[@]}-1] fsources[${#fsources[@]}-1]
    
    { printf "nobase_clause_include_HEADERS = \\\\\n"
      for((fl=0;fl!=${#fheaders[@]};fl++)); do
          printf "\t%s \\\\\n" "${fheaders[fl]}"
      done
      printf "\t$fh\n\n"
    } > "fheaders.mk"
    
    { printf "libclause_@CLAUSE_API_VERSION@_la_SOURCES = \\\\\n"
      for((fl=0;fl!=${#fsources[@]};fl++)); do
          printf "\t%s \\\\\n" "${fsources[fl]}"
      done
      printf "\t$fs\n\n"
    } > "fsources.mk"
}

#
# @desc Perform recursive cleanup for backup files, remove autotools related
#       files and caches where appropriate.
#

function clausegen_cleanup() {
    find . -name '*~' | xargs rm -rf
    find . -name '*.out' | xargs rm -rf
    find . -name '*.deps' | xargs rm -rf
    find . -name '*.test' | xargs rm -rf
    find . -name '*.libs' | xargs rm -rf
    find . -name '*.dirstamp' | xargs rm -rf
    rm -rf autom4te.cache aclocal.m4 compile \
           configure depcomp install-sh missing
    rm -rf stamp-h* dist ltmain.sh libtool ar-lib
    rm -rf autom4te.cache aclocal.m4 *.log *.status
    rm -rf Makefile Makefile.in missing stamp* *.sub
    rm -rf depcomp install-sh configure config.*
    rm -rf *.mk clauseconfig.h* *.pc
}

#
# @desc run autoreconf after having cleaned up and regenerated the makefile
#       required for the library to be built.
#
function clausegen_reconf() {
    clausegen_cleanup
    clausegen_makefile
    test -n "$srcdir" || srcdir="$(dirname "$0")"
    test -n "$srcdir" || srcdir=.
    touch clauseconfig.h.in
    autoreconf --force --install --verbose "$srcdir" || exit 1
    if patch -s --dry-run < patch/ltmain-as-needed.patch; then
        patch -s -p0 < patch/ltmain-as-needed.patch || exit 1
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
function clausegen_distcheck() {
    clausegen_cleanup
    clausegen_makefile
    test -n "$srcdir" || srcdir="$(dirname "$0")"
    test -n "$srcdir" || srcdir=.
    touch clauseconfig.h.in
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
    make distcheck && clausegen_cleanup
}

#
# @desc Run through a series of options and decide which one should apply. Only
#       the first command line option gets executed, the others are ignored.
#
function clausegen_getopts() {
    local opts_var=""
    if [ -z "$@" ]; then
        clausegen_reconf
        exit
    fi
    while getopts “hcrmd” opts_var; do
        case $opts_var in
        h)  clausegen_help
            exit
            ;;
        c)  clausegen_cleanup
            exit
            ;;
        r)  clausegen_reconf
            exit
            ;;
        m)  clausegen_makefile
            exit
            ;;
        d)  clausegen_distcheck
            rm -rf dist
            mkdir dist
            mv *.tar.* dist
            cd dist
            for x in *.tar.*; do
                sha1sum $x > $x.sha1
                md5sum  $x > $x.md5
            done
            exit
            ;;
        *)  clausegen_help
            exit
            ;;
        esac
    done
}


clausegen_getopts "$@"
