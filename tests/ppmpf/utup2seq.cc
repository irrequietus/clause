/*~
 * Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
 * 
 * This file is part of 'clause', a highly generic C++ meta-programming library,
 * subject to the terms and conditions of the Mozilla Public License v 2.0. If
 * a copy of the MPLv2 license text was not distributed with this file, you can
 * obtain it at: http://mozilla.org/MPL/2.0/.
 * 
 * The 'clause' library is an experimental library in active development with
 * a source code repository at: https://github.com/irrequietus/clause.git and
 * issue tracker at https://github.com/irrequietus/clause/issues.
 * 
 */

#include <clause/test.hh>
#include <clause/ppmpf/collections/tuple.hh>

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
