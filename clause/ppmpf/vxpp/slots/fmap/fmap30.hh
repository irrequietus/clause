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

/*~
 * @warn This file should not be included directly in code deploying library
 *       constructs from 'clause'; it is part of preprocessor based recursive
 *       inclusions and it is limited by preprocessor-driven evaluation of
 *       constant expressions in '#if' directives. This is the reason it lacks
 *       header inclusion guards.
 */

#ifdef CLAUSE_PPMPF_VXPP_SET3_
    #error Already iterating macro set with identifier 3.
#else
#define CLAUSE_PPMPF_VXPP_SET3_
#undef PPMPF_VXPP_ENDL3
#undef PPMPF_VXPP_ENDR3
#undef PPMPF_VXPP
#define PPMPF_VXPP() 3
#define PPMPF_VXPP_ENDR3() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(3)))))
#define PPMPF_VXPP_ENDL3() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(3))))
#include PPMPF_VXPP_INIT(3)
#undef _PPMPF_FARG3
#undef _PPMPF_FARG30
#undef _PPMPF_FARG31
#undef _PPMPF_FARG32
#undef _PPMPF_FARG33
#undef _PPMPF_FARG34
#undef _PPMPF_FARG35
#undef _PPMPF_FARG36
#undef _PPMPF_FARG37
#undef _PPMPF_FARG38
#undef PPMPF_VAR31
#undef PPMPF_VAR32
#undef PPMPF_VAR33
#undef PPMPF_VAR34
#undef PPMPF_VAR35
#undef PPMPF_VAR36
#undef PPMPF_VAR37
#undef PPMPF_VAR38
#undef PPMPF_VAR39
#undef PPMPF_VXPP_ARITY31
#undef PPMPF_VXPP_ARITY32
#undef PPMPF_VXPP_ARITY33
#undef PPMPF_VXPP_ARITY34
#undef PPMPF_VXPP_ARITY35
#undef PPMPF_VXPP_ARITY36
#undef PPMPF_VXPP_ARITY37
#undef PPMPF_VXPP_ARITY38
#undef PPMPF_VXPP_ARITY39
#undef PPMPF_VXPP_FUNC3
#undef PPMPF_VXPP_SLOT3
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET3(0)))
        #define PPMPF_N3() \
                PPMPF_VXPP_DN_ITEM3()
        #define PPMPF_VXPP_SLOT3() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET3(0))
        #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(3)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET3(0)))) == 1
        #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC3() \
                PPMPF_JUST(PPMPF_VXPP_MCF(3)(PPMPF_VXPP_DN_ITEM(3)))
    #else
        #define _PPMPF_FARG30()  _PPMPF_FARG3(0,3)
        #define _PPMPF_FARG31()  _PPMPF_FARG3(1,3)
        #define _PPMPF_FARG32()  _PPMPF_FARG3(2,3)
        #define _PPMPF_FARG33()  _PPMPF_FARG3(3,3)
        #define _PPMPF_FARG34()  _PPMPF_FARG3(4,3)
        #define _PPMPF_FARG35()  _PPMPF_FARG3(5,3)
        #define _PPMPF_FARG36()  _PPMPF_FARG3(6,3)
        #define _PPMPF_FARG37()  _PPMPF_FARG3(7,3)
        #define _PPMPF_FARG38()  _PPMPF_FARG3(8,3)
        #define _PPMPF_FARG3(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(3) == 0
            #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(3)())
        #elif PPMPF_VXPP_XSIZE(3) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR31() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F04 \
                                 , PPMPF_VXPP_S3F03 \
                                 , PPMPF_VXPP_S3F02 \
                                 , PPMPF_VXPP_S3F01 \
                                 , PPMPF_VXPP_S3F00 )
                #define PPMPF_VXPP_ARITY31() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty31.hh>
            #else
                #define PPMPF_VAR31() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(3) \
                               , PPMPF_VAR31() )
            
            #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(3) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR31() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F04 \
                                 , PPMPF_VXPP_S3F03 \
                                 , PPMPF_VXPP_S3F02 \
                                 , PPMPF_VXPP_S3F01 \
                                 , PPMPF_VXPP_S3F00 )
                #define PPMPF_VXPP_ARITY31() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty31.hh>
            #else
                #define PPMPF_VAR31() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR32() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F14 \
                                 , PPMPF_VXPP_S3F13 \
                                 , PPMPF_VXPP_S3F12 \
                                 , PPMPF_VXPP_S3F11 \
                                 , PPMPF_VXPP_S3F10 )
                #define PPMPF_VXPP_ARITY32() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty32.hh>
            #else
                #define PPMPF_VAR32() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0)))
                #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(3) \
                               , PPMPF_VAR31() \
                               , PPMPF_VAR32() )
            #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(3) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR31() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F04 \
                                 , PPMPF_VXPP_S3F03 \
                                 , PPMPF_VXPP_S3F02 \
                                 , PPMPF_VXPP_S3F01 \
                                 , PPMPF_VXPP_S3F00 )
                #define PPMPF_VXPP_ARITY31() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty31.hh>
            #else
                #define PPMPF_VAR31() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR32() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F14 \
                                 , PPMPF_VXPP_S3F13 \
                                 , PPMPF_VXPP_S3F12 \
                                 , PPMPF_VXPP_S3F11 \
                                 , PPMPF_VXPP_S3F10 )
                #define PPMPF_VXPP_ARITY32() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty32.hh>
            #else
                #define PPMPF_VAR32() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0)))
                #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR33() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F24 \
                                 , PPMPF_VXPP_S3F23 \
                                 , PPMPF_VXPP_S3F22 \
                                 , PPMPF_VXPP_S3F21 \
                                 , PPMPF_VXPP_S3F20 )
                 #define PPMPF_VXPP_ARITY33() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty33.hh>
            #else
                #define PPMPF_VAR33() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(3) \
                               , PPMPF_VAR31() \
                               , PPMPF_VAR32() \
                               , PPMPF_VAR33() )
        #elif PPMPF_VXPP_XSIZE(3) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR31() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F04 \
                                 , PPMPF_VXPP_S3F03 \
                                 , PPMPF_VXPP_S3F02 \
                                 , PPMPF_VXPP_S3F01 \
                                 , PPMPF_VXPP_S3F00 )
                #define PPMPF_VXPP_ARITY31() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty31.hh>
            #else
                #define PPMPF_VAR31() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR32() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F14 \
                                 , PPMPF_VXPP_S3F13 \
                                 , PPMPF_VXPP_S3F12 \
                                 , PPMPF_VXPP_S3F11 \
                                 , PPMPF_VXPP_S3F10 )
                #define PPMPF_VXPP_ARITY32() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty32.hh>
            #else
                #define PPMPF_VAR32() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0)))
                #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR33() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F24 \
                                 , PPMPF_VXPP_S3F23 \
                                 , PPMPF_VXPP_S3F22 \
                                 , PPMPF_VXPP_S3F21 \
                                 , PPMPF_VXPP_S3F20 )
                 #define PPMPF_VXPP_ARITY33() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty33.hh>
            #else
                #define PPMPF_VAR33() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR34() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F34 \
                                 , PPMPF_VXPP_S3F33 \
                                 , PPMPF_VXPP_S3F32 \
                                 , PPMPF_VXPP_S3F31 \
                                 , PPMPF_VXPP_S3F30 )
                #define PPMPF_VXPP_ARITY34() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty34.hh>
            #else
                #define PPMPF_VAR34() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(3) \
                               , PPMPF_VAR31() \
                               , PPMPF_VAR32() \
                               , PPMPF_VAR33() \
                               , PPMPF_VAR34() )
        #elif PPMPF_VXPP_XSIZE(3) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR31() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F04 \
                                 , PPMPF_VXPP_S3F03 \
                                 , PPMPF_VXPP_S3F02 \
                                 , PPMPF_VXPP_S3F01 \
                                 , PPMPF_VXPP_S3F00 )
                #define PPMPF_VXPP_ARITY31() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty31.hh>
            #else
                #define PPMPF_VAR31() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR32() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F14 \
                                 , PPMPF_VXPP_S3F13 \
                                 , PPMPF_VXPP_S3F12 \
                                 , PPMPF_VXPP_S3F11 \
                                 , PPMPF_VXPP_S3F10 )
                #define PPMPF_VXPP_ARITY32() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty32.hh>
            #else
                #define PPMPF_VAR32() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0)))
                #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR33() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F24 \
                                 , PPMPF_VXPP_S3F23 \
                                 , PPMPF_VXPP_S3F22 \
                                 , PPMPF_VXPP_S3F21 \
                                 , PPMPF_VXPP_S3F20 )
                 #define PPMPF_VXPP_ARITY33() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty33.hh>
            #else
                #define PPMPF_VAR33() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR34() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F34 \
                                 , PPMPF_VXPP_S3F33 \
                                 , PPMPF_VXPP_S3F32 \
                                 , PPMPF_VXPP_S3F31 \
                                 , PPMPF_VXPP_S3F30 )
                #define PPMPF_VXPP_ARITY34() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty34.hh>
            #else
                #define PPMPF_VAR34() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR35() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F44 \
                                 , PPMPF_VXPP_S3F43 \
                                 , PPMPF_VXPP_S3F42 \
                                 , PPMPF_VXPP_S3F41 \
                                 , PPMPF_VXPP_S3F40 )
               #define PPMPF_VXPP_ARITY35() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty35.hh>
            #else
                #define PPMPF_VAR35() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(3) \
                               , PPMPF_VAR31() \
                               , PPMPF_VAR32() \
                               , PPMPF_VAR33() \
                               , PPMPF_VAR34() \
                               , PPMPF_VAR35() )
        #elif PPMPF_VXPP_XSIZE(3) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR31() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F04 \
                                 , PPMPF_VXPP_S3F03 \
                                 , PPMPF_VXPP_S3F02 \
                                 , PPMPF_VXPP_S3F01 \
                                 , PPMPF_VXPP_S3F00 )
                #define PPMPF_VXPP_ARITY31() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty31.hh>
            #else
                #define PPMPF_VAR31() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR32() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F14 \
                                 , PPMPF_VXPP_S3F13 \
                                 , PPMPF_VXPP_S3F12 \
                                 , PPMPF_VXPP_S3F11 \
                                 , PPMPF_VXPP_S3F10 )
                #define PPMPF_VXPP_ARITY32() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty32.hh>
            #else
                #define PPMPF_VAR32() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0)))
                #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR33() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F24 \
                                 , PPMPF_VXPP_S3F23 \
                                 , PPMPF_VXPP_S3F22 \
                                 , PPMPF_VXPP_S3F21 \
                                 , PPMPF_VXPP_S3F20 )
                 #define PPMPF_VXPP_ARITY33() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty33.hh>
            #else
                #define PPMPF_VAR33() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR34() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F34 \
                                 , PPMPF_VXPP_S3F33 \
                                 , PPMPF_VXPP_S3F32 \
                                 , PPMPF_VXPP_S3F31 \
                                 , PPMPF_VXPP_S3F30 )
                #define PPMPF_VXPP_ARITY34() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty34.hh>
            #else
                #define PPMPF_VAR34() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR35() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F44 \
                                 , PPMPF_VXPP_S3F43 \
                                 , PPMPF_VXPP_S3F42 \
                                 , PPMPF_VXPP_S3F41 \
                                 , PPMPF_VXPP_S3F40 )
               #define PPMPF_VXPP_ARITY35() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty35.hh>
            #else
                #define PPMPF_VAR35() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR36() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F54 \
                                 , PPMPF_VXPP_S3F53 \
                                 , PPMPF_VXPP_S3F52 \
                                 , PPMPF_VXPP_S3F51 \
                                 , PPMPF_VXPP_S3F50 )
                #define PPMPF_VXPP_ARITY36() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty36.hh>
            #else
                #define PPMPF_VAR36() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(3) \
                               , PPMPF_VAR31() \
                               , PPMPF_VAR32() \
                               , PPMPF_VAR33() \
                               , PPMPF_VAR34() \
                               , PPMPF_VAR35() \
                               , PPMPF_VAR36() )
        #elif PPMPF_VXPP_XSIZE(3) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR31() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F04 \
                                 , PPMPF_VXPP_S3F03 \
                                 , PPMPF_VXPP_S3F02 \
                                 , PPMPF_VXPP_S3F01 \
                                 , PPMPF_VXPP_S3F00 )
                #define PPMPF_VXPP_ARITY31() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty31.hh>
            #else
                #define PPMPF_VAR31() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR32() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F14 \
                                 , PPMPF_VXPP_S3F13 \
                                 , PPMPF_VXPP_S3F12 \
                                 , PPMPF_VXPP_S3F11 \
                                 , PPMPF_VXPP_S3F10 )
                #define PPMPF_VXPP_ARITY32() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty32.hh>
            #else
                #define PPMPF_VAR32() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0)))
                #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR33() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F24 \
                                 , PPMPF_VXPP_S3F23 \
                                 , PPMPF_VXPP_S3F22 \
                                 , PPMPF_VXPP_S3F21 \
                                 , PPMPF_VXPP_S3F20 )
                 #define PPMPF_VXPP_ARITY33() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty33.hh>
            #else
                #define PPMPF_VAR33() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR34() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F34 \
                                 , PPMPF_VXPP_S3F33 \
                                 , PPMPF_VXPP_S3F32 \
                                 , PPMPF_VXPP_S3F31 \
                                 , PPMPF_VXPP_S3F30 )
                #define PPMPF_VXPP_ARITY34() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty34.hh>
            #else
                #define PPMPF_VAR34() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR35() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F44 \
                                 , PPMPF_VXPP_S3F43 \
                                 , PPMPF_VXPP_S3F42 \
                                 , PPMPF_VXPP_S3F41 \
                                 , PPMPF_VXPP_S3F40 )
               #define PPMPF_VXPP_ARITY35() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty35.hh>
            #else
                #define PPMPF_VAR35() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR36() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F54 \
                                 , PPMPF_VXPP_S3F53 \
                                 , PPMPF_VXPP_S3F52 \
                                 , PPMPF_VXPP_S3F51 \
                                 , PPMPF_VXPP_S3F50 )
                #define PPMPF_VXPP_ARITY36() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty36.hh>
            #else
                #define PPMPF_VAR36() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR37() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F64 \
                                 , PPMPF_VXPP_S3F63 \
                                 , PPMPF_VXPP_S3F62 \
                                 , PPMPF_VXPP_S3F61 \
                                 , PPMPF_VXPP_S3F60 )
                #define PPMPF_VXPP_ARITY37() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty37.hh>
            #else
                #define PPMPF_VAR37() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(3) \
                               , PPMPF_VAR31() \
                               , PPMPF_VAR32() \
                               , PPMPF_VAR33() \
                               , PPMPF_VAR34() \
                               , PPMPF_VAR35() \
                               , PPMPF_VAR36() \
                               , PPMPF_VAR37() )
        #elif PPMPF_VXPP_XSIZE(3) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR31() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F04 \
                                 , PPMPF_VXPP_S3F03 \
                                 , PPMPF_VXPP_S3F02 \
                                 , PPMPF_VXPP_S3F01 \
                                 , PPMPF_VXPP_S3F00 )
                #define PPMPF_VXPP_ARITY31() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty31.hh>
            #else
                #define PPMPF_VAR31() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR32() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F14 \
                                 , PPMPF_VXPP_S3F13 \
                                 , PPMPF_VXPP_S3F12 \
                                 , PPMPF_VXPP_S3F11 \
                                 , PPMPF_VXPP_S3F10 )
                #define PPMPF_VXPP_ARITY32() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty32.hh>
            #else
                #define PPMPF_VAR32() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0)))
                #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR33() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F24 \
                                 , PPMPF_VXPP_S3F23 \
                                 , PPMPF_VXPP_S3F22 \
                                 , PPMPF_VXPP_S3F21 \
                                 , PPMPF_VXPP_S3F20 )
                 #define PPMPF_VXPP_ARITY33() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty33.hh>
            #else
                #define PPMPF_VAR33() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR34() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F34 \
                                 , PPMPF_VXPP_S3F33 \
                                 , PPMPF_VXPP_S3F32 \
                                 , PPMPF_VXPP_S3F31 \
                                 , PPMPF_VXPP_S3F30 )
                #define PPMPF_VXPP_ARITY34() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty34.hh>
            #else
                #define PPMPF_VAR34() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR35() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F44 \
                                 , PPMPF_VXPP_S3F43 \
                                 , PPMPF_VXPP_S3F42 \
                                 , PPMPF_VXPP_S3F41 \
                                 , PPMPF_VXPP_S3F40 )
               #define PPMPF_VXPP_ARITY35() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty35.hh>
            #else
                #define PPMPF_VAR35() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR36() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F54 \
                                 , PPMPF_VXPP_S3F53 \
                                 , PPMPF_VXPP_S3F52 \
                                 , PPMPF_VXPP_S3F51 \
                                 , PPMPF_VXPP_S3F50 )
                #define PPMPF_VXPP_ARITY36() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty36.hh>
            #else
                #define PPMPF_VAR36() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR37() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F64 \
                                 , PPMPF_VXPP_S3F63 \
                                 , PPMPF_VXPP_S3F62 \
                                 , PPMPF_VXPP_S3F61 \
                                 , PPMPF_VXPP_S3F60 )
                #define PPMPF_VXPP_ARITY37() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty37.hh>
            #else
                #define PPMPF_VAR37() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR38() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F74 \
                                 , PPMPF_VXPP_S3F73 \
                                 , PPMPF_VXPP_S3F72 \
                                 , PPMPF_VXPP_S3F71 \
                                 , PPMPF_VXPP_S3F70 )
                #define PPMPF_VXPP_ARITY38() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty38.hh>
            #else
                #define PPMPF_VAR38() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(3) \
                               , PPMPF_VAR31() \
                               , PPMPF_VAR32() \
                               , PPMPF_VAR33() \
                               , PPMPF_VAR34() \
                               , PPMPF_VAR35() \
                               , PPMPF_VAR36() \
                               , PPMPF_VAR37() \
                               , PPMPF_VAR38() )
        #elif PPMPF_VXPP_XSIZE(3) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR31() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F04 \
                                 , PPMPF_VXPP_S3F03 \
                                 , PPMPF_VXPP_S3F02 \
                                 , PPMPF_VXPP_S3F01 \
                                 , PPMPF_VXPP_S3F00 )
                #define PPMPF_VXPP_ARITY31() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty31.hh>
            #else
                #define PPMPF_VAR31() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR32() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F14 \
                                 , PPMPF_VXPP_S3F13 \
                                 , PPMPF_VXPP_S3F12 \
                                 , PPMPF_VXPP_S3F11 \
                                 , PPMPF_VXPP_S3F10 )
                #define PPMPF_VXPP_ARITY32() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty32.hh>
            #else
                #define PPMPF_VAR32() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(3,0)))
                #define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR33() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F24 \
                                 , PPMPF_VXPP_S3F23 \
                                 , PPMPF_VXPP_S3F22 \
                                 , PPMPF_VXPP_S3F21 \
                                 , PPMPF_VXPP_S3F20 )
                 #define PPMPF_VXPP_ARITY33() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty33.hh>
            #else
                #define PPMPF_VAR33() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR34() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F34 \
                                 , PPMPF_VXPP_S3F33 \
                                 , PPMPF_VXPP_S3F32 \
                                 , PPMPF_VXPP_S3F31 \
                                 , PPMPF_VXPP_S3F30 )
                #define PPMPF_VXPP_ARITY34() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty34.hh>
            #else
                #define PPMPF_VAR34() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR35() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F44 \
                                 , PPMPF_VXPP_S3F43 \
                                 , PPMPF_VXPP_S3F42 \
                                 , PPMPF_VXPP_S3F41 \
                                 , PPMPF_VXPP_S3F40 )
               #define PPMPF_VXPP_ARITY35() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty35.hh>
            #else
                #define PPMPF_VAR35() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR36() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F54 \
                                 , PPMPF_VXPP_S3F53 \
                                 , PPMPF_VXPP_S3F52 \
                                 , PPMPF_VXPP_S3F51 \
                                 , PPMPF_VXPP_S3F50 )
                #define PPMPF_VXPP_ARITY36() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty36.hh>
            #else
                #define PPMPF_VAR36() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR37() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F64 \
                                 , PPMPF_VXPP_S3F63 \
                                 , PPMPF_VXPP_S3F62 \
                                 , PPMPF_VXPP_S3F61 \
                                 , PPMPF_VXPP_S3F60 )
                #define PPMPF_VXPP_ARITY37() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty37.hh>
            #else
                #define PPMPF_VAR37() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR38() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F74 \
                                 , PPMPF_VXPP_S3F73 \
                                 , PPMPF_VXPP_S3F72 \
                                 , PPMPF_VXPP_S3F71 \
                                 , PPMPF_VXPP_S3F70 )
                #define PPMPF_VXPP_ARITY38() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty38.hh>
            #else
                #define PPMPF_VAR38() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(3,0))))
                #define PPMPF_VAR39() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S3F84 \
                                 , PPMPF_VXPP_S3F83 \
                                 , PPMPF_VXPP_S3F82 \
                                 , PPMPF_VXPP_S3F81 \
                                 , PPMPF_VXPP_S3F80 )
                #define PPMPF_VXPP_ARITY39() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty39.hh>
            #else
                #define PPMPF_VAR39() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(3,(()))))
                #define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC3() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(3) \
                               , PPMPF_VAR31() \
                               , PPMPF_VAR32() \
                               , PPMPF_VAR33() \
                               , PPMPF_VAR34() \
                               , PPMPF_VAR35() \
                               , PPMPF_VAR36() \
                               , PPMPF_VAR37() \
                               , PPMPF_VAR38() \
                               , PPMPF_VAR39() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(3)
    #undef _PPMPF_FARG3
    #undef _PPMPF_FARG30
    #undef _PPMPF_FARG31
    #undef _PPMPF_FARG32
    #undef _PPMPF_FARG33
    #undef _PPMPF_FARG34
    #undef _PPMPF_FARG35
    #undef _PPMPF_FARG36
    #undef _PPMPF_FARG37
    #undef _PPMPF_FARG38
    #undef PPMPF_VAR31
    #undef PPMPF_VAR32
    #undef PPMPF_VAR33
    #undef PPMPF_VAR34
    #undef PPMPF_VAR35
    #undef PPMPF_VAR36
    #undef PPMPF_VAR37
    #undef PPMPF_VAR38
    #undef PPMPF_VAR39
    #undef PPMPF_VXPP_ARITY31
    #undef PPMPF_VXPP_ARITY32
    #undef PPMPF_VXPP_ARITY33
    #undef PPMPF_VXPP_ARITY34
    #undef PPMPF_VXPP_ARITY35
    #undef PPMPF_VXPP_ARITY36
    #undef PPMPF_VXPP_ARITY37
    #undef PPMPF_VXPP_ARITY38
    #undef PPMPF_VXPP_ARITY39
#endif
    #undef PPMPF_VXPP_SET3
    #undef PPMPF_VXPP_ENDL3
    #undef PPMPF_VXPP_ENDR3
    #undef PPMPF_VXPP_SLOT3
#undef CLAUSE_PPMPF_VXPP_SET3_
#undef PPMPF_VXPP
#endif /* CLAUSE_PPMPF_VXPP_SET3_ */
