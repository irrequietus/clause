/* --
 * Copyright (C) 2013,2014 George Makrydakis <irrequietus@gmail.com>
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
#include <odreex/ppmpf/collections/tuple.hh>

PPMPF_TST( ppmpf_tup_empty
         , PPMPF_TUP_EMPTY
         , (())
         , 1
         , "PPMPF_TUP_EMPTY with an empty tuple" )

PPMPF_TST( ppmpf_tup_empty1
         , PPMPF_TUP_EMPTY
         , ((a single argument))
         , 0
         , "PPMPF_TUP_EMPTY with a single argument" )

PPMPF_TST( ppmpf_tup_empty2
         , PPMPF_TUP_EMPTY
         , ((,))
         , 0
         , "PPMPF_TUP_EMPTY with a single comma" )

PPMPF_TST( ppmpf_tup_empty3
         , PPMPF_TUP_EMPTY
         , ((PPMPF_TEST))
         , 0
         , "PPMPF_TUP_EMPTY with a macro as argument" )

PPMPF_TST( ppmpf_tup_empty4
         , PPMPF_TUP_EMPTY
         , ((()))
         , 0
         , "PPMPF_TUP_EMPTY with a balanced parenthesis" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tup_empty
                , ( ppmpf_tup_empty
                  , ppmpf_tup_empty1
                  , ppmpf_tup_empty2
                  , ppmpf_tup_empty3
                  , ppmpf_tup_empty4 )
                , true
                , "testing ppmpf tuple emptiness" )

PPMPF_TEST_MRUN(check_tup_empty)
