/*~
 * Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
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

#ifdef _CLAUSE_PPMPF_VXPP_SET6_
    #error Already iterating macro set with identifier 6.
#else
#define _CLAUSE_PPMPF_VXPP_SET6_
#undef PPMPF_VXPP_ENDL6
#undef PPMPF_VXPP_ENDR6
#undef PPMPF_VXPP
#define PPMPF_VXPP() 6
#define PPMPF_VXPP_ENDR6() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(6)))))
#define PPMPF_VXPP_ENDL6() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(6))))
#include PPMPF_VXPP_INIT(6)
#undef _PPMPF_FARG6
#undef _PPMPF_FARG60
#undef _PPMPF_FARG61
#undef _PPMPF_FARG62
#undef _PPMPF_FARG63
#undef _PPMPF_FARG64
#undef _PPMPF_FARG65
#undef _PPMPF_FARG66
#undef _PPMPF_FARG67
#undef _PPMPF_FARG68
#undef PPMPF_VAR61
#undef PPMPF_VAR62
#undef PPMPF_VAR63
#undef PPMPF_VAR64
#undef PPMPF_VAR65
#undef PPMPF_VAR66
#undef PPMPF_VAR67
#undef PPMPF_VAR68
#undef PPMPF_VAR69
#undef PPMPF_VXPP_ARITY61
#undef PPMPF_VXPP_ARITY62
#undef PPMPF_VXPP_ARITY63
#undef PPMPF_VXPP_ARITY64
#undef PPMPF_VXPP_ARITY65
#undef PPMPF_VXPP_ARITY66
#undef PPMPF_VXPP_ARITY67
#undef PPMPF_VXPP_ARITY68
#undef PPMPF_VXPP_ARITY69
#undef PPMPF_VXPP_FUNC6
#undef PPMPF_VXPP_SLOT6
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET6(0)))
        #define PPMPF_N6() \
                PPMPF_VXPP_DN_ITEM6()
        #define PPMPF_VXPP_SLOT6() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET6(0))
        #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(6)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET6(0)))) == 1
        #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC6() \
                PPMPF_JUST(PPMPF_VXPP_MCF(6)(PPMPF_VXPP_DN_ITEM(6)))
    #else
        #define _PPMPF_FARG60()  _PPMPF_FARG6(0,6)
        #define _PPMPF_FARG61()  _PPMPF_FARG6(1,6)
        #define _PPMPF_FARG62()  _PPMPF_FARG6(2,6)
        #define _PPMPF_FARG63()  _PPMPF_FARG6(3,6)
        #define _PPMPF_FARG64()  _PPMPF_FARG6(4,6)
        #define _PPMPF_FARG65()  _PPMPF_FARG6(5,6)
        #define _PPMPF_FARG66()  _PPMPF_FARG6(6,6)
        #define _PPMPF_FARG67()  _PPMPF_FARG6(7,6)
        #define _PPMPF_FARG68()  _PPMPF_FARG6(8,6)
        #define _PPMPF_FARG6(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(6) == 0
            #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(6)())
        #elif PPMPF_VXPP_XSIZE(6) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR61() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F04 \
                                 , PPMPF_VXPP_S6F03 \
                                 , PPMPF_VXPP_S6F02 \
                                 , PPMPF_VXPP_S6F01 \
                                 , PPMPF_VXPP_S6F00 )
                #define PPMPF_VXPP_ARITY61() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty61.hh>
            #else
                #define PPMPF_VAR61() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(6) \
                               , PPMPF_VAR61() )
            
            #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(6) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR61() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F04 \
                                 , PPMPF_VXPP_S6F03 \
                                 , PPMPF_VXPP_S6F02 \
                                 , PPMPF_VXPP_S6F01 \
                                 , PPMPF_VXPP_S6F00 )
                #define PPMPF_VXPP_ARITY61() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty61.hh>
            #else
                #define PPMPF_VAR61() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR62() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F14 \
                                 , PPMPF_VXPP_S6F13 \
                                 , PPMPF_VXPP_S6F12 \
                                 , PPMPF_VXPP_S6F11 \
                                 , PPMPF_VXPP_S6F10 )
                #define PPMPF_VXPP_ARITY62() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty62.hh>
            #else
                #define PPMPF_VAR62() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0)))
                #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(6) \
                               , PPMPF_VAR61() \
                               , PPMPF_VAR62() )
            #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(6) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR61() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F04 \
                                 , PPMPF_VXPP_S6F03 \
                                 , PPMPF_VXPP_S6F02 \
                                 , PPMPF_VXPP_S6F01 \
                                 , PPMPF_VXPP_S6F00 )
                #define PPMPF_VXPP_ARITY61() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty61.hh>
            #else
                #define PPMPF_VAR61() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR62() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F14 \
                                 , PPMPF_VXPP_S6F13 \
                                 , PPMPF_VXPP_S6F12 \
                                 , PPMPF_VXPP_S6F11 \
                                 , PPMPF_VXPP_S6F10 )
                #define PPMPF_VXPP_ARITY62() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty62.hh>
            #else
                #define PPMPF_VAR62() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0)))
                #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR63() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F24 \
                                 , PPMPF_VXPP_S6F23 \
                                 , PPMPF_VXPP_S6F22 \
                                 , PPMPF_VXPP_S6F21 \
                                 , PPMPF_VXPP_S6F20 )
                 #define PPMPF_VXPP_ARITY63() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty63.hh>
            #else
                #define PPMPF_VAR63() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(6) \
                               , PPMPF_VAR61() \
                               , PPMPF_VAR62() \
                               , PPMPF_VAR63() )
        #elif PPMPF_VXPP_XSIZE(6) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR61() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F04 \
                                 , PPMPF_VXPP_S6F03 \
                                 , PPMPF_VXPP_S6F02 \
                                 , PPMPF_VXPP_S6F01 \
                                 , PPMPF_VXPP_S6F00 )
                #define PPMPF_VXPP_ARITY61() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty61.hh>
            #else
                #define PPMPF_VAR61() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR62() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F14 \
                                 , PPMPF_VXPP_S6F13 \
                                 , PPMPF_VXPP_S6F12 \
                                 , PPMPF_VXPP_S6F11 \
                                 , PPMPF_VXPP_S6F10 )
                #define PPMPF_VXPP_ARITY62() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty62.hh>
            #else
                #define PPMPF_VAR62() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0)))
                #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR63() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F24 \
                                 , PPMPF_VXPP_S6F23 \
                                 , PPMPF_VXPP_S6F22 \
                                 , PPMPF_VXPP_S6F21 \
                                 , PPMPF_VXPP_S6F20 )
                 #define PPMPF_VXPP_ARITY63() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty63.hh>
            #else
                #define PPMPF_VAR63() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR64() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F34 \
                                 , PPMPF_VXPP_S6F33 \
                                 , PPMPF_VXPP_S6F32 \
                                 , PPMPF_VXPP_S6F31 \
                                 , PPMPF_VXPP_S6F30 )
                #define PPMPF_VXPP_ARITY64() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty64.hh>
            #else
                #define PPMPF_VAR64() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(6) \
                               , PPMPF_VAR61() \
                               , PPMPF_VAR62() \
                               , PPMPF_VAR63() \
                               , PPMPF_VAR64() )
        #elif PPMPF_VXPP_XSIZE(6) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR61() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F04 \
                                 , PPMPF_VXPP_S6F03 \
                                 , PPMPF_VXPP_S6F02 \
                                 , PPMPF_VXPP_S6F01 \
                                 , PPMPF_VXPP_S6F00 )
                #define PPMPF_VXPP_ARITY61() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty61.hh>
            #else
                #define PPMPF_VAR61() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR62() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F14 \
                                 , PPMPF_VXPP_S6F13 \
                                 , PPMPF_VXPP_S6F12 \
                                 , PPMPF_VXPP_S6F11 \
                                 , PPMPF_VXPP_S6F10 )
                #define PPMPF_VXPP_ARITY62() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty62.hh>
            #else
                #define PPMPF_VAR62() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0)))
                #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR63() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F24 \
                                 , PPMPF_VXPP_S6F23 \
                                 , PPMPF_VXPP_S6F22 \
                                 , PPMPF_VXPP_S6F21 \
                                 , PPMPF_VXPP_S6F20 )
                 #define PPMPF_VXPP_ARITY63() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty63.hh>
            #else
                #define PPMPF_VAR63() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR64() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F34 \
                                 , PPMPF_VXPP_S6F33 \
                                 , PPMPF_VXPP_S6F32 \
                                 , PPMPF_VXPP_S6F31 \
                                 , PPMPF_VXPP_S6F30 )
                #define PPMPF_VXPP_ARITY64() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty64.hh>
            #else
                #define PPMPF_VAR64() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR65() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F44 \
                                 , PPMPF_VXPP_S6F43 \
                                 , PPMPF_VXPP_S6F42 \
                                 , PPMPF_VXPP_S6F41 \
                                 , PPMPF_VXPP_S6F40 )
               #define PPMPF_VXPP_ARITY65() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty65.hh>
            #else
                #define PPMPF_VAR65() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(6) \
                               , PPMPF_VAR61() \
                               , PPMPF_VAR62() \
                               , PPMPF_VAR63() \
                               , PPMPF_VAR64() \
                               , PPMPF_VAR65() )
        #elif PPMPF_VXPP_XSIZE(6) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR61() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F04 \
                                 , PPMPF_VXPP_S6F03 \
                                 , PPMPF_VXPP_S6F02 \
                                 , PPMPF_VXPP_S6F01 \
                                 , PPMPF_VXPP_S6F00 )
                #define PPMPF_VXPP_ARITY61() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty61.hh>
            #else
                #define PPMPF_VAR61() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR62() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F14 \
                                 , PPMPF_VXPP_S6F13 \
                                 , PPMPF_VXPP_S6F12 \
                                 , PPMPF_VXPP_S6F11 \
                                 , PPMPF_VXPP_S6F10 )
                #define PPMPF_VXPP_ARITY62() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty62.hh>
            #else
                #define PPMPF_VAR62() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0)))
                #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR63() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F24 \
                                 , PPMPF_VXPP_S6F23 \
                                 , PPMPF_VXPP_S6F22 \
                                 , PPMPF_VXPP_S6F21 \
                                 , PPMPF_VXPP_S6F20 )
                 #define PPMPF_VXPP_ARITY63() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty63.hh>
            #else
                #define PPMPF_VAR63() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR64() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F34 \
                                 , PPMPF_VXPP_S6F33 \
                                 , PPMPF_VXPP_S6F32 \
                                 , PPMPF_VXPP_S6F31 \
                                 , PPMPF_VXPP_S6F30 )
                #define PPMPF_VXPP_ARITY64() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty64.hh>
            #else
                #define PPMPF_VAR64() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR65() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F44 \
                                 , PPMPF_VXPP_S6F43 \
                                 , PPMPF_VXPP_S6F42 \
                                 , PPMPF_VXPP_S6F41 \
                                 , PPMPF_VXPP_S6F40 )
               #define PPMPF_VXPP_ARITY65() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty65.hh>
            #else
                #define PPMPF_VAR65() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR66() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F54 \
                                 , PPMPF_VXPP_S6F53 \
                                 , PPMPF_VXPP_S6F52 \
                                 , PPMPF_VXPP_S6F51 \
                                 , PPMPF_VXPP_S6F50 )
                #define PPMPF_VXPP_ARITY66() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty66.hh>
            #else
                #define PPMPF_VAR66() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(6) \
                               , PPMPF_VAR61() \
                               , PPMPF_VAR62() \
                               , PPMPF_VAR63() \
                               , PPMPF_VAR64() \
                               , PPMPF_VAR65() \
                               , PPMPF_VAR66() )
        #elif PPMPF_VXPP_XSIZE(6) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR61() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F04 \
                                 , PPMPF_VXPP_S6F03 \
                                 , PPMPF_VXPP_S6F02 \
                                 , PPMPF_VXPP_S6F01 \
                                 , PPMPF_VXPP_S6F00 )
                #define PPMPF_VXPP_ARITY61() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty61.hh>
            #else
                #define PPMPF_VAR61() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR62() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F14 \
                                 , PPMPF_VXPP_S6F13 \
                                 , PPMPF_VXPP_S6F12 \
                                 , PPMPF_VXPP_S6F11 \
                                 , PPMPF_VXPP_S6F10 )
                #define PPMPF_VXPP_ARITY62() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty62.hh>
            #else
                #define PPMPF_VAR62() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0)))
                #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR63() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F24 \
                                 , PPMPF_VXPP_S6F23 \
                                 , PPMPF_VXPP_S6F22 \
                                 , PPMPF_VXPP_S6F21 \
                                 , PPMPF_VXPP_S6F20 )
                 #define PPMPF_VXPP_ARITY63() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty63.hh>
            #else
                #define PPMPF_VAR63() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR64() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F34 \
                                 , PPMPF_VXPP_S6F33 \
                                 , PPMPF_VXPP_S6F32 \
                                 , PPMPF_VXPP_S6F31 \
                                 , PPMPF_VXPP_S6F30 )
                #define PPMPF_VXPP_ARITY64() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty64.hh>
            #else
                #define PPMPF_VAR64() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR65() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F44 \
                                 , PPMPF_VXPP_S6F43 \
                                 , PPMPF_VXPP_S6F42 \
                                 , PPMPF_VXPP_S6F41 \
                                 , PPMPF_VXPP_S6F40 )
               #define PPMPF_VXPP_ARITY65() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty65.hh>
            #else
                #define PPMPF_VAR65() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR66() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F54 \
                                 , PPMPF_VXPP_S6F53 \
                                 , PPMPF_VXPP_S6F52 \
                                 , PPMPF_VXPP_S6F51 \
                                 , PPMPF_VXPP_S6F50 )
                #define PPMPF_VXPP_ARITY66() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty66.hh>
            #else
                #define PPMPF_VAR66() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR67() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F64 \
                                 , PPMPF_VXPP_S6F63 \
                                 , PPMPF_VXPP_S6F62 \
                                 , PPMPF_VXPP_S6F61 \
                                 , PPMPF_VXPP_S6F60 )
                #define PPMPF_VXPP_ARITY67() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty67.hh>
            #else
                #define PPMPF_VAR67() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(6) \
                               , PPMPF_VAR61() \
                               , PPMPF_VAR62() \
                               , PPMPF_VAR63() \
                               , PPMPF_VAR64() \
                               , PPMPF_VAR65() \
                               , PPMPF_VAR66() \
                               , PPMPF_VAR67() )
        #elif PPMPF_VXPP_XSIZE(6) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR61() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F04 \
                                 , PPMPF_VXPP_S6F03 \
                                 , PPMPF_VXPP_S6F02 \
                                 , PPMPF_VXPP_S6F01 \
                                 , PPMPF_VXPP_S6F00 )
                #define PPMPF_VXPP_ARITY61() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty61.hh>
            #else
                #define PPMPF_VAR61() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR62() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F14 \
                                 , PPMPF_VXPP_S6F13 \
                                 , PPMPF_VXPP_S6F12 \
                                 , PPMPF_VXPP_S6F11 \
                                 , PPMPF_VXPP_S6F10 )
                #define PPMPF_VXPP_ARITY62() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty62.hh>
            #else
                #define PPMPF_VAR62() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0)))
                #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR63() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F24 \
                                 , PPMPF_VXPP_S6F23 \
                                 , PPMPF_VXPP_S6F22 \
                                 , PPMPF_VXPP_S6F21 \
                                 , PPMPF_VXPP_S6F20 )
                 #define PPMPF_VXPP_ARITY63() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty63.hh>
            #else
                #define PPMPF_VAR63() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR64() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F34 \
                                 , PPMPF_VXPP_S6F33 \
                                 , PPMPF_VXPP_S6F32 \
                                 , PPMPF_VXPP_S6F31 \
                                 , PPMPF_VXPP_S6F30 )
                #define PPMPF_VXPP_ARITY64() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty64.hh>
            #else
                #define PPMPF_VAR64() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR65() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F44 \
                                 , PPMPF_VXPP_S6F43 \
                                 , PPMPF_VXPP_S6F42 \
                                 , PPMPF_VXPP_S6F41 \
                                 , PPMPF_VXPP_S6F40 )
               #define PPMPF_VXPP_ARITY65() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty65.hh>
            #else
                #define PPMPF_VAR65() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR66() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F54 \
                                 , PPMPF_VXPP_S6F53 \
                                 , PPMPF_VXPP_S6F52 \
                                 , PPMPF_VXPP_S6F51 \
                                 , PPMPF_VXPP_S6F50 )
                #define PPMPF_VXPP_ARITY66() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty66.hh>
            #else
                #define PPMPF_VAR66() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR67() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F64 \
                                 , PPMPF_VXPP_S6F63 \
                                 , PPMPF_VXPP_S6F62 \
                                 , PPMPF_VXPP_S6F61 \
                                 , PPMPF_VXPP_S6F60 )
                #define PPMPF_VXPP_ARITY67() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty67.hh>
            #else
                #define PPMPF_VAR67() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR68() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F74 \
                                 , PPMPF_VXPP_S6F73 \
                                 , PPMPF_VXPP_S6F72 \
                                 , PPMPF_VXPP_S6F71 \
                                 , PPMPF_VXPP_S6F70 )
                #define PPMPF_VXPP_ARITY68() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty68.hh>
            #else
                #define PPMPF_VAR68() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(6) \
                               , PPMPF_VAR61() \
                               , PPMPF_VAR62() \
                               , PPMPF_VAR63() \
                               , PPMPF_VAR64() \
                               , PPMPF_VAR65() \
                               , PPMPF_VAR66() \
                               , PPMPF_VAR67() \
                               , PPMPF_VAR68() )
        #elif PPMPF_VXPP_XSIZE(6) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR61() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F04 \
                                 , PPMPF_VXPP_S6F03 \
                                 , PPMPF_VXPP_S6F02 \
                                 , PPMPF_VXPP_S6F01 \
                                 , PPMPF_VXPP_S6F00 )
                #define PPMPF_VXPP_ARITY61() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty61.hh>
            #else
                #define PPMPF_VAR61() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR62() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F14 \
                                 , PPMPF_VXPP_S6F13 \
                                 , PPMPF_VXPP_S6F12 \
                                 , PPMPF_VXPP_S6F11 \
                                 , PPMPF_VXPP_S6F10 )
                #define PPMPF_VXPP_ARITY62() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty62.hh>
            #else
                #define PPMPF_VAR62() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(6,0)))
                #define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR63() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F24 \
                                 , PPMPF_VXPP_S6F23 \
                                 , PPMPF_VXPP_S6F22 \
                                 , PPMPF_VXPP_S6F21 \
                                 , PPMPF_VXPP_S6F20 )
                 #define PPMPF_VXPP_ARITY63() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty63.hh>
            #else
                #define PPMPF_VAR63() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR64() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F34 \
                                 , PPMPF_VXPP_S6F33 \
                                 , PPMPF_VXPP_S6F32 \
                                 , PPMPF_VXPP_S6F31 \
                                 , PPMPF_VXPP_S6F30 )
                #define PPMPF_VXPP_ARITY64() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty64.hh>
            #else
                #define PPMPF_VAR64() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR65() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F44 \
                                 , PPMPF_VXPP_S6F43 \
                                 , PPMPF_VXPP_S6F42 \
                                 , PPMPF_VXPP_S6F41 \
                                 , PPMPF_VXPP_S6F40 )
               #define PPMPF_VXPP_ARITY65() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty65.hh>
            #else
                #define PPMPF_VAR65() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR66() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F54 \
                                 , PPMPF_VXPP_S6F53 \
                                 , PPMPF_VXPP_S6F52 \
                                 , PPMPF_VXPP_S6F51 \
                                 , PPMPF_VXPP_S6F50 )
                #define PPMPF_VXPP_ARITY66() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty66.hh>
            #else
                #define PPMPF_VAR66() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR67() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F64 \
                                 , PPMPF_VXPP_S6F63 \
                                 , PPMPF_VXPP_S6F62 \
                                 , PPMPF_VXPP_S6F61 \
                                 , PPMPF_VXPP_S6F60 )
                #define PPMPF_VXPP_ARITY67() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty67.hh>
            #else
                #define PPMPF_VAR67() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR68() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F74 \
                                 , PPMPF_VXPP_S6F73 \
                                 , PPMPF_VXPP_S6F72 \
                                 , PPMPF_VXPP_S6F71 \
                                 , PPMPF_VXPP_S6F70 )
                #define PPMPF_VXPP_ARITY68() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty68.hh>
            #else
                #define PPMPF_VAR68() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(6,0))))
                #define PPMPF_VAR69() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S6F84 \
                                 , PPMPF_VXPP_S6F83 \
                                 , PPMPF_VXPP_S6F82 \
                                 , PPMPF_VXPP_S6F81 \
                                 , PPMPF_VXPP_S6F80 )
                #define PPMPF_VXPP_ARITY69() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty69.hh>
            #else
                #define PPMPF_VAR69() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(6,(()))))
                #define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC6() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(6) \
                               , PPMPF_VAR61() \
                               , PPMPF_VAR62() \
                               , PPMPF_VAR63() \
                               , PPMPF_VAR64() \
                               , PPMPF_VAR65() \
                               , PPMPF_VAR66() \
                               , PPMPF_VAR67() \
                               , PPMPF_VAR68() \
                               , PPMPF_VAR69() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(6)
    #undef _PPMPF_FARG6
    #undef _PPMPF_FARG60
    #undef _PPMPF_FARG61
    #undef _PPMPF_FARG62
    #undef _PPMPF_FARG63
    #undef _PPMPF_FARG64
    #undef _PPMPF_FARG65
    #undef _PPMPF_FARG66
    #undef _PPMPF_FARG67
    #undef _PPMPF_FARG68
    #undef PPMPF_VAR61
    #undef PPMPF_VAR62
    #undef PPMPF_VAR63
    #undef PPMPF_VAR64
    #undef PPMPF_VAR65
    #undef PPMPF_VAR66
    #undef PPMPF_VAR67
    #undef PPMPF_VAR68
    #undef PPMPF_VAR69
    #undef PPMPF_VXPP_ARITY61
    #undef PPMPF_VXPP_ARITY62
    #undef PPMPF_VXPP_ARITY63
    #undef PPMPF_VXPP_ARITY64
    #undef PPMPF_VXPP_ARITY65
    #undef PPMPF_VXPP_ARITY66
    #undef PPMPF_VXPP_ARITY67
    #undef PPMPF_VXPP_ARITY68
    #undef PPMPF_VXPP_ARITY69
#endif
    #undef PPMPF_VXPP_SET6
    #undef PPMPF_VXPP_ENDL6
    #undef PPMPF_VXPP_ENDR6
    #undef PPMPF_VXPP_SLOT6
#undef _CLAUSE_PPMPF_VXPP_SET6_
#undef PPMPF_VXPP
#endif /* _CLAUSE_PPMPF_VXPP_SET6_ */
