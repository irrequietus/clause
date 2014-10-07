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
#include <clause/ppmpf/collections/tuple.hh>

PPMPF_TST( ppmpf_tup_tuple
          , PPMPF_TUPLE
          , ()
          , ()
          , "PPMPF_TUPLE constructor with no items" )

PPMPF_TST( ppmpf_tup_tuple1
          , PPMPF_TUPLE
          , (x)
          , ((x))
          , "PPMPF_TUPLE constructor with 1 item" )

PPMPF_TST( ppmpf_tup_tuple2
          , PPMPF_TUPLE
          , (1,2)
          , ((1),(2))
          , "PPMPF_TUPLE constructor with 2 items" )

PPMPF_TST( ppmpf_tup_tuple4
         , PPMPF_TUPLE
         , (1,2,3,4)
         , ((1),(2),(3),(4))
         , "PPMPF_TUPLE constructor with 4 items" )

PPMPF_TST( ppmpf_tup_tuple5
         , PPMPF_TUPLE
         , (1,2,3,4,5,6,7,8)
         , ((1),(2),(3),(4),(5),(6),(7),(8))
         , "PPMPF_TUPLE constructor with 8 items" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tuple
                , ( ppmpf_tup_tuple
                  , ppmpf_tup_tuple1
                  , ppmpf_tup_tuple2
                  , ppmpf_tup_tuple4
                  , ppmpf_tup_tuple5 )
                , true
                , "testing ppmpf tuple constructor" )

PPMPF_TEST_MRUN(check_tuple)
