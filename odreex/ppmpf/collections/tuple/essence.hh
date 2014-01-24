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

#define PPMPF_UTUP_FOLDR_(f,t) \
        PPMPF_FLDX1V( f \
                    , (PPMPF_TUP_GET(t))(PPMPF_TUP_POP(t)) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0O \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

#define PPMPF_TUP_FOLDR_(f,t) \
        PPMPF_FLDX1V( f \
                    , (PPMPF_TUP_1GET(t))(PPMPF_TUP_POP(t)) \
                    , PPMPF_TUP_1GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0O \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

#define PPMPF_TUP_REVERSE_(tup) \
        (PPMPF_DREF(PPMPF_UTUP_FOLDL_OF(PPMPF_FLDRT_, \
                    PPMPF_TUP_POP(tup))),PPMPF_DREF(PPMPF_TUP_GET(tup)))

#endif /* _ODREEX_PPMPF_COLLECTIONS_TUPLE_ESSENCE_HH_ */
