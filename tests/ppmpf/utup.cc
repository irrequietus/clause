/* --
 * Copyright (C) 2013, 2014, George Makrydakis <irrequietus@gmail.com>
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


#include <odreex/ppmpf/collections/tuple.hh>
#include <odreex/test.hh>

PPMPF_TST( ppmpf_utup1
         , PPMPF_UTUP
         , (a0,b0,c0,d0,e0)
         , ((a0,b0,c0,d0,e0),0)
         , "PPMPF_UTUP for  5 elements" )

PPMPF_TST( ppmpf_utup2
         , PPMPF_UTUP
         , (a0,b0,c0,d0,e0,a1,b1,c1,d1,e1)
         , ((a0,b0,c0,d0,e0,a1,b1,c1,d1,e1),0)
         , "PPMPF_UTUP for 10 elements" )

PPMPF_TEST_BLOCK( ppmpf
                , check_type
                , ( ppmpf_utup1, ppmpf_utup1 )
                , true
                , "testing ppmpf safe tuple constructor with typeclauses" )

PPMPF_TEST_MRUN(check_type)

