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
#include <odreex/ppmpf/ppfk.hh>
#include <odreex/ppmpf/algorithms/bind.hh>

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
