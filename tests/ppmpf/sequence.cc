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

PPMPF_TEST( ppmpf_sequence_10
          , "PPMPF_SEQUENCE with 10 items"
          , PPMPF_SEQUENCE(0,1,2,3,4,5,6,7,8,9)
          , ((0)(1)(2)(3)(4)(5)(6)(7)(8)(9)) )

PPMPF_TEST( ppmpf_sequence_20
          , "PPMPF_SEQUENCE with 20 items"
          , PPMPF_SEQUENCE(0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9)
          , ((0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)) )

PPMPF_TEST_BLOCK( ppmpf
                , check_sequence
                , ( ppmpf_sequence_10
                  , ppmpf_sequence_20 )
                , true )

int main() {
    PPMPF_TEST_RUN( check_sequence
                  , "testing ppmpf PPMPF_SEQUENCE (10 and 20 items)" );
    return {};
}
