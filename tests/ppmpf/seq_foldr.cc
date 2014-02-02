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
#include <odreex/ppmpf/collections/sequence.hh>

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
