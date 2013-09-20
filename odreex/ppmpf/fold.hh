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

#ifndef _ODREEX_PPMPF_FOLD_HH_
#define _ODREEX_PPMPF_FOLD_HH_

#include <odreex/ppmpf/core.hh>
#include <odreex/ppmpf/alu.hh>
#include <odreex/ppmpf/tupseq.hh>

/* Assistive macros */
#define PPMPF_FLDT(h,n,sl) \
        PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                    , sl PPMPF_EMPTY \
                    , PPMPF_0F ## n )
#define PPMPF_FLDA(f,sl,g) \
        f(PPMPF_SEQ_GET(sl),g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))
#define PPMPF_FLDB(f,sl,g) \
        PPMPF_DREF(sl)
#define PPMPF_FLDC(h,sl,z) \
        PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                    , PPMPF_0FZ \
                    , PPMPF_ ## z )
#define PPMPF_FLDD(f,sl,g,p,h) \
        (PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                     , PPMPF_FLDB \
                     , PPMPF_FLDA)(f,sl,g)) \
        (p(PPMPF_DREF(PPMPF_SEQ_POP(sl))))

/* NOTE: Macro infrastructure for implementing preprocessor based "folding".
 * As with repeats, recursion depth internals are implemented in such a manner
 * as to allow for folding over 10000 elements as a maximum limit. */
#define PPMPF_0FZ(f,sl,g,p,h,m) sl

/* NOTE: PPMPF_0F* - macro framework component for folding (0) */
#define PPMPF_0F0(f,sl,g,p,h,m) \
        m(h,Z,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)
#define PPMPF_0F1(f,sl,g,p,h,m) \
        m(h,0,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)
#define PPMPF_0F2(f,sl,g,p,h,m) \
        m(h,1,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)
#define PPMPF_0F3(f,sl,g,p,h,m) \
        m(h,2,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)
#define PPMPF_0F4(f,sl,g,p,h,m) \
        m(h,3,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)
#define PPMPF_0F5(f,sl,g,p,h,m) \
        m(h,4,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)
#define PPMPF_0F6(f,sl,g,p,h,m) \
        m(h,5,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)
#define PPMPF_0F7(f,sl,g,p,h,m) \
        m(h,6,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)
#define PPMPF_0F8(f,sl,g,p,h,m) \
        m(h,7,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)
#define PPMPF_0F9(f,sl,g,p,h,m) \
        m(h,8,sl)(f,PPMPF_FLDD(f,sl,g,p,h),g,p,h,m)

/* NOTE: PPMPF_1F* - macro framework component for folding (1) */
#define PPMPF_1FZ(f,sl,g,p,h,m) sl
#define PPMPF_1F0(f,sl,g,p,h,m) \
        PPMPF_0F9(f,sl,g,p,h,m)
#define PPMPF_1F1(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,1F0)(f,PPMPF_0F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_1F2(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,1F1)(f,PPMPF_0F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_1F3(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,1F2)(f,PPMPF_0F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_1F4(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,1F3)(f,PPMPF_0F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_1F5(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,1F4)(f,PPMPF_0F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_1F6(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,1F5)(f,PPMPF_0F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_1F7(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,1F6)(f,PPMPF_0F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_1F8(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,1F7)(f,PPMPF_0F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_1F9(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,1F8)(f,PPMPF_0F9(f,sl,g,p,h,m),g,p,h,m)

/* NOTE: PPMPF_2F* - macro framework component for folding (2) */
#define PPMPF_2FZ(f,sl,g,p,h,m) sl
#define PPMPF_2F0(f,sl,g,p,h,m) \
        PPMPF_1F9(f,sl,g,p,h,m)
#define PPMPF_2F1(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,2F0)(f,PPMPF_1F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_2F2(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,2F1)(f,PPMPF_1F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_2F3(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,2F2)(f,PPMPF_1F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_2F4(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,2F3)(f,PPMPF_1F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_2F5(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,2F4)(f,PPMPF_1F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_2F6(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,2F5)(f,PPMPF_1F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_2F7(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,2F6)(f,PPMPF_1F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_2F8(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,2F7)(f,PPMPF_1F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_2F9(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,2F8)(f,PPMPF_1F9(f,sl,g,p,h,m),g,p,h,m)

/* NOTE: PPMPF_3F* - macro framework component for folding (3) */
#define PPMPF_3FZ(f,sl,g,p,h,m) sl
#define PPMPF_3F0(f,sl,g,p,h,m) \
        PPMPF_2F9(f,sl,g,p,h,m)
#define PPMPF_3F1(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,3F0)(f,PPMPF_2F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_3F2(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,3F1)(f,PPMPF_2F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_3F3(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,3F2)(f,PPMPF_2F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_3F4(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,3F3)(f,PPMPF_2F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_3F5(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,3F4)(f,PPMPF_2F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_3F6(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,3F5)(f,PPMPF_2F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_3F7(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,3F6)(f,PPMPF_2F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_3F8(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,3F7)(f,PPMPF_2F9(f,sl,g,p,h,m),g,p,h,m)
#define PPMPF_3F9(f,sl,g,p,h,m) \
        PPMPF_FLDC(h,sl,3F8)(f,PPMPF_2F9(f,sl,g,p,h,m),g,p,h,m)

/* NOTE: Implementation of PPMPF_SEQ_FOLDL, PPMPF_TUP_FOLDL, folding can occur
 * for up to 10000 ppmpf tuple / sequence items efficiently.
 */
#define PPMPF_FOLD_(f,s,l,g,p,h,m,x0,x1,x2,x3) \
        x3(f,x2(f,x1(f,x0(f,(s)(l),g,p,h,m),g,p,h,m),g,p,h,m),g,p,h,m)

#define PPMPF_SEQ_FOLDL_(f,s,l) \
        PPMPF_FOLD_( f \
                   , s \
                   , l \
                   , PPMPF_SEQ_GET \
                   , PPMPF_SEQ_POP \
                   , PPMPF_SEQ_EMPTY \
                   , PPMPF_FLDT \
                   , PPMPF_CAT(PPMPF_3F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_2F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_1F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_0F,PPMPF_PNX(9)) )

#define PPMPF_SEQ_FOLDL(f,s,l) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_SEQ_FOLDL_(f,s,l)))

#define PPMPF_SEQ_FOLDL_OF(f,l) \
        PPMPF_SEQ_FOLDL(f,,l)

#define PPMPF_TUP_FOLDL_(f,s,l) \
        PPMPF_FOLD_( f \
                   , s \
                   , l \
                   , PPMPF_TUP_GET \
                   , PPMPF_TUP_POP \
                   , PPMPF_TUP_EMPTY \
                   , PPMPF_FLDT \
                   , PPMPF_CAT(PPMPF_3F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_2F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_1F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_0F,PPMPF_PNX(9)) )

#define PPMPF_TUP_FOLDL(f,s,l) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_TUP_FOLDL_(f,s,l)))

#define PPMPF_TUP_FOLDL_OF(f,l) \
        PPMPF_TUP_FOLDL(f,,l)

#endif /* _ODREEX_PPMPF_FOLD_HH_ */
