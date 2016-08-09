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
#include <clause/ppmpf/collections/tuple.hh>

PPMPF_TST( ppmpf_tup_atpos0
         , PPMPF_TUP_ATPOS
         , ((0)(0)(0)(0),())
         , ()
         , "PPMPF_TUP_ATPOS at 0 for 0-tuple" )

PPMPF_TST( ppmpf_tup_atpos1
         , PPMPF_TUP_ATPOS
         , ((0)(0)(0)(0),(a))
         , (a)
         , "PPMPF_TUP_ATPOS at 0 for 1-tuple" )

PPMPF_TST( ppmpf_tup_atpos2
          , PPMPF_TUP_ATPOS
          , ((0)(0)(0)(1),(a,b))
          , (b)
          , "PPMPF_TUP_ATPOS at 1 for 2-tuple" )

PPMPF_TST( ppmpf_tup_atpos3
          , PPMPF_TUP_ATPOS
          , ((0)(0)(0)(2),(a,b,c))
          , (c)
          , "PPMPF_TUP_ATPOS at 2 for 3-tuple" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tup_atpos
                , ( ppmpf_tup_atpos0
                  , ppmpf_tup_atpos1
                  , ppmpf_tup_atpos2
                  , ppmpf_tup_atpos3 )
                , true
                , "testing ppmpf tuple atpos" )

PPMPF_TEST_MRUN(check_tup_atpos)
