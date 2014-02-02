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

PPMPF_TEST( ppmpf_tup_empty
          , "PPMPF_TUP_EMPTY with an empty tuple"
          , PPMPF_TUP_EMPTY(())
          , 1 )

PPMPF_TEST( ppmpf_tup_empty1
          , "PPMPF_TUP_EMPTY with a single argument"
          , PPMPF_TUP_EMPTY((a single argument))
          , 0 )

PPMPF_TEST( ppmpf_tup_empty2
          , "PPMPF_TUP_EMPTY with a single comma"
          , PPMPF_TUP_EMPTY((,))
          , 0 )

PPMPF_TEST( ppmpf_tup_empty3
          , "PPMPF_TUP_EMPTY with a macro as argument"
          , PPMPF_TUP_EMPTY((PPMPF_TEST))
          , 0 )

PPMPF_TEST( ppmpf_tup_empty4
          , "PPMPF_TUP_EMPTY with a balanced parenthesis"
          , PPMPF_TUP_EMPTY((()))
          , 0 )

PPMPF_TEST( ppmpf_tup_tuple
          , "PPMPF_TUPLE constructor with no items"
          , PPMPF_TUPLE()
          , () )

PPMPF_TEST( ppmpf_tup_tuple1
          , "PPMPF_TUPLE constructor with one item"
          , PPMPF_TUPLE(x)
          , ((x)) )

PPMPF_TEST( ppmpf_tup_tuple2
          , "PPMPF_TUPLE constructor with 2 items"
          , PPMPF_TUPLE(1,2)
          , ((1),(2)) )

PPMPF_TEST( ppmpf_tup_tuple4
          , "PPMPF_TUPLE constructor with 4 items"
          , PPMPF_TUPLE(1,2,3,4)
          , ((1),(2),(3),(4)) )

PPMPF_TEST( ppmpf_tup_join
          , "PPMPF_TUP_JOIN of 2 tuples with 2 items each"
          , PPMPF_TUP_JOIN((a,a),(a,a))
          , (a,a,a,a) )

PPMPF_TEST( ppmpf_tup_join1
          , "PPMPF_TUP_JOIN of 2 tuples with 4 items each"
          , PPMPF_TUP_JOIN((a,a,a,a),(b,b,b,b))
          , (a,a,a,a,b,b,b,b) )

PPMPF_TEST( ppmpf_tup_join2
          , "PPMPF_TUP_JOIN 4 tuples using PPMPF_UTUP_FOLDL_OF"
          , PPMPF_UTUP_FOLDL_OF( PPMPF_TUP_JOIN
                               , ((a,a),(b,b),(c,c),(d,d)) )
          , ((a,a,b,b,c,c,d,d)) )

PPMPF_TEST( ppmpf_tup_reverse8
          , "PPMPF_TUP_REVERSE with 8 arguments"
          , PPMPF_TUP_REVERSE((0,1,2,3,4,5,6,7))
          , (7,6,5,4,3,2,1,0))

PPMPF_TEST( ppmpf_tup_reverse16
          , "PPMPF_TUP_REVERSE with 16 arguments"
          , PPMPF_TUP_REVERSE((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0))

PPMPF_TEST( ppmpf_tup_reverse32
          , "PPMPF_TUP_REVERSE with 32 arguments"
          , PPMPF_TUP_REVERSE((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0))

PPMPF_TEST( ppmpf_tup_reverse64
          , "PPMPF_TUP_REVERSE with 64 arguments"
          , PPMPF_TUP_REVERSE((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0))

PPMPF_TEST( ppmpf_tup_reverse128
          , "PPMPF_TUP_REVERSE with 128 arguments"
          , PPMPF_TUP_REVERSE((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
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
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0))

PPMPF_TEST( ppmpf_tup2seq8
          , "PPMPF_UTUP2SEQ with 8 items"
          , PPMPF_UTUP2SEQ((0,1,2,3,4,5,6,7))
          , (0)(1)(2)(3)(4)(5)(6)(7) )

PPMPF_TEST( ppmpf_tup2seq16
          , "PPMPF_UTUP2SEQ with 16 items"
          , PPMPF_UTUP2SEQ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f) )

PPMPF_TEST( ppmpf_tup2seq32
          , "PPMPF_UTUP2SEQ with 32 items"
          , PPMPF_UTUP2SEQ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)\
(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f) )

PPMPF_TEST( ppmpf_tup2seq64
          , "PPMPF_UTUP2SEQ with 64 items"
          , PPMPF_UTUP2SEQ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)\
(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)\
(a)(b)(c)(d)(e)(f)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f) )

PPMPF_TEST( ppmpf_tup2seq128
          , "PPMPF_UTUP2SEQ with 128 items"
          , PPMPF_UTUP2SEQ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                          ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)\
(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)\
(a)(b)(c)(d)(e)(f)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)\
(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)\
(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)\
(a)(b)(c)(d)(e)(f)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f))

PPMPF_TEST_BLOCK( ppmpf
                , check_tuple
                , ( ppmpf_tup_empty
                  , ppmpf_tup_empty1
                  , ppmpf_tup_empty2
                  , ppmpf_tup_empty3
                  , ppmpf_tup_empty4
                  , ppmpf_tup_tuple
                  , ppmpf_tup_tuple1
                  , ppmpf_tup_tuple2
                  , ppmpf_tup_tuple4
                  , ppmpf_tup_join
                  , ppmpf_tup_join1
                  , ppmpf_tup_join2
                  , ppmpf_tup_reverse8
                  , ppmpf_tup_reverse16
                  , ppmpf_tup_reverse32
                  , ppmpf_tup_reverse64
                  , ppmpf_tup_reverse128
                  , ppmpf_tup2seq8
                  , ppmpf_tup2seq16
                  , ppmpf_tup2seq32
                  , ppmpf_tup2seq64
                  , ppmpf_tup2seq128 )
                , true
                , "testing ppmpf tuples" )

PPMPF_TEST_MRUN(check_tuple)
