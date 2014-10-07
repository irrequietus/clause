/*~
 * Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
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

PPMPF_TST( ppmpf_seq_at09_0
         , PPMPF_SEQ_AT09
         , (0,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (a)
         , "PPMPF_SEQ_AT09 - at index 0" )

PPMPF_TST( ppmpf_seq_at09_1
         , PPMPF_SEQ_AT09
         , (1,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (b)
         , "PPMPF_SEQ_AT09 - at index 1" )

PPMPF_TST( ppmpf_seq_at09_2
         , PPMPF_SEQ_AT09
         , (2,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (c)
         , "PPMPF_SEQ_AT09 - at index 2" )

PPMPF_TST( ppmpf_seq_at09_3
         , PPMPF_SEQ_AT09
         , (3,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (d)
         , "PPMPF_SEQ_AT09 - at index 3" )

PPMPF_TST( ppmpf_seq_at09_4
         , PPMPF_SEQ_AT09
         , (4,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (e)
         , "PPMPF_SEQ_AT09 - at index 4" )

PPMPF_TST( ppmpf_seq_at09_5
         , PPMPF_SEQ_AT09
         , (5,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (f)
         , "PPMPF_SEQ_AT09 - at index 5" )

PPMPF_TST( ppmpf_seq_at09_6
         , PPMPF_SEQ_AT09
         , (6,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (g)
         , "PPMPF_SEQ_AT09 - at index 6" )

PPMPF_TST( ppmpf_seq_at09_7
         , PPMPF_SEQ_AT09
         , (7,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (h)
         , "PPMPF_SEQ_AT09 - at index 7" )

PPMPF_TST( ppmpf_seq_at09_8
         , PPMPF_SEQ_AT09
         , (8,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (i)
         , "PPMPF_SEQ_AT09 - at index 8" )

PPMPF_TST( ppmpf_seq_at09_9
         , PPMPF_SEQ_AT09
         , (9,(a)(b)(c)(d)(e)(f)(g)(h)(i)(j))
         , (j)
         , "PPMPF_SEQ_AT09 - at index 9" )

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
                  , ppmpf_seq_at09_9 )
                , true
                , "testing ppmpf PPMPF_SEQ_AT09 in index range [0,9]" )

PPMPF_TEST_MRUN(check_seq_at09)
