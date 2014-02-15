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

#ifndef _ODREEX_PPMPF_ALGORITHMS_FOLD_HH_
#define _ODREEX_PPMPF_ALGORITHMS_FOLD_HH_

#include <odreex/ppmpf/kernel/cpro/core.hh>
#include <odreex/ppmpf/kernel/logic/alu.hh>
#include <odreex/ppmpf/collections/tuple/functions.hh>
#include <odreex/ppmpf/collections/sequence/functions.hh>
#include <odreex/ppmpf/algorithms/fldaux.hh>

/* Assistive macros */

#define PPMPF_FOLD_DFUNC(x) \
        PPMPF_DREF(PPMPF_UTUP_GET(PPMPF_DREF(PPMPF_UTUP_GET(x))))

#define PPMPF_FOLD_DWRAP(x) \
        PPMPF_CAT( \
            PPMPF_FOLD_PLHF \
        ,   PPMPF_CAT( PPMPF_DREF(PPMPF_TUP_POP(PPMPF_DREF(PPMPF_UTUP_GET(x))))\
                     , PPMPF_DREF(PPMPF_UTUP_GET(PPMPF_TUP_POP(x)))) )

#define PPMPF_FOLD_PLHF_1_2(f,a,b) f(PPMPF_DREF(a),PPMPF_DREF(b))
#define PPMPF_FOLD_PLHF__1_2(f,a,b) f(a,PPMPF_DREF(b))
#define PPMPF_FOLD_PLHF_1__2(f,a,b) f(PPMPF_DREF(a),b)
#define PPMPF_FOLD_PLHF__2__1(f,a,b) f(b,a)
#define PPMPF_FOLD_PLHF_2_1(f,a,b) f(PPMPF_DREF(b),PPMPF_DREF(a))
#define PPMPF_FOLD_PLHF__2_1(f,a,b) f(b,PPMPF_DREF(a))
#define PPMPF_FOLD_PLHF_2__1(f,a,b) f(PPMPF_DREF(b),a)
#define PPMPF_FOLD_PLHF__2__1(f,a,b) f(b,a)
#define PPMPF_FOLD_PLHF_1_1(f,a,b) f(PPMPF_DREF(a),PPMPF_DREF(a))
#define PPMPF_FOLD_PLHF__1_1(f,a,b) f(a,PPMPF_DREF(a))
#define PPMPF_FOLD_PLHF_1__1(f,a,b) f(PPMPF_DREF(a),a)
#define PPMPF_FOLD_PLHF__1__1(f,a,b) f(a,a)
#define PPMPF_FOLD_PLHF_2_2(f,a,b) f(PPMPF_DREF(b),PPMPF_DREF(b))
#define PPMPF_FOLD_PLHF__2_2(f,a,b) f(b,PPMPF_DREF(b))
#define PPMPF_FOLD_PLHF_2__2(f,a,b) f(PPMPF_DREF(b),b)
#define PPMPF_FOLD_PLHF__2__2(f,a,b) f(b,b)

#define PPMPF_FLDT(h,n,sl) \
        PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                    , sl PPMPF_EMPTY \
                    , PPMPF_CAT(PPMPF_0F,n) )
#define PPMPF_FLDAL(f,sl,g,...) \
        f(PPMPF_SEQ_GET(sl),g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))
#define PPMPF_FLDAR(f,sl,g,...) \
        f(g(PPMPF_DREF(PPMPF_SEQ_POP(sl))),PPMPF_SEQ_GET(sl))
#define PPMPF_FLDAL_(f,sl,g,c,...) \
        c(f,PPMPF_SEQ_GET(sl),g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))
#define PPMPF_FLDAR_(f,sl,g,c,...) \
        c(f,g(PPMPF_DREF(PPMPF_SEQ_POP(sl))),PPMPF_SEQ_GET(sl))
#define PPMPF_FLDB(f,sl,g,...) \
        PPMPF_DREF(sl)
#define PPMPF_FLDC(h,sl,z) \
        PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                    , PPMPF_0FZ \
                    , PPMPF_ ## z )
#define PPMPF_FLDD(f,sl,g,p,h,i,...) \
        (PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                     , PPMPF_FLDB \
                     , i )(f,sl,g,__VA_ARGS__)) \
        (p(PPMPF_DREF(PPMPF_SEQ_POP(sl))))
#define PPMPF_FLDRS_(a,b) PPMPF_JUST(b)PPMPF_DREF(a)
#define PPMPF_FLDRT_(a,b) \
        b,a

/* NOTE: Macro infrastructure for implementing preprocessor based "folding".
 * As with repeats, recursion depth internals are implemented in such a manner
 * as to allow for folding over 10000 elements as a maximum limit.
 * 
 * WARNING: This is going to be deprecated in favour of a better implementation
 * already present within the same header; left here for transition purposes.
 */
#define PPMPF_0FZ(f,sl,g,p,h,i,m,...) sl

/* NOTE: PPMPF_0F* - macro framework component for folding (0) */
#define PPMPF_0F0(f,sl,g,p,h,i,m,...) \
        m(h,Z,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_0F1(f,sl,g,p,h,i,m,...) \
        m(h,0,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_0F2(f,sl,g,p,h,i,m,...) \
        m(h,1,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_0F3(f,sl,g,p,h,i,m,...) \
        m(h,2,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_0F4(f,sl,g,p,h,i,m,...) \
        m(h,3,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_0F5(f,sl,g,p,h,i,m,...) \
        m(h,4,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_0F6(f,sl,g,p,h,i,m,...) \
        m(h,5,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_0F7(f,sl,g,p,h,i,m,...) \
        m(h,6,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_0F8(f,sl,g,p,h,i,m,...) \
        m(h,7,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_0F9(f,sl,g,p,h,i,m,...) \
        m(h,8,sl)(f,PPMPF_FLDD(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)

/* NOTE: PPMPF_1F* - macro framework component for folding (1) */
#define PPMPF_1FZ(f,sl,g,p,h,i,m,...) sl
#define PPMPF_1F0(f,sl,g,p,h,i,m,...) \
        PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__)
#define PPMPF_1F1(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,1F0) \
            (f,PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_1F2(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,1F1) \
            (f,PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_1F3(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,1F2) \
            (f,PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_1F4(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,1F3) \
            (f,PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_1F5(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,1F4) \
            (f,PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_1F6(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,1F5) \
            (f,PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_1F7(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,1F6) \
            (f,PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_1F8(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,1F7) \
            (f,PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_1F9(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,1F8) \
            (f,PPMPF_0F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)

/* NOTE: PPMPF_2F* - macro framework component for folding (2) */
#define PPMPF_2FZ(f,sl,g,p,h,i,m,...) sl
#define PPMPF_2F0(f,sl,g,p,h,i,m,...) \
        PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__)
#define PPMPF_2F1(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,2F0) \
            (f,PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_2F2(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,2F1) \
            (f,PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_2F3(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,2F2) \
            (f,PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_2F4(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,2F3) \
            (f,PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_2F5(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,2F4) \
            (f,PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_2F6(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,2F5) \
            (f,PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_2F7(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,2F6) \
            (f,PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_2F8(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,2F7) \
            (f,PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_2F9(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,2F8) \
            (f,PPMPF_1F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)

/* NOTE: PPMPF_3F* - macro framework component for folding (3) */
#define PPMPF_3FZ(f,sl,g,p,h,i,m,...) sl
#define PPMPF_3F0(f,sl,g,p,h,i,m,...) \
        PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__)
#define PPMPF_3F1(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,3F0) \
            (f,PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_3F2(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,3F1) \
            (f,PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_3F3(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,3F2) \
            (f,PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_3F4(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,3F3) \
            (f,PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_3F5(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,3F4) \
            (f,PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_3F6(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,3F5) \
            (f,PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_3F7(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,3F6) \
            (f,PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_3F8(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,3F7) \
            (f,PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)
#define PPMPF_3F9(f,sl,g,p,h,i,m,...) \
        PPMPF_FLDC(h,sl,3F8,__VA_ARGS__) \
            (f,PPMPF_2F9(f,sl,g,p,h,i,m,__VA_ARGS__),g,p,h,i,m,__VA_ARGS__)

/* NOTE: Core implementation of fold iterations, allowing efficient folding and
 *       other repetitive operations upon ppmpf collections up to 10000 items.
 * 
 * WARNING: This is going to be deprecated in favour of a better implementation
 * already present within the same header; left here for transition purposes.
 */
#define PPMPF_FOLD_(f,s,l,g,p,h,m,x0,x1,x2,x3,i,...) \
        x3( f \
          , x2(f \
              , x1( f \
                  , x0(f,(PPMPF_DREF(s))(l),g,p,h,i,m,__VA_ARGS__) \
                  , g, p, h, i, m, __VA_ARGS__ ) \
              , g, p, h, i, m, __VA_ARGS__) \
          , g, p, h, i, m, __VA_ARGS__ )



/* NOTE: Macro infrastructure for implementing preprocessor based "folding".
 * Compared to the previous construct, this is a fully metafunction macro
 * recursive construct, where we have increased the effective depth from 10k
 * to 2^16 (that is 65536). The internal mechanics for the recursion remain
 * the same.
 */

#define PPMPF_0GZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_1GZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_2GZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_3GZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_0XZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_1XZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_2XZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_3XZ(f,sl,g,p,h,i,m,j,...) sl

/* NOTE: recursive macro framework component for folding (0) */

#define PPMPF_0G0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0GZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0G1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0G2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0G3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0G4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0G5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0G6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0G7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0G8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0G9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0GA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0G9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0GB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0GA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0GC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0GB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0GD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0GC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0GE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0GD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0GF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0GE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0XZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0X9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0XA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0X9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0XB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0XA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0XC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0XB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0XD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0XC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0XE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0XD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_0XF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,0XE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

/* NOTE: recursive macro framework component for folding (1) */

#define PPMPF_1G0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1GZ) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1G1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G0) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1G2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G1) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1G3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G2) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1G4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G3) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1G5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G4) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1G6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G5) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1G7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G6) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1G8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G7) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1G9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G8) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1GA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1G9) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1GB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1GA) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1GC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1GB) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1GD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1GC) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1GE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1GD) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1GF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1GE) \
            (f,PPMPF_0GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1XZ) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X0) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X1) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X2) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X3) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X4) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X5) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X6) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X7) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1X9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X8) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1XA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1X9) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1XB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1XA) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1XC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1XB) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1XD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1XC) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1XE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1XD) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_1XF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,1XE) \
            (f,PPMPF_0XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

/* NOTE: recursive macro framework component for folding (2) */

#define PPMPF_2G0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2GZ) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2G1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G0) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2G2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G1) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2G3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G2) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2G4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G3) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2G5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G4) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2G6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G5) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2G7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G6) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2G8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G7) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2G9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G8) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2GA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2G9) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2GB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2GA) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2GC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2GB) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2GD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2GC) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2GE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2GD) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2GF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2GE) \
            (f,PPMPF_1GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2XZ) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X0) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X1) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X2) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X3) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X4) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X5) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X6) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X7) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2X9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X8) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2XA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2X9) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2XB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2XA) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2XC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2XB) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2XD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2XC) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2XE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2XD) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_2XF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,2XE) \
            (f,PPMPF_1XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

/* NOTE: recursive macro framework component for folding (3) */

#define PPMPF_3G0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3GZ) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3G1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G0) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3G2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G1) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3G3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G2) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3G4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G3) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3G5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G4) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3G6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G5) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3G7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G6) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3G8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G7) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3G9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G8) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3GA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3G9) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3GB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3GA) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3GC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3GB) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3GD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3GC) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3GE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3GD) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3GF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3GE) \
            (f,PPMPF_2GF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3XZ) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X0) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X1) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X2) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X3) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X4) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X5) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X6) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X7) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3X9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X8) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3XA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3X9) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3XB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3XA) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3XC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3XB) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3XD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3XC) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3XE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3XD) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_3XF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,3XE) \
            (f,PPMPF_2XF(f,sl,g,p,h,i,m,j,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#endif /* _ODREEX_PPMPF_ALGORITHMS_FOLD_HH_ */
