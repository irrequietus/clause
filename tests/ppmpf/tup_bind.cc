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
#include <clause/ppmpf/ppfk.hh>
#include <clause/ppmpf/algorithms/bind.hh>

PPMPF_TST( ppmpf_tup_bind_0
         , PPMPF_TUP_BIND
         , (f,(__0)(_1,_2),(1),(2))
         , f((1),(2))
         , "PPMPF_TUP_BIND with (__0)(_1,_2)" )

PPMPF_TST( ppmpf_tup_bind_1
         , PPMPF_TUP_BIND
         , (f,(__0)(__1,__2),(1),(2))
         , f(1,2)
         , "PPMPF_TUP_BIND with (__0)(__1,__2)" )

PPMPF_TST( ppmpf_tup_bind_2
         , PPMPF_TUP_BIND
         , (f,(_0)(_1,_2),(1),(2))
         , (f((1),(2)))
         , "PPMPF_TUP_BIND with (_0)(_1,_2)" )

PPMPF_TST( ppmpf_tup_bind_3
         , PPMPF_TUP_BIND
         , (f,(_0)(__1,__2),(1),(2))
         , (f(1,2))
         , "PPMPF_TUP_BIND with (_0)(__1,__2)" )

PPMPF_TST( ppmpf_tup_bind_4
         , PPMPF_TUP_BIND
         , (f,(__0)(_2,_1),(1),(2))
         , f((2),(1))
         , "PPMPF_TUP_BIND with (__0)(_2,_1)" )

PPMPF_TST( ppmpf_tup_bind_5
         , PPMPF_TUP_BIND
         , (f,(__0)(__2,__1),(1),(2))
         , f(2,1)
         , "PPMPF_TUP_BIND with (__0)(__2,__1)" )

PPMPF_TST( ppmpf_tup_bind_6
         , PPMPF_TUP_BIND
         , (f,(_0)(_2,_1),(1),(2))
         , (f((2),(1)))
         , "PPMPF_TUP_BIND with (_0)(_2,_1)" )

PPMPF_TST( ppmpf_tup_bind_7
         , PPMPF_TUP_BIND
         , (f,(_0)(__2,__1),(1),(2))
         , (f(2,1))
         , "PPMPF_TUP_BIND with (_0)(__2,__1)" )

PPMPF_TST( ppmpf_tup_bind_8
         , PPMPF_TUP_BIND
         , (f,(_0)(__2,__1,_1,_2,__2),(1),(2))
         , (f(2,1,(1),(2),2))
         , "PPMPF_TUP_BIND with (_0)(__2,__1,_1,_2,__2)" )

PPMPF_TST( ppmpf_tup_bind_9
         , PPMPF_TUP_BIND
         , (f,(_0)(__2,_3,__9,_4,__5),(1),(2),(3),(4),(5),(6),(7),(8),(9))
         , (f(2,(3),9,(4),5))
         , "PPMPF_TUP_BIND with (_0)(__2,_3,__9,_4,__5)" )

PPMPF_TST( ppmpf_tup_bind_a
         , PPMPF_TUP_BIND
         , (f,(__0)(__2,_3,__9,_4,__5),(1),(2),(3),(4),(5),(6),(7),(8),(9))
         , f(2,(3),9,(4),5)
         , "PPMPF_TUP_BIND with (__0)(__2,_3,__9,_4,__5)" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tup_bind
                , ( ppmpf_tup_bind_0
                  , ppmpf_tup_bind_1
                  , ppmpf_tup_bind_2
                  , ppmpf_tup_bind_3
                  , ppmpf_tup_bind_5
                  , ppmpf_tup_bind_6
                  , ppmpf_tup_bind_7
                  , ppmpf_tup_bind_8
                  , ppmpf_tup_bind_9
                  , ppmpf_tup_bind_a )
               , true
               , "testing ppmpf unsafe tuple bind" )

PPMPF_TEST_MRUN(check_tup_bind)
