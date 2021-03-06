/*~
 * Copyright (C) 2013 - 2016 George Makrydakis <george@irrequietus.eu>
 * 
 * This file is part of 'clause', a highly generic C++ meta-programming library,
 * subject to the terms and conditions of the Mozilla Public License v 2.0. If
 * a copy of the MPLv2 license text was not distributed with this file, you can
 * obtain it at: http://mozilla.org/MPL/2.0/.
 * 
 * The 'clause' library is an experimental library in active development with
 * a source code repository at: https://github.com/irrequietus/clause.git and
 * issue tracker at https://github.com/irrequietus/clause/issues.
 * 
 */

#ifndef CLAUSE_PPMPF_KERNEL_LOGIC_ALU_HH
#define CLAUSE_PPMPF_KERNEL_LOGIC_ALU_HH

#include <clause/ppmpf/kernel/cpro/core.hh>
#include <clause/ppmpf/collections/tuple/functions.hh>
#include <clause/ppmpf/collections/sequence/functions.hh>

/* NOTE: Minimum and Maximum integer value internal representation. Numbers
 * are represented as five member sequences, with the first being reserved
 * for overflow / signed purposes. For the time being only the positive integer
 * range of [0, 9999] is to be used in fundamental operations.
 *
 * The general format of a number as it is represented internally for PPMPF
 * use is of the form: (X,Y)(A)(B)(C)(D) where:
 *  - X : 0 or 1, signed or unsigned number..
 *  - Y : 0 to 9, is a digit when unsigned or overflow when not.
 * Currently, no negative numbers are allowed and overflow / underflow resolve
 * to minimum and maximum value allowed respectively. The final representation
 * ommits the first member since it has no purpose outside the arithmetic
 * operations of addition and subtraction. Signed numbers are currently a
 * reserved representation.
 */
#define PPMPF_IMINV(...) (0)(0)(0)(0)
#define PPMPF_IMAXV(...) (9)(9)(9)(9)
#define PPMPF_IMINV_(...) (0,0)(0)(0)(0)(0)
#define PPMPF_IMAXV_(...) (0,0)(9)(9)(9)(9)

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
#define PPMPF_ZFY0(a,b,c,d) PPMPF_ZFY1(a,b,c,d)
#define PPMPF_ZFY1(a,b,c,d) PPMPF_ZFY2(PPMPF_IS(0,a),b,c,d)
#define PPMPF_ZFY2(a,b,c,d) PPMPF_ZFY3(a,PPMPF_IS(0,b),c,d)
#define PPMPF_ZFY3(a,b,c,d) PPMPF_ZFY4(a,b,PPMPF_IS(0,c),d)
#define PPMPF_ZFY4(a,b,c,d) PPMPF_ZFY5(a,b,c,PPMPF_IS(0,d))
#define PPMPF_ZFY5(a,b,c,d) PPMPF_ZFY6(a,b,c,d)
#define PPMPF_ZFY6(a,b,c,d) PPMPF_ZFY_ ## a ## b ## c ## d
#define PPMPF_ZFYX(...)     PPMPF_ZFY0(__VA_ARGS__)(__VA_ARGS__)
#define PPMPF_ZFY(a,b,c,d) \
        PPMPF_ZFYX(a,b,c,d)

/* NOTE: PPMPF_XFY - Leading 0s trimming algorithm for preprocessor "tuples",
 * deliberately fixed for 6 digits (dealing with 000000 - 999999) iteration.
 * This could substitute PPMPF_ZFY but I am not so sure yet.
 */
#define PPMPF_XFYC0(a,b,c,d,e,f) \
        PPMPF_CAT(a,PPMPF_CAT(b,PPMPF_CAT(c,PPMPF_CAT(d,PPMPF_CAT(e,f)))))
#define PPMPF_XFYC1(a,b,c,d,e,f) \
        PPMPF_CAT(b,PPMPF_CAT(c,PPMPF_CAT(d,PPMPF_CAT(e,f))))
#define PPMPF_XFYC2(a,b,c,d,e,f) \
        PPMPF_CAT(c,PPMPF_CAT(d,PPMPF_CAT(e,f)))
#define PPMPF_XFYC3(a,b,c,d,e,f) \
        PPMPF_CAT(d,PPMPF_CAT(e,f))
#define PPMPF_XFYC4(a,b,c,d,e,f) \
        PPMPF_CAT(e,f)

#define PPMPF_XFYX0(a,b,c,d,e,f) \
        PPMPF_IFELSE(PPMPF_IS(0,a),PPMPF_XFYX1,PPMPF_XFYC0)(a,b,c,d,e,f)
#define PPMPF_XFYX1(a,b,c,d,e,f) \
        PPMPF_IFELSE(PPMPF_IS(0,b),PPMPF_XFYX2,PPMPF_XFYC1)(a,b,c,d,e,f) 
#define PPMPF_XFYX2(a,b,c,d,e,f) \
        PPMPF_IFELSE(PPMPF_IS(0,c),PPMPF_XFYX3,PPMPF_XFYC2)(a,b,c,d,e,f)
#define PPMPF_XFYX3(a,b,c,d,e,f) \
        PPMPF_IFELSE(PPMPF_IS(0,d),PPMPF_XFYX4,PPMPF_XFYC3)(a,b,c,d,e,f)
#define PPMPF_XFYX4(a,b,c,d,e,f) \
        PPMPF_IFELSE(PPMPF_IS(0,e),PPMPF_XFYX5,PPMPF_XFYC4)(a,b,c,d,e,f)
#define PPMPF_XFYX5(a,b,c,d,e,f) f

#define PPMPF_XFY(a,b,c,d,e,f) \
        PPMPF_XFYX0(a,b,c,d,e,f)


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

#define PPMPF_IEHEX(n) \
        PPMPF_RDMX( \
            PPMPF_RDMX( \
                PPMPF_RDMX( \
                    PPMPF_RDMX(0x,PPMPF_DIGIT(3,n)) \
                , PPMPF_DIGIT(2,n)) \
            , PPMPF_DIGIT(1,n)) \
        , PPMPF_DIGIT(0,n))

/* NOTE: Basic addition algorithm lookup tuple. */
#define PPMPF_ITRBASEP_() \
        ( (0)(0),(0)(1),(0)(2),(0)(3),(0)(4) \
        , (0)(5),(0)(6),(0)(7),(0)(8),(0)(9) \
        , (1)(0),(1)(1),(1)(2),(1)(3),(1)(4) \
        , (1)(5),(1)(6),(1)(7),(1)(8) )

/* NOTE: Basic subtraction algorithm lookup tuple. */
#define PPMPF_ITRBASEM_() \
        ( (0)(9),(0)(8),(0)(7),(0)(6),(0)(5) \
        , (0)(4),(0)(3),(0)(2),(0)(1),(0)(0) \
        , (1)(9),(1)(8),(1)(7),(1)(6),(1)(5) \
        , (1)(4),(1)(3),(1)(2),(1)(1) )

/* NOTE: Addition lookup selection macros */
#define PPMPF_ITRSELP0(a,b,c,d,e,f,g,h,i,j,...) \
        (a,b,c,d,e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELP1(a,b,c,d,e,f,g,h,i,j,...) \
        (b,c,d,e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELP2(a,b,c,d,e,f,g,h,i,j,...) \
        (c,d,e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELP3(a,b,c,d,e,f,g,h,i,j,...) \
        (d,e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELP4(a,b,c,d,e,f,g,h,i,j,...) \
        (e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELP5(a,b,c,d,e,f,g,h,i,j,...) \
        (f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELP6(a,b,c,d,e,f,g,h,i,j,...) \
        (g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELP7(a,b,c,d,e,f,g,h,i,j,...) \
        (h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELP8(a,b,c,d,e,f,g,h,i,j,...) \
        (i,j,__VA_ARGS__,)
#define PPMPF_ITRSELP9(a,b,c,d,e,f,g,h,i,j,...) \
        (j,__VA_ARGS__,)

/* NOTE: Subtraction lookup selection macros */
#define PPMPF_ITRSELM9(a,b,c,d,e,f,g,h,i,j,...) \
        (a,b,c,d,e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELM8(a,b,c,d,e,f,g,h,i,j,...) \
        (b,c,d,e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELM7(a,b,c,d,e,f,g,h,i,j,...) \
        (c,d,e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELM6(a,b,c,d,e,f,g,h,i,j,...) \
        (d,e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELM5(a,b,c,d,e,f,g,h,i,j,...) \
        (e,f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELM4(a,b,c,d,e,f,g,h,i,j,...) \
        (f,g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELM3(a,b,c,d,e,f,g,h,i,j,...) \
        (g,h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELM2(a,b,c,d,e,f,g,h,i,j,...) \
        (h,i,j,__VA_ARGS__,)
#define PPMPF_ITRSELM1(a,b,c,d,e,f,g,h,i,j,...) \
        (i,j,__VA_ARGS__,)
#define PPMPF_ITRSELM0(a,b,c,d,e,f,g,h,i,j,...) \
        (j,__VA_ARGS__,)

#define PPMPF_IADDC___(x) PPMPF_UTUP_GET__ x
#define PPMPF_IADDC__(x)  PPMPF_IADDC___(x)
#define PPMPF_IADDC_(y,x) PPMPF_IADDC__(PPMPF_ITRSELP##y x)

/* NOTE: Addition and subtraction fundamentals, using tuple lookups. */
#define PPMPF_IADD__(x,y) \
        PPMPF_IADDC_(y, PPMPF_CAT(PPMPF_ITRSELP,x) PPMPF_ITRBASEP_())
#define PPMPF_ISUB__(x,y) \
        PPMPF_IADDC_(y, PPMPF_CAT(PPMPF_ITRSELM,x) PPMPF_ITRBASEM_())

/* NOTE: PPMPF_IOPC is an integer overflow protection checkpoint using the
 * reserved sequence member in integer representation for deducing whether
 * the upper limit (9999) or the lower limit (0) of integers usable in ppmpf
 * should be the resolution of overflowed / underflowed integer operations.
 */
#define PPMPF_IOPC_(x) \
        PPMPF_IFELSE( PPMPF_OR PPMPF_SEQ_GET(x) \
                    , PPMPF_IFELSE( PPMPF_DREF(PPMPF_UTUP_GET(PPMPF_SEQ_GET(x)))\
                                  , PPMPF_IMINV \
                                  , PPMPF_IMAXV ) \
                    , PPMPF_JUST )(PPMPF_SEQ_POP(x))
#define PPMPF_IOPC(x) PPMPF_IOPC_(x)

/* NOTE: PPMPF_IADD(x,y) adds two numbers represented as 4 member sequences of
 * digits: (a)(b)(c)(d) and (e)(f)(g)(h). Integer overflow eventualities
 * are capped using PPMPF_IOPC.
 */
#define PPMPF_IADD(x,y) \
        PPMPF_IADDX_( PPMPF_IADD__(PPMPF_DIGIT(3,x),PPMPF_DIGIT(3,y)) \
                    , PPMPF_IADD__(PPMPF_DIGIT(2,x),PPMPF_DIGIT(2,y)) \
                    , PPMPF_IADD__(PPMPF_DIGIT(1,x),PPMPF_DIGIT(1,y)) \
                    , PPMPF_IADD__(PPMPF_DIGIT(0,x),PPMPF_DIGIT(0,y)) )
#define PPMPF_IADDX_(a,b,c,d) \
        PPMPF_IADDX_1( PPMPF_DREF(PPMPF_SEQ_POP(a)) \
                     , PPMPF_DREF(PPMPF_SEQ_POP(b)) \
                     , PPMPF_DREF(PPMPF_SEQ_POP(c)) \
                     , PPMPF_DREF(PPMPF_SEQ_POP(d)) \
                     , PPMPF_DREF(PPMPF_SEQ_GET(a)) \
                     , PPMPF_DREF(PPMPF_SEQ_GET(b)) \
                     , PPMPF_DREF(PPMPF_SEQ_GET(c)) \
                     , PPMPF_DREF(PPMPF_SEQ_GET(d)) )
#define PPMPF_IADDX_1(a,b,c,d,e,f,g,h) \
        PPMPF_IADDX_2(a,b,c,d,e,f,g,PPMPF_IADD__(h,c))
#define PPMPF_IADDX_2(a,b,c,d,e,f,g,s) \
        PPMPF_IADDX_3( a \
                     , b \
                     , PPMPF_DREF(PPMPF_SEQ_POP(s)) \
                     , d \
                     , e \
                     , f \
                     , PPMPF_IADD__(PPMPF_OR(PPMPF_DREF(PPMPF_SEQ_GET(s)),g),b))
#define PPMPF_IADDX_3(a,b,c,d,e,f,s) \
        PPMPF_IADDX_4( a \
                     , PPMPF_DREF(PPMPF_SEQ_POP(s)) \
                     , c \
                     , d \
                     , e \
                     , PPMPF_IADD__(PPMPF_OR(PPMPF_DREF(PPMPF_SEQ_GET(s)),f),a))
#define PPMPF_IADDX_4(a,b,c,d,e,s) \
        PPMPF_IOPC( \
            (0,PPMPF_OR(PPMPF_DREF(PPMPF_SEQ_GET(s)),e)) \
            PPMPF_SEQ_POP(s)(b)(c)(d) \
        )

/* NOTE: PPMPF_ISUB(x,y) subtracts two numbers represented as 4 member
 * sequences of digits: (a)(b)(c)(d) and (e)(f)(g)(h). Integer overflow
 * eventualities are capped using PPMPF_IOPC.
 */
#define PPMPF_ISUB(x,y) \
        PPMPF_ISUBX_( PPMPF_ISUB__(PPMPF_DIGIT(3,x),PPMPF_DIGIT(3,y)) \
                    , PPMPF_ISUB__(PPMPF_DIGIT(2,x),PPMPF_DIGIT(2,y)) \
                    , PPMPF_ISUB__(PPMPF_DIGIT(1,x),PPMPF_DIGIT(1,y)) \
                    , PPMPF_ISUB__(PPMPF_DIGIT(0,x),PPMPF_DIGIT(0,y)) )
#define PPMPF_ISUBX_(a,b,c,d) \
        PPMPF_ISUBX_1( PPMPF_DREF(PPMPF_SEQ_POP(a)) \
                     , PPMPF_DREF(PPMPF_SEQ_POP(b)) \
                     , PPMPF_DREF(PPMPF_SEQ_POP(c)) \
                     , PPMPF_DREF(PPMPF_SEQ_POP(d)) \
                     , PPMPF_DREF(PPMPF_SEQ_GET(a)) \
                     , PPMPF_DREF(PPMPF_SEQ_GET(b)) \
                     , PPMPF_DREF(PPMPF_SEQ_GET(c)) \
                     , PPMPF_DREF(PPMPF_SEQ_GET(d)) )
#define PPMPF_ISUBX_1(a,b,c,d,e,f,g,h) \
        PPMPF_ISUBX_2(a,b,c,d,e,f,g,PPMPF_ISUB__(c,h))
#define PPMPF_ISUBX_2(a,b,c,d,e,f,g,s) \
        PPMPF_ISUBX_3( a \
                     , b \
                     , PPMPF_DREF(PPMPF_SEQ_POP(s)) \
                     , d \
                     , e \
                     , f \
                     , PPMPF_ISUB__(b,PPMPF_OR(PPMPF_DREF(PPMPF_SEQ_GET(s)),g)))
#define PPMPF_ISUBX_3(a,b,c,d,e,f,s) \
        PPMPF_ISUBX_4( a \
                     , PPMPF_DREF(PPMPF_SEQ_POP(s)) \
                     , c \
                     , d \
                     , e \
                     , PPMPF_ISUB__(a,PPMPF_OR(PPMPF_DREF(PPMPF_SEQ_GET(s)),f)))
#define PPMPF_ISUBX_4(a,b,c,d,e,s) \
        PPMPF_IOPC( \
            ( PPMPF_OR(PPMPF_DREF(PPMPF_SEQ_GET(s)),e) \
            , PPMPF_OR(PPMPF_DREF(PPMPF_SEQ_GET(s)),e) ) \
            PPMPF_SEQ_POP(s)(b)(c)(d) \
        )

/* NOTE: PPMPF_ILTX is less - than comparison for two positive ppmpf integers.
 */
#define PPMPF_ILTX(x,y) PPMPF_ILTX_(x,y)
#define PPMPF_ILTX__(n,x,y) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_ISUB__( PPMPF_DIGIT(n,x) \
                                            , PPMPF_DIGIT(n,y))))
#define PPMPF_ILTX_(x,y) \
        PPMPF_IFELSE( PPMPF_ILTX__(3,x,y) \
                    , 1 \
                    , PPMPF_IFELSE( PPMPF_ILTX__(2,x,y) \
                                  , 1 \
                                  , PPMPF_IFELSE( PPMPF_ILTX__(1,x,y) \
                                                , 1 \
                                                , PPMPF_ILTX__(0,x,y))))

/* NOTE: PPMPF_IEQL is comparing two positive ppmpf integers for equality.
 */
#define PPMPF_IEQL(x,y) PPMPF_IEQL_(x,y)
#define PPMPF_IEQL_(x,y) \
        PPMPF_AND( PPMPF_IS( PPMPF_DIGIT(3,x) \
                           , PPMPF_DIGIT(3,y)) \
                 , PPMPF_AND( PPMPF_IS( PPMPF_DIGIT(2,x) \
                                      , PPMPF_DIGIT(2,y)) \
                            , PPMPF_AND( PPMPF_IS( PPMPF_DIGIT(1,x) \
                                                 , PPMPF_DIGIT(1,y)) \
                                       , PPMPF_IS( PPMPF_DIGIT(0,x) \
                                                 , PPMPF_DIGIT(0,y)))))

/* NOTE: PPMPF_INQL is comparing two positive ppmpf integers for inequality. */
#define PPMPF_INQL(x,y) PPMPF_NOT(PPMPF_IEQL_(x,y))

/* NOTE: PPMPF_ILTE is less than or equal comparison. */
#define PPMPF_ILTE(x,y) PPMPF_OR(PPMPF_ILTX_(x,y),PPMPF_IEQL_(x,y))

/* NOTE: PPMPF_IGTE is greater than or equal comparison. */
#define PPMPF_IGTE(x,y) PPMPF_OR(PPMPF_ILTX_(y,x),PPMPF_IEQL_(x,y))

/* NOTE: PPMPF_IGTX is greater than or equal comparison. */
#define PPMPF_IGTX(x,y) PPMPF_ILTX_(y,x)

/* NOTE: Providing ++ and -- operations for ppmpf positive integers. */
#define PPMPF_NEXT(x) PPMPF_IADD(x,(0)(0)(0)(1))
#define PPMPF_PREV(x) PPMPF_ISUB(x,(0)(0)(0)(1))

/* Assistive macro for integer incrementation during folding. */
#define PPMPF_PLUS__(x,y) PPMPF_NEXT(x)

#endif /* CLAUSE_PPMPF_KERNEL_LOGIC_ALU_HH */
