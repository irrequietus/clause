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
#include <clause/ppmpf/collections/sequence.hh>

PPMPF_TST( ppmpf_seq_zipwith
         , PPMPF_SEQ_ZIPWITH
         , ( PPMPF_VCAT
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
         , (a0)(b1)(c2)(d3)(e4)(f5)(g6)(h7)(i8)(j9)
         , "PPMPF_SEQ_ZIPWITH (zipwith using 2 ppmpf sequences)" )

PPMPF_TST( ppmpf_seq_zipwith3
         , PPMPF_SEQ_ZIPWITH3
         , ( PPMPF_VCAT
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
         , (a0a)(b1b)(c2c)(d3d)(e4e)(f5f)(g6g)(h7h)(i8i)(j9j)
         , "PPMPF_SEQ_ZIPWITH3 (zipwith using 3 ppmpf sequences)" )

PPMPF_TST( ppmpf_seq_zipwith4
         , PPMPF_SEQ_ZIPWITH4
         , ( PPMPF_VCAT
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
         , (a0a0)(b1b1)(c2c2)(d3d3)(e4e4)(f5f5)(g6g6)(h7h7)(i8i8)(j9j9)
         , "PPMPF_SEQ_ZIPWITH4 (zipwith using 4 ppmpf sequences)" )

PPMPF_TST( ppmpf_seq_zipwith5
         , PPMPF_SEQ_ZIPWITH5
         , ( PPMPF_VCAT
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
         , (a0a0a)(b1b1b)(c2c2c)(d3d3d)(e4e4e)(f5f5f)(g6g6g)(h7h7h)(i8i8i)\
(j9j9j)
         , "PPMPF_SEQ_ZIPWITH5 (zipwith using 5 ppmpf sequences)" )

PPMPF_TST( ppmpf_seq_zipwith6
         , PPMPF_SEQ_ZIPWITH6
         , ( PPMPF_VCAT
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
         , (a0a0a0)(b1b1b1)(c2c2c2)(d3d3d3)(e4e4e4)(f5f5f5)(g6g6g6)(h7h7h7)\
(i8i8i8)(j9j9j9)
         , "PPMPF_SEQ_ZIPWITH6 (zipwith using 6 ppmpf sequences)" )

PPMPF_TST( ppmpf_seq_zipwith7
         , PPMPF_SEQ_ZIPWITH7
         , ( PPMPF_VCAT
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
         , (a0a0a0a)(b1b1b1b)(c2c2c2c)(d3d3d3d)(e4e4e4e)(f5f5f5f)(g6g6g6g)\
(h7h7h7h)(i8i8i8i)(j9j9j9j)
         , "PPMPF_SEQ_ZIPWITH7 (zipwith using 7 ppmpf sequences)" )

PPMPF_TST( ppmpf_seq_zipwith8
         , PPMPF_SEQ_ZIPWITH8
         , ( PPMPF_VCAT
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
         , (a0a0a0a0)(b1b1b1b1)(c2c2c2c2)(d3d3d3d3)(e4e4e4e4)(f5f5f5f5)\
(g6g6g6g6)(h7h7h7h7)(i8i8i8i8)(j9j9j9j9)
         , "PPMPF_SEQ_ZIPWITH8 (zipwith using 8 ppmpf sequences)" )

PPMPF_TST( ppmpf_seq_zipwith9
         , PPMPF_SEQ_ZIPWITH9
         , ( PPMPF_VCAT
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)
           , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)
           , (a)(b)(c)(d)(e)(f)(g)(h)(i)(j) )
         , (a0a0a0a0a)(b1b1b1b1b)(c2c2c2c2c)(d3d3d3d3d)(e4e4e4e4e)(f5f5f5f5f)\
(g6g6g6g6g)(h7h7h7h7h)(i8i8i8i8i)(j9j9j9j9j)
         , "PPMPF_SEQ_ZIPWITH9 (zipwith using 9 ppmpf sequences)" )

PPMPF_TEST_BLOCK( ppmpf
                , check_sequence_zipwith
                , ( ppmpf_seq_zipwith
                  , ppmpf_seq_zipwith3
                  , ppmpf_seq_zipwith4
                  , ppmpf_seq_zipwith5
                  , ppmpf_seq_zipwith6
                  , ppmpf_seq_zipwith7
                  , ppmpf_seq_zipwith8
                  , ppmpf_seq_zipwith9 )
                , true
                , "testing ppmpf PPMPF_SEQ_ZIPWITH (2 - 9 sequences)" )

PPMPF_TEST_MRUN(check_sequence_zipwith)

