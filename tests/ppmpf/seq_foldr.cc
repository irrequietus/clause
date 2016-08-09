/*~
 * Copyright (C) 2013 - 2016 George Makrydakis <george@irrequietus.eu>
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

PPMPF_TST( ppmpf_seq_foldr_10
         , PPMPF_SEQ_FOLDR
         , (PPMPF_CAT, (0), (1)(2)(3)(4)(5)(6)(7)(8)(9))
         , (0123456789)
         , "PPMPF_SEQ_FOLDR with 10 items" )

PPMPF_TST( ppmpf_seq_foldr_20
         , PPMPF_SEQ_FOLDR
         , ( PPMPF_CAT
           , (0)
           , (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
         , (01234567890123456789)
         , "PPMPF_SEQ_FOLDR with 20 items" )

PPMPF_TST( ppmpf_seq_foldr_30
         , PPMPF_SEQ_FOLDR
         , ( PPMPF_CAT
           , (0)
           , (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9) )
         , (012345678901234567890123456789)
         , "PPMPF_SEQ_FOLDR with 30 items" )

PPMPF_TST( ppmpf_seq_foldr_40
         , PPMPF_SEQ_FOLDR
         , ( PPMPF_CAT
           , (0)
           , (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
         , (0123456789012345678901234567890123456789)
         , "PPMPF_SEQ_FOLDR with 40 items" )

PPMPF_TST( ppmpf_seq_foldr_50
         , PPMPF_SEQ_FOLDR
         , ( PPMPF_CAT
           , (0)
           , (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9))
         , (01234567890123456789012345678901234567890123456789)
         , "PPMPF_SEQ_FOLDR with 50 items" )

PPMPF_TST( ppmpf_seq_foldr_60
         , PPMPF_SEQ_FOLDR
         , ( PPMPF_CAT
           , (0)
           , (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9))
         , (012345678901234567890123456789012345678901234567890123456789)
         , "PPMPF_SEQ_FOLDR with 60 items" )

PPMPF_TST( ppmpf_seq_foldr_70
         , PPMPF_SEQ_FOLDR
         , ( PPMPF_CAT
           , (0)
           , (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9))
         , (012345678901234567890123456789012345678901234567890123456789\
0123456789)
         , "PPMPF_SEQ_FOLDR with 70 items" )

PPMPF_TST( ppmpf_seq_foldr_80
         , PPMPF_SEQ_FOLDR
         , ( PPMPF_CAT
           , (0)
           , (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(0)\
             (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9))
         , (012345678901234567890123456789012345678901234567890123456789\
01234567890123456789)
         , "PPMPF_SEQ_FOLDR with 80 items" )

PPMPF_TEST_BLOCK( ppmpf
                , check_seq_foldr
                , ( ppmpf_seq_foldr_10
                  , ppmpf_seq_foldr_20
                  , ppmpf_seq_foldr_30
                  , ppmpf_seq_foldr_40
                  , ppmpf_seq_foldr_50
                  , ppmpf_seq_foldr_60
                  , ppmpf_seq_foldr_70
                  , ppmpf_seq_foldr_80 )
                , true
                , "testing PPMPF_SEQ_FOLDR (10 - 80 items)" )

PPMPF_TEST_MRUN(check_seq_foldr)
