/* --
 * Copyright (C) 2013,2014 George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH_
#define _ODREEX_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH_

#include <odreex/ppmpf/kernel/cpro/empty.hh>
#include <odreex/ppmpf/collections/tuple/essence.hh>
#include <odreex/ppmpf/algorithms/fold.hh>
#include <odreex/ppmpf/algorithms/zip.hh>
#include <odreex/ppmpf/algorithms/functional.hh>
#include <odreex/ppmpf/collections/tuple/atpos.hh>

/* NOTE: PPMPF_TUP_GET - Get the first element of a tuple, enclosed in ()
 *       PPMPF_TUP_POP - Remove the first element, get the rest.
 * Should be clear now, a tuple is a () enclosed list of comma separated tokens,
 * while a sequence is a list of tuples separated by whitespace. A tuple with
 * no commas is referred to as "unit".
 */
#define PPMPF_TUP_GET____(x) x
#define PPMPF_TUP_GET___(x,...) PPMPF_TUP_GET____(x)
#define PPMPF_TUP_GET__(...) PPMPF_TUP_GET___(__VA_ARGS__,)
#define PPMPF_TUP_GET_(...) PPMPF_TUP_GET__(__VA_ARGS__,)
#define PPMPF_TUP_GET(t) (PPMPF_TUP_GET___(PPMPF_TUP_GET_ t,))

/* NOTE: for "safe" tuples. */
#define PPMPF_TUP_1GET(t) PPMPF_TUP_GET___(PPMPF_TUP_GET_ t,)

/* NOTE: PMPF_TUP_POP: will remove the first element of a tuple. */
#define PPMPF_TUP_POP___(x,...) (__VA_ARGS__)
#define PPMPF_TUP_POP__(...) PPMPF_TUP_POP___(__VA_ARGS__)
#define PPMPF_TUP_POP_(...) \
        PPMPF_IFELSE( PPMPF_JUST(PPMPF_EMPTY_C PPMPF_TUP_POP___(__VA_ARGS__,))\
                    , PPMPF_UNIT \
                    , PPMPF_TUP_POP__)(__VA_ARGS__)
#define PPMPF_TUP_POP(x) PPMPF_TUP_POP_ x

/* NOTE: PPMPF_TUP_EMPTY: Checking for empty ppmpf tuple. */
#define PPMPF_TUP_EMPTY(t) \
        PPMPF_EMPTY_A( PPMPF_TUP_POP(PPMPF_TUP_POP((PPMPF_DREF(t),~))) \
                     , PPMPF_JUST PPMPF_TUP_GET((PPMPF_DREF(t),~)) )

/* NOTE: for "safe" tuples */
#define PPMPF_TUP_1EMPTY(t) \
        PPMPF_EMPTY_A( PPMPF_TUP_POP(PPMPF_TUP_POP((PPMPF_DREF(t),~))) \
                     , PPMPF_TUP_1GET((PPMPF_DREF(t),~)) )
                     
/* NOTE: PPMPF_UTUP_FOLDL: high order function performing a left fold over an
 *       unsafe / raw ppmpf tuple.
 */
#define PPMPF_UTUP_FOLDL(f,s,t) \
        PPMPF_FLDX0G( f \
                    , (s)(t) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0I \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_UTUP_FOLDL_OF: high order function performing a left fold over an
 *       unsafe / raw ppmpf tuple, with no fold seed.
 */
#define PPMPF_UTUP_FOLDL_OF(f,t) \
        PPMPF_FLDX0G( f \
                    , ((PPMPF_TUP_GET(t)))(PPMPF_TUP_POP(t)) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0I \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_UTUP_FOLDL: high order function performing a right fold over an
 *       unsafe / raw ppmpf tuple.
 */
#define PPMPF_UTUP_FOLDR(f,s,t) \
        PPMPF_FLDX0G( f \
                    , (s)(PPMPF_TUP_REVERSE(t)) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0O \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_TUPLE: safe ppmpf tuple constructor */
#define PPMPF_TUPLE(...) \
        PPMPF_IFELSE( PPMPF_TUP_EMPTY((__VA_ARGS__)) \
                    , PPMPF_UNIT \
                    , PPMPF_UTUP_FOLDL_OF )\
        (PPMPF_FLDX0S,(__VA_ARGS__))

/* NOTE: PPMPF_TUP_FOLDL: high order function performing a left fold over a
 *       ppmpf tuple. */
#define PPMPF_TUP_FOLDL(f,s,l) \
        PPMPF_SEQ_GET(PPMPF_TUP_FOLD_(f,s,l,PPMPF_FLDAL))

/* NOTE: PPMPF_TUP_FOLDL: high order function performing a left fold over a
 *       ppmpf tuple. */
#define PPMPF_TUP_FOLDL_OF(f,l) \
        PPMPF_TUP_FOLDL(f,PPMPF_TUP_GET(l),PPMPF_TUP_POP(l))

/* NOTE: PPMPF_TUP_REVERSE: reverses a ppmpf tuple. */
#define PPMPF_TUP_REVERSE(tup) \
        PPMPF_IFELSE( PPMPF_OR( PPMPF_TUP_EMPTY(PPMPF_TUP_POP(tup)) \
                              , PPMPF_TUP_EMPTY(tup) ) \
                    , PPMPF_JUST \
                    , PPMPF_TUP_REVERSE_)(tup)

/* NOTE: PPMPF_TUP_FOLDR: high order function performing a right fold over a
 *       ppmpf tuple. */
#define PPMPF_TUP_FOLDR(f,s,l) \
        PPMPF_SEQ_GET(PPMPF_TUP_FOLDR__( f \
                                       , ( PPMPF_DREF(s) \
                                         , PPMPF_DREF(PPMPF_TUP_REVERSE(l)))))

/* NOTE: PPMPF_TUP_FOLDR_OF: high order function performing a right fold over a
 *       ppmpf tuple. */
#define PPMPF_TUP_FOLDR_OF(f,l) \
        PPMPF_SEQ_GET(PPMPF_TUP_FOLDR__(f,PPMPF_TUP_REVERSE(l)))

/* NOTE: PPMPF_TUP_SIZEOF(tup) returns the number of tuple members existing
 * in a given tuple (tup), which is a parenthesis enclosed comma separated
 * series of preprocessor tokens.
 */
#define PPMPF_TUP_SIZEOF(tup) \
        PPMPF_DREF(PPMPF_TUP_FOLDL(PPMPF_PLUS__,(PPMPF_IMINV()),tup))

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
                                           , ((PPMPF_TMAP_AUX1(f,t)) ) ) ) \
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

#endif /* _ODREEX_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH_ */
