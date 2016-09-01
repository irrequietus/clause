/*~
 * Copyright (C) 2013 - 2016 George Makrydakis <george@irrequietus.eu>
 *
 * This file is part of 'clause', a highly generic C++ meta-programming library,
 * subject to the terms and conditions of the Mozilla Public License v 2.0. If
 * a copy of the MPLv2 license text was not distributed with this file, you can
 * obtain it at: http://mozilla.org/MPL/2.0/.
 *
 * The 'clause' library is an experimental library in active development with
 * a source code repository at: https://github.com/irrequietus/clause.git and
 * issue tracker at https://github.com/irrequietus/clause/issues.
 *
 */

#include <clause/ample/test.hh>
#include <clause/ample/base/basic_number.hh>
#include <clause/ample/storage/alignutil.hh>

// explicit boilerplate for testing
template<typename...> struct wrap {};

struct alignas(1)   a {};
struct alignas(2)   b {};
struct alignas(4)   c {};
struct alignas(8)   d {};
struct alignas(16)  e {};
struct alignas(32)  f {};
struct alignas(64)  g {};
struct alignas(128) h {};

CLAUSE_TEST_DEFN( check_alignutil
                , "checking alignment utilities" ) {

    CLAUSE_TEST_DECL(test1, test2, test3);

    CLAUSE_TEST_TYPE( test1
                    , "clause::ample::unisorted_aligned_wrap<X...>"
                    , true
                    , clause::ample::unisorted_aligned_wrap<wrap,
                        a,c,b,e,g,f,d,g,a,a,e,e,h,b,g,f,d,d,e,a,c,b,b,a,d,h
                      , h,h,d,e,f,f,a,e,d,f,d,d,g,a,c,b,b,a,d,d,h,h,h,e,f,f
                      , a,e,d,g,g,a,c,c,g,g,a,f,g,h,b,c,d,c,g,g,g,h,g,a,c,d >
                    , wrap<a,b,c,d,e,f,g,h> );

    CLAUSE_TEST_TYPE( test2
                    , "clause::ample::alignedof_min<X...>"
                    , true
                    , clause::ample::natural<clause::ample::alignedof_min<
                        a,c,b,e,g,f,d,g,a,a,e,e,h,b,g,f,d,d,e,a,c,b,b,a,d,h
                      , h,h,d,e,f,f,a,e,d,f,d,d,g,a,c,b,b,a,d,d,h,h,h,e,f,f
                      , a,e,d,g,g,a,c,c,g,g,a,f,g,h,b,c,d,c,g,g,g,h,g,a,c,d >>
                    , clause::ample::natural<alignof(a)> );

    CLAUSE_TEST_TYPE( test3
                    , "clause::ample::alignedof_max<X...>"
                    , true
                    , clause::ample::natural<clause::ample::alignedof_max<
                        a,c,b,e,g,f,d,g,a,a,e,e,h,b,g,f,d,d,e,a,c,b,b,a,d,h
                      , h,h,d,e,f,f,a,e,d,f,d,d,g,a,c,b,b,a,d,d,h,h,h,e,f,f
                      , a,e,d,g,g,a,c,c,g,g,a,f,g,h,b,c,d,c,g,g,g,h,g,a,c,d >>
                    , clause::ample::natural<alignof(h)> );
};
