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

PPMPF_TST( ppmpf_tup_join
         , PPMPF_TUP_JOIN
         , ((a,a),(a,a))
         , (a,a,a,a)
         , "PPMPF_TUP_JOIN of 2 tuples with 2 items each" )

PPMPF_TST( ppmpf_tup_join1
          , PPMPF_TUP_JOIN
          , ((a,a,a,a),(b,b,b,b))
          , (a,a,a,a,b,b,b,b)
          , "PPMPF_TUP_JOIN of 2 tuples with 4 items each" )

PPMPF_TST( ppmpf_tup_join2
          , PPMPF_UTUP_FOLDL_OF
          , ( PPMPF_TUP_JOIN
            , ((a,a),(b,b),(c,c),(d,d)) )
          , ((a,a,b,b,c,c,d,d))
          , "PPMPF_TUP_JOIN 4 tuples using PPMPF_UTUP_FOLDL_OF" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tup_join
                , ( ppmpf_tup_join
                  , ppmpf_tup_join1
                  , ppmpf_tup_join2 )
                , true
                , "testing ppmpf tuple joining" )

PPMPF_TEST_MRUN(check_tup_join)
