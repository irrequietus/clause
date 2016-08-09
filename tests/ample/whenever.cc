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
#include <clause/ample/logic/case_of.hh>
#include <clause/ample/logic/whenever.hh>
#include <clause/ppmpf/algorithms/map.hh>

/*
 * The following boilerplate generates a series of whenever "clauses" that have
 * their internals whire in a manner similar to the following, but the actual
 * point of an always_true, always_false type changes:
 * 
 // code example:
   apply<whenever< case_of<always_false, employ<action1> >
                 , case_of<always_false, employ<action2> >
                 , case_of<always_false, employ<action3> >
                 , case_of<always_false, employ<action4> >
                 , case_of<always_false, employ<action5> >
                 , case_of<always_false, employ<action6> >
                 , case_of<always_false, employ<action7> >
                 , case_of<always_false, employ<action8> >
                 , case_of<always_true, employ<action9> >, temp__ > >
*
* The only reason the preprocessor is used is for generating the testcase
* boilerplate, not for giving functionality to the whenever clause itself.
*/

namespace clause {
namespace ample {
namespace test {

struct always_true  : boolean<true> {};
struct always_false : boolean<false> {};
struct temp__ {};

#define PPMPF_VXPP_SET0(a) \
    ()(template<typename X, typename...> \
       struct action##a { \
           template<typename T,typename...> \
           struct oprt_apply { typedef action##a<T> type;}; \
       };)(0,1,2,3,4,5,6,7,8,9)

#define CLAUSE_FALSE_CASE_OF(n) case_of<always_false, employ<action##n>>

#define CLAUSE_TRUE_CASE_OF(n) case_of<always_true, employ<action##n>>

#define CLAUSE_WHENEVER(a,b,c,d) \
    struct test_action##c : vldt_types<apply<whenever< \
    PPMPF_EXCISE( PPMPF_MAP( (CLAUSE_FALSE_CASE_OF,(__0)(_1)) \
                           , PPMPF_UTUP a) ), \
    PPMPF_EXCISE( PPMPF_MAP( (CLAUSE_TRUE_CASE_OF,(__0)(_1)) \
                           , PPMPF_UTUP b ) )>,temp__>,\
    action##c<temp__>, true > { ample_vldt_(d) };

#define CLAUSE_ACTION(c) test_action##c

/* Generating the necessary boilerplate code for the test */
#include PPMPF_VXPP_FMAPOF(0)

CLAUSE_WHENEVER((0),(1,2,3,4,5,6,7,8,9),1,"action0")
CLAUSE_WHENEVER((0,1),(2,3,4,5,6,7,8,9),2,"action1")
CLAUSE_WHENEVER((0,1,2),(3,4,5,6,7,8,9),3,"action2")
CLAUSE_WHENEVER((0,1,2,3),(4,5,6,7,8,9),4,"action3")
CLAUSE_WHENEVER((0,1,2,3,4),(5,6,7,8,9),5,"action4")
CLAUSE_WHENEVER((0,1,2,3,4,5),(6,7,8,9),6,"action5")
CLAUSE_WHENEVER((0,1,2,3,4,5,6),(7,8,9),7,"action6")
CLAUSE_WHENEVER((0,1,2,3,4,5,6,7),(8,9),8,"action7")
CLAUSE_WHENEVER((0,1,2,3,4,5,6,7,8),(9),9,"action8")

/* The actual test, code generated for it through PPMPF_MAP and preprocessor
 * lambdas through the ppmpf component of clause
 */
struct check_whenever
     : check< true
            , check_all< PPMPF_EXCISE( PPMPF_MAP( (CLAUSE_ACTION,(__0)(_1)) \
                                     , PPMPF_UTUP(1,2,3,4,5,6,7,8,9) ) ) > >
{};

}
}
}

int main() {
    return
        AMPLE_TEST_RUN( check_whenever
                      , "testing ample's whenever,case_of,employ templates" );
}
