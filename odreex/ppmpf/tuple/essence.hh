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

#ifndef _ODREEX_PPMPF_TUPLE_ESSENCE_HH_
#define _ODREEX_PPMPF_TUPLE_ESSENCE_HH_

#ifndef _ODREEX_PPMPF_TUPLE_FUNCTIONS_HH_
#error ppmpf warning: header <odreex/ppmpf/tuple/functions.hh> must precede.
#endif

#include <odreex/ppmpf/base.hh>
#include <odreex/ppmpf/core.hh>
#include <odreex/ppmpf/tupseq.hh>

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

#endif /* _ODREEX_PPMPF_TUPLE_ESSENCE_HH_ */