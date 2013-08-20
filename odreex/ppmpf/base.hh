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

#ifndef _ODREEX_PPMPF_BASE_HH_
#define _ODREEX_PPMPF_BASE_HH_

/* NOTE: PPMPF_QUOTE - Double quote enclosing macro. */
#define PPMPF_QUOTE(x...) # x

/* NOTE: PPMPF_COMMA and PPMPF_WSPC are just , and whitespace accordingly. */
#define PPMPF_COMMA() ,
#define PPMPF_WSPC() /**/

/* NOTE: PPMPF_CAT - Binary Concatenation macro */
#define PPMPF_CAT_1(x, y) PPMPF_CAT_2( x , y )
#define PPMPF_CAT_2(x, y) PPMPF_CAT_3( x ## y )
#define PPMPF_CAT_3(x) x
#define PPMPF_CAT(x, y) PPMPF_CAT_1(x, y)

/* NOTE: Implementations for AND, OR, NOR, XOR, XNOR, NAND, NOT could have been
 * introduced using the universal NOR / NAND combinations but it was decided to
 * implement each one separately for the time being.
 */

/* NOTE: PPMPF_AND - Logical AND */
#define PPMPF_AND_11() 1
#define PPMPF_AND_00() 0
#define PPMPF_AND_10() 0
#define PPMPF_AND_01() 0
#define PPMPF_AND(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_AND_, x), y)()

/* NOTE: PPMPF_NAND - Logical NAND */
#define PPMPF_NAND_11() 0
#define PPMPF_NAND_00() 1
#define PPMPF_NAND_10() 1
#define PPMPF_NAND_01() 1
#define PPMPF_NAND(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_NAND_, x), y)()

/* NOTE: PPMPF_OR - Logical OR */
#define PPMPF_OR_11() 1
#define PPMPF_OR_00() 0
#define PPMPF_OR_10() 1
#define PPMPF_OR_01() 1
#define PPMPF_OR(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_OR_, x), y)()

/* NOTE: PPMPF_NOR - Logical NOR */
#define PPMPF_NOR_11() 0
#define PPMPF_NOR_00() 1
#define PPMPF_NOR_10() 0
#define PPMPF_NOR_01() 0
#define PPMPF_NOR(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_NOR_, x), y)()

/* NOTE: PPMPF_XOR - Logical XOR */
#define PPMPF_XOR_11() 0
#define PPMPF_XOR_00() 0
#define PPMPF_XOR_10() 1
#define PPMPF_XOR_01() 1
#define PPMPF_XOR(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_XOR_, x), y)()

/* NOTE: PPMPF_XNOR - Logical XNOR */
#define PPMPF_XNOR_11() 1
#define PPMPF_XNOR_00() 1
#define PPMPF_XNOR_10() 0
#define PPMPF_XNOR_01() 0
#define PPMPF_XNOR(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_XNOR_, x), y)()

/* NOTE: PPMPF_NOT - Logical NOT */
#define PPMPF_NOT_1() 0
#define PPMPF_NOT_0() 1
#define PPMPF_NOT(x) PPMPF_CAT(PPMPF_NOT_, x)()

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
#define PPMPF_PNX(n) PPMPF_CAT(PPMPF_NX, n)()

/* NOTE: PPMPF_IS - Digit detector, mainly for use on repeats. */
#define PPMPF_IS_ZZ() 1
#define PPMPF_IS_Z0() 0
#define PPMPF_IS_Z1() 0
#define PPMPF_IS_Z2() 0
#define PPMPF_IS_Z3() 0
#define PPMPF_IS_Z4() 0
#define PPMPF_IS_Z5() 0
#define PPMPF_IS_Z6() 0
#define PPMPF_IS_Z7() 0
#define PPMPF_IS_Z8() 0
#define PPMPF_IS_Z9() 0
#define PPMPF_IS_0Z() 1
#define PPMPF_IS_00() 1
#define PPMPF_IS_01() 0
#define PPMPF_IS_02() 0
#define PPMPF_IS_03() 0
#define PPMPF_IS_04() 0
#define PPMPF_IS_05() 0
#define PPMPF_IS_06() 0
#define PPMPF_IS_07() 0
#define PPMPF_IS_08() 0
#define PPMPF_IS_09() 0
#define PPMPF_IS_1Z() 0
#define PPMPF_IS_10() 0
#define PPMPF_IS_11() 1
#define PPMPF_IS_12() 0
#define PPMPF_IS_13() 0
#define PPMPF_IS_14() 0
#define PPMPF_IS_15() 0
#define PPMPF_IS_16() 0
#define PPMPF_IS_17() 0
#define PPMPF_IS_18() 0
#define PPMPF_IS_19() 0
#define PPMPF_IS_2Z() 0
#define PPMPF_IS_20() 0
#define PPMPF_IS_21() 0
#define PPMPF_IS_22() 1
#define PPMPF_IS_23() 0
#define PPMPF_IS_24() 0
#define PPMPF_IS_25() 0
#define PPMPF_IS_26() 0
#define PPMPF_IS_27() 0
#define PPMPF_IS_28() 0
#define PPMPF_IS_29() 0
#define PPMPF_IS_3Z() 0
#define PPMPF_IS_30() 0
#define PPMPF_IS_31() 0
#define PPMPF_IS_32() 0
#define PPMPF_IS_33() 1
#define PPMPF_IS_34() 0
#define PPMPF_IS_35() 0
#define PPMPF_IS_36() 0
#define PPMPF_IS_37() 0
#define PPMPF_IS_38() 0
#define PPMPF_IS_39() 0
#define PPMPF_IS_4Z() 0
#define PPMPF_IS_40() 0
#define PPMPF_IS_41() 0
#define PPMPF_IS_42() 0
#define PPMPF_IS_43() 0
#define PPMPF_IS_44() 1
#define PPMPF_IS_45() 0
#define PPMPF_IS_46() 0
#define PPMPF_IS_47() 0
#define PPMPF_IS_48() 0
#define PPMPF_IS_49() 0
#define PPMPF_IS_5Z() 0
#define PPMPF_IS_50() 0
#define PPMPF_IS_51() 0
#define PPMPF_IS_52() 0
#define PPMPF_IS_53() 0
#define PPMPF_IS_54() 0
#define PPMPF_IS_55() 1
#define PPMPF_IS_56() 0
#define PPMPF_IS_57() 0
#define PPMPF_IS_58() 0
#define PPMPF_IS_59() 0
#define PPMPF_IS_6Z() 0
#define PPMPF_IS_60() 0
#define PPMPF_IS_61() 0
#define PPMPF_IS_62() 0
#define PPMPF_IS_63() 0
#define PPMPF_IS_64() 0
#define PPMPF_IS_65() 0
#define PPMPF_IS_66() 1
#define PPMPF_IS_67() 0
#define PPMPF_IS_68() 0
#define PPMPF_IS_69() 0
#define PPMPF_IS_7Z() 0
#define PPMPF_IS_70() 0
#define PPMPF_IS_71() 0
#define PPMPF_IS_72() 0
#define PPMPF_IS_73() 0
#define PPMPF_IS_74() 0
#define PPMPF_IS_75() 0
#define PPMPF_IS_76() 0
#define PPMPF_IS_77() 1
#define PPMPF_IS_78() 0
#define PPMPF_IS_79() 0
#define PPMPF_IS_8Z() 0
#define PPMPF_IS_80() 0
#define PPMPF_IS_81() 0
#define PPMPF_IS_82() 0
#define PPMPF_IS_83() 0
#define PPMPF_IS_84() 0
#define PPMPF_IS_85() 0
#define PPMPF_IS_86() 0
#define PPMPF_IS_87() 0
#define PPMPF_IS_88() 1
#define PPMPF_IS_89() 0
#define PPMPF_IS_9Z() 0
#define PPMPF_IS_90() 0
#define PPMPF_IS_91() 0
#define PPMPF_IS_92() 0
#define PPMPF_IS_93() 0
#define PPMPF_IS_94() 0
#define PPMPF_IS_95() 1
#define PPMPF_IS_96() 0
#define PPMPF_IS_97() 0
#define PPMPF_IS_98() 0
#define PPMPF_IS_99() 1
#define PPMPF_IS(n,x) PPMPF_CAT(PPMPF_CAT(PPMPF_IS_,n),x)()

/* NOTE: PPMPF_ZFY - Leading 0s trimming algorithm for preprocessor "tuples",
 * deliberately fixed for 4 digits (we are dealing with 0000 - 9999) iteration.
 */
#define PPMPF_ZFY_0000(a,b,c,d) PPMPF_CAT(a, PPMPF_CAT(b, PPMPF_CAT(c,d)))
#define PPMPF_ZFY_0001(a,b,c,d) PPMPF_CAT(a, PPMPF_CAT(b, PPMPF_CAT(c,d)))
#define PPMPF_ZFY_0010(a,b,c,d) PPMPF_CAT(a, PPMPF_CAT(b, PPMPF_CAT(c,d)))
#define PPMPF_ZFY_0011(a,b,c,d) PPMPF_CAT(a, PPMPF_CAT(b, PPMPF_CAT(c,d)))
#define PPMPF_ZFY_0100(a,b,c,d) PPMPF_CAT(a, PPMPF_CAT(b, PPMPF_CAT(c,d)))
#define PPMPF_ZFY_0101(a,b,c,d) PPMPF_CAT(a, PPMPF_CAT(b, PPMPF_CAT(c,d)))
#define PPMPF_ZFY_0110(a,b,c,d) PPMPF_CAT(a, PPMPF_CAT(b, PPMPF_CAT(c,d)))
#define PPMPF_ZFY_0111(a,b,c,d) PPMPF_CAT(a, PPMPF_CAT(b, PPMPF_CAT(c,d)))
#define PPMPF_ZFY_1000(a,b,c,d) PPMPF_CAT(b, PPMPF_CAT(c,d))
#define PPMPF_ZFY_1001(a,b,c,d) PPMPF_CAT(b, PPMPF_CAT(c,d))
#define PPMPF_ZFY_1010(a,b,c,d) PPMPF_CAT(b, PPMPF_CAT(c,d))
#define PPMPF_ZFY_1011(a,b,c,d) PPMPF_CAT(b, PPMPF_CAT(c,d))
#define PPMPF_ZFY_1100(a,b,c,d) PPMPF_CAT(c,d)
#define PPMPF_ZFY_1101(a,b,c,d) PPMPF_CAT(c,d)
#define PPMPF_ZFY_1110(a,b,c,d) d
#define PPMPF_ZFY_1111(a,b,c,d) 0
#define PPMPF_ZFY(a,b,c,d) \
        PPMPF_CAT( PPMPF_ZFY_ \
                 , PPMPF_CAT( PPMPF_IS(0,a) \
                            , PPMPF_CAT( PPMPF_IS(0,b) \
                                       , PPMPF_CAT( PPMPF_IS(0,c) \
                                                  , PPMPF_IS(0,d)))))(a,b,c,d)

/* NOTE: PPMPF_IFELSE - An if - then - else macro construct.
 */
#define PPMPF_IFELSE_0(t,e) e
#define PPMPF_IFELSE_1(t,e) t
#define PPMPF_IFELSE(n,t,e) PPMPF_CAT(PPMPF_IFELSE_,n)(t,e)

/* NOTE: PPMPF_0H* - macro framework component for repeats (0) */
#define PPMPF_0HZ(x,y,z,f,b,e)
#define PPMPF_0H0(x,y,z,f,b,e)                        f(PPMPF_ZFY(x,y,z,0)) e()
#define PPMPF_0H1(x,y,z,f,b,e) PPMPF_0H0(x,y,z,f,b,b) f(PPMPF_ZFY(x,y,z,1)) e()
#define PPMPF_0H2(x,y,z,f,b,e) PPMPF_0H1(x,y,z,f,b,b) f(PPMPF_ZFY(x,y,z,2)) e()
#define PPMPF_0H3(x,y,z,f,b,e) PPMPF_0H2(x,y,z,f,b,b) f(PPMPF_ZFY(x,y,z,3)) e()
#define PPMPF_0H4(x,y,z,f,b,e) PPMPF_0H3(x,y,z,f,b,b) f(PPMPF_ZFY(x,y,z,4)) e()
#define PPMPF_0H5(x,y,z,f,b,e) PPMPF_0H4(x,y,z,f,b,b) f(PPMPF_ZFY(x,y,z,5)) e()
#define PPMPF_0H6(x,y,z,f,b,e) PPMPF_0H5(x,y,z,f,b,b) f(PPMPF_ZFY(x,y,z,6)) e()
#define PPMPF_0H7(x,y,z,f,b,e) PPMPF_0H6(x,y,z,f,b,b) f(PPMPF_ZFY(x,y,z,7)) e()
#define PPMPF_0H8(x,y,z,f,b,e) PPMPF_0H7(x,y,z,f,b,b) f(PPMPF_ZFY(x,y,z,8)) e()
#define PPMPF_0H9(x,y,z,f,b,e) PPMPF_0H8(x,y,z,f,b,b) f(PPMPF_ZFY(x,y,z,9)) e()

/* NOTE: PPMPF_1H* - macro framework component for repeats (1) */
#define PPMPF_1HZ(x,y,f,b,e)
#define PPMPF_1H0(x,y,f,b,e)                      PPMPF_0H9(x,y,0,f,b,e)
#define PPMPF_1H1(x,y,f,b,e) PPMPF_1H0(x,y,f,b,b) PPMPF_0H9(x,y,1,f,b,e)
#define PPMPF_1H2(x,y,f,b,e) PPMPF_1H1(x,y,f,b,b) PPMPF_0H9(x,y,2,f,b,e)
#define PPMPF_1H3(x,y,f,b,e) PPMPF_1H2(x,y,f,b,b) PPMPF_0H9(x,y,3,f,b,e)
#define PPMPF_1H4(x,y,f,b,e) PPMPF_1H3(x,y,f,b,b) PPMPF_0H9(x,y,4,f,b,e)
#define PPMPF_1H5(x,y,f,b,e) PPMPF_1H4(x,y,f,b,b) PPMPF_0H9(x,y,5,f,b,e)
#define PPMPF_1H6(x,y,f,b,e) PPMPF_1H5(x,y,f,b,b) PPMPF_0H9(x,y,6,f,b,e)
#define PPMPF_1H7(x,y,f,b,e) PPMPF_1H6(x,y,f,b,b) PPMPF_0H9(x,y,7,f,b,e)
#define PPMPF_1H8(x,y,f,b,e) PPMPF_1H7(x,y,f,b,b) PPMPF_0H9(x,y,8,f,b,e)
#define PPMPF_1H9(x,y,f,b,e) PPMPF_1H8(x,y,f,b,b) PPMPF_0H9(x,y,9,f,b,e)

/* NOTE: PPMPF_2H* - macro framework component for repeats (2) */
#define PPMPF_2HZ(x,f,b,e)
#define PPMPF_2H0(x,f,b,e)                    PPMPF_1H9(x,0,f,b,e)
#define PPMPF_2H1(x,f,b,e) PPMPF_2H0(x,f,b,b) PPMPF_1H9(x,1,f,b,e)
#define PPMPF_2H2(x,f,b,e) PPMPF_2H1(x,f,b,b) PPMPF_1H9(x,2,f,b,e)
#define PPMPF_2H3(x,f,b,e) PPMPF_2H2(x,f,b,b) PPMPF_1H9(x,3,f,b,e)
#define PPMPF_2H4(x,f,b,e) PPMPF_2H3(x,f,b,b) PPMPF_1H9(x,4,f,b,e)
#define PPMPF_2H5(x,f,b,e) PPMPF_2H4(x,f,b,b) PPMPF_1H9(x,5,f,b,e)
#define PPMPF_2H6(x,f,b,e) PPMPF_2H5(x,f,b,b) PPMPF_1H9(x,6,f,b,e)
#define PPMPF_2H7(x,f,b,e) PPMPF_2H6(x,f,b,b) PPMPF_1H9(x,7,f,b,e)
#define PPMPF_2H8(x,f,b,e) PPMPF_2H7(x,f,b,b) PPMPF_1H9(x,8,f,b,e)
#define PPMPF_2H9(x,f,b,e) PPMPF_2H8(x,f,b,b) PPMPF_1H9(x,9,f,b,e)

/* NOTE: PPMPF_3H* - macro framework component for repeats (3) */
#define PPMPF_3HZ(f,b,e)
#define PPMPF_3H0(f,b,e)                  PPMPF_2H9(0,f,b,e)
#define PPMPF_3H1(f,b,e) PPMPF_3H0(f,b,b) PPMPF_2H9(1,f,b,e)
#define PPMPF_3H2(f,b,e) PPMPF_3H1(f,b,b) PPMPF_2H9(2,f,b,e)
#define PPMPF_3H3(f,b,e) PPMPF_3H2(f,b,b) PPMPF_2H9(3,f,b,e)
#define PPMPF_3H4(f,b,e) PPMPF_3H3(f,b,b) PPMPF_2H9(4,f,b,e)
#define PPMPF_3H5(f,b,e) PPMPF_3H4(f,b,b) PPMPF_2H9(5,f,b,e)
#define PPMPF_3H6(f,b,e) PPMPF_3H5(f,b,b) PPMPF_2H9(6,f,b,e)
#define PPMPF_3H7(f,b,e) PPMPF_3H6(f,b,b) PPMPF_2H9(7,f,b,e)
#define PPMPF_3H8(f,b,e) PPMPF_3H7(f,b,b) PPMPF_2H9(8,f,b,e)
#define PPMPF_3H9(f,b,e) PPMPF_3H8(f,b,b) PPMPF_2H9(9,f,b,e)

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

#define PPMPF_RPTHP3(t,h,d,u) \
    PPMPF_OR( PPMPF_OR( PPMPF_NOT(PPMPF_IS(0,h)) \
                      , PPMPF_NOT(PPMPF_IS(0,d))) \
            , PPMPF_NOT(PPMPF_IS(0,u)))

#define PPMPF_RPTHP2(t,h,d,u) \
    PPMPF_OR( PPMPF_NOT(PPMPF_IS(0,d)), PPMPF_NOT(PPMPF_IS(0,u)))

#define PPMPF_RPTHP1(t,h,d,u) \
    PPMPF_NOT(PPMPF_IS(0,u))

#define PPMPF_REPEAT(f,s,t,h,d,u) \
    PPMPF_RPTH(3,t)(f,s,    PPMPF_IFELSE(PPMPF_RPTHP3(t,h,d,u),s,PPMPF_WSPC)) \
    PPMPF_RPTH(2,h)(t,f,s,  PPMPF_IFELSE(PPMPF_RPTHP2(t,h,d,u),s,PPMPF_WSPC)) \
    PPMPF_RPTH(1,d)(t,h,f,s,PPMPF_IFELSE(PPMPF_RPTHP2(t,h,d,u),s,PPMPF_WSPC)) \
    PPMPF_RPTH(0,u)(t,h,d,f,s,PPMPF_WSPC)

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
#        define PPMPF_REPEATS(f,s) PPMPF_REPEAT(f,s,9,9,9,9) f(9999)
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
            
#        define PPMPF_REPEATS(f,s) \
                PPMPF_REPEAT( f \
                            , s \
                            , PPMPF_SD4 \
                            , PPMPF_SD3 \
                            , PPMPF_SD2 \
                            , PPMPF_SD1 )
#   endif
#else
#   define PPMPF_HRMAX 64
#   define PPMPF_SD4 0
#   define PPMPF_SD3 0
#   define PPMPF_SD2 6
#   define PPMPF_SD1 4
#   define PPMPF_REPEATS(f,s) PPMPF_REPEAT(f,s,0,0,6,4)
#endif

#endif /* _ODREEX_PPMPF_BASE_HH_ */
