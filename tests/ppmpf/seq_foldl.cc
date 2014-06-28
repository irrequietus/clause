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

PPMPF_TST( ppmpf_seq_foldl_10 
         , PPMPF_SEQ_FOLDL
         , (PPMPF_CAT, (0), (1)(2)(3)(4)(5)(6)(7)(8)(9))
         , (0123456789)
         , "PPMPF_SEQ_FOLDL with 10 items" )

PPMPF_TST( ppmpf_seq_foldl_20
         , PPMPF_SEQ_FOLDL
         , ( PPMPF_CAT
           , (0)
           , (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
         , (01234567890123456789)
         , "PPMPF_SEQ_FOLDL with 20 items" )

PPMPF_TEST_BLOCK( ppmpf
                , check_seq_foldl
                , ( ppmpf_seq_foldl_10
                  , ppmpf_seq_foldl_20 )
                , true
                , "testing ppmpf PPMPF_SEQ_FOLDL (10 and 20 items)" )

PPMPF_TEST_MRUN(check_seq_foldl)
