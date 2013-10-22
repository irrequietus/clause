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

#define PPMPF_TEST_TYPE(...) odreex::ppmpf::test::__VA_ARGS__

#endif /* _ODREEX_PPMPF_TEST_HH_ */
