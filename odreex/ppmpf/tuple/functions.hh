/* --
 * Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_PPMPF_TUPLE_FUNCTIONS_HH_
#define _ODREEX_PPMPF_TUPLE_FUNCTIONS_HH_

#include <odreex/ppmpf/core.hh>
#include <odreex/ppmpf/tupseq.hh>
#include <odreex/ppmpf/fold.hh>

/* NOTE: PPMPF_TUP2SEQ: convert a ppmpf tuple to a ppmpf sequence, preserving
 * the original order of elements */
#define PPMPF_TUP2SEQ(tup) \
        PPMPF_DREF( \
            PPMPF_TUP_FOLDL( PPMPF_T2S_ \
                           , (PPMPF_TUP_GET(tup)) \
                           , PPMPF_TUP_POP(tup) ) )

/* NOTE: PPMPF_TUP_JOIN: Join two ppmpf tuples together.*/
#define PPMPF_TUP_JOIN(z,x) \
    (PPMPF_DREF(z)PPMPF_IFELSE( PPMPF_NOR( PPMPF_TUP_EMPTY(z) \
                                         , PPMPF_TUP_EMPTY(x)) \
                              , PPMPF_COMMA \
                              , PPMPF_EMPTY)()PPMPF_DREF(x))

/* This performs the same task as PPMPF_TUP_JOIN_ but on a "raw" tuple. */
#define PPMPF_TUP_JOIN_(z,...) \
    (PPMPF_DREF(z)PPMPF_IFELSE( PPMPF_NOR( PPMPF_TUP_EMPTY(z) \
                                         , PPMPF_TUP_EMPTY((__VA_ARGS__))) \
                              , PPMPF_COMMA \
                              , PPMPF_EMPTY)()__VA_ARGS__)

#endif /* _ODREEX_PPMPF_TUPLE_FUNCTIONS_HH_ */
