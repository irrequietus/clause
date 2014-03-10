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

#include <odreex/test.hh>
#include <odreex/ppmpf/ppfk.hh>

PPMPF_TST( ppmpf_type_1
         , PPMPF_TYPEOF
         , (((a,b,c,d,e),0))
         , 0
         , "PPMPF_TYPEOF for ppmpf unsafe tuples" )

PPMPF_TST( ppmpf_type_2
         , PPMPF_DATAOF
         , (((a,b,c,d,e),0))
         , (a,b,c,d,e)
         , "PPMPF_DATAOF for ppmpf unsafe tuples" )

PPMPF_TST( ppmpf_type_3
         , PPMPF_TYPEOF
         , ((((a),(b),(c),(d),(e)),1))
         , 1
         , "PPMPF_TYPEOF for ppmpf safe tuples" )

PPMPF_TST( ppmpf_type_4
         , PPMPF_DATAOF
         , ((((a),(b),(c),(d),(e)),1))
         , ((a),(b),(c),(d),(e))
         , "PPMPF_DATAOF for ppmpf safe tuples" )

PPMPF_TST( ppmpf_type_5
         , PPMPF_TYPEOF
         , ((((a)(b)(c)(d)(e)),2))
         , 2
         , "PPMPF_TYPEOF for ppmpf sequences" )

PPMPF_TST( ppmpf_type_6
         , PPMPF_DATAOF
         , ((((a)(b)(c)(d)(e)),2))
         , ((a)(b)(c)(d)(e))
         , "PPMPF_DATAOF for ppmpf sequences" )

PPMPF_TEST_BLOCK( ppmpf
                , check_type
                , ( ppmpf_type_1, ppmpf_type_2
                  , ppmpf_type_3, ppmpf_type_4
                  , ppmpf_type_5, ppmpf_type_6 )
                , true
                , "testing ppmpf type deductor" )

PPMPF_TEST_MRUN(check_type)

