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

PPMPF_TEST( ppmpf_tup_zipwith
          , "PPMPF_TUP_ZIPWITH (zipwith using 2 safe tuples)"
          , PPMPF_TUP_ZIPWITH( PPMPF_VCAT
                             , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
                             , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 ) )
          , ((00),(11),(22),(33),(44),(55),(66),(77),(88),(99)) )

PPMPF_TEST( ppmpf_tup_zipwith3
          , "PPMPF_TUP_ZIPWITH3 (zipwith using 3 safe tuples)"
          , PPMPF_TUP_ZIPWITH3( PPMPF_VCAT
                              , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
                              , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
                              , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 ) )
          , ((0a0),(1b1),(2c2),(3d3),(4e4),(5f5),(6g6),(7h7),(8i8),(9j9)) )

PPMPF_TEST( ppmpf_tup_zipwith4
          , "PPMPF_TUP_ZIPWITH4 (zipwith using 4 safe tuples)"
          , PPMPF_TUP_ZIPWITH4( PPMPF_VCAT
                              , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
                              , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
                              , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
                              , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j ) )
          , ((0a0a),(1b1b),(2c2c),(3d3d),(4e4e),\
(5f5f),(6g6g),(7h7h),(8i8i),(9j9j)) )

PPMPF_TEST_BLOCK( ppmpf
                , check_tuple_zipwith
                , ( ppmpf_tup_zipwith
                  , ppmpf_tup_zipwith3
                  , ppmpf_tup_zipwith4 )
                , true )

int main() {
    PPMPF_TEST_RUN( check_tuple
                  , "testing ppmpf PPMPF_TUP_ZIPWITH (2 - 4)" );
    return {};
}
