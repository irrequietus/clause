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

#ifndef _ODREEX_PPMPF_ALGORITHMS_FLDAUX_HH_
#define _ODREEX_PPMPF_ALGORITHMS_FLDAUX_HH_

#ifndef _ODREEX_PPMPF_ALGORITHMS_FOLD_HH_
#error ppmpf: <odreex/ppmpf/algorithms/fold.hh> must precede.
#endif

/*
 * The following macros are assistive to implementing various algorithms using
 * the ppmpf recursion construct. They cover both safe and unsafe iteration
 * within the ppmpf collections (tuples, sequences). Some doubles are present
 * for different reasons and are to be removed after ppmpf refactoring takes
 * place.
 * 
 */

/* PPMPF_FLDT */
#define PPMPF_FLDX00(h,n,sl) \
        PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                    , sl PPMPF_EMPTY \
                    , PPMPF_CAT(PPMPF_0F,n) )
/* PPMPF_FLDAL */
#define PPMPF_FLDX01(f,sl,g,...) \
        f(PPMPF_SEQ_GET(sl),g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))

/* PPMPF_FLDAR */
#define PPMPF_FLDX02(f,sl,g,...) \
        f(g(PPMPF_DREF(PPMPF_SEQ_POP(sl))),PPMPF_SEQ_GET(sl))

/* PPMPF_FLDAL_ */
#define PPMPF_FLDX03(f,sl,g,c,...) \
        c(f,PPMPF_SEQ_GET(sl),g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))

/* PPMPF_FLDAR_ */
#define PPMPF_FLDX04(f,sl,g,c,...) \
        c(f,g(PPMPF_DREF(PPMPF_SEQ_POP(sl))),PPMPF_SEQ_GET(sl))

/* PPMPF_FLDB */
#define PPMPF_FLDX05(f,sl,g,...) \
        PPMPF_DREF(sl)

/* PPMPF_FLDC */
#define PPMPF_FLDX06(h,sl,z) \
        PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                    , PPMPF_0FZ \
                    , PPMPF_ ## z )
/* PPMPF_FLDD */
#define PPMPF_FLDX07(f,sl,g,p,h,i,...) \
        (PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                     , PPMPF_FLDX05 \
                     , i )(f,sl,g,__VA_ARGS__)) \
        (p(PPMPF_DREF(PPMPF_SEQ_POP(sl))))

/* PPMPF_FLDRS_ */
#define PPMPF_FLDX08(a,b) \
        PPMPF_JUST(b)PPMPF_DREF(a)

/* PPMPF_FLDRT_ */
#define PPMPF_FLDX09(a,b) \
        PPMPF_DREF(b),PPMPF_DREF(a)


#define PPMPF_FLDX0A(h,sl,z) \
        PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                    , sl PPMPF_EMPTY \
                    , PPMPF_ ## z )

#define PPMPF_FLDX0B(a,b,c,...) \
        PPMPF_DREF(b)

#define PPMPF_FLDX0C(f,sl,g,p,h,i,...) \
       (PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                                      , PPMPF_7FOLD_L2 \
                                      , i )(f,sl,g,__VA_ARGS__)) \
        (p(PPMPF_DREF(PPMPF_SEQ_POP(sl))))

#define PPMPF_FLDX0D(h,sl,z) \
        PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                    , sl PPMPF_EMPTY \
                    , PPMPF_ ## z )

#define PPMPF_FLDX0E(f,sl,g,...) \
        ((f(PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl)))))))

#define PPMPF_FLDX0F(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, __VA_ARGS__) \
                        , g, p, h, i, m, j, __VA_ARGS__) \
                 , g, p, h, i, m , j, __VA_ARGS__) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_FLDX0G(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF( \
            PPMPF_SEQ_GET( \
                PPMPF_FLDX0F( f,sl,g,p,h,i,m,j \
                            , PPMPF_RDMX(PPMPF_3G,PPMPF_RDMH4()) \
                            , PPMPF_RDMX(PPMPF_2G,PPMPF_RDMH3()) \
                            , PPMPF_RDMX(PPMPF_1G,PPMPF_RDMH2()) \
                            , PPMPF_RDMX(PPMPF_0G,PPMPF_RDMH1()) \
                            , __VA_ARGS__ )))
/* PPMPF_FLDX */
#define PPMPF_FLDX0H(f,sl,g,p,h,i,...) \
        ( PPMPF_TUP_JOIN( PPMPF_DREF(PPMPF_SEQ_GET(sl)) \
                        , PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                                      , PPMPF_UNIT \
                                      , i )(f,sl,g,__VA_ARGS__)) ) \
        (p(PPMPF_DREF(PPMPF_SEQ_POP(sl))))

#define PPMPF_FLDX0I(f,sl,g,...) \
        (f( PPMPF_DREF(PPMPF_DREF(PPMPF_SEQ_GET(sl))) \
          , PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))))

#define PPMPF_FLDX0J(a,b,c,...) PPMPF_DREF(b)

#define PPMPF_FLDX0K(f,sl,g,p,h,i,...) \
       (PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                                      , PPMPF_FLDX0J \
                                      , i )(f,sl,g,__VA_ARGS__)) \
       (p(PPMPF_DREF(PPMPF_SEQ_POP(sl))))

#define PPMPF_FLDX0L(h,sl,z) \
        PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                    , sl PPMPF_EMPTY \
                    , PPMPF_CAT(PPMPF_, z) )

/* PPMPF_FLDRS_ */
#define PPMPF_FLDX0M(a,b) \
        PPMPF_JUST(b)PPMPF_DREF(a)

/* PPMPF_FLDRT_ */
#define PPMPF_FLDR0N(a,b) \
        PPMPF_DREF(b),PPMPF_DREF(a)

/* PPMPF_FLDAR */
#define PPMPF_FLDX0O(f,sl,g,...) \
        (f( PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl)))) \
          , PPMPF_DREF(PPMPF_DREF(PPMPF_SEQ_GET(sl)))))

#define PPMPF_FLDX0P(n,x) \
        PPMPF_DREF(PPMPF_TUP_1GET(PPMPF_DREF(PPMPF_TUP_ATPOS((0)(0)(0)(n),x))))

#define PPMPF_FLDX0Q(n,x) \
        PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_ATPOS((0)(0)(0)(n),x)))

#define PPMPF_FLDX0R(n,x) \
        PPMPF_TUP_EMPTY(PPMPF_DREF(PPMPF_TUP_ATPOS((0)(0)(0)(n),x)))

#define PPMPF_FLDX0S(x,y) \
        x,(y)

#define PPMPF_FLDX0T(a0,a1) a0,a1
#define PPMPF_FLDX0U(a0,a1,a2) a0,a1,a2
#define PPMPF_FLDX0V(a0,a1,a2,a3) a0,a1,a2,a3
#define PPMPF_FLDX0W(a0,a1,a2,a3,a4) a0,a1,a2,a3,a4
#define PPMPF_FLDX0X(a0,a1,a2,a3,a4,a5) a0,a1,a2,a3,a4,a5
#define PPMPF_FLDX0Y(a0,a1,a2,a3,a4,a5,a6) a0,a1,a2,a3,a4,a5,a6
#define PPMPF_FLDX0Z(a0,a1,a2,a3,a4,a5,a6,a7) a0,a1,a2,a3,a4,a5,a6,a7
#define PPMPF_FLDX10(a0,a1,a2,a3,a4,a5,a6,a7,a8) a0,a1,a2,a3,a4,a5,a6,a7,a8

#define PPMPF_FLDX11(n,x) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_DREF(PPMPF_TUP_ATPOS((0)(0)(0)(n),x))))

#define PPMPF_FLDX12(n,x) \
        PPMPF_SEQ_POP(PPMPF_DREF(PPMPF_TUP_ATPOS((0)(0)(0)(n),x)))

#define PPMPF_FLDX13(n,x) \
        PPMPF_SEQ_EMPTY(PPMPF_DREF(PPMPF_TUP_ATPOS((0)(0)(0)(n),x)))

#define PPMPF_FLDX14(f,x) \
        (f(0,x),f(1,x))

#define PPMPF_FLDX15(f,x) \
        (f(0,x),f(1,x),f(2,x))

#define PPMPF_FLDX16(f,x) \
        (f(0,x),f(1,x),f(2,x),f(3,x))

#define PPMPF_FLDX17(f,x) \
        (f(0,x),f(1,x),f(2,x),f(3,x),f(4,x))

#define PPMPF_FLDX18(f,x) \
        (f(0,x),f(1,x),f(2,x),f(3,x),f(4,x),f(5,x))

#define PPMPF_FLDX19(f,x) \
        (f(0,x),f(1,x),f(2,x),f(3,x),f(4,x),f(5,x),f(6,x))

#define PPMPF_FLDX1A(f,x) \
        (f(0,x),f(1,x),f(2,x),f(3,x),f(4,x),f(5,x),f(6,x),f(7,x))

#define PPMPF_FLDX1B(f,x) \
        (f(0,x),f(1,x),f(2,x),f(3,x),f(4,x),f(5,x),f(6,x),f(7,x),f(8,x))

#define PPMPF_FLDX1C(c,f,x) \
        c(f(0,x),f(1,x))

#define PPMPF_FLDX1D(c,f,x) \
        c( f(0,x) \
      , c( f(1,x) \
         , f(2,x) ))

#define PPMPF_FLDX1E(c,f,x) \
        c( f(0,x) \
      , c( f(1,x) \
      , c( f(2,x) \
         , f(3,x) )))

#define PPMPF_FLDX1F(c,f,x) \
        c( f(0,x) \
      , c( f(1,x) \
      , c( f(2,x) \
      , c( f(3,x) \
         , f(4,x) ))))

#define PPMPF_FLDX1G(c,f,x) \
        c( f(0,x) \
      , c( f(1,x) \
      , c( f(2,x) \
      , c( f(3,x) \
      , c( f(4,x) \
         , f(5,x) )))))

#define PPMPF_FLDX1H(c,f,x) \
        c( f(0,x) \
      , c( f(1,x) \
      , c( f(2,x) \
      , c( f(3,x) \
      , c( f(4,x) \
      , c( f(5,x) \
         , f(6,x) ))))))

#define PPMPF_FLDX1I(c,f,x) \
        c( f(0,x) \
      , c( f(1,x) \
      , c( f(2,x) \
      , c( f(3,x) \
      , c( f(4,x) \
      , c( f(5,x) \
      , c( f(6,x) \
         , f(7,x) )))))))

#define PPMPF_FLDX1J(c,f,x) \
        c( f(0,x) \
      , c( f(1,x) \
      , c( f(2,x) \
      , c( f(3,x) \
      , c( f(4,x) \
      , c( f(5,x) \
      , c( f(6,x) \
      , c( f(7,x) \
         , f(8,x) ))))))))

#define PPMPF_FLDX1K(a0,a1) \
        (a0)(a1)
#define PPMPF_FLDX1L(a0,a1,a2) \
        (a0)(a1)(a2)
#define PPMPF_FLDX1M(a0,a1,a2,a3) \
        (a0)(a1)(a2)(a3)
#define PPMPF_FLDX1N(a0,a1,a2,a3,a4) \
        (a0)(a1)(a2)(a3)(a4)
#define PPMPF_FLDX1O(a0,a1,a2,a3,a4,a5) \
        (a0)(a1)(a2)(a3)(a4)(a5)
#define PPMPF_FLDX1P(a0,a1,a2,a3,a4,a5,a6) \
        (a0)(a1)(a2)(a3)(a4)(a5)(a6)
#define PPMPF_FLDX1Q(a0,a1,a2,a3,a4,a5,a6,a7) \
        (a0)(a1)(a2)(a3)(a4)(a5)(a6)(a7)
#define PPMPF_FLDX1R(a0,a1,a2,a3,a4,a5,a6,a7,a8) \
        (a0)(a1)(a2)(a3)(a4)(a5)(a6)(a7)(a8)

#define PPMPF_FLDX1S(f,sl,g,p,h,i,...) \
        (PPMPF_DREF(PPMPF_SEQ_GET(sl))\
PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
            , PPMPF_UNIT \
            , i )(f,sl,g,__VA_ARGS__))(p(PPMPF_DREF(PPMPF_SEQ_POP(sl))))


#endif /* _ODREEX_PPMPF_ALGORITHMS_FLDAUX_HH_ */
