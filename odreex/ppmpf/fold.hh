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

#define PPMPF_FOLD_DFUNC(x) \
        PPMPF_DREF(PPMPF_TUP_GET(PPMPF_DREF(PPMPF_TUP_GET(x))))

#define PPMPF_FOLD_DWRAP(x) \
        PPMPF_CAT( \
            PPMPF_FOLD_PLHF \
        ,   PPMPF_CAT( PPMPF_DREF(PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_GET(x))))\
                     , PPMPF_DREF(PPMPF_TUP_GET(PPMPF_TUP_POP(x)))) )

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
                    , PPMPF_0F ## n )
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
        PPMPF_DREF(b),PPMPF_DREF(a)

/* NOTE: Macro infrastructure for implementing preprocessor based "folding".
 * As with repeats, recursion depth internals are implemented in such a manner
 * as to allow for folding over 10000 elements as a maximum limit. */
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
        PPMPF_0F9(f,sl,g,p,h,i,m,...)
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
        PPMPF_1F9(f,sl,g,p,h,i,m,...)
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
        PPMPF_2F9(f,sl,g,p,h,i,m,...)
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

/* NOTE: Implementation of PPMPF_SEQ_FOLDL, PPMPF_TUP_FOLDL, folding can occur
 * for up to 10000 ppmpf tuple / sequence items efficiently.
 */
#define PPMPF_FOLD_(f,s,l,g,p,h,m,x0,x1,x2,x3,i,...) \
        x3( f \
          , x2(f \
              , x1( f \
                  , x0(f,(PPMPF_DREF(s))(l),g,p,h,i,m,__VA_ARGS__) \
                  , g, p, h, i, m, __VA_ARGS__ ) \
              , g, p, h, i, m, __VA_ARGS__) \
          , g, p, h, i, m, __VA_ARGS__ )

#define PPMPF_SEQ_FOLD_(f,s,l,i) \
        PPMPF_FOLD_( PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , PPMPF_FOLD_DFUNC \
                                 , PPMPF_JUST )(f) \
                   , s \
                   , l \
                   , PPMPF_SEQ_GET \
                   , PPMPF_SEQ_POP \
                   , PPMPF_SEQ_EMPTY \
                   , PPMPF_FLDT \
                   , PPMPF_CAT(PPMPF_3F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_2F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_1F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_0F,PPMPF_PNX(9)) \
                   , PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , i##_ \
                                 , i ) \
                   , PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , PPMPF_FOLD_DWRAP \
                                 , PPMPF_JUST )(f), )

#define PPMPF_SEQ_FOLDL(f,s,l) \
        PPMPF_SEQ_GET(PPMPF_SEQ_FOLD_(f,s,l,PPMPF_FLDAL))

#define PPMPF_SEQ_FOLDL_OF(f,l) \
        PPMPF_SEQ_FOLDL(f,PPMPF_SEQ_GET(l),PPMPF_SEQ_POP(l))

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

#define PPMPF_TUP_FOLDL(f,s,l) \
        PPMPF_SEQ_GET(PPMPF_TUP_FOLD_(f,s,l,PPMPF_FLDAL))

#define PPMPF_TUP_FOLDL_OF(f,l) \
        PPMPF_TUP_FOLDL(f,PPMPF_TUP_GET(l),PPMPF_TUP_POP(l))
/*
 * NOTE: PPMPF_TUP_REVERSE, PPMPF_SEQ_REVERSE: reversing ppmpf collections.
 */
#define PPMPF_TUP_REVERSE_(tup) \
        (PPMPF_DREF(PPMPF_TUP_FOLDL_OF(PPMPF_FLDRT_, \
                    PPMPF_TUP_POP(tup))),PPMPF_DREF(PPMPF_TUP_GET(tup)))

#define PPMPF_TUP_REVERSE(tup) \
        PPMPF_IFELSE( PPMPF_OR( PPMPF_TUP_EMPTY(PPMPF_TUP_POP(tup)) \
                              , PPMPF_TUP_EMPTY(tup) ) \
                    , PPMPF_JUST \
                    , PPMPF_TUP_REVERSE_)(tup)

#define PPMPF_SEQ_REVERSE(seq) \
        PPMPF_DREF( PPMPF_SEQ_FOLDL(PPMPF_FLDRS_ \
                  , (PPMPF_SEQ_GET(seq)) \
                  , PPMPF_SEQ_POP(seq)))

/* Assistive macros */
#define PPMPF_TUP_FOLDR__(f,l) \
        PPMPF_TUP_FOLD_(f,PPMPF_TUP_GET(l),PPMPF_TUP_POP(l),PPMPF_FLDAR)

#define PPMPF_SEQ_FOLDR__(f,l) \
        PPMPF_SEQ_GET( PPMPF_SEQ_FOLD_( f \
                                      , PPMPF_SEQ_GET(l) \
                                      , PPMPF_SEQ_POP(l) \
                                      , PPMPF_FLDAR ) )
/*
 * NOTE: PPMPF_TUP_FOLDR*,PPMPF_SEQ_FOLDR* : providing right folds for ppmpf
 * tuples and sequences.
 */
#define PPMPF_TUP_FOLDR(f,s,l) \
        PPMPF_SEQ_GET(PPMPF_TUP_FOLDR__( f \
                                       , ( PPMPF_DREF(s) \
                                         , PPMPF_DREF(PPMPF_TUP_REVERSE(l)))))

#define PPMPF_TUP_FOLDR_OF(f,l) \
        PPMPF_SEQ_GET(PPMPF_TUP_FOLDR__(f,PPMPF_TUP_REVERSE(l)))

#define PPMPF_SEQ_FOLDR(f,s,l) \
        PPMPF_SEQ_FOLDR__(f,PPMPF_JUST(s)PPMPF_SEQ_REVERSE(l))

#define PPMPF_SEQ_FOLDR_OF(f,l) \
        PPMPF_SEQ_FOLDR__(f,PPMPF_SEQ_REVERSE(l))

#endif /* _ODREEX_PPMPF_FOLD_HH_ */
