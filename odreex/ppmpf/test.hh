/* --
 * Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
 *
 * This file is part of odreex.
 *
 * odreex is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * odreex is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * odreex. If not, see http://www.gnu.org/licenses/.
 *
 */

#ifndef _ODREEX_PPMPF_TEST_HH_
#define _ODREEX_PPMPF_TEST_HH_

#include <odreex/ppmpf/kernel/cpro/core.hh>
#include <odreex/ample/charseq.hh>
#include <odreex/ample/test.hh>

/* NOTE: PPMPF_TEST : A macro for creating PPMPF macro tests. Using the test
 * facilities odreex::ample::test offers, we create types to be used for
 * ample - like testing but within a ppmpf::test namespace.
 */
#define PPMPF_TEST(name,str,a,b) \
        PPMPF_TEST__(name, str,PPMPF_QUOTE(a),PPMPF_QUOTE(b))
#define PPMPF_TEST__(name,str,a,b) \
        PPMPF_TEST_(name,str,a,b)
#define PPMPF_TEST_(name,str,a,b) \
namespace odreex { namespace ppmpf { namespace test { \
struct name \
     : ample::test::vldt_types< ample::boolean<ample::charsops::match(a,b)> \
                              , ample::boolean<true>> \
{ ample_vldt_(str) }; } } }

#define PPMPF_TEST_TYPE(...) (odreex::ppmpf::test::__VA_ARGS__)

#define PPMPF_TEST_BLOCK____(x) odreex::ample::test::x
#define PPMPF_TEST_BLOCK___(x) PPMPF_CAT(odreex::ample::test::,x)
#define PPMPF_TEST_BLOCK__(a,b) \
        a,PPMPF_DREF(b)

#define PPMPF_TEST_BLOCK_(t) \
        PPMPF_DREF(PPMPF_TUP_POP( \
            PPMPF_UTUP_FOLDL( PPMPF_TEST_BLOCK__, () \
                            , PPMPF_UTUP_MAP(PPMPF_TEST_TYPE, t))))

#define PPMPF_TEST_BLOCK(nspace,name,tests,expected,msg) \
namespace odreex { namespace nspace { namespace test { \
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
            return odreex::ppmpf::test::name::run_all(); \
        }

#define PPMPF_TST(a,b,c,d,e) \
        PPMPF_TEST(a,e,PPMPF_TST0(b,c),d)

#endif /* _ODREEX_PPMPF_TEST_HH_ */
