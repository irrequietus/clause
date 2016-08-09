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

#ifndef CLAUSE_PPMPF_TEST_HH
#define CLAUSE_PPMPF_TEST_HH

#include <clause/ppmpf/kernel/cpro/core.hh>
#include <clause/ample/charseq.hh>
#include <clause/ample/test.hh>

#ifdef USE_TEST_EXPANSION

/* NOTE: PPMPF_TEST : A macro for creating PPMPF macro tests. Using the test
 * facilities clause::ample::test offers, we create types to be used for
 * ample - like testing but within a ppmpf::test namespace.
 */
#define PPMPF_TEST(name,str,a,b) \
        PPMPF_TEST__(name, str,PPMPF_QUOTE(a),PPMPF_QUOTE(b))
#define PPMPF_TEST__(name,str,a,b) \
        PPMPF_TEST_(name,str,a,b)
#define PPMPF_TEST_(name,str,a,b) \
namespace clause { namespace ppmpf { namespace test { \
struct name \
     : ample::test::vldt_types< ample::boolean<ample::charsops::match(a,b)> \
                              , ample::boolean<true>> \
{ ample_vldt_(str) }; } } }

#define PPMPF_TEST_TYPE(...) (clause::ppmpf::test::__VA_ARGS__)

#define PPMPF_TEST_BLOCK____(x) clause::ample::test::x
#define PPMPF_TEST_BLOCK___(x) PPMPF_CAT(clause::ample::test::,x)
#define PPMPF_TEST_BLOCK__(a,b) \
        a,PPMPF_DREF(b)

#define PPMPF_TEST_BLOCK_(t) \
        PPMPF_DREF(PPMPF_TUP_POP( \
            PPMPF_UTUP_FOLDL( PPMPF_TEST_BLOCK__, () \
                            , PPMPF_UTUP_MAP(PPMPF_TEST_TYPE, t))))

#define PPMPF_TEST_BLOCK(nspace,name,tests,expected,msg) \
namespace clause { namespace nspace { namespace test { \
struct name \
     : PPMPF_TEST_BLOCK____(check)< expected \
            , PPMPF_TEST_BLOCK____(check_all)<PPMPF_TEST_BLOCK_(tests)> \
            , ample_charseq(msg) >  \
{}; \
} } }

#define PPMPF_TST0(f,x) PPMPF_TST1(f,PPMPF_DREF(x))
#define PPMPF_TST1(f,...) PPMPF_TST2(f,__VA_ARGS__)
#define PPMPF_TST2(f,...) f(__VA_ARGS__)

#define PPMPF_TEST_MRUN(name) \
        int main() { \
            return clause::ppmpf::test::name::run_all(); \
        }

#define PPMPF_TST(a,b,c,d,e) \
        PPMPF_TEST(a,e,PPMPF_TST0(b,c),d)
#else

#define PPMPF_TST(a,b,c,d,e)
#define PPMPF_TEST_MRUN(name) \
        int main() { \
            static_assert(false, PPMPF_QUOTE(name not found)); \
            return 1; \
        }
#define PPMPF_TEST_BLOCK(nspace,name,tests,expected,msg)

#endif

#endif /* CLAUSE_PPMPF_TEST_HH */
