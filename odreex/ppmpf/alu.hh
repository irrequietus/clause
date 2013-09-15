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

#ifndef _ODREEX_PPMPF_ALU_HH_
#define _ODREEX_PPMPF_ALU_HH_

#include <odreex/ppmpf/core.hh>

/* NOTE: PPMPF_IFELSE - An if - then - else macro construct.
 */
#define PPMPF_IFELSE_0(t,e) e
#define PPMPF_IFELSE_1(t,e) t
#define PPMPF_IFELSE(n,t,e) PPMPF_CAT(PPMPF_IFELSE_,n)(t,e)

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

/* NOTE: PPMPF_DIGNM - convert from a 4 digit number represented as a
 * (3)(2)(1)(0) "sequence" to a standard 3210 one, trimming leading zeros.
 */
#define PPMPF_DIGIT_00(x) x
#define PPMPF_DIGIT_10(x) PPMPF_DIGIT_00
#define PPMPF_DIGIT_20(x) PPMPF_DIGIT_10
#define PPMPF_DIGIT_30(x) PPMPF_DIGIT_20
#define PPMPF_DIGIT_01(x)
#define PPMPF_DIGIT_11(x) x PPMPF_DIGIT_01
#define PPMPF_DIGIT_21(x) PPMPF_DIGIT_11
#define PPMPF_DIGIT_31(x) PPMPF_DIGIT_21
#define PPMPF_DIGIT_02(x)
#define PPMPF_DIGIT_12(x) PPMPF_DIGIT_02
#define PPMPF_DIGIT_22(x) x PPMPF_DIGIT_12
#define PPMPF_DIGIT_32(x) PPMPF_DIGIT_22
#define PPMPF_DIGIT_03(x)
#define PPMPF_DIGIT_13(x) PPMPF_DIGIT_03
#define PPMPF_DIGIT_23(x) PPMPF_DIGIT_13
#define PPMPF_DIGIT_33(x) x PPMPF_DIGIT_23
#define PPMPF_DIGIT(n,s) PPMPF_CAT(PPMPF_DIGIT_3,n) s
#define PPMPF_DIGNM(n) \
        PPMPF_ZFY( PPMPF_DIGIT(3,n) \
                 , PPMPF_DIGIT(2,n) \
                 , PPMPF_DIGIT(1,n) \
                 , PPMPF_DIGIT(0,n))

#endif /* _ODREEX_PPMPF_ALU_HH_ */
