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

#include <odreex/test.hh>
#include <odreex/ppmpf/collections/tuple.hh>

PPMPF_TST( ppmpf_utup2seq8
         , PPMPF_UTUP2SEQ
         , ((0,1,2,3,4,5,6,7))
         , (0)(1)(2)(3)(4)(5)(6)(7)
         , "PPMPF_UTUP2SEQ with 8 items" )

PPMPF_TST( ppmpf_utup2seq16
         , PPMPF_UTUP2SEQ
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
         , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)
         , "PPMPF_UTUP2SEQ with 16 items" )

PPMPF_TST( ppmpf_utup2seq32
         , PPMPF_UTUP2SEQ
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
         , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)\
(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)
         , "PPMPF_UTUP2SEQ with 32 items" )

PPMPF_TST( ppmpf_utup2seq64
         , PPMPF_UTUP2SEQ
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)\
(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)\
(a)(b)(c)(d)(e)(f)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)
         , "PPMPF_UTUP2SEQ with 64 items" )

PPMPF_TST( ppmpf_utup2seq128
         , PPMPF_UTUP2SEQ
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
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
(a)(b)(c)(d)(e)(f)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(a)(b)(c)(d)(e)(f)
          , "PPMPF_UTUP2SEQ with 128 items" )

PPMPF_TEST_BLOCK( ppmpf
                , check_utup2seq
                , ( ppmpf_utup2seq8
                  , ppmpf_utup2seq16
                  , ppmpf_utup2seq32
                  , ppmpf_utup2seq64
                  , ppmpf_utup2seq128 )
                , true
                , "testing PPMPF_UTUP2SEQ" )

PPMPF_TEST_MRUN(check_utup2seq)
