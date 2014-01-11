/* --
 * Copyright (C) 2014, George Makrydakis <irrequietus@gmail.com>
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

#include <odreex/ample/test.hh>
#include <odreex/ppmpf/ppfk.hh>
#include <odreex/ppmpf/test.hh>

PPMPF_TEST( ppmpf_tup_zip
          , "PPMPF_TUP_ZIP (zip using 2 safe tuples)"
          , PPMPF_TUP_ZIP( PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
                         , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 ) )
          , ((0,0),(1,1),(2,2),(3,3),(4,4),(5,5),(6,6),(7,7),(8,8),(9,9)) )

PPMPF_TEST( ppmpf_tup_zip3
          , "PPMPF_TUP_ZIP3 (zip using 3 safe tuples)"
          , PPMPF_TUP_ZIP3( PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
                          , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
                          , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 ) )
          , ((0,a,0),(1,b,1),(2,c,2),(3,d,3),(4,e,4),(5,f,5),(6,g,6)\
,(7,h,7),(8,i,8),(9,j,9)) )

PPMPF_TEST( ppmpf_tup_zip4
          , "PPMPF_TUP_ZIP4 (zip using 4 safe tuples)"
          , PPMPF_TUP_ZIP4( PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
                          , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
                          , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
                          , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j ) )
          , ((0,a,0,a),(1,b,1,b),(2,c,2,c),(3,d,3,d),(4,e,4,e),(5,f,5,f),\
(6,g,6,g),(7,h,7,h),(8,i,8,i),(9,j,9,j)) )

PPMPF_TEST_BLOCK( ppmpf
                , check_tuple_zip
                , ( ppmpf_tup_zip
                  , ppmpf_tup_zip3
                  , ppmpf_tup_zip4 )
                , true )

int main() {
    PPMPF_TEST_RUN( check_tuple_zip
                  , "testing ppmpf PPMPF_TUP_ZIP (2 - 4)" );
    return {};
}
