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

PPMPF_TST( ppmpf_tup_tuple
          , PPMPF_TUPLE
          , ()
          , ()
          , "PPMPF_TUPLE constructor with no items" )

PPMPF_TST( ppmpf_tup_tuple1
          , PPMPF_TUPLE
          , (x)
          , ((x))
          , "PPMPF_TUPLE constructor with 1 item" )

PPMPF_TST( ppmpf_tup_tuple2
          , PPMPF_TUPLE
          , (1,2)
          , ((1),(2))
          , "PPMPF_TUPLE constructor with 2 items" )

PPMPF_TST( ppmpf_tup_tuple4
         , PPMPF_TUPLE
         , (1,2,3,4)
         , ((1),(2),(3),(4))
         , "PPMPF_TUPLE constructor with 4 items" )

PPMPF_TST( ppmpf_tup_tuple5
         , PPMPF_TUPLE
         , (1,2,3,4,5,6,7,8)
         , ((1),(2),(3),(4),(5),(6),(7),(8))
         , "PPMPF_TUPLE constructor with 8 items" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tuple
                , ( ppmpf_tup_tuple
                  , ppmpf_tup_tuple1
                  , ppmpf_tup_tuple2
                  , ppmpf_tup_tuple4
                  , ppmpf_tup_tuple5 )
                , true
                , "testing ppmpf tuple constructor" )

PPMPF_TEST_MRUN(check_tuple)
