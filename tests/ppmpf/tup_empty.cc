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

PPMPF_TST( ppmpf_tup_empty
         , PPMPF_TUP_EMPTY
         , (())
         , 1
         , "PPMPF_TUP_EMPTY with an empty tuple" )

PPMPF_TST( ppmpf_tup_empty1
         , PPMPF_TUP_EMPTY
         , ((a single argument))
         , 0
         , "PPMPF_TUP_EMPTY with a single argument" )

PPMPF_TST( ppmpf_tup_empty2
         , PPMPF_TUP_EMPTY
         , ((,))
         , 0
         , "PPMPF_TUP_EMPTY with a single comma" )

PPMPF_TST( ppmpf_tup_empty3
         , PPMPF_TUP_EMPTY
         , ((PPMPF_TEST))
         , 0
         , "PPMPF_TUP_EMPTY with a macro as argument" )

PPMPF_TST( ppmpf_tup_empty4
         , PPMPF_TUP_EMPTY
         , ((()))
         , 0
         , "PPMPF_TUP_EMPTY with a balanced parenthesis" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tup_empty
                , ( ppmpf_tup_empty
                  , ppmpf_tup_empty1
                  , ppmpf_tup_empty2
                  , ppmpf_tup_empty3
                  , ppmpf_tup_empty4 )
                , true
                , "testing ppmpf tuple emptiness" )

PPMPF_TEST_MRUN(check_tup_empty)
