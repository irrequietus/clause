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

PPMPF_TEST( ppmpf_seq_at09_0
          , "PPMPF_SEQ_AT09 - at index 0"
          , PPMPF_SEQ_AT09(0,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
          , (a) )

PPMPF_TEST( ppmpf_seq_at09_1
          , "PPMPF_SEQ_AT09 - at index 1"
          , PPMPF_SEQ_AT09(1,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
          , (b) )

PPMPF_TEST( ppmpf_seq_at09_2
          , "PPMPF_SEQ_AT09 - at index 2"
          , PPMPF_SEQ_AT09(2,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
          , (c) )

PPMPF_TEST( ppmpf_seq_at09_3
          , "PPMPF_SEQ_AT09 - at index 3"
          , PPMPF_SEQ_AT09(3,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
          , (d) )

PPMPF_TEST( ppmpf_seq_at09_4
          , "PPMPF_SEQ_AT09 - at index 4"
          , PPMPF_SEQ_AT09(4,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
          , (e) )

PPMPF_TEST( ppmpf_seq_at09_5
          , "PPMPF_SEQ_AT09 - at index 5"
          , PPMPF_SEQ_AT09(5,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
          , (f) )

PPMPF_TEST( ppmpf_seq_at09_6
          , "PPMPF_SEQ_AT09 - at index 6"
          , PPMPF_SEQ_AT09(6,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
          , (g) )

PPMPF_TEST( ppmpf_seq_at09_7
          , "PPMPF_SEQ_AT09 - at index 7"
          , PPMPF_SEQ_AT09(7,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
          , (h) )

PPMPF_TEST( ppmpf_seq_at09_8
          , "PPMPF_SEQ_AT09 - at index 8"
          , PPMPF_SEQ_AT09(8,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
          , (i) )

PPMPF_TEST( ppmpf_seq_at09_9
          , "PPMPF_SEQ_AT09 - at index 9"
          , PPMPF_SEQ_AT09(9,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
          , (j) )

PPMPF_TEST_BLOCK( ppmpf
                , check_seq_at09
                , ( ppmpf_seq_at09_0
                  , ppmpf_seq_at09_1
                  , ppmpf_seq_at09_2
                  , ppmpf_seq_at09_3
                  , ppmpf_seq_at09_4
                  , ppmpf_seq_at09_5
                  , ppmpf_seq_at09_6
                  , ppmpf_seq_at09_7
                  , ppmpf_seq_at09_8
                  , ppmpf_seq_at09_9)
                , true )

int main() {
    PPMPF_TEST_RUN( check_seq_at09
                  , "testing ppmpf PPMPF_SEQ_AT09 in index range [0,9]" );
    return {};
}
