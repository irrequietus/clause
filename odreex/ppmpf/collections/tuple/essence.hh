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

#ifndef _ODREEX_PPMPF_COLLECTIONS_TUPLE_ESSENCE_HH_
#define _ODREEX_PPMPF_COLLECTIONS_TUPLE_ESSENCE_HH_

#ifndef _ODREEX_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH_
#error ppmpf: <odreex/ppmpf/collections/tuple/functions.hh> must precede.
#endif

#include <odreex/ppmpf/kernel/cpro/base.hh>
#include <odreex/ppmpf/kernel/cpro/core.hh>
#include <odreex/ppmpf/kernel/cpro/empty.hh>

/* Assistive macro for tuple -> sequence conversion. */
#define PPMPF_T2S_(a,b) PPMPF_JUST(a)(b)

/* This performs the same task as PPMPF_TUP_JOIN but on a "raw" tuple. */
#define PPMPF_TUP_JOIN_(z,...) PPMPF_TUP_JOIN(z,(__VA_ARGS__))

/* Assistive macro function, for raw tuple macro "splitting" */
#define PPMPF_TUP_SPLIT__(x,...) x,(__VA_ARGS__)
#define PPMPF_TUP_SPLIT___(...) __VA_ARGS__()
#define PPMPF_TUP_SPLIT_(...) \
        PPMPF_IFELSE( PPMPF_TUP_EMPTY(PPMPF_TUP_POP((__VA_ARGS__))) \
                    , PPMPF_TUP_SPLIT___ \
                    , PPMPF_TUP_SPLIT__)(__VA_ARGS__)

#define PPMPF_TMAP_AUX1(f,t) \
        PPMPF_APPLY(f,PPMPF_DREF(PPMPF_TUP_GET(t)))

// PPMPF_DREF() applied by default, aka _1 is default
#define PPMPF_FLDMT_(f,sl,g,...) \
        PPMPF_TUP_JOIN( \
            PPMPF_DREF(PPMPF_SEQ_GET(sl)) \
        ,   ((PPMPF_APPLY( f \
                         , PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))))))

#define PPMPF_TUP_FOLD_(f,s,l,i) \
        PPMPF_FOLD_( PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , PPMPF_FOLD_DFUNC \
                                 , PPMPF_JUST )(f) \
                   , s \
                   , l \
                   , PPMPF_TUP_GET \
                   , PPMPF_TUP_POP \
                   , PPMPF_TUP_EMPTY \
                   , PPMPF_FLDT \
                   , PPMPF_CAT(PPMPF_3F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_2F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_1F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_0F,PPMPF_PNX(9)) \
                   , PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , i##_ \
                                 , i )\
                   , PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , PPMPF_FOLD_DWRAP \
                                 , PPMPF_JUST )(f), )

#define PPMPF_UTUP_FOLDR_(f,t) \
        PPMPF_FLDX0G( f \
            , (PPMPF_TUP_GET(t))(PPMPF_TUP_POP(t)) \
            , PPMPF_TUP_GET \
            , PPMPF_TUP_POP \
            , PPMPF_TUP_EMPTY \
            , PPMPF_FLDX0O \
            , PPMPF_FLDX0L  \
            , PPMPF_FLDX0K ,)

#define PPMPF_TUP_REVERSE_(tup) \
        (PPMPF_DREF(PPMPF_UTUP_FOLDL_OF(PPMPF_FLDRT_, \
                    PPMPF_TUP_POP(tup))),PPMPF_DREF(PPMPF_TUP_GET(tup)))

#define PPMPF_TUP_FOLDR__(f,l) \
        PPMPF_TUP_FOLD_(f,PPMPF_TUP_GET(l),PPMPF_TUP_POP(l),PPMPF_FLDAR)


#endif /* _ODREEX_PPMPF_COLLECTIONS_TUPLE_ESSENCE_HH_ */
