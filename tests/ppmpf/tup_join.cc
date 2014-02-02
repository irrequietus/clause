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

PPMPF_TST( ppmpf_tup_join
         , PPMPF_TUP_JOIN
         , ((a,a),(a,a))
         , (a,a,a,a)
         , "PPMPF_TUP_JOIN of 2 tuples with 2 items each" )

PPMPF_TST( ppmpf_tup_join1
          , PPMPF_TUP_JOIN
          , ((a,a,a,a),(b,b,b,b))
          , (a,a,a,a,b,b,b,b)
          , "PPMPF_TUP_JOIN of 2 tuples with 4 items each" )

PPMPF_TST( ppmpf_tup_join2
          , PPMPF_UTUP_FOLDL_OF
          , ( PPMPF_TUP_JOIN
            , ((a,a),(b,b),(c,c),(d,d)) )
          , ((a,a,b,b,c,c,d,d))
          , "PPMPF_TUP_JOIN 4 tuples using PPMPF_UTUP_FOLDL_OF" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tup_join
                , ( ppmpf_tup_join
                  , ppmpf_tup_join1
                  , ppmpf_tup_join2 )
                , true
                , "testing ppmpf tuple joining" )

PPMPF_TEST_MRUN(check_tup_join)
