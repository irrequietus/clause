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

/* The purpose of this header is to provide a series of basic preprocessor
 * macro constructs that are fundamental for relatively trivial metaprogramming
 * at the preprocessor level. Macros doing binary concatenation, single digit
 * identification, logic algebra macros and of course horizontal repeats
 * producing ordered sets with size up to 10000 (4th power of 10) are available.
 */

#ifndef _ODREEX_PPMPF_KERNEL_CPRO_BASE_HH_
#define _ODREEX_PPMPF_KERNEL_CPRO_BASE_HH_

#include <odreex/ppmpf/kernel/cpro/core.hh>
#include <odreex/ppmpf/kernel/logic/alu.hh>

/* NOTE: PPMPF_PNX - Previous digit identifier for repeats. */
#define PPMPF_NX0()  Z
#define PPMPF_NX1()  0
#define PPMPF_NX2()  1
#define PPMPF_NX3()  2
#define PPMPF_NX4()  3
#define PPMPF_NX5()  4
#define PPMPF_NX6()  5
#define PPMPF_NX7()  6
#define PPMPF_NX8()  7
#define PPMPF_NX9()  8
#define PPMPF_NX10() 9

#define PPMPF_MXZ()  0
#define PPMPF_MX0()  1
#define PPMPF_MX1()  2
#define PPMPF_MX2()  3
#define PPMPF_MX3()  4
#define PPMPF_MX4()  5
#define PPMPF_MX5()  6
#define PPMPF_MX6()  7
#define PPMPF_MX7()  8
#define PPMPF_MX8()  9
#define PPMPF_MX9() 10

#define PPMPF_PNX(n) PPMPF_CAT(PPMPF_NX, n)()
#define PPMPF_NNX(n) PPMPF_CAT(PPMPF_MX, n)()

/* NOTE: PPMPF_0H* - macro framework component for repeats (0) */
#define PPMPF_0HZ(x,y,z,f,b,e,...)
#define PPMPF_0H0(x,y,z,f,b,e,...) \
        f(PPMPF_ZFY(x,y,z,0),__VA_ARGS__) e()
#define PPMPF_0H1(x,y,z,f,b,e,...) \
        PPMPF_0H0(x,y,z,f,b,b,__VA_ARGS__) f(PPMPF_ZFY(x,y,z,1),__VA_ARGS__) e()
#define PPMPF_0H2(x,y,z,f,b,e,...) \
        PPMPF_0H1(x,y,z,f,b,b,__VA_ARGS__) f(PPMPF_ZFY(x,y,z,2),__VA_ARGS__) e()
#define PPMPF_0H3(x,y,z,f,b,e,...) \
        PPMPF_0H2(x,y,z,f,b,b,__VA_ARGS__) f(PPMPF_ZFY(x,y,z,3),__VA_ARGS__) e()
#define PPMPF_0H4(x,y,z,f,b,e,...) \
        PPMPF_0H3(x,y,z,f,b,b,__VA_ARGS__) f(PPMPF_ZFY(x,y,z,4),__VA_ARGS__) e()
#define PPMPF_0H5(x,y,z,f,b,e,...) \
        PPMPF_0H4(x,y,z,f,b,b,__VA_ARGS__) f(PPMPF_ZFY(x,y,z,5),__VA_ARGS__) e()
#define PPMPF_0H6(x,y,z,f,b,e,...) \
        PPMPF_0H5(x,y,z,f,b,b,__VA_ARGS__) f(PPMPF_ZFY(x,y,z,6),__VA_ARGS__) e()
#define PPMPF_0H7(x,y,z,f,b,e,...) \
        PPMPF_0H6(x,y,z,f,b,b,__VA_ARGS__) f(PPMPF_ZFY(x,y,z,7),__VA_ARGS__) e()
#define PPMPF_0H8(x,y,z,f,b,e,...) \
        PPMPF_0H7(x,y,z,f,b,b,__VA_ARGS__) f(PPMPF_ZFY(x,y,z,8),__VA_ARGS__) e()
#define PPMPF_0H9(x,y,z,f,b,e,...) \
        PPMPF_0H8(x,y,z,f,b,b,__VA_ARGS__) f(PPMPF_ZFY(x,y,z,9),__VA_ARGS__) e()

/* NOTE: PPMPF_1H* - macro framework component for repeats (1) */
#define PPMPF_1HZ(x,y,f,b,e,...)
#define PPMPF_1H0(x,y,f,b,e,...) \
        PPMPF_0H9(x,y,0,f,b,e,__VA_ARGS__)
#define PPMPF_1H1(x,y,f,b,e,...) \
        PPMPF_1H0(x,y,f,b,b,__VA_ARGS__) PPMPF_0H9(x,y,1,f,b,e,__VA_ARGS__)
#define PPMPF_1H2(x,y,f,b,e,...) \
        PPMPF_1H1(x,y,f,b,b,__VA_ARGS__) PPMPF_0H9(x,y,2,f,b,e,__VA_ARGS__)
#define PPMPF_1H3(x,y,f,b,e,...) \
        PPMPF_1H2(x,y,f,b,b,__VA_ARGS__) PPMPF_0H9(x,y,3,f,b,e,__VA_ARGS__)
#define PPMPF_1H4(x,y,f,b,e,...) \
        PPMPF_1H3(x,y,f,b,b,__VA_ARGS__) PPMPF_0H9(x,y,4,f,b,e,__VA_ARGS__)
#define PPMPF_1H5(x,y,f,b,e,...) \
        PPMPF_1H4(x,y,f,b,b,__VA_ARGS__) PPMPF_0H9(x,y,5,f,b,e,__VA_ARGS__)
#define PPMPF_1H6(x,y,f,b,e,...) \
        PPMPF_1H5(x,y,f,b,b,__VA_ARGS__) PPMPF_0H9(x,y,6,f,b,e,__VA_ARGS__)
#define PPMPF_1H7(x,y,f,b,e,...) \
        PPMPF_1H6(x,y,f,b,b,__VA_ARGS__) PPMPF_0H9(x,y,7,f,b,e,__VA_ARGS__)
#define PPMPF_1H8(x,y,f,b,e,...) \
        PPMPF_1H7(x,y,f,b,b,__VA_ARGS__) PPMPF_0H9(x,y,8,f,b,e,__VA_ARGS__)
#define PPMPF_1H9(x,y,f,b,e,...) \
        PPMPF_1H8(x,y,f,b,b,__VA_ARGS__) PPMPF_0H9(x,y,9,f,b,e,__VA_ARGS__)

/* NOTE: PPMPF_2H* - macro framework component for repeats (2) */
#define PPMPF_2HZ(x,f,b,e,...)
#define PPMPF_2H0(x,f,b,e,...) \
        PPMPF_1H9(x,0,f,b,e,__VA_ARGS__)
#define PPMPF_2H1(x,f,b,e,...) \
        PPMPF_2H0(x,f,b,b,__VA_ARGS__) PPMPF_1H9(x,1,f,b,e,__VA_ARGS__)
#define PPMPF_2H2(x,f,b,e,...) \
        PPMPF_2H1(x,f,b,b,__VA_ARGS__) PPMPF_1H9(x,2,f,b,e,__VA_ARGS__)
#define PPMPF_2H3(x,f,b,e,...) \
        PPMPF_2H2(x,f,b,b,__VA_ARGS__) PPMPF_1H9(x,3,f,b,e,__VA_ARGS__)
#define PPMPF_2H4(x,f,b,e,...) \
        PPMPF_2H3(x,f,b,b,__VA_ARGS__) PPMPF_1H9(x,4,f,b,e,__VA_ARGS__)
#define PPMPF_2H5(x,f,b,e,...) \
        PPMPF_2H4(x,f,b,b,__VA_ARGS__) PPMPF_1H9(x,5,f,b,e,__VA_ARGS__)
#define PPMPF_2H6(x,f,b,e,...) \
        PPMPF_2H5(x,f,b,b,__VA_ARGS__) PPMPF_1H9(x,6,f,b,e,__VA_ARGS__)
#define PPMPF_2H7(x,f,b,e,...) \
        PPMPF_2H6(x,f,b,b,__VA_ARGS__) PPMPF_1H9(x,7,f,b,e,__VA_ARGS__)
#define PPMPF_2H8(x,f,b,e,...) \
        PPMPF_2H7(x,f,b,b,__VA_ARGS__) PPMPF_1H9(x,8,f,b,e,__VA_ARGS__)
#define PPMPF_2H9(x,f,b,e,...) \
        PPMPF_2H8(x,f,b,b,__VA_ARGS__) PPMPF_1H9(x,9,f,b,e,__VA_ARGS__)

/* NOTE: PPMPF_3H* - macro framework component for repeats (3) */
#define PPMPF_3HZ(f,b,e,...)
#define PPMPF_3H0(f,b,e,...) \
        PPMPF_2H9(0,f,b,e,__VA_ARGS__)
#define PPMPF_3H1(f,b,e,...) \
        PPMPF_3H0(f,b,b,__VA_ARGS__) PPMPF_2H9(1,f,b,e,__VA_ARGS__)
#define PPMPF_3H2(f,b,e,...) \
        PPMPF_3H1(f,b,b,__VA_ARGS__) PPMPF_2H9(2,f,b,e,__VA_ARGS__)
#define PPMPF_3H3(f,b,e,...) \
        PPMPF_3H2(f,b,b,__VA_ARGS__) PPMPF_2H9(3,f,b,e,__VA_ARGS__)
#define PPMPF_3H4(f,b,e,...) \
        PPMPF_3H3(f,b,b,__VA_ARGS__) PPMPF_2H9(4,f,b,e,__VA_ARGS__)
#define PPMPF_3H5(f,b,e,...) \
        PPMPF_3H4(f,b,b,__VA_ARGS__) PPMPF_2H9(5,f,b,e,__VA_ARGS__)
#define PPMPF_3H6(f,b,e,...) \
        PPMPF_3H5(f,b,b,__VA_ARGS__) PPMPF_2H9(6,f,b,e,__VA_ARGS__)
#define PPMPF_3H7(f,b,e,...) \
        PPMPF_3H6(f,b,b,__VA_ARGS__) PPMPF_2H9(7,f,b,e,__VA_ARGS__)
#define PPMPF_3H8(f,b,e,...) \
        PPMPF_3H7(f,b,b,__VA_ARGS__) PPMPF_2H9(8,f,b,e,__VA_ARGS__)
#define PPMPF_3H9(f,b,e,...) \
        PPMPF_3H8(f,b,b,__VA_ARGS__) PPMPF_2H9(9,f,b,e,__VA_ARGS__)

/* NOTE: PPMPF_REPEAT -  Pattern generator through recursive macro expansion,
 * works for range 0 - 9999 (10000) items. This is a trivial implementation for
 * the horizontal repeats using a preprocessor "tuple" of 4 digits as input
 * for the upper limit of the iteration. Given a "tuple" of 4 (a,b,c,d) this
 * macro recursively expands up to create an ordered set of items ranging
 * in [0, abcd), where abcd is the resulting decimal number as it is represented
 * in the input "tuple".
 */
#define PPMPF_RPTH(x,n) \
    PPMPF_CAT(PPMPF_CAT(PPMPF_,PPMPF_CAT(x,H)),PPMPF_PNX(n))

#define PPMPF_RPTHP3(s,t,h,d,u) \
    PPMPF_IFELSE(PPMPF_OR( PPMPF_OR( PPMPF_NOT(PPMPF_IS(0,h)) \
                                   , PPMPF_NOT(PPMPF_IS(0,d))) \
                         ,  PPMPF_NOT(PPMPF_IS(0,u))), s, PPMPF_WSPC)

#define PPMPF_RPTHP2(s,t,h,d,u) \
    PPMPF_IFELSE(PPMPF_OR( PPMPF_NOT(PPMPF_IS(0,d)) \
                         , PPMPF_NOT(PPMPF_IS(0,u))),s,PPMPF_WSPC)

#define PPMPF_RPTHP1(s,t,h,d,u) \
    PPMPF_IFELSE(PPMPF_NOT(PPMPF_IS(0,u)),s,PPMPF_WSPC)

/* NOTE: f is the macro to which a decimal number is passed, s is the separator,
 * t stand for thousands, h stand for hundreds, d for decades, u for units.
 */
#define PPMPF_REPEAT(f,s,t,h,d,u,...) \
    PPMPF_RPTH(3,t)(f,s,        PPMPF_RPTHP3(s,t,h,d,u), __VA_ARGS__) \
    PPMPF_RPTH(2,h)(t,f,s,      PPMPF_RPTHP2(s,t,h,d,u), __VA_ARGS__) \
    PPMPF_RPTH(1,d)(t,h,f,s,    PPMPF_RPTHP2(s,t,h,d,u), __VA_ARGS__) \
    PPMPF_RPTH(0,u)(t,h,d,f,s,  PPMPF_WSPC, __VA_ARGS__)

/* NOTE: PPMPF_HRMAX is the default maximum to which PPMPF_REPEATS is defined
 * to expand to, while it defines PPMPF_SD* macros as well.
 */
#ifdef PPMPF_HRMAX
#    if PPMPF_HRMAX > 10000
#        error Requesting a PPMPF_HRMAX beyond 10000 is not supported.
#    elif PPMPF_HRMAX == 10000
#        define PPMPF_SD4 9
#        define PPMPF_SD3 9
#        define PPMPF_SD2 9
#        define PPMPF_SD1 9
#        define PPMPF_REPEATS(f,s,...) \
                PPMPF_REPEAT(f,s,9,9,9,9,__VA_ARGS__) f(9999, __VA_ARGS__)
#    else
#        if (PPMPF_HRMAX / 1000) % 10 == 0
#            define PPMPF_SD4 0
#        elif (PPMPF_HRMAX / 1000) % 10 == 1
#            define PPMPF_SD4 1
#        elif (PPMPF_HRMAX / 1000) % 10 == 2
#            define PPMPF_SD4 2
#        elif (PPMPF_HRMAX / 1000) % 10 == 3
#            define PPMPF_SD4 3
#        elif (PPMPF_HRMAX / 1000) % 10 == 4
#            define PPMPF_SD4 4
#        elif (PPMPF_HRMAX / 1000) % 10 == 5
#            define PPMPF_SD4 5
#        elif (PPMPF_HRMAX / 1000) % 10 == 6
#            define PPMPF_SD4 6
#        elif (PPMPF_HRMAX / 1000) % 10 == 7
#            define PPMPF_SD4 7
#        elif (PPMPF_HRMAX / 1000) % 10 == 8
#            define PPMPF_SD4 8
#        elif (PPMPF_HRMAX / 1000) % 10 == 9
#            define PPMPF_SD4 9
#        endif

#        if (PPMPF_HRMAX / 100) % 10 == 0
#            define PPMPF_SD3 0
#        elif (PPMPF_HRMAX / 100) % 10 == 1
#            define PPMPF_SD3 1
#        elif (PPMPF_HRMAX / 100) % 10 == 2
#            define PPMPF_SD3 2
#        elif (PPMPF_HRMAX / 100) % 10 == 3
#            define PPMPF_SD3 3
#        elif (PPMPF_HRMAX / 100) % 10 == 4
#            define PPMPF_SD3 4
#        elif (PPMPF_HRMAX / 100) % 10 == 5
#            define PPMPF_SD3 5
#        elif (PPMPF_HRMAX / 100) % 10 == 6
#            define PPMPF_SD3 6
#        elif (PPMPF_HRMAX / 100) % 10 == 7
#            define PPMPF_SD3 7
#        elif (PPMPF_HRMAX / 100) % 10 == 8
#            define PPMPF_SD3 8
#        elif (PPMPF_HRMAX / 100) % 10 == 9
#            define PPMPF_SD3 9
#        endif

#        if (PPMPF_HRMAX / 10) % 10 == 0
#            define PPMPF_SD2 0
#        elif (PPMPF_HRMAX / 10) % 10 == 1
#            define PPMPF_SD2 1
#        elif (PPMPF_HRMAX / 10) % 10 == 2
#            define PPMPF_SD2 2
#        elif (PPMPF_HRMAX / 10) % 10 == 3
#            define PPMPF_SD2 3
#        elif (PPMPF_HRMAX / 10) % 10 == 4
#            define PPMPF_SD2 4
#        elif (PPMPF_HRMAX / 10) % 10 == 5
#            define PPMPF_SD2 5
#        elif (PPMPF_HRMAX / 10) % 10 == 6
#            define PPMPF_SD2 6
#        elif (PPMPF_HRMAX / 10) % 10 == 7
#            define PPMPF_SD2 7
#        elif (PPMPF_HRMAX / 10) % 10 == 8
#            define PPMPF_SD2 8
#        elif (PPMPF_HRMAX / 10) % 10 == 9
#            define PPMPF_SD2 9
#        endif

#        if PPMPF_HRMAX % 10 == 0
#            define PPMPF_SD1 0
#        elif PPMPF_HRMAX % 10 == 1
#            define PPMPF_SD1 1
#        elif PPMPF_HRMAX % 10 == 2
#            define PPMPF_SD1 2
#        elif PPMPF_HRMAX % 10 == 3
#            define PPMPF_SD1 3
#        elif PPMPF_HRMAX % 10 == 4
#            define PPMPF_SD1 4
#        elif PPMPF_HRMAX % 10 == 5
#            define PPMPF_SD1 5
#        elif PPMPF_HRMAX % 10 == 6
#            define PPMPF_SD1 6
#        elif PPMPF_HRMAX % 10 == 7
#            define PPMPF_SD1 7
#        elif PPMPF_HRMAX % 10 == 8
#            define PPMPF_SD1 8
#        elif PPMPF_HRMAX % 10 == 9
#            define PPMPF_SD1 9
#        endif

#        define PPMPF_REPEATS(f,s,...) \
                PPMPF_REPEAT( f \
                            , s \
                            , PPMPF_SD4 \
                            , PPMPF_SD3 \
                            , PPMPF_SD2 \
                            , PPMPF_SD1 \
                            , __VA_ARGS__ )
#   endif
#else
#   define PPMPF_HRMAX 64
#   define PPMPF_SD4 0
#   define PPMPF_SD3 0
#   define PPMPF_SD2 6
#   define PPMPF_SD1 4
#   define PPMPF_REPEATS(f,s,...) PPMPF_REPEAT(f,s,0,0,6,4,__VA_ARGS__)
#endif

#endif /* _ODREEX_PPMPF_KERNEL_CPRO_BASE_HH_ */
