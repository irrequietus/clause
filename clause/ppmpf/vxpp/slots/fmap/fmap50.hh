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

#ifdef CLAUSE_PPMPF_VXPP_SET5_
    #error Already iterating macro set with identifier 5.
#else
#define CLAUSE_PPMPF_VXPP_SET5_
#undef PPMPF_VXPP_ENDL5
#undef PPMPF_VXPP_ENDR5
#undef PPMPF_VXPP
#define PPMPF_VXPP() 5
#define PPMPF_VXPP_ENDR5() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(5)))))
#define PPMPF_VXPP_ENDL5() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(5))))
#include PPMPF_VXPP_INIT(5)
#undef _PPMPF_FARG5
#undef _PPMPF_FARG50
#undef _PPMPF_FARG51
#undef _PPMPF_FARG52
#undef _PPMPF_FARG53
#undef _PPMPF_FARG54
#undef _PPMPF_FARG55
#undef _PPMPF_FARG56
#undef _PPMPF_FARG57
#undef _PPMPF_FARG58
#undef PPMPF_VAR51
#undef PPMPF_VAR52
#undef PPMPF_VAR53
#undef PPMPF_VAR54
#undef PPMPF_VAR55
#undef PPMPF_VAR56
#undef PPMPF_VAR57
#undef PPMPF_VAR58
#undef PPMPF_VAR59
#undef PPMPF_VXPP_ARITY51
#undef PPMPF_VXPP_ARITY52
#undef PPMPF_VXPP_ARITY53
#undef PPMPF_VXPP_ARITY54
#undef PPMPF_VXPP_ARITY55
#undef PPMPF_VXPP_ARITY56
#undef PPMPF_VXPP_ARITY57
#undef PPMPF_VXPP_ARITY58
#undef PPMPF_VXPP_ARITY59
#undef PPMPF_VXPP_FUNC5
#undef PPMPF_VXPP_SLOT5
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET5(0)))
        #define PPMPF_N5() \
                PPMPF_VXPP_DN_ITEM5()
        #define PPMPF_VXPP_SLOT5() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET5(0))
        #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(5)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET5(0)))) == 1
        #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC5() \
                PPMPF_JUST(PPMPF_VXPP_MCF(5)(PPMPF_VXPP_DN_ITEM(5)))
    #else
        #define _PPMPF_FARG50()  _PPMPF_FARG5(0,5)
        #define _PPMPF_FARG51()  _PPMPF_FARG5(1,5)
        #define _PPMPF_FARG52()  _PPMPF_FARG5(2,5)
        #define _PPMPF_FARG53()  _PPMPF_FARG5(3,5)
        #define _PPMPF_FARG54()  _PPMPF_FARG5(4,5)
        #define _PPMPF_FARG55()  _PPMPF_FARG5(5,5)
        #define _PPMPF_FARG56()  _PPMPF_FARG5(6,5)
        #define _PPMPF_FARG57()  _PPMPF_FARG5(7,5)
        #define _PPMPF_FARG58()  _PPMPF_FARG5(8,5)
        #define _PPMPF_FARG5(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(5) == 0
            #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(5)())
        #elif PPMPF_VXPP_XSIZE(5) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR51() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F04 \
                                 , PPMPF_VXPP_S5F03 \
                                 , PPMPF_VXPP_S5F02 \
                                 , PPMPF_VXPP_S5F01 \
                                 , PPMPF_VXPP_S5F00 )
                #define PPMPF_VXPP_ARITY51() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty51.hh>
            #else
                #define PPMPF_VAR51() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(5) \
                               , PPMPF_VAR51() )
            
            #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(5) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR51() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F04 \
                                 , PPMPF_VXPP_S5F03 \
                                 , PPMPF_VXPP_S5F02 \
                                 , PPMPF_VXPP_S5F01 \
                                 , PPMPF_VXPP_S5F00 )
                #define PPMPF_VXPP_ARITY51() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty51.hh>
            #else
                #define PPMPF_VAR51() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR52() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F14 \
                                 , PPMPF_VXPP_S5F13 \
                                 , PPMPF_VXPP_S5F12 \
                                 , PPMPF_VXPP_S5F11 \
                                 , PPMPF_VXPP_S5F10 )
                #define PPMPF_VXPP_ARITY52() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty52.hh>
            #else
                #define PPMPF_VAR52() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0)))
                #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(5) \
                               , PPMPF_VAR51() \
                               , PPMPF_VAR52() )
            #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(5) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR51() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F04 \
                                 , PPMPF_VXPP_S5F03 \
                                 , PPMPF_VXPP_S5F02 \
                                 , PPMPF_VXPP_S5F01 \
                                 , PPMPF_VXPP_S5F00 )
                #define PPMPF_VXPP_ARITY51() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty51.hh>
            #else
                #define PPMPF_VAR51() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR52() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F14 \
                                 , PPMPF_VXPP_S5F13 \
                                 , PPMPF_VXPP_S5F12 \
                                 , PPMPF_VXPP_S5F11 \
                                 , PPMPF_VXPP_S5F10 )
                #define PPMPF_VXPP_ARITY52() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty52.hh>
            #else
                #define PPMPF_VAR52() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0)))
                #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR53() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F24 \
                                 , PPMPF_VXPP_S5F23 \
                                 , PPMPF_VXPP_S5F22 \
                                 , PPMPF_VXPP_S5F21 \
                                 , PPMPF_VXPP_S5F20 )
                 #define PPMPF_VXPP_ARITY53() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty53.hh>
            #else
                #define PPMPF_VAR53() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(5) \
                               , PPMPF_VAR51() \
                               , PPMPF_VAR52() \
                               , PPMPF_VAR53() )
        #elif PPMPF_VXPP_XSIZE(5) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR51() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F04 \
                                 , PPMPF_VXPP_S5F03 \
                                 , PPMPF_VXPP_S5F02 \
                                 , PPMPF_VXPP_S5F01 \
                                 , PPMPF_VXPP_S5F00 )
                #define PPMPF_VXPP_ARITY51() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty51.hh>
            #else
                #define PPMPF_VAR51() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR52() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F14 \
                                 , PPMPF_VXPP_S5F13 \
                                 , PPMPF_VXPP_S5F12 \
                                 , PPMPF_VXPP_S5F11 \
                                 , PPMPF_VXPP_S5F10 )
                #define PPMPF_VXPP_ARITY52() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty52.hh>
            #else
                #define PPMPF_VAR52() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0)))
                #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR53() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F24 \
                                 , PPMPF_VXPP_S5F23 \
                                 , PPMPF_VXPP_S5F22 \
                                 , PPMPF_VXPP_S5F21 \
                                 , PPMPF_VXPP_S5F20 )
                 #define PPMPF_VXPP_ARITY53() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty53.hh>
            #else
                #define PPMPF_VAR53() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR54() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F34 \
                                 , PPMPF_VXPP_S5F33 \
                                 , PPMPF_VXPP_S5F32 \
                                 , PPMPF_VXPP_S5F31 \
                                 , PPMPF_VXPP_S5F30 )
                #define PPMPF_VXPP_ARITY54() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty54.hh>
            #else
                #define PPMPF_VAR54() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(5) \
                               , PPMPF_VAR51() \
                               , PPMPF_VAR52() \
                               , PPMPF_VAR53() \
                               , PPMPF_VAR54() )
        #elif PPMPF_VXPP_XSIZE(5) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR51() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F04 \
                                 , PPMPF_VXPP_S5F03 \
                                 , PPMPF_VXPP_S5F02 \
                                 , PPMPF_VXPP_S5F01 \
                                 , PPMPF_VXPP_S5F00 )
                #define PPMPF_VXPP_ARITY51() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty51.hh>
            #else
                #define PPMPF_VAR51() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR52() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F14 \
                                 , PPMPF_VXPP_S5F13 \
                                 , PPMPF_VXPP_S5F12 \
                                 , PPMPF_VXPP_S5F11 \
                                 , PPMPF_VXPP_S5F10 )
                #define PPMPF_VXPP_ARITY52() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty52.hh>
            #else
                #define PPMPF_VAR52() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0)))
                #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR53() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F24 \
                                 , PPMPF_VXPP_S5F23 \
                                 , PPMPF_VXPP_S5F22 \
                                 , PPMPF_VXPP_S5F21 \
                                 , PPMPF_VXPP_S5F20 )
                 #define PPMPF_VXPP_ARITY53() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty53.hh>
            #else
                #define PPMPF_VAR53() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR54() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F34 \
                                 , PPMPF_VXPP_S5F33 \
                                 , PPMPF_VXPP_S5F32 \
                                 , PPMPF_VXPP_S5F31 \
                                 , PPMPF_VXPP_S5F30 )
                #define PPMPF_VXPP_ARITY54() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty54.hh>
            #else
                #define PPMPF_VAR54() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR55() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F44 \
                                 , PPMPF_VXPP_S5F43 \
                                 , PPMPF_VXPP_S5F42 \
                                 , PPMPF_VXPP_S5F41 \
                                 , PPMPF_VXPP_S5F40 )
               #define PPMPF_VXPP_ARITY55() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty55.hh>
            #else
                #define PPMPF_VAR55() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(5) \
                               , PPMPF_VAR51() \
                               , PPMPF_VAR52() \
                               , PPMPF_VAR53() \
                               , PPMPF_VAR54() \
                               , PPMPF_VAR55() )
        #elif PPMPF_VXPP_XSIZE(5) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR51() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F04 \
                                 , PPMPF_VXPP_S5F03 \
                                 , PPMPF_VXPP_S5F02 \
                                 , PPMPF_VXPP_S5F01 \
                                 , PPMPF_VXPP_S5F00 )
                #define PPMPF_VXPP_ARITY51() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty51.hh>
            #else
                #define PPMPF_VAR51() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR52() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F14 \
                                 , PPMPF_VXPP_S5F13 \
                                 , PPMPF_VXPP_S5F12 \
                                 , PPMPF_VXPP_S5F11 \
                                 , PPMPF_VXPP_S5F10 )
                #define PPMPF_VXPP_ARITY52() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty52.hh>
            #else
                #define PPMPF_VAR52() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0)))
                #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR53() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F24 \
                                 , PPMPF_VXPP_S5F23 \
                                 , PPMPF_VXPP_S5F22 \
                                 , PPMPF_VXPP_S5F21 \
                                 , PPMPF_VXPP_S5F20 )
                 #define PPMPF_VXPP_ARITY53() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty53.hh>
            #else
                #define PPMPF_VAR53() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR54() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F34 \
                                 , PPMPF_VXPP_S5F33 \
                                 , PPMPF_VXPP_S5F32 \
                                 , PPMPF_VXPP_S5F31 \
                                 , PPMPF_VXPP_S5F30 )
                #define PPMPF_VXPP_ARITY54() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty54.hh>
            #else
                #define PPMPF_VAR54() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR55() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F44 \
                                 , PPMPF_VXPP_S5F43 \
                                 , PPMPF_VXPP_S5F42 \
                                 , PPMPF_VXPP_S5F41 \
                                 , PPMPF_VXPP_S5F40 )
               #define PPMPF_VXPP_ARITY55() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty55.hh>
            #else
                #define PPMPF_VAR55() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR56() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F54 \
                                 , PPMPF_VXPP_S5F53 \
                                 , PPMPF_VXPP_S5F52 \
                                 , PPMPF_VXPP_S5F51 \
                                 , PPMPF_VXPP_S5F50 )
                #define PPMPF_VXPP_ARITY56() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty56.hh>
            #else
                #define PPMPF_VAR56() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(5) \
                               , PPMPF_VAR51() \
                               , PPMPF_VAR52() \
                               , PPMPF_VAR53() \
                               , PPMPF_VAR54() \
                               , PPMPF_VAR55() \
                               , PPMPF_VAR56() )
        #elif PPMPF_VXPP_XSIZE(5) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR51() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F04 \
                                 , PPMPF_VXPP_S5F03 \
                                 , PPMPF_VXPP_S5F02 \
                                 , PPMPF_VXPP_S5F01 \
                                 , PPMPF_VXPP_S5F00 )
                #define PPMPF_VXPP_ARITY51() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty51.hh>
            #else
                #define PPMPF_VAR51() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR52() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F14 \
                                 , PPMPF_VXPP_S5F13 \
                                 , PPMPF_VXPP_S5F12 \
                                 , PPMPF_VXPP_S5F11 \
                                 , PPMPF_VXPP_S5F10 )
                #define PPMPF_VXPP_ARITY52() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty52.hh>
            #else
                #define PPMPF_VAR52() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0)))
                #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR53() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F24 \
                                 , PPMPF_VXPP_S5F23 \
                                 , PPMPF_VXPP_S5F22 \
                                 , PPMPF_VXPP_S5F21 \
                                 , PPMPF_VXPP_S5F20 )
                 #define PPMPF_VXPP_ARITY53() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty53.hh>
            #else
                #define PPMPF_VAR53() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR54() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F34 \
                                 , PPMPF_VXPP_S5F33 \
                                 , PPMPF_VXPP_S5F32 \
                                 , PPMPF_VXPP_S5F31 \
                                 , PPMPF_VXPP_S5F30 )
                #define PPMPF_VXPP_ARITY54() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty54.hh>
            #else
                #define PPMPF_VAR54() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR55() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F44 \
                                 , PPMPF_VXPP_S5F43 \
                                 , PPMPF_VXPP_S5F42 \
                                 , PPMPF_VXPP_S5F41 \
                                 , PPMPF_VXPP_S5F40 )
               #define PPMPF_VXPP_ARITY55() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty55.hh>
            #else
                #define PPMPF_VAR55() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR56() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F54 \
                                 , PPMPF_VXPP_S5F53 \
                                 , PPMPF_VXPP_S5F52 \
                                 , PPMPF_VXPP_S5F51 \
                                 , PPMPF_VXPP_S5F50 )
                #define PPMPF_VXPP_ARITY56() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty56.hh>
            #else
                #define PPMPF_VAR56() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR57() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F64 \
                                 , PPMPF_VXPP_S5F63 \
                                 , PPMPF_VXPP_S5F62 \
                                 , PPMPF_VXPP_S5F61 \
                                 , PPMPF_VXPP_S5F60 )
                #define PPMPF_VXPP_ARITY57() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty57.hh>
            #else
                #define PPMPF_VAR57() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(5) \
                               , PPMPF_VAR51() \
                               , PPMPF_VAR52() \
                               , PPMPF_VAR53() \
                               , PPMPF_VAR54() \
                               , PPMPF_VAR55() \
                               , PPMPF_VAR56() \
                               , PPMPF_VAR57() )
        #elif PPMPF_VXPP_XSIZE(5) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR51() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F04 \
                                 , PPMPF_VXPP_S5F03 \
                                 , PPMPF_VXPP_S5F02 \
                                 , PPMPF_VXPP_S5F01 \
                                 , PPMPF_VXPP_S5F00 )
                #define PPMPF_VXPP_ARITY51() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty51.hh>
            #else
                #define PPMPF_VAR51() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR52() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F14 \
                                 , PPMPF_VXPP_S5F13 \
                                 , PPMPF_VXPP_S5F12 \
                                 , PPMPF_VXPP_S5F11 \
                                 , PPMPF_VXPP_S5F10 )
                #define PPMPF_VXPP_ARITY52() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty52.hh>
            #else
                #define PPMPF_VAR52() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0)))
                #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR53() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F24 \
                                 , PPMPF_VXPP_S5F23 \
                                 , PPMPF_VXPP_S5F22 \
                                 , PPMPF_VXPP_S5F21 \
                                 , PPMPF_VXPP_S5F20 )
                 #define PPMPF_VXPP_ARITY53() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty53.hh>
            #else
                #define PPMPF_VAR53() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR54() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F34 \
                                 , PPMPF_VXPP_S5F33 \
                                 , PPMPF_VXPP_S5F32 \
                                 , PPMPF_VXPP_S5F31 \
                                 , PPMPF_VXPP_S5F30 )
                #define PPMPF_VXPP_ARITY54() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty54.hh>
            #else
                #define PPMPF_VAR54() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR55() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F44 \
                                 , PPMPF_VXPP_S5F43 \
                                 , PPMPF_VXPP_S5F42 \
                                 , PPMPF_VXPP_S5F41 \
                                 , PPMPF_VXPP_S5F40 )
               #define PPMPF_VXPP_ARITY55() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty55.hh>
            #else
                #define PPMPF_VAR55() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR56() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F54 \
                                 , PPMPF_VXPP_S5F53 \
                                 , PPMPF_VXPP_S5F52 \
                                 , PPMPF_VXPP_S5F51 \
                                 , PPMPF_VXPP_S5F50 )
                #define PPMPF_VXPP_ARITY56() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty56.hh>
            #else
                #define PPMPF_VAR56() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR57() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F64 \
                                 , PPMPF_VXPP_S5F63 \
                                 , PPMPF_VXPP_S5F62 \
                                 , PPMPF_VXPP_S5F61 \
                                 , PPMPF_VXPP_S5F60 )
                #define PPMPF_VXPP_ARITY57() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty57.hh>
            #else
                #define PPMPF_VAR57() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR58() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F74 \
                                 , PPMPF_VXPP_S5F73 \
                                 , PPMPF_VXPP_S5F72 \
                                 , PPMPF_VXPP_S5F71 \
                                 , PPMPF_VXPP_S5F70 )
                #define PPMPF_VXPP_ARITY58() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty58.hh>
            #else
                #define PPMPF_VAR58() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(5) \
                               , PPMPF_VAR51() \
                               , PPMPF_VAR52() \
                               , PPMPF_VAR53() \
                               , PPMPF_VAR54() \
                               , PPMPF_VAR55() \
                               , PPMPF_VAR56() \
                               , PPMPF_VAR57() \
                               , PPMPF_VAR58() )
        #elif PPMPF_VXPP_XSIZE(5) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR51() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F04 \
                                 , PPMPF_VXPP_S5F03 \
                                 , PPMPF_VXPP_S5F02 \
                                 , PPMPF_VXPP_S5F01 \
                                 , PPMPF_VXPP_S5F00 )
                #define PPMPF_VXPP_ARITY51() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty51.hh>
            #else
                #define PPMPF_VAR51() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR52() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F14 \
                                 , PPMPF_VXPP_S5F13 \
                                 , PPMPF_VXPP_S5F12 \
                                 , PPMPF_VXPP_S5F11 \
                                 , PPMPF_VXPP_S5F10 )
                #define PPMPF_VXPP_ARITY52() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty52.hh>
            #else
                #define PPMPF_VAR52() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(5,0)))
                #define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR53() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F24 \
                                 , PPMPF_VXPP_S5F23 \
                                 , PPMPF_VXPP_S5F22 \
                                 , PPMPF_VXPP_S5F21 \
                                 , PPMPF_VXPP_S5F20 )
                 #define PPMPF_VXPP_ARITY53() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty53.hh>
            #else
                #define PPMPF_VAR53() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR54() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F34 \
                                 , PPMPF_VXPP_S5F33 \
                                 , PPMPF_VXPP_S5F32 \
                                 , PPMPF_VXPP_S5F31 \
                                 , PPMPF_VXPP_S5F30 )
                #define PPMPF_VXPP_ARITY54() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty54.hh>
            #else
                #define PPMPF_VAR54() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR55() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F44 \
                                 , PPMPF_VXPP_S5F43 \
                                 , PPMPF_VXPP_S5F42 \
                                 , PPMPF_VXPP_S5F41 \
                                 , PPMPF_VXPP_S5F40 )
               #define PPMPF_VXPP_ARITY55() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty55.hh>
            #else
                #define PPMPF_VAR55() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR56() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F54 \
                                 , PPMPF_VXPP_S5F53 \
                                 , PPMPF_VXPP_S5F52 \
                                 , PPMPF_VXPP_S5F51 \
                                 , PPMPF_VXPP_S5F50 )
                #define PPMPF_VXPP_ARITY56() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty56.hh>
            #else
                #define PPMPF_VAR56() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR57() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F64 \
                                 , PPMPF_VXPP_S5F63 \
                                 , PPMPF_VXPP_S5F62 \
                                 , PPMPF_VXPP_S5F61 \
                                 , PPMPF_VXPP_S5F60 )
                #define PPMPF_VXPP_ARITY57() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty57.hh>
            #else
                #define PPMPF_VAR57() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR58() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F74 \
                                 , PPMPF_VXPP_S5F73 \
                                 , PPMPF_VXPP_S5F72 \
                                 , PPMPF_VXPP_S5F71 \
                                 , PPMPF_VXPP_S5F70 )
                #define PPMPF_VXPP_ARITY58() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty58.hh>
            #else
                #define PPMPF_VAR58() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(5,0))))
                #define PPMPF_VAR59() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S5F84 \
                                 , PPMPF_VXPP_S5F83 \
                                 , PPMPF_VXPP_S5F82 \
                                 , PPMPF_VXPP_S5F81 \
                                 , PPMPF_VXPP_S5F80 )
                #define PPMPF_VXPP_ARITY59() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty59.hh>
            #else
                #define PPMPF_VAR59() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(5,(()))))
                #define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC5() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(5) \
                               , PPMPF_VAR51() \
                               , PPMPF_VAR52() \
                               , PPMPF_VAR53() \
                               , PPMPF_VAR54() \
                               , PPMPF_VAR55() \
                               , PPMPF_VAR56() \
                               , PPMPF_VAR57() \
                               , PPMPF_VAR58() \
                               , PPMPF_VAR59() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(5)
    #undef _PPMPF_FARG5
    #undef _PPMPF_FARG50
    #undef _PPMPF_FARG51
    #undef _PPMPF_FARG52
    #undef _PPMPF_FARG53
    #undef _PPMPF_FARG54
    #undef _PPMPF_FARG55
    #undef _PPMPF_FARG56
    #undef _PPMPF_FARG57
    #undef _PPMPF_FARG58
    #undef PPMPF_VAR51
    #undef PPMPF_VAR52
    #undef PPMPF_VAR53
    #undef PPMPF_VAR54
    #undef PPMPF_VAR55
    #undef PPMPF_VAR56
    #undef PPMPF_VAR57
    #undef PPMPF_VAR58
    #undef PPMPF_VAR59
    #undef PPMPF_VXPP_ARITY51
    #undef PPMPF_VXPP_ARITY52
    #undef PPMPF_VXPP_ARITY53
    #undef PPMPF_VXPP_ARITY54
    #undef PPMPF_VXPP_ARITY55
    #undef PPMPF_VXPP_ARITY56
    #undef PPMPF_VXPP_ARITY57
    #undef PPMPF_VXPP_ARITY58
    #undef PPMPF_VXPP_ARITY59
#endif
    #undef PPMPF_VXPP_SET5
    #undef PPMPF_VXPP_ENDL5
    #undef PPMPF_VXPP_ENDR5
    #undef PPMPF_VXPP_SLOT5
#undef CLAUSE_PPMPF_VXPP_SET5_
#undef PPMPF_VXPP
#endif /* CLAUSE_PPMPF_VXPP_SET5_ */
