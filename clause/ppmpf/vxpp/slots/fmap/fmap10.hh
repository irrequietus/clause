/*~
 * Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
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

/*~
 * @warn This file should not be included directly in code deploying library
 *       constructs from 'clause'; it is part of preprocessor based recursive
 *       inclusions and it is limited by preprocessor-driven evaluation of
 *       constant expressions in '#if' directives. This is the reason it lacks
 *       header inclusion guards.
 */

#ifdef _CLAUSE_PPMPF_VXPP_SET1_
    #error Already iterating macro set with identifier 1.
#else
#define _CLAUSE_PPMPF_VXPP_SET1_
#undef PPMPF_VXPP_ENDL1
#undef PPMPF_VXPP_ENDR1
#undef PPMPF_VXPP
#define PPMPF_VXPP() 1
#define PPMPF_VXPP_ENDR1() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(1)))))
#define PPMPF_VXPP_ENDL1() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(1))))
#include PPMPF_VXPP_INIT(1)
#undef _PPMPF_FARG1
#undef _PPMPF_FARG10
#undef _PPMPF_FARG11
#undef _PPMPF_FARG12
#undef _PPMPF_FARG13
#undef _PPMPF_FARG14
#undef _PPMPF_FARG15
#undef _PPMPF_FARG16
#undef _PPMPF_FARG17
#undef _PPMPF_FARG18
#undef PPMPF_VAR11
#undef PPMPF_VAR12
#undef PPMPF_VAR13
#undef PPMPF_VAR14
#undef PPMPF_VAR15
#undef PPMPF_VAR16
#undef PPMPF_VAR17
#undef PPMPF_VAR18
#undef PPMPF_VAR19
#undef PPMPF_VXPP_ARITY11
#undef PPMPF_VXPP_ARITY12
#undef PPMPF_VXPP_ARITY13
#undef PPMPF_VXPP_ARITY14
#undef PPMPF_VXPP_ARITY15
#undef PPMPF_VXPP_ARITY16
#undef PPMPF_VXPP_ARITY17
#undef PPMPF_VXPP_ARITY18
#undef PPMPF_VXPP_ARITY19
#undef PPMPF_VXPP_FUNC1
#undef PPMPF_VXPP_SLOT1
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET1(0)))
        #define PPMPF_N1() \
                PPMPF_VXPP_DN_ITEM1()
        #define PPMPF_VXPP_SLOT1() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET1(0))
        #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(1)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET1(0)))) == 1
        #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC1() \
                PPMPF_JUST(PPMPF_VXPP_MCF(1)(PPMPF_VXPP_DN_ITEM(1)))
    #else
        #define _PPMPF_FARG10()  _PPMPF_FARG1(0,1)
        #define _PPMPF_FARG11()  _PPMPF_FARG1(1,1)
        #define _PPMPF_FARG12()  _PPMPF_FARG1(2,1)
        #define _PPMPF_FARG13()  _PPMPF_FARG1(3,1)
        #define _PPMPF_FARG14()  _PPMPF_FARG1(4,1)
        #define _PPMPF_FARG15()  _PPMPF_FARG1(5,1)
        #define _PPMPF_FARG16()  _PPMPF_FARG1(6,1)
        #define _PPMPF_FARG17()  _PPMPF_FARG1(7,1)
        #define _PPMPF_FARG18()  _PPMPF_FARG1(8,1)
        #define _PPMPF_FARG1(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(1) == 0
            #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(1)())
        #elif PPMPF_VXPP_XSIZE(1) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR11() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F04 \
                                 , PPMPF_VXPP_S1F03 \
                                 , PPMPF_VXPP_S1F02 \
                                 , PPMPF_VXPP_S1F01 \
                                 , PPMPF_VXPP_S1F00 )
                #define PPMPF_VXPP_ARITY11() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty11.hh>
            #else
                #define PPMPF_VAR11() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(1) \
                               , PPMPF_VAR11() )
            
            #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(1) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR11() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F04 \
                                 , PPMPF_VXPP_S1F03 \
                                 , PPMPF_VXPP_S1F02 \
                                 , PPMPF_VXPP_S1F01 \
                                 , PPMPF_VXPP_S1F00 )
                #define PPMPF_VXPP_ARITY11() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty11.hh>
            #else
                #define PPMPF_VAR11() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR12() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F14 \
                                 , PPMPF_VXPP_S1F13 \
                                 , PPMPF_VXPP_S1F12 \
                                 , PPMPF_VXPP_S1F11 \
                                 , PPMPF_VXPP_S1F10 )
                #define PPMPF_VXPP_ARITY12() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty12.hh>
            #else
                #define PPMPF_VAR12() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0)))
                #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(1) \
                               , PPMPF_VAR11() \
                               , PPMPF_VAR12() )
            #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(1) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR11() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F04 \
                                 , PPMPF_VXPP_S1F03 \
                                 , PPMPF_VXPP_S1F02 \
                                 , PPMPF_VXPP_S1F01 \
                                 , PPMPF_VXPP_S1F00 )
                #define PPMPF_VXPP_ARITY11() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty11.hh>
            #else
                #define PPMPF_VAR11() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR12() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F14 \
                                 , PPMPF_VXPP_S1F13 \
                                 , PPMPF_VXPP_S1F12 \
                                 , PPMPF_VXPP_S1F11 \
                                 , PPMPF_VXPP_S1F10 )
                #define PPMPF_VXPP_ARITY12() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty12.hh>
            #else
                #define PPMPF_VAR12() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0)))
                #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR13() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F24 \
                                 , PPMPF_VXPP_S1F23 \
                                 , PPMPF_VXPP_S1F22 \
                                 , PPMPF_VXPP_S1F21 \
                                 , PPMPF_VXPP_S1F20 )
                 #define PPMPF_VXPP_ARITY13() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty13.hh>
            #else
                #define PPMPF_VAR13() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(1) \
                               , PPMPF_VAR11() \
                               , PPMPF_VAR12() \
                               , PPMPF_VAR13() )
        #elif PPMPF_VXPP_XSIZE(1) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR11() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F04 \
                                 , PPMPF_VXPP_S1F03 \
                                 , PPMPF_VXPP_S1F02 \
                                 , PPMPF_VXPP_S1F01 \
                                 , PPMPF_VXPP_S1F00 )
                #define PPMPF_VXPP_ARITY11() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty11.hh>
            #else
                #define PPMPF_VAR11() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR12() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F14 \
                                 , PPMPF_VXPP_S1F13 \
                                 , PPMPF_VXPP_S1F12 \
                                 , PPMPF_VXPP_S1F11 \
                                 , PPMPF_VXPP_S1F10 )
                #define PPMPF_VXPP_ARITY12() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty12.hh>
            #else
                #define PPMPF_VAR12() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0)))
                #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR13() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F24 \
                                 , PPMPF_VXPP_S1F23 \
                                 , PPMPF_VXPP_S1F22 \
                                 , PPMPF_VXPP_S1F21 \
                                 , PPMPF_VXPP_S1F20 )
                 #define PPMPF_VXPP_ARITY13() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty13.hh>
            #else
                #define PPMPF_VAR13() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR14() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F34 \
                                 , PPMPF_VXPP_S1F33 \
                                 , PPMPF_VXPP_S1F32 \
                                 , PPMPF_VXPP_S1F31 \
                                 , PPMPF_VXPP_S1F30 )
                #define PPMPF_VXPP_ARITY14() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty14.hh>
            #else
                #define PPMPF_VAR14() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(1) \
                               , PPMPF_VAR11() \
                               , PPMPF_VAR12() \
                               , PPMPF_VAR13() \
                               , PPMPF_VAR14() )
        #elif PPMPF_VXPP_XSIZE(1) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR11() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F04 \
                                 , PPMPF_VXPP_S1F03 \
                                 , PPMPF_VXPP_S1F02 \
                                 , PPMPF_VXPP_S1F01 \
                                 , PPMPF_VXPP_S1F00 )
                #define PPMPF_VXPP_ARITY11() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty11.hh>
            #else
                #define PPMPF_VAR11() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR12() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F14 \
                                 , PPMPF_VXPP_S1F13 \
                                 , PPMPF_VXPP_S1F12 \
                                 , PPMPF_VXPP_S1F11 \
                                 , PPMPF_VXPP_S1F10 )
                #define PPMPF_VXPP_ARITY12() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty12.hh>
            #else
                #define PPMPF_VAR12() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0)))
                #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR13() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F24 \
                                 , PPMPF_VXPP_S1F23 \
                                 , PPMPF_VXPP_S1F22 \
                                 , PPMPF_VXPP_S1F21 \
                                 , PPMPF_VXPP_S1F20 )
                 #define PPMPF_VXPP_ARITY13() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty13.hh>
            #else
                #define PPMPF_VAR13() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR14() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F34 \
                                 , PPMPF_VXPP_S1F33 \
                                 , PPMPF_VXPP_S1F32 \
                                 , PPMPF_VXPP_S1F31 \
                                 , PPMPF_VXPP_S1F30 )
                #define PPMPF_VXPP_ARITY14() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty14.hh>
            #else
                #define PPMPF_VAR14() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR15() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F44 \
                                 , PPMPF_VXPP_S1F43 \
                                 , PPMPF_VXPP_S1F42 \
                                 , PPMPF_VXPP_S1F41 \
                                 , PPMPF_VXPP_S1F40 )
               #define PPMPF_VXPP_ARITY15() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty15.hh>
            #else
                #define PPMPF_VAR15() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(1) \
                               , PPMPF_VAR11() \
                               , PPMPF_VAR12() \
                               , PPMPF_VAR13() \
                               , PPMPF_VAR14() \
                               , PPMPF_VAR15() )
        #elif PPMPF_VXPP_XSIZE(1) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR11() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F04 \
                                 , PPMPF_VXPP_S1F03 \
                                 , PPMPF_VXPP_S1F02 \
                                 , PPMPF_VXPP_S1F01 \
                                 , PPMPF_VXPP_S1F00 )
                #define PPMPF_VXPP_ARITY11() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty11.hh>
            #else
                #define PPMPF_VAR11() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR12() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F14 \
                                 , PPMPF_VXPP_S1F13 \
                                 , PPMPF_VXPP_S1F12 \
                                 , PPMPF_VXPP_S1F11 \
                                 , PPMPF_VXPP_S1F10 )
                #define PPMPF_VXPP_ARITY12() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty12.hh>
            #else
                #define PPMPF_VAR12() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0)))
                #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR13() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F24 \
                                 , PPMPF_VXPP_S1F23 \
                                 , PPMPF_VXPP_S1F22 \
                                 , PPMPF_VXPP_S1F21 \
                                 , PPMPF_VXPP_S1F20 )
                 #define PPMPF_VXPP_ARITY13() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty13.hh>
            #else
                #define PPMPF_VAR13() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR14() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F34 \
                                 , PPMPF_VXPP_S1F33 \
                                 , PPMPF_VXPP_S1F32 \
                                 , PPMPF_VXPP_S1F31 \
                                 , PPMPF_VXPP_S1F30 )
                #define PPMPF_VXPP_ARITY14() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty14.hh>
            #else
                #define PPMPF_VAR14() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR15() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F44 \
                                 , PPMPF_VXPP_S1F43 \
                                 , PPMPF_VXPP_S1F42 \
                                 , PPMPF_VXPP_S1F41 \
                                 , PPMPF_VXPP_S1F40 )
               #define PPMPF_VXPP_ARITY15() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty15.hh>
            #else
                #define PPMPF_VAR15() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR16() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F54 \
                                 , PPMPF_VXPP_S1F53 \
                                 , PPMPF_VXPP_S1F52 \
                                 , PPMPF_VXPP_S1F51 \
                                 , PPMPF_VXPP_S1F50 )
                #define PPMPF_VXPP_ARITY16() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty16.hh>
            #else
                #define PPMPF_VAR16() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(1) \
                               , PPMPF_VAR11() \
                               , PPMPF_VAR12() \
                               , PPMPF_VAR13() \
                               , PPMPF_VAR14() \
                               , PPMPF_VAR15() \
                               , PPMPF_VAR16() )
        #elif PPMPF_VXPP_XSIZE(1) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR11() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F04 \
                                 , PPMPF_VXPP_S1F03 \
                                 , PPMPF_VXPP_S1F02 \
                                 , PPMPF_VXPP_S1F01 \
                                 , PPMPF_VXPP_S1F00 )
                #define PPMPF_VXPP_ARITY11() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty11.hh>
            #else
                #define PPMPF_VAR11() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR12() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F14 \
                                 , PPMPF_VXPP_S1F13 \
                                 , PPMPF_VXPP_S1F12 \
                                 , PPMPF_VXPP_S1F11 \
                                 , PPMPF_VXPP_S1F10 )
                #define PPMPF_VXPP_ARITY12() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty12.hh>
            #else
                #define PPMPF_VAR12() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0)))
                #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR13() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F24 \
                                 , PPMPF_VXPP_S1F23 \
                                 , PPMPF_VXPP_S1F22 \
                                 , PPMPF_VXPP_S1F21 \
                                 , PPMPF_VXPP_S1F20 )
                 #define PPMPF_VXPP_ARITY13() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty13.hh>
            #else
                #define PPMPF_VAR13() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR14() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F34 \
                                 , PPMPF_VXPP_S1F33 \
                                 , PPMPF_VXPP_S1F32 \
                                 , PPMPF_VXPP_S1F31 \
                                 , PPMPF_VXPP_S1F30 )
                #define PPMPF_VXPP_ARITY14() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty14.hh>
            #else
                #define PPMPF_VAR14() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR15() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F44 \
                                 , PPMPF_VXPP_S1F43 \
                                 , PPMPF_VXPP_S1F42 \
                                 , PPMPF_VXPP_S1F41 \
                                 , PPMPF_VXPP_S1F40 )
               #define PPMPF_VXPP_ARITY15() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty15.hh>
            #else
                #define PPMPF_VAR15() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR16() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F54 \
                                 , PPMPF_VXPP_S1F53 \
                                 , PPMPF_VXPP_S1F52 \
                                 , PPMPF_VXPP_S1F51 \
                                 , PPMPF_VXPP_S1F50 )
                #define PPMPF_VXPP_ARITY16() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty16.hh>
            #else
                #define PPMPF_VAR16() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR17() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F64 \
                                 , PPMPF_VXPP_S1F63 \
                                 , PPMPF_VXPP_S1F62 \
                                 , PPMPF_VXPP_S1F61 \
                                 , PPMPF_VXPP_S1F60 )
                #define PPMPF_VXPP_ARITY17() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty17.hh>
            #else
                #define PPMPF_VAR17() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(1) \
                               , PPMPF_VAR11() \
                               , PPMPF_VAR12() \
                               , PPMPF_VAR13() \
                               , PPMPF_VAR14() \
                               , PPMPF_VAR15() \
                               , PPMPF_VAR16() \
                               , PPMPF_VAR17() )
        #elif PPMPF_VXPP_XSIZE(1) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR11() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F04 \
                                 , PPMPF_VXPP_S1F03 \
                                 , PPMPF_VXPP_S1F02 \
                                 , PPMPF_VXPP_S1F01 \
                                 , PPMPF_VXPP_S1F00 )
                #define PPMPF_VXPP_ARITY11() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty11.hh>
            #else
                #define PPMPF_VAR11() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR12() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F14 \
                                 , PPMPF_VXPP_S1F13 \
                                 , PPMPF_VXPP_S1F12 \
                                 , PPMPF_VXPP_S1F11 \
                                 , PPMPF_VXPP_S1F10 )
                #define PPMPF_VXPP_ARITY12() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty12.hh>
            #else
                #define PPMPF_VAR12() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0)))
                #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR13() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F24 \
                                 , PPMPF_VXPP_S1F23 \
                                 , PPMPF_VXPP_S1F22 \
                                 , PPMPF_VXPP_S1F21 \
                                 , PPMPF_VXPP_S1F20 )
                 #define PPMPF_VXPP_ARITY13() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty13.hh>
            #else
                #define PPMPF_VAR13() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR14() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F34 \
                                 , PPMPF_VXPP_S1F33 \
                                 , PPMPF_VXPP_S1F32 \
                                 , PPMPF_VXPP_S1F31 \
                                 , PPMPF_VXPP_S1F30 )
                #define PPMPF_VXPP_ARITY14() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty14.hh>
            #else
                #define PPMPF_VAR14() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR15() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F44 \
                                 , PPMPF_VXPP_S1F43 \
                                 , PPMPF_VXPP_S1F42 \
                                 , PPMPF_VXPP_S1F41 \
                                 , PPMPF_VXPP_S1F40 )
               #define PPMPF_VXPP_ARITY15() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty15.hh>
            #else
                #define PPMPF_VAR15() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR16() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F54 \
                                 , PPMPF_VXPP_S1F53 \
                                 , PPMPF_VXPP_S1F52 \
                                 , PPMPF_VXPP_S1F51 \
                                 , PPMPF_VXPP_S1F50 )
                #define PPMPF_VXPP_ARITY16() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty16.hh>
            #else
                #define PPMPF_VAR16() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR17() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F64 \
                                 , PPMPF_VXPP_S1F63 \
                                 , PPMPF_VXPP_S1F62 \
                                 , PPMPF_VXPP_S1F61 \
                                 , PPMPF_VXPP_S1F60 )
                #define PPMPF_VXPP_ARITY17() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty17.hh>
            #else
                #define PPMPF_VAR17() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR18() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F74 \
                                 , PPMPF_VXPP_S1F73 \
                                 , PPMPF_VXPP_S1F72 \
                                 , PPMPF_VXPP_S1F71 \
                                 , PPMPF_VXPP_S1F70 )
                #define PPMPF_VXPP_ARITY18() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty18.hh>
            #else
                #define PPMPF_VAR18() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(1) \
                               , PPMPF_VAR11() \
                               , PPMPF_VAR12() \
                               , PPMPF_VAR13() \
                               , PPMPF_VAR14() \
                               , PPMPF_VAR15() \
                               , PPMPF_VAR16() \
                               , PPMPF_VAR17() \
                               , PPMPF_VAR18() )
        #elif PPMPF_VXPP_XSIZE(1) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR11() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F04 \
                                 , PPMPF_VXPP_S1F03 \
                                 , PPMPF_VXPP_S1F02 \
                                 , PPMPF_VXPP_S1F01 \
                                 , PPMPF_VXPP_S1F00 )
                #define PPMPF_VXPP_ARITY11() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty11.hh>
            #else
                #define PPMPF_VAR11() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR12() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F14 \
                                 , PPMPF_VXPP_S1F13 \
                                 , PPMPF_VXPP_S1F12 \
                                 , PPMPF_VXPP_S1F11 \
                                 , PPMPF_VXPP_S1F10 )
                #define PPMPF_VXPP_ARITY12() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty12.hh>
            #else
                #define PPMPF_VAR12() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(1,0)))
                #define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR13() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F24 \
                                 , PPMPF_VXPP_S1F23 \
                                 , PPMPF_VXPP_S1F22 \
                                 , PPMPF_VXPP_S1F21 \
                                 , PPMPF_VXPP_S1F20 )
                 #define PPMPF_VXPP_ARITY13() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty13.hh>
            #else
                #define PPMPF_VAR13() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR14() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F34 \
                                 , PPMPF_VXPP_S1F33 \
                                 , PPMPF_VXPP_S1F32 \
                                 , PPMPF_VXPP_S1F31 \
                                 , PPMPF_VXPP_S1F30 )
                #define PPMPF_VXPP_ARITY14() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty14.hh>
            #else
                #define PPMPF_VAR14() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR15() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F44 \
                                 , PPMPF_VXPP_S1F43 \
                                 , PPMPF_VXPP_S1F42 \
                                 , PPMPF_VXPP_S1F41 \
                                 , PPMPF_VXPP_S1F40 )
               #define PPMPF_VXPP_ARITY15() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty15.hh>
            #else
                #define PPMPF_VAR15() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR16() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F54 \
                                 , PPMPF_VXPP_S1F53 \
                                 , PPMPF_VXPP_S1F52 \
                                 , PPMPF_VXPP_S1F51 \
                                 , PPMPF_VXPP_S1F50 )
                #define PPMPF_VXPP_ARITY16() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty16.hh>
            #else
                #define PPMPF_VAR16() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR17() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F64 \
                                 , PPMPF_VXPP_S1F63 \
                                 , PPMPF_VXPP_S1F62 \
                                 , PPMPF_VXPP_S1F61 \
                                 , PPMPF_VXPP_S1F60 )
                #define PPMPF_VXPP_ARITY17() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty17.hh>
            #else
                #define PPMPF_VAR17() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR18() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F74 \
                                 , PPMPF_VXPP_S1F73 \
                                 , PPMPF_VXPP_S1F72 \
                                 , PPMPF_VXPP_S1F71 \
                                 , PPMPF_VXPP_S1F70 )
                #define PPMPF_VXPP_ARITY18() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty18.hh>
            #else
                #define PPMPF_VAR18() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(1,0))))
                #define PPMPF_VAR19() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S1F84 \
                                 , PPMPF_VXPP_S1F83 \
                                 , PPMPF_VXPP_S1F82 \
                                 , PPMPF_VXPP_S1F81 \
                                 , PPMPF_VXPP_S1F80 )
                #define PPMPF_VXPP_ARITY19() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty19.hh>
            #else
                #define PPMPF_VAR19() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(1,(()))))
                #define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC1() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(1) \
                               , PPMPF_VAR11() \
                               , PPMPF_VAR12() \
                               , PPMPF_VAR13() \
                               , PPMPF_VAR14() \
                               , PPMPF_VAR15() \
                               , PPMPF_VAR16() \
                               , PPMPF_VAR17() \
                               , PPMPF_VAR18() \
                               , PPMPF_VAR19() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(1)
    #undef _PPMPF_FARG1
    #undef _PPMPF_FARG10
    #undef _PPMPF_FARG11
    #undef _PPMPF_FARG12
    #undef _PPMPF_FARG13
    #undef _PPMPF_FARG14
    #undef _PPMPF_FARG15
    #undef _PPMPF_FARG16
    #undef _PPMPF_FARG17
    #undef _PPMPF_FARG18
    #undef PPMPF_VAR11
    #undef PPMPF_VAR12
    #undef PPMPF_VAR13
    #undef PPMPF_VAR14
    #undef PPMPF_VAR15
    #undef PPMPF_VAR16
    #undef PPMPF_VAR17
    #undef PPMPF_VAR18
    #undef PPMPF_VAR19
    #undef PPMPF_VXPP_ARITY11
    #undef PPMPF_VXPP_ARITY12
    #undef PPMPF_VXPP_ARITY13
    #undef PPMPF_VXPP_ARITY14
    #undef PPMPF_VXPP_ARITY15
    #undef PPMPF_VXPP_ARITY16
    #undef PPMPF_VXPP_ARITY17
    #undef PPMPF_VXPP_ARITY18
    #undef PPMPF_VXPP_ARITY19
#endif
    #undef PPMPF_VXPP_SET1
    #undef PPMPF_VXPP_ENDL1
    #undef PPMPF_VXPP_ENDR1
    #undef PPMPF_VXPP_SLOT1
#undef _CLAUSE_PPMPF_VXPP_SET1_
#undef PPMPF_VXPP
#endif /* _CLAUSE_PPMPF_VXPP_SET1_ */
