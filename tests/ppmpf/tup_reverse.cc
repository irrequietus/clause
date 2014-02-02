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

PPMPF_TST( ppmpf_tup_reverse8
         , PPMPF_TUP_REVERSE
         , ((0,1,2,3,4,5,6,7))
         , (7,6,5,4,3,2,1,0)
         , "PPMPF_TUP_REVERSE with 8 arguments" )

PPMPF_TST( ppmpf_tup_reverse16
         , PPMPF_TUP_REVERSE
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
         , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0)
         , "PPMPF_TUP_REVERSE with 16 arguments" )

PPMPF_TST( ppmpf_tup_reverse32
         , PPMPF_TUP_REVERSE
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0)
         , "PPMPF_TUP_REVERSE with 32 arguments" )

PPMPF_TST( ppmpf_tup_reverse64
          , PPMPF_TUP_REVERSE
          , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
             ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
             ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
             ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0)
          , "PPMPF_TUP_REVERSE with 64 arguments")

PPMPF_TST( ppmpf_tup_reverse128
         , PPMPF_TUP_REVERSE
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0)
          , "PPMPF_TUP_REVERSE with 128 arguments" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tup_reverse
                , ( ppmpf_tup_reverse8
                  , ppmpf_tup_reverse16
                  , ppmpf_tup_reverse32
                  , ppmpf_tup_reverse64
                  , ppmpf_tup_reverse128 )
                , true
                , "testing ppmpf tuple reversal" )

PPMPF_TEST_MRUN(check_tup_reverse)
