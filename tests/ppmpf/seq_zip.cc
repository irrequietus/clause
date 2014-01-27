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

PPMPF_TEST( ppmpf_seq_zip
          , "PPMPF_SEQ_ZIP (zip using 2 ppmpf sequences)"
          , PPMPF_SEQ_ZIP( (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                         , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
          , ((a)(0))((b)(1))((c)(2))((d)(3))((e)(4))((f)(5))((g)(6))((h)(7))\
((i)(8))((j)(9)))

PPMPF_TEST( ppmpf_seq_zip3
          , "PPMPF_SEQ_ZIP3 (zip using 3 ppmpf sequences)"
          , PPMPF_SEQ_ZIP3( (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
          , ((a)(0)(a))((b)(1)(b))((c)(2)(c))((d)(3)(d))((e)(4)(e))((f)(5)(f))\
((g)(6)(g))((h)(7)(h))((i)(8)(i))((j)(9)(j)))

PPMPF_TEST( ppmpf_seq_zip4
          , "PPMPF_SEQ_ZIP4 (zip using 4 ppmpf sequences)"
          , PPMPF_SEQ_ZIP4( (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
          , ((a)(0)(a)(0))((b)(1)(b)(1))((c)(2)(c)(2))((d)(3)(d)(3))\
((e)(4)(e)(4))((f)(5)(f)(5))((g)(6)(g)(6))((h)(7)(h)(7))((i)(8)(i)(8))\
((j)(9)(j)(9)))

PPMPF_TEST( ppmpf_seq_zip5
          , "PPMPF_SEQ_ZIP5 (zip using 5 ppmpf sequences)"
          , PPMPF_SEQ_ZIP5( (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
          , ((a)(0)(a)(0)(a))((b)(1)(b)(1)(b))((c)(2)(c)(2)(c))\
((d)(3)(d)(3)(d))((e)(4)(e)(4)(e))((f)(5)(f)(5)(f))((g)(6)(g)(6)(g))\
((h)(7)(h)(7)(h))((i)(8)(i)(8)(i))((j)(9)(j)(9)(j)))

PPMPF_TEST( ppmpf_seq_zip6
          , "PPMPF_SEQ_ZIP6 (zip using 6 ppmpf sequences)"
          , PPMPF_SEQ_ZIP6( (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
          , ((a)(0)(a)(0)(a)(0))((b)(1)(b)(1)(b)(1))((c)(2)(c)(2)(c)(2))\
((d)(3)(d)(3)(d)(3))((e)(4)(e)(4)(e)(4))((f)(5)(f)(5)(f)(5))\
((g)(6)(g)(6)(g)(6))((h)(7)(h)(7)(h)(7))((i)(8)(i)(8)(i)(8))\
((j)(9)(j)(9)(j)(9)))

PPMPF_TEST( ppmpf_seq_zip7
          , "PPMPF_SEQ_ZIP7 (zip using 7 ppmpf sequences)"
          , PPMPF_SEQ_ZIP7( (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
          , ((a)(0)(a)(0)(a)(0)(a))((b)(1)(b)(1)(b)(1)(b))\
((c)(2)(c)(2)(c)(2)(c))((d)(3)(d)(3)(d)(3)(d))((e)(4)(e)(4)(e)(4)(e))\
((f)(5)(f)(5)(f)(5)(f))((g)(6)(g)(6)(g)(6)(g))((h)(7)(h)(7)(h)(7)(h))\
((i)(8)(i)(8)(i)(8)(i))((j)(9)(j)(9)(j)(9)(j)))

PPMPF_TEST( ppmpf_seq_zip8
          , "PPMPF_SEQ_ZIP8 (zip using 8 ppmpf sequences)"
          , PPMPF_SEQ_ZIP8( (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
          , ((a)(0)(a)(0)(a)(0)(a)(0))((b)(1)(b)(1)(b)(1)(b)(1))\
((c)(2)(c)(2)(c)(2)(c)(2))((d)(3)(d)(3)(d)(3)(d)(3))((e)(4)(e)(4)(e)(4)(e)(4))\
((f)(5)(f)(5)(f)(5)(f)(5))((g)(6)(g)(6)(g)(6)(g)(6))((h)(7)(h)(7)(h)(7)(h)(7))\
((i)(8)(i)(8)(i)(8)(i)(8))((j)(9)(j)(9)(j)(9)(j)(9)))

PPMPF_TEST( ppmpf_seq_zip9
          , "PPMPF_SEQ_ZIP9 (zip using 9 ppmpf sequences)"
          , PPMPF_SEQ_ZIP9( (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
                          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
                          , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
          , ((a)(0)(a)(0)(a)(0)(a)(0)(a))((b)(1)(b)(1)(b)(1)(b)(1)(b))\
((c)(2)(c)(2)(c)(2)(c)(2)(c))((d)(3)(d)(3)(d)(3)(d)(3)(d))\
((e)(4)(e)(4)(e)(4)(e)(4)(e))((f)(5)(f)(5)(f)(5)(f)(5)(f))\
((g)(6)(g)(6)(g)(6)(g)(6)(g))((h)(7)(h)(7)(h)(7)(h)(7)(h))\
((i)(8)(i)(8)(i)(8)(i)(8)(i))((j)(9)(j)(9)(j)(9)(j)(9)(j)))

PPMPF_TEST_BLOCK( ppmpf
                , check_sequence_zip
                , ( ppmpf_seq_zip
                  , ppmpf_seq_zip3
                  , ppmpf_seq_zip4
                  , ppmpf_seq_zip5
                  , ppmpf_seq_zip6
                  , ppmpf_seq_zip7
                  , ppmpf_seq_zip8
                  , ppmpf_seq_zip9 )
                , true )

int main() {
    return
        PPMPF_TEST_RUN( check_sequence_zip
                      , "testing ppmpf PPMPF_SEQ_ZIP (2 - 9 sequences)" );
}
