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
#include <odreex/ppmpf/range.hh>
#include <odreex/ppmpf/test.hh>

PPMPF_TEST( ppmpf_cat
          , "PPMPF_CAT for two preprocessor tokens."
          , (PPMPF_CAT(a,b))
          , (ab) )

PPMPF_TEST( ppmpf_vcat0
          , "PPMPF_VCAT with 2 arguments"
          , (PPMPF_VCAT(0,1))
          , (01) )

PPMPF_TEST( ppmpf_vcat1
          , "PPMPF_VCAT with 3 arguments"
          , (PPMPF_VCAT(0,1,2))
          , (012) )

PPMPF_TEST( ppmpf_vcat2
          , "PPMPF_VCAT with 4 arguments"
          , (PPMPF_VCAT(0,1,2,3))
          , (0123) )

PPMPF_TEST( ppmpf_vcat3
          , "PPMPF_VCAT with 8 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7))
          , (01234567) )

PPMPF_TEST( ppmpf_vcat4
          , "PPMPF_VCAT with 16 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0123456789abcdef) )

PPMPF_TEST( ppmpf_vcat5
          , "PPMPF_VCAT with 32 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0123456789abcdef0123456789abcdef) )

PPMPF_TEST( ppmpf_vcat6
          , "PPMPF_VCAT with 64 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef))

PPMPF_TEST( ppmpf_vcat7
          , "PPMPF_VCAT with 128 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
, (0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef))

PPMPF_TEST( ppmpf_vcat8
          , "PPMPF_VCAT with 256 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
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
, (0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef))

PPMPF_TEST_BLOCK( ppmpf
                , check_vcat
                , ( ppmpf_vcat0
                  , ppmpf_vcat1
                  , ppmpf_vcat2
                  , ppmpf_vcat3
                  , ppmpf_vcat4
                  , ppmpf_vcat5
                  , ppmpf_vcat6
                  , ppmpf_vcat7
                  , ppmpf_vcat8 )
               , true )

int main() {
    return
        PPMPF_TEST_RUN( check_vcat
                      , "testing ppmpf concatenation" );
}
