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

#include <odreex/ppmpf/tuple/essence.hh>
#include <odreex/ppmpf/fold.hh>
#include <odreex/ppmpf/tuple/atpos.hh>

/* NOTE: PPMPF_TUP2SEQ: convert a ppmpf tuple to a ppmpf sequence, preserving
 * the original order of elements. */
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

/* NOTE: PPMPF_TUP_SPLIT: Split a ppmpf tuple into pair of two tuples at a
 * given position n */
#define PPMPF_TUP_SPLIT(n,tup) \
        PPMPF_COMPOSE( ((), PPMPF_DREF(tup)) \
                     , (PPMPF_TUP_SPLIT_)    \
                       (PPMPF_CAT(PPMPF_TUP_A0,PPMPF_DIGIT(0,n))) \
                       (PPMPF_CAT(PPMPF_TUP_A1,PPMPF_PNX(PPMPF_DIGIT(1,n)))) \
                       (PPMPF_CAT(PPMPF_TUP_A2,PPMPF_PNX(PPMPF_DIGIT(2,n)))) \
                       (PPMPF_CAT(PPMPF_TUP_A3,PPMPF_PNX(PPMPF_DIGIT(3,n)))))

/* NOTE: PPMPF_TUP_SPLITL: Split a ppmpf tuple into pair of two tuples at a
 * given position n and return the first of the two (left) */
#define PPMPF_TUP_SPLITL(n,tup) \
        PPMPF_COMPOSE( PPMPF_TUP_SPLIT(PPMPF_PREV(n),tup) \
                     , (PPMPF_DPAR)    \
                       (PPMPF_DPAR)    \
                       (PPMPF_TUP_GET) \
                       (PPMPF_ENCLOSE) )

/* NOTE: PPMPF_TUP_SPLITR: Split a ppmpf tuple into pair of two tuples at a
 * given position n and return the second of the two (right) */
#define PPMPF_TUP_SPLITR(n,tup) \
        PPMPF_COMPOSE( PPMPF_TUP_SPLIT(PPMPF_PREV(n),tup) \
                     , (PPMPF_DPAR)    \
                       (PPMPF_DPAR)    \
                       (PPMPF_TUP_POP) \
                       (PPMPF_ENCLOSE) )

/* NOTE: PPMPF_TUP_ATPOS: return ppmpf element at position n */
#define PPMPF_TUP_ATPOS(n,tup) \
        PPMPF_COMPOSE( PPMPF_TUP_SPLIT(PPMPF_PREV(n),tup) \
                     , (PPMPF_DPAR)    \
                       PPMPF_IFELSE( PPMPF_IEQL(n,PPMPF_IMINV()) \
                                   , (PPMPF_DPAR)                \
                                     (PPMPF_TUP_GET)             \
                                   , (PPMPF_TUP_GET)             \
                                     (PPMPF_DPAR)                \
                                     (PPMPF_TUP_POP) )           \
                       (PPMPF_ENCLOSE))

/* NOTE: PPMPF_TUP_MAP: An implementation of the map high order function for
 * ppmpf tuple constructs.
 */
#define PPMPF_TUP_MAP(f,t) \
        PPMPF_DREF( \
            PPMPF_SEQ_GET( \
                PPMPF_FOLD_( f \
                           , ( PPMPF_IFELSE( PPMPF_TUP_EMPTY(t) \
                                           , () \
                                           , ((PPMPF_TMAP_AUX1(f,t) ) ) ) ) \
                           , PPMPF_TUP_POP(t) \
                           , PPMPF_TUP_GET \
                           , PPMPF_TUP_POP \
                           , PPMPF_TUP_EMPTY \
                           , PPMPF_FLDT \
                           , PPMPF_CAT(PPMPF_3F,PPMPF_PNX(9)) \
                           , PPMPF_CAT(PPMPF_2F,PPMPF_PNX(9)) \
                           , PPMPF_CAT(PPMPF_1F,PPMPF_PNX(9)) \
                           , PPMPF_CAT(PPMPF_0F,PPMPF_PNX(9)) \
                           , PPMPF_FLDMT_, )))

#endif /* _ODREEX_PPMPF_TUPLE_FUNCTIONS_HH_ */
