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

#ifdef CLAUSE_PPMPF_VXPP_SET7_
    #error Already iterating macro set with identifier 7.
#else
#define CLAUSE_PPMPF_VXPP_SET7_
#undef PPMPF_VXPP_ENDL7
#undef PPMPF_VXPP_ENDR7
#undef PPMPF_VXPP
#define PPMPF_VXPP() 7
#define PPMPF_VXPP_ENDR7() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(7)))))
#define PPMPF_VXPP_ENDL7() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(7))))
#include PPMPF_VXPP_INIT(7)
#undef _PPMPF_FARG7
#undef _PPMPF_FARG70
#undef _PPMPF_FARG71
#undef _PPMPF_FARG72
#undef _PPMPF_FARG73
#undef _PPMPF_FARG74
#undef _PPMPF_FARG75
#undef _PPMPF_FARG76
#undef _PPMPF_FARG77
#undef _PPMPF_FARG78
#undef PPMPF_VAR71
#undef PPMPF_VAR72
#undef PPMPF_VAR73
#undef PPMPF_VAR74
#undef PPMPF_VAR75
#undef PPMPF_VAR76
#undef PPMPF_VAR77
#undef PPMPF_VAR78
#undef PPMPF_VAR79
#undef PPMPF_VXPP_ARITY71
#undef PPMPF_VXPP_ARITY72
#undef PPMPF_VXPP_ARITY73
#undef PPMPF_VXPP_ARITY74
#undef PPMPF_VXPP_ARITY75
#undef PPMPF_VXPP_ARITY76
#undef PPMPF_VXPP_ARITY77
#undef PPMPF_VXPP_ARITY78
#undef PPMPF_VXPP_ARITY79
#undef PPMPF_VXPP_FUNC7
#undef PPMPF_VXPP_SLOT7
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET7(0)))
        #define PPMPF_N7() \
                PPMPF_VXPP_DN_ITEM7()
        #define PPMPF_VXPP_SLOT7() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET7(0))
        #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(7)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET7(0)))) == 1
        #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC7() \
                PPMPF_JUST(PPMPF_VXPP_MCF(7)(PPMPF_VXPP_DN_ITEM(7)))
    #else
        #define _PPMPF_FARG70()  _PPMPF_FARG7(0,7)
        #define _PPMPF_FARG71()  _PPMPF_FARG7(1,7)
        #define _PPMPF_FARG72()  _PPMPF_FARG7(2,7)
        #define _PPMPF_FARG73()  _PPMPF_FARG7(3,7)
        #define _PPMPF_FARG74()  _PPMPF_FARG7(4,7)
        #define _PPMPF_FARG75()  _PPMPF_FARG7(5,7)
        #define _PPMPF_FARG76()  _PPMPF_FARG7(6,7)
        #define _PPMPF_FARG77()  _PPMPF_FARG7(7,7)
        #define _PPMPF_FARG78()  _PPMPF_FARG7(8,7)
        #define _PPMPF_FARG7(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(7) == 0
            #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(7)())
        #elif PPMPF_VXPP_XSIZE(7) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR71() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F04 \
                                 , PPMPF_VXPP_S7F03 \
                                 , PPMPF_VXPP_S7F02 \
                                 , PPMPF_VXPP_S7F01 \
                                 , PPMPF_VXPP_S7F00 )
                #define PPMPF_VXPP_ARITY71() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty71.hh>
            #else
                #define PPMPF_VAR71() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(7) \
                               , PPMPF_VAR71() )
            
            #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(7) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR71() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F04 \
                                 , PPMPF_VXPP_S7F03 \
                                 , PPMPF_VXPP_S7F02 \
                                 , PPMPF_VXPP_S7F01 \
                                 , PPMPF_VXPP_S7F00 )
                #define PPMPF_VXPP_ARITY71() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty71.hh>
            #else
                #define PPMPF_VAR71() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR72() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F14 \
                                 , PPMPF_VXPP_S7F13 \
                                 , PPMPF_VXPP_S7F12 \
                                 , PPMPF_VXPP_S7F11 \
                                 , PPMPF_VXPP_S7F10 )
                #define PPMPF_VXPP_ARITY72() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty72.hh>
            #else
                #define PPMPF_VAR72() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0)))
                #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(7) \
                               , PPMPF_VAR71() \
                               , PPMPF_VAR72() )
            #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(7) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR71() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F04 \
                                 , PPMPF_VXPP_S7F03 \
                                 , PPMPF_VXPP_S7F02 \
                                 , PPMPF_VXPP_S7F01 \
                                 , PPMPF_VXPP_S7F00 )
                #define PPMPF_VXPP_ARITY71() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty71.hh>
            #else
                #define PPMPF_VAR71() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR72() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F14 \
                                 , PPMPF_VXPP_S7F13 \
                                 , PPMPF_VXPP_S7F12 \
                                 , PPMPF_VXPP_S7F11 \
                                 , PPMPF_VXPP_S7F10 )
                #define PPMPF_VXPP_ARITY72() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty72.hh>
            #else
                #define PPMPF_VAR72() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0)))
                #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR73() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F24 \
                                 , PPMPF_VXPP_S7F23 \
                                 , PPMPF_VXPP_S7F22 \
                                 , PPMPF_VXPP_S7F21 \
                                 , PPMPF_VXPP_S7F20 )
                 #define PPMPF_VXPP_ARITY73() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty73.hh>
            #else
                #define PPMPF_VAR73() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(7) \
                               , PPMPF_VAR71() \
                               , PPMPF_VAR72() \
                               , PPMPF_VAR73() )
        #elif PPMPF_VXPP_XSIZE(7) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR71() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F04 \
                                 , PPMPF_VXPP_S7F03 \
                                 , PPMPF_VXPP_S7F02 \
                                 , PPMPF_VXPP_S7F01 \
                                 , PPMPF_VXPP_S7F00 )
                #define PPMPF_VXPP_ARITY71() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty71.hh>
            #else
                #define PPMPF_VAR71() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR72() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F14 \
                                 , PPMPF_VXPP_S7F13 \
                                 , PPMPF_VXPP_S7F12 \
                                 , PPMPF_VXPP_S7F11 \
                                 , PPMPF_VXPP_S7F10 )
                #define PPMPF_VXPP_ARITY72() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty72.hh>
            #else
                #define PPMPF_VAR72() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0)))
                #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR73() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F24 \
                                 , PPMPF_VXPP_S7F23 \
                                 , PPMPF_VXPP_S7F22 \
                                 , PPMPF_VXPP_S7F21 \
                                 , PPMPF_VXPP_S7F20 )
                 #define PPMPF_VXPP_ARITY73() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty73.hh>
            #else
                #define PPMPF_VAR73() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR74() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F34 \
                                 , PPMPF_VXPP_S7F33 \
                                 , PPMPF_VXPP_S7F32 \
                                 , PPMPF_VXPP_S7F31 \
                                 , PPMPF_VXPP_S7F30 )
                #define PPMPF_VXPP_ARITY74() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty74.hh>
            #else
                #define PPMPF_VAR74() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(7) \
                               , PPMPF_VAR71() \
                               , PPMPF_VAR72() \
                               , PPMPF_VAR73() \
                               , PPMPF_VAR74() )
        #elif PPMPF_VXPP_XSIZE(7) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR71() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F04 \
                                 , PPMPF_VXPP_S7F03 \
                                 , PPMPF_VXPP_S7F02 \
                                 , PPMPF_VXPP_S7F01 \
                                 , PPMPF_VXPP_S7F00 )
                #define PPMPF_VXPP_ARITY71() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty71.hh>
            #else
                #define PPMPF_VAR71() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR72() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F14 \
                                 , PPMPF_VXPP_S7F13 \
                                 , PPMPF_VXPP_S7F12 \
                                 , PPMPF_VXPP_S7F11 \
                                 , PPMPF_VXPP_S7F10 )
                #define PPMPF_VXPP_ARITY72() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty72.hh>
            #else
                #define PPMPF_VAR72() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0)))
                #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR73() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F24 \
                                 , PPMPF_VXPP_S7F23 \
                                 , PPMPF_VXPP_S7F22 \
                                 , PPMPF_VXPP_S7F21 \
                                 , PPMPF_VXPP_S7F20 )
                 #define PPMPF_VXPP_ARITY73() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty73.hh>
            #else
                #define PPMPF_VAR73() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR74() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F34 \
                                 , PPMPF_VXPP_S7F33 \
                                 , PPMPF_VXPP_S7F32 \
                                 , PPMPF_VXPP_S7F31 \
                                 , PPMPF_VXPP_S7F30 )
                #define PPMPF_VXPP_ARITY74() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty74.hh>
            #else
                #define PPMPF_VAR74() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR75() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F44 \
                                 , PPMPF_VXPP_S7F43 \
                                 , PPMPF_VXPP_S7F42 \
                                 , PPMPF_VXPP_S7F41 \
                                 , PPMPF_VXPP_S7F40 )
               #define PPMPF_VXPP_ARITY75() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty75.hh>
            #else
                #define PPMPF_VAR75() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(7) \
                               , PPMPF_VAR71() \
                               , PPMPF_VAR72() \
                               , PPMPF_VAR73() \
                               , PPMPF_VAR74() \
                               , PPMPF_VAR75() )
        #elif PPMPF_VXPP_XSIZE(7) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR71() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F04 \
                                 , PPMPF_VXPP_S7F03 \
                                 , PPMPF_VXPP_S7F02 \
                                 , PPMPF_VXPP_S7F01 \
                                 , PPMPF_VXPP_S7F00 )
                #define PPMPF_VXPP_ARITY71() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty71.hh>
            #else
                #define PPMPF_VAR71() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR72() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F14 \
                                 , PPMPF_VXPP_S7F13 \
                                 , PPMPF_VXPP_S7F12 \
                                 , PPMPF_VXPP_S7F11 \
                                 , PPMPF_VXPP_S7F10 )
                #define PPMPF_VXPP_ARITY72() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty72.hh>
            #else
                #define PPMPF_VAR72() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0)))
                #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR73() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F24 \
                                 , PPMPF_VXPP_S7F23 \
                                 , PPMPF_VXPP_S7F22 \
                                 , PPMPF_VXPP_S7F21 \
                                 , PPMPF_VXPP_S7F20 )
                 #define PPMPF_VXPP_ARITY73() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty73.hh>
            #else
                #define PPMPF_VAR73() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR74() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F34 \
                                 , PPMPF_VXPP_S7F33 \
                                 , PPMPF_VXPP_S7F32 \
                                 , PPMPF_VXPP_S7F31 \
                                 , PPMPF_VXPP_S7F30 )
                #define PPMPF_VXPP_ARITY74() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty74.hh>
            #else
                #define PPMPF_VAR74() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR75() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F44 \
                                 , PPMPF_VXPP_S7F43 \
                                 , PPMPF_VXPP_S7F42 \
                                 , PPMPF_VXPP_S7F41 \
                                 , PPMPF_VXPP_S7F40 )
               #define PPMPF_VXPP_ARITY75() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty75.hh>
            #else
                #define PPMPF_VAR75() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR76() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F54 \
                                 , PPMPF_VXPP_S7F53 \
                                 , PPMPF_VXPP_S7F52 \
                                 , PPMPF_VXPP_S7F51 \
                                 , PPMPF_VXPP_S7F50 )
                #define PPMPF_VXPP_ARITY76() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty76.hh>
            #else
                #define PPMPF_VAR76() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(7) \
                               , PPMPF_VAR71() \
                               , PPMPF_VAR72() \
                               , PPMPF_VAR73() \
                               , PPMPF_VAR74() \
                               , PPMPF_VAR75() \
                               , PPMPF_VAR76() )
        #elif PPMPF_VXPP_XSIZE(7) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR71() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F04 \
                                 , PPMPF_VXPP_S7F03 \
                                 , PPMPF_VXPP_S7F02 \
                                 , PPMPF_VXPP_S7F01 \
                                 , PPMPF_VXPP_S7F00 )
                #define PPMPF_VXPP_ARITY71() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty71.hh>
            #else
                #define PPMPF_VAR71() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR72() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F14 \
                                 , PPMPF_VXPP_S7F13 \
                                 , PPMPF_VXPP_S7F12 \
                                 , PPMPF_VXPP_S7F11 \
                                 , PPMPF_VXPP_S7F10 )
                #define PPMPF_VXPP_ARITY72() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty72.hh>
            #else
                #define PPMPF_VAR72() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0)))
                #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR73() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F24 \
                                 , PPMPF_VXPP_S7F23 \
                                 , PPMPF_VXPP_S7F22 \
                                 , PPMPF_VXPP_S7F21 \
                                 , PPMPF_VXPP_S7F20 )
                 #define PPMPF_VXPP_ARITY73() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty73.hh>
            #else
                #define PPMPF_VAR73() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR74() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F34 \
                                 , PPMPF_VXPP_S7F33 \
                                 , PPMPF_VXPP_S7F32 \
                                 , PPMPF_VXPP_S7F31 \
                                 , PPMPF_VXPP_S7F30 )
                #define PPMPF_VXPP_ARITY74() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty74.hh>
            #else
                #define PPMPF_VAR74() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR75() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F44 \
                                 , PPMPF_VXPP_S7F43 \
                                 , PPMPF_VXPP_S7F42 \
                                 , PPMPF_VXPP_S7F41 \
                                 , PPMPF_VXPP_S7F40 )
               #define PPMPF_VXPP_ARITY75() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty75.hh>
            #else
                #define PPMPF_VAR75() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR76() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F54 \
                                 , PPMPF_VXPP_S7F53 \
                                 , PPMPF_VXPP_S7F52 \
                                 , PPMPF_VXPP_S7F51 \
                                 , PPMPF_VXPP_S7F50 )
                #define PPMPF_VXPP_ARITY76() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty76.hh>
            #else
                #define PPMPF_VAR76() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR77() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F64 \
                                 , PPMPF_VXPP_S7F63 \
                                 , PPMPF_VXPP_S7F62 \
                                 , PPMPF_VXPP_S7F61 \
                                 , PPMPF_VXPP_S7F60 )
                #define PPMPF_VXPP_ARITY77() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty77.hh>
            #else
                #define PPMPF_VAR77() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(7) \
                               , PPMPF_VAR71() \
                               , PPMPF_VAR72() \
                               , PPMPF_VAR73() \
                               , PPMPF_VAR74() \
                               , PPMPF_VAR75() \
                               , PPMPF_VAR76() \
                               , PPMPF_VAR77() )
        #elif PPMPF_VXPP_XSIZE(7) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR71() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F04 \
                                 , PPMPF_VXPP_S7F03 \
                                 , PPMPF_VXPP_S7F02 \
                                 , PPMPF_VXPP_S7F01 \
                                 , PPMPF_VXPP_S7F00 )
                #define PPMPF_VXPP_ARITY71() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty71.hh>
            #else
                #define PPMPF_VAR71() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR72() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F14 \
                                 , PPMPF_VXPP_S7F13 \
                                 , PPMPF_VXPP_S7F12 \
                                 , PPMPF_VXPP_S7F11 \
                                 , PPMPF_VXPP_S7F10 )
                #define PPMPF_VXPP_ARITY72() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty72.hh>
            #else
                #define PPMPF_VAR72() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0)))
                #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR73() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F24 \
                                 , PPMPF_VXPP_S7F23 \
                                 , PPMPF_VXPP_S7F22 \
                                 , PPMPF_VXPP_S7F21 \
                                 , PPMPF_VXPP_S7F20 )
                 #define PPMPF_VXPP_ARITY73() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty73.hh>
            #else
                #define PPMPF_VAR73() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR74() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F34 \
                                 , PPMPF_VXPP_S7F33 \
                                 , PPMPF_VXPP_S7F32 \
                                 , PPMPF_VXPP_S7F31 \
                                 , PPMPF_VXPP_S7F30 )
                #define PPMPF_VXPP_ARITY74() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty74.hh>
            #else
                #define PPMPF_VAR74() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR75() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F44 \
                                 , PPMPF_VXPP_S7F43 \
                                 , PPMPF_VXPP_S7F42 \
                                 , PPMPF_VXPP_S7F41 \
                                 , PPMPF_VXPP_S7F40 )
               #define PPMPF_VXPP_ARITY75() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty75.hh>
            #else
                #define PPMPF_VAR75() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR76() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F54 \
                                 , PPMPF_VXPP_S7F53 \
                                 , PPMPF_VXPP_S7F52 \
                                 , PPMPF_VXPP_S7F51 \
                                 , PPMPF_VXPP_S7F50 )
                #define PPMPF_VXPP_ARITY76() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty76.hh>
            #else
                #define PPMPF_VAR76() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR77() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F64 \
                                 , PPMPF_VXPP_S7F63 \
                                 , PPMPF_VXPP_S7F62 \
                                 , PPMPF_VXPP_S7F61 \
                                 , PPMPF_VXPP_S7F60 )
                #define PPMPF_VXPP_ARITY77() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty77.hh>
            #else
                #define PPMPF_VAR77() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR78() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F74 \
                                 , PPMPF_VXPP_S7F73 \
                                 , PPMPF_VXPP_S7F72 \
                                 , PPMPF_VXPP_S7F71 \
                                 , PPMPF_VXPP_S7F70 )
                #define PPMPF_VXPP_ARITY78() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty78.hh>
            #else
                #define PPMPF_VAR78() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(7) \
                               , PPMPF_VAR71() \
                               , PPMPF_VAR72() \
                               , PPMPF_VAR73() \
                               , PPMPF_VAR74() \
                               , PPMPF_VAR75() \
                               , PPMPF_VAR76() \
                               , PPMPF_VAR77() \
                               , PPMPF_VAR78() )
        #elif PPMPF_VXPP_XSIZE(7) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR71() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F04 \
                                 , PPMPF_VXPP_S7F03 \
                                 , PPMPF_VXPP_S7F02 \
                                 , PPMPF_VXPP_S7F01 \
                                 , PPMPF_VXPP_S7F00 )
                #define PPMPF_VXPP_ARITY71() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty71.hh>
            #else
                #define PPMPF_VAR71() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR72() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F14 \
                                 , PPMPF_VXPP_S7F13 \
                                 , PPMPF_VXPP_S7F12 \
                                 , PPMPF_VXPP_S7F11 \
                                 , PPMPF_VXPP_S7F10 )
                #define PPMPF_VXPP_ARITY72() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty72.hh>
            #else
                #define PPMPF_VAR72() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(7,0)))
                #define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR73() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F24 \
                                 , PPMPF_VXPP_S7F23 \
                                 , PPMPF_VXPP_S7F22 \
                                 , PPMPF_VXPP_S7F21 \
                                 , PPMPF_VXPP_S7F20 )
                 #define PPMPF_VXPP_ARITY73() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty73.hh>
            #else
                #define PPMPF_VAR73() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR74() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F34 \
                                 , PPMPF_VXPP_S7F33 \
                                 , PPMPF_VXPP_S7F32 \
                                 , PPMPF_VXPP_S7F31 \
                                 , PPMPF_VXPP_S7F30 )
                #define PPMPF_VXPP_ARITY74() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty74.hh>
            #else
                #define PPMPF_VAR74() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR75() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F44 \
                                 , PPMPF_VXPP_S7F43 \
                                 , PPMPF_VXPP_S7F42 \
                                 , PPMPF_VXPP_S7F41 \
                                 , PPMPF_VXPP_S7F40 )
               #define PPMPF_VXPP_ARITY75() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty75.hh>
            #else
                #define PPMPF_VAR75() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR76() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F54 \
                                 , PPMPF_VXPP_S7F53 \
                                 , PPMPF_VXPP_S7F52 \
                                 , PPMPF_VXPP_S7F51 \
                                 , PPMPF_VXPP_S7F50 )
                #define PPMPF_VXPP_ARITY76() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty76.hh>
            #else
                #define PPMPF_VAR76() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR77() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F64 \
                                 , PPMPF_VXPP_S7F63 \
                                 , PPMPF_VXPP_S7F62 \
                                 , PPMPF_VXPP_S7F61 \
                                 , PPMPF_VXPP_S7F60 )
                #define PPMPF_VXPP_ARITY77() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty77.hh>
            #else
                #define PPMPF_VAR77() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR78() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F74 \
                                 , PPMPF_VXPP_S7F73 \
                                 , PPMPF_VXPP_S7F72 \
                                 , PPMPF_VXPP_S7F71 \
                                 , PPMPF_VXPP_S7F70 )
                #define PPMPF_VXPP_ARITY78() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty78.hh>
            #else
                #define PPMPF_VAR78() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(7,0))))
                #define PPMPF_VAR79() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S7F84 \
                                 , PPMPF_VXPP_S7F83 \
                                 , PPMPF_VXPP_S7F82 \
                                 , PPMPF_VXPP_S7F81 \
                                 , PPMPF_VXPP_S7F80 )
                #define PPMPF_VXPP_ARITY79() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty79.hh>
            #else
                #define PPMPF_VAR79() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(7,(()))))
                #define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC7() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(7) \
                               , PPMPF_VAR71() \
                               , PPMPF_VAR72() \
                               , PPMPF_VAR73() \
                               , PPMPF_VAR74() \
                               , PPMPF_VAR75() \
                               , PPMPF_VAR76() \
                               , PPMPF_VAR77() \
                               , PPMPF_VAR78() \
                               , PPMPF_VAR79() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(7)
    #undef _PPMPF_FARG7
    #undef _PPMPF_FARG70
    #undef _PPMPF_FARG71
    #undef _PPMPF_FARG72
    #undef _PPMPF_FARG73
    #undef _PPMPF_FARG74
    #undef _PPMPF_FARG75
    #undef _PPMPF_FARG76
    #undef _PPMPF_FARG77
    #undef _PPMPF_FARG78
    #undef PPMPF_VAR71
    #undef PPMPF_VAR72
    #undef PPMPF_VAR73
    #undef PPMPF_VAR74
    #undef PPMPF_VAR75
    #undef PPMPF_VAR76
    #undef PPMPF_VAR77
    #undef PPMPF_VAR78
    #undef PPMPF_VAR79
    #undef PPMPF_VXPP_ARITY71
    #undef PPMPF_VXPP_ARITY72
    #undef PPMPF_VXPP_ARITY73
    #undef PPMPF_VXPP_ARITY74
    #undef PPMPF_VXPP_ARITY75
    #undef PPMPF_VXPP_ARITY76
    #undef PPMPF_VXPP_ARITY77
    #undef PPMPF_VXPP_ARITY78
    #undef PPMPF_VXPP_ARITY79
#endif
    #undef PPMPF_VXPP_SET7
    #undef PPMPF_VXPP_ENDL7
    #undef PPMPF_VXPP_ENDR7
    #undef PPMPF_VXPP_SLOT7
#undef CLAUSE_PPMPF_VXPP_SET7_
#undef PPMPF_VXPP
#endif /* CLAUSE_PPMPF_VXPP_SET7_ */
