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

#include <odreex/ample/test.hh>
#include <odreex/ppmpf/ppfk.hh>
#include <odreex/ppmpf/test.hh>

PPMPF_TEST( ppmpf_nargs0
          , "PPMPF_NARGS with 2 arguments"
          , (PPMPF_NARGS(0,1))
          , (2) )

PPMPF_TEST( ppmpf_nargs1
          , "PPMPF_NARGS with 3 arguments"
          , (PPMPF_NARGS(0,1,2))
          , (3) )

PPMPF_TEST( ppmpf_nargs2
          , "PPMPF_NARGS with 4 arguments"
          , (PPMPF_NARGS(0,1,2,3))
          , (4) )

PPMPF_TEST( ppmpf_nargs3
          , "PPMPF_NARGS with 8 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7))
          , (8) )

PPMPF_TEST( ppmpf_nargs4
          , "PPMPF_NARGS with 16 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (16) )

PPMPF_TEST( ppmpf_nargs5
          , "PPMPF_NARGS with 32 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (32) )

PPMPF_TEST( ppmpf_nargs6
          , "PPMPF_NARGS with 64 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (64))

PPMPF_TEST( ppmpf_nargs7
          , "PPMPF_NARGS with 128 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (128))

PPMPF_TEST( ppmpf_nargs8
          , "PPMPF_NARGS with 256 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (256))

PPMPF_TEST_BLOCK( ppmpf
                , check_nargs
                , ( ppmpf_nargs0
                  , ppmpf_nargs1
                  , ppmpf_nargs2
                  , ppmpf_nargs3
                  , ppmpf_nargs4
                  , ppmpf_nargs5
                  , ppmpf_nargs6
                  , ppmpf_nargs7
                  , ppmpf_nargs8 )
               , true )

int main() {
    PPMPF_TEST_RUN( check_nargs
                  , "testing ppmpf argument counters" );
    return {};
}
