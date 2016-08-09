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

#ifdef CLAUSE_PPMPF_VXPP_SET4_
    #error Already iterating macro set with identifier 4.
#else
#define CLAUSE_PPMPF_VXPP_SET4_
#undef PPMPF_VXPP_ENDL4
#undef PPMPF_VXPP_ENDR4
#undef PPMPF_VXPP
#define PPMPF_VXPP() 4
#define PPMPF_VXPP_ENDR4() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(4)))))
#define PPMPF_VXPP_ENDL4() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(4))))
#include PPMPF_VXPP_INIT(4)
#undef _PPMPF_FARG4
#undef _PPMPF_FARG40
#undef _PPMPF_FARG41
#undef _PPMPF_FARG42
#undef _PPMPF_FARG43
#undef _PPMPF_FARG44
#undef _PPMPF_FARG45
#undef _PPMPF_FARG46
#undef _PPMPF_FARG47
#undef _PPMPF_FARG48
#undef PPMPF_VAR41
#undef PPMPF_VAR42
#undef PPMPF_VAR43
#undef PPMPF_VAR44
#undef PPMPF_VAR45
#undef PPMPF_VAR46
#undef PPMPF_VAR47
#undef PPMPF_VAR48
#undef PPMPF_VAR49
#undef PPMPF_VXPP_ARITY41
#undef PPMPF_VXPP_ARITY42
#undef PPMPF_VXPP_ARITY43
#undef PPMPF_VXPP_ARITY44
#undef PPMPF_VXPP_ARITY45
#undef PPMPF_VXPP_ARITY46
#undef PPMPF_VXPP_ARITY47
#undef PPMPF_VXPP_ARITY48
#undef PPMPF_VXPP_ARITY49
#undef PPMPF_VXPP_FUNC4
#undef PPMPF_VXPP_SLOT4
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET4(0)))
        #define PPMPF_N4() \
                PPMPF_VXPP_DN_ITEM4()
        #define PPMPF_VXPP_SLOT4() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET4(0))
        #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(4)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET4(0)))) == 1
        #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC4() \
                PPMPF_JUST(PPMPF_VXPP_MCF(4)(PPMPF_VXPP_DN_ITEM(4)))
    #else
        #define _PPMPF_FARG40()  _PPMPF_FARG4(0,4)
        #define _PPMPF_FARG41()  _PPMPF_FARG4(1,4)
        #define _PPMPF_FARG42()  _PPMPF_FARG4(2,4)
        #define _PPMPF_FARG43()  _PPMPF_FARG4(3,4)
        #define _PPMPF_FARG44()  _PPMPF_FARG4(4,4)
        #define _PPMPF_FARG45()  _PPMPF_FARG4(5,4)
        #define _PPMPF_FARG46()  _PPMPF_FARG4(6,4)
        #define _PPMPF_FARG47()  _PPMPF_FARG4(7,4)
        #define _PPMPF_FARG48()  _PPMPF_FARG4(8,4)
        #define _PPMPF_FARG4(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(4) == 0
            #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(4)())
        #elif PPMPF_VXPP_XSIZE(4) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR41() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F04 \
                                 , PPMPF_VXPP_S4F03 \
                                 , PPMPF_VXPP_S4F02 \
                                 , PPMPF_VXPP_S4F01 \
                                 , PPMPF_VXPP_S4F00 )
                #define PPMPF_VXPP_ARITY41() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty41.hh>
            #else
                #define PPMPF_VAR41() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(4) \
                               , PPMPF_VAR41() )
            
            #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(4) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR41() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F04 \
                                 , PPMPF_VXPP_S4F03 \
                                 , PPMPF_VXPP_S4F02 \
                                 , PPMPF_VXPP_S4F01 \
                                 , PPMPF_VXPP_S4F00 )
                #define PPMPF_VXPP_ARITY41() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty41.hh>
            #else
                #define PPMPF_VAR41() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR42() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F14 \
                                 , PPMPF_VXPP_S4F13 \
                                 , PPMPF_VXPP_S4F12 \
                                 , PPMPF_VXPP_S4F11 \
                                 , PPMPF_VXPP_S4F10 )
                #define PPMPF_VXPP_ARITY42() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty42.hh>
            #else
                #define PPMPF_VAR42() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0)))
                #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(4) \
                               , PPMPF_VAR41() \
                               , PPMPF_VAR42() )
            #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(4) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR41() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F04 \
                                 , PPMPF_VXPP_S4F03 \
                                 , PPMPF_VXPP_S4F02 \
                                 , PPMPF_VXPP_S4F01 \
                                 , PPMPF_VXPP_S4F00 )
                #define PPMPF_VXPP_ARITY41() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty41.hh>
            #else
                #define PPMPF_VAR41() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR42() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F14 \
                                 , PPMPF_VXPP_S4F13 \
                                 , PPMPF_VXPP_S4F12 \
                                 , PPMPF_VXPP_S4F11 \
                                 , PPMPF_VXPP_S4F10 )
                #define PPMPF_VXPP_ARITY42() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty42.hh>
            #else
                #define PPMPF_VAR42() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0)))
                #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR43() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F24 \
                                 , PPMPF_VXPP_S4F23 \
                                 , PPMPF_VXPP_S4F22 \
                                 , PPMPF_VXPP_S4F21 \
                                 , PPMPF_VXPP_S4F20 )
                 #define PPMPF_VXPP_ARITY43() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty43.hh>
            #else
                #define PPMPF_VAR43() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(4) \
                               , PPMPF_VAR41() \
                               , PPMPF_VAR42() \
                               , PPMPF_VAR43() )
        #elif PPMPF_VXPP_XSIZE(4) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR41() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F04 \
                                 , PPMPF_VXPP_S4F03 \
                                 , PPMPF_VXPP_S4F02 \
                                 , PPMPF_VXPP_S4F01 \
                                 , PPMPF_VXPP_S4F00 )
                #define PPMPF_VXPP_ARITY41() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty41.hh>
            #else
                #define PPMPF_VAR41() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR42() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F14 \
                                 , PPMPF_VXPP_S4F13 \
                                 , PPMPF_VXPP_S4F12 \
                                 , PPMPF_VXPP_S4F11 \
                                 , PPMPF_VXPP_S4F10 )
                #define PPMPF_VXPP_ARITY42() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty42.hh>
            #else
                #define PPMPF_VAR42() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0)))
                #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR43() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F24 \
                                 , PPMPF_VXPP_S4F23 \
                                 , PPMPF_VXPP_S4F22 \
                                 , PPMPF_VXPP_S4F21 \
                                 , PPMPF_VXPP_S4F20 )
                 #define PPMPF_VXPP_ARITY43() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty43.hh>
            #else
                #define PPMPF_VAR43() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR44() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F34 \
                                 , PPMPF_VXPP_S4F33 \
                                 , PPMPF_VXPP_S4F32 \
                                 , PPMPF_VXPP_S4F31 \
                                 , PPMPF_VXPP_S4F30 )
                #define PPMPF_VXPP_ARITY44() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty44.hh>
            #else
                #define PPMPF_VAR44() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(4) \
                               , PPMPF_VAR41() \
                               , PPMPF_VAR42() \
                               , PPMPF_VAR43() \
                               , PPMPF_VAR44() )
        #elif PPMPF_VXPP_XSIZE(4) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR41() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F04 \
                                 , PPMPF_VXPP_S4F03 \
                                 , PPMPF_VXPP_S4F02 \
                                 , PPMPF_VXPP_S4F01 \
                                 , PPMPF_VXPP_S4F00 )
                #define PPMPF_VXPP_ARITY41() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty41.hh>
            #else
                #define PPMPF_VAR41() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR42() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F14 \
                                 , PPMPF_VXPP_S4F13 \
                                 , PPMPF_VXPP_S4F12 \
                                 , PPMPF_VXPP_S4F11 \
                                 , PPMPF_VXPP_S4F10 )
                #define PPMPF_VXPP_ARITY42() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty42.hh>
            #else
                #define PPMPF_VAR42() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0)))
                #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR43() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F24 \
                                 , PPMPF_VXPP_S4F23 \
                                 , PPMPF_VXPP_S4F22 \
                                 , PPMPF_VXPP_S4F21 \
                                 , PPMPF_VXPP_S4F20 )
                 #define PPMPF_VXPP_ARITY43() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty43.hh>
            #else
                #define PPMPF_VAR43() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR44() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F34 \
                                 , PPMPF_VXPP_S4F33 \
                                 , PPMPF_VXPP_S4F32 \
                                 , PPMPF_VXPP_S4F31 \
                                 , PPMPF_VXPP_S4F30 )
                #define PPMPF_VXPP_ARITY44() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty44.hh>
            #else
                #define PPMPF_VAR44() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR45() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F44 \
                                 , PPMPF_VXPP_S4F43 \
                                 , PPMPF_VXPP_S4F42 \
                                 , PPMPF_VXPP_S4F41 \
                                 , PPMPF_VXPP_S4F40 )
               #define PPMPF_VXPP_ARITY45() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty45.hh>
            #else
                #define PPMPF_VAR45() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(4) \
                               , PPMPF_VAR41() \
                               , PPMPF_VAR42() \
                               , PPMPF_VAR43() \
                               , PPMPF_VAR44() \
                               , PPMPF_VAR45() )
        #elif PPMPF_VXPP_XSIZE(4) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR41() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F04 \
                                 , PPMPF_VXPP_S4F03 \
                                 , PPMPF_VXPP_S4F02 \
                                 , PPMPF_VXPP_S4F01 \
                                 , PPMPF_VXPP_S4F00 )
                #define PPMPF_VXPP_ARITY41() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty41.hh>
            #else
                #define PPMPF_VAR41() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR42() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F14 \
                                 , PPMPF_VXPP_S4F13 \
                                 , PPMPF_VXPP_S4F12 \
                                 , PPMPF_VXPP_S4F11 \
                                 , PPMPF_VXPP_S4F10 )
                #define PPMPF_VXPP_ARITY42() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty42.hh>
            #else
                #define PPMPF_VAR42() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0)))
                #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR43() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F24 \
                                 , PPMPF_VXPP_S4F23 \
                                 , PPMPF_VXPP_S4F22 \
                                 , PPMPF_VXPP_S4F21 \
                                 , PPMPF_VXPP_S4F20 )
                 #define PPMPF_VXPP_ARITY43() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty43.hh>
            #else
                #define PPMPF_VAR43() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR44() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F34 \
                                 , PPMPF_VXPP_S4F33 \
                                 , PPMPF_VXPP_S4F32 \
                                 , PPMPF_VXPP_S4F31 \
                                 , PPMPF_VXPP_S4F30 )
                #define PPMPF_VXPP_ARITY44() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty44.hh>
            #else
                #define PPMPF_VAR44() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR45() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F44 \
                                 , PPMPF_VXPP_S4F43 \
                                 , PPMPF_VXPP_S4F42 \
                                 , PPMPF_VXPP_S4F41 \
                                 , PPMPF_VXPP_S4F40 )
               #define PPMPF_VXPP_ARITY45() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty45.hh>
            #else
                #define PPMPF_VAR45() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR46() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F54 \
                                 , PPMPF_VXPP_S4F53 \
                                 , PPMPF_VXPP_S4F52 \
                                 , PPMPF_VXPP_S4F51 \
                                 , PPMPF_VXPP_S4F50 )
                #define PPMPF_VXPP_ARITY46() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty46.hh>
            #else
                #define PPMPF_VAR46() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(4) \
                               , PPMPF_VAR41() \
                               , PPMPF_VAR42() \
                               , PPMPF_VAR43() \
                               , PPMPF_VAR44() \
                               , PPMPF_VAR45() \
                               , PPMPF_VAR46() )
        #elif PPMPF_VXPP_XSIZE(4) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR41() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F04 \
                                 , PPMPF_VXPP_S4F03 \
                                 , PPMPF_VXPP_S4F02 \
                                 , PPMPF_VXPP_S4F01 \
                                 , PPMPF_VXPP_S4F00 )
                #define PPMPF_VXPP_ARITY41() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty41.hh>
            #else
                #define PPMPF_VAR41() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR42() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F14 \
                                 , PPMPF_VXPP_S4F13 \
                                 , PPMPF_VXPP_S4F12 \
                                 , PPMPF_VXPP_S4F11 \
                                 , PPMPF_VXPP_S4F10 )
                #define PPMPF_VXPP_ARITY42() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty42.hh>
            #else
                #define PPMPF_VAR42() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0)))
                #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR43() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F24 \
                                 , PPMPF_VXPP_S4F23 \
                                 , PPMPF_VXPP_S4F22 \
                                 , PPMPF_VXPP_S4F21 \
                                 , PPMPF_VXPP_S4F20 )
                 #define PPMPF_VXPP_ARITY43() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty43.hh>
            #else
                #define PPMPF_VAR43() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR44() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F34 \
                                 , PPMPF_VXPP_S4F33 \
                                 , PPMPF_VXPP_S4F32 \
                                 , PPMPF_VXPP_S4F31 \
                                 , PPMPF_VXPP_S4F30 )
                #define PPMPF_VXPP_ARITY44() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty44.hh>
            #else
                #define PPMPF_VAR44() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR45() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F44 \
                                 , PPMPF_VXPP_S4F43 \
                                 , PPMPF_VXPP_S4F42 \
                                 , PPMPF_VXPP_S4F41 \
                                 , PPMPF_VXPP_S4F40 )
               #define PPMPF_VXPP_ARITY45() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty45.hh>
            #else
                #define PPMPF_VAR45() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR46() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F54 \
                                 , PPMPF_VXPP_S4F53 \
                                 , PPMPF_VXPP_S4F52 \
                                 , PPMPF_VXPP_S4F51 \
                                 , PPMPF_VXPP_S4F50 )
                #define PPMPF_VXPP_ARITY46() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty46.hh>
            #else
                #define PPMPF_VAR46() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR47() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F64 \
                                 , PPMPF_VXPP_S4F63 \
                                 , PPMPF_VXPP_S4F62 \
                                 , PPMPF_VXPP_S4F61 \
                                 , PPMPF_VXPP_S4F60 )
                #define PPMPF_VXPP_ARITY47() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty47.hh>
            #else
                #define PPMPF_VAR47() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(4) \
                               , PPMPF_VAR41() \
                               , PPMPF_VAR42() \
                               , PPMPF_VAR43() \
                               , PPMPF_VAR44() \
                               , PPMPF_VAR45() \
                               , PPMPF_VAR46() \
                               , PPMPF_VAR47() )
        #elif PPMPF_VXPP_XSIZE(4) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR41() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F04 \
                                 , PPMPF_VXPP_S4F03 \
                                 , PPMPF_VXPP_S4F02 \
                                 , PPMPF_VXPP_S4F01 \
                                 , PPMPF_VXPP_S4F00 )
                #define PPMPF_VXPP_ARITY41() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty41.hh>
            #else
                #define PPMPF_VAR41() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR42() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F14 \
                                 , PPMPF_VXPP_S4F13 \
                                 , PPMPF_VXPP_S4F12 \
                                 , PPMPF_VXPP_S4F11 \
                                 , PPMPF_VXPP_S4F10 )
                #define PPMPF_VXPP_ARITY42() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty42.hh>
            #else
                #define PPMPF_VAR42() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0)))
                #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR43() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F24 \
                                 , PPMPF_VXPP_S4F23 \
                                 , PPMPF_VXPP_S4F22 \
                                 , PPMPF_VXPP_S4F21 \
                                 , PPMPF_VXPP_S4F20 )
                 #define PPMPF_VXPP_ARITY43() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty43.hh>
            #else
                #define PPMPF_VAR43() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR44() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F34 \
                                 , PPMPF_VXPP_S4F33 \
                                 , PPMPF_VXPP_S4F32 \
                                 , PPMPF_VXPP_S4F31 \
                                 , PPMPF_VXPP_S4F30 )
                #define PPMPF_VXPP_ARITY44() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty44.hh>
            #else
                #define PPMPF_VAR44() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR45() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F44 \
                                 , PPMPF_VXPP_S4F43 \
                                 , PPMPF_VXPP_S4F42 \
                                 , PPMPF_VXPP_S4F41 \
                                 , PPMPF_VXPP_S4F40 )
               #define PPMPF_VXPP_ARITY45() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty45.hh>
            #else
                #define PPMPF_VAR45() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR46() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F54 \
                                 , PPMPF_VXPP_S4F53 \
                                 , PPMPF_VXPP_S4F52 \
                                 , PPMPF_VXPP_S4F51 \
                                 , PPMPF_VXPP_S4F50 )
                #define PPMPF_VXPP_ARITY46() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty46.hh>
            #else
                #define PPMPF_VAR46() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR47() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F64 \
                                 , PPMPF_VXPP_S4F63 \
                                 , PPMPF_VXPP_S4F62 \
                                 , PPMPF_VXPP_S4F61 \
                                 , PPMPF_VXPP_S4F60 )
                #define PPMPF_VXPP_ARITY47() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty47.hh>
            #else
                #define PPMPF_VAR47() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR48() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F74 \
                                 , PPMPF_VXPP_S4F73 \
                                 , PPMPF_VXPP_S4F72 \
                                 , PPMPF_VXPP_S4F71 \
                                 , PPMPF_VXPP_S4F70 )
                #define PPMPF_VXPP_ARITY48() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty48.hh>
            #else
                #define PPMPF_VAR48() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(4) \
                               , PPMPF_VAR41() \
                               , PPMPF_VAR42() \
                               , PPMPF_VAR43() \
                               , PPMPF_VAR44() \
                               , PPMPF_VAR45() \
                               , PPMPF_VAR46() \
                               , PPMPF_VAR47() \
                               , PPMPF_VAR48() )
        #elif PPMPF_VXPP_XSIZE(4) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR41() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F04 \
                                 , PPMPF_VXPP_S4F03 \
                                 , PPMPF_VXPP_S4F02 \
                                 , PPMPF_VXPP_S4F01 \
                                 , PPMPF_VXPP_S4F00 )
                #define PPMPF_VXPP_ARITY41() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty41.hh>
            #else
                #define PPMPF_VAR41() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR42() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F14 \
                                 , PPMPF_VXPP_S4F13 \
                                 , PPMPF_VXPP_S4F12 \
                                 , PPMPF_VXPP_S4F11 \
                                 , PPMPF_VXPP_S4F10 )
                #define PPMPF_VXPP_ARITY42() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty42.hh>
            #else
                #define PPMPF_VAR42() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(4,0)))
                #define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR43() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F24 \
                                 , PPMPF_VXPP_S4F23 \
                                 , PPMPF_VXPP_S4F22 \
                                 , PPMPF_VXPP_S4F21 \
                                 , PPMPF_VXPP_S4F20 )
                 #define PPMPF_VXPP_ARITY43() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty43.hh>
            #else
                #define PPMPF_VAR43() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR44() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F34 \
                                 , PPMPF_VXPP_S4F33 \
                                 , PPMPF_VXPP_S4F32 \
                                 , PPMPF_VXPP_S4F31 \
                                 , PPMPF_VXPP_S4F30 )
                #define PPMPF_VXPP_ARITY44() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty44.hh>
            #else
                #define PPMPF_VAR44() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR45() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F44 \
                                 , PPMPF_VXPP_S4F43 \
                                 , PPMPF_VXPP_S4F42 \
                                 , PPMPF_VXPP_S4F41 \
                                 , PPMPF_VXPP_S4F40 )
               #define PPMPF_VXPP_ARITY45() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty45.hh>
            #else
                #define PPMPF_VAR45() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR46() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F54 \
                                 , PPMPF_VXPP_S4F53 \
                                 , PPMPF_VXPP_S4F52 \
                                 , PPMPF_VXPP_S4F51 \
                                 , PPMPF_VXPP_S4F50 )
                #define PPMPF_VXPP_ARITY46() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty46.hh>
            #else
                #define PPMPF_VAR46() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR47() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F64 \
                                 , PPMPF_VXPP_S4F63 \
                                 , PPMPF_VXPP_S4F62 \
                                 , PPMPF_VXPP_S4F61 \
                                 , PPMPF_VXPP_S4F60 )
                #define PPMPF_VXPP_ARITY47() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty47.hh>
            #else
                #define PPMPF_VAR47() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR48() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F74 \
                                 , PPMPF_VXPP_S4F73 \
                                 , PPMPF_VXPP_S4F72 \
                                 , PPMPF_VXPP_S4F71 \
                                 , PPMPF_VXPP_S4F70 )
                #define PPMPF_VXPP_ARITY48() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty48.hh>
            #else
                #define PPMPF_VAR48() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(4,0))))
                #define PPMPF_VAR49() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S4F84 \
                                 , PPMPF_VXPP_S4F83 \
                                 , PPMPF_VXPP_S4F82 \
                                 , PPMPF_VXPP_S4F81 \
                                 , PPMPF_VXPP_S4F80 )
                #define PPMPF_VXPP_ARITY49() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty49.hh>
            #else
                #define PPMPF_VAR49() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(4,(()))))
                #define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC4() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(4) \
                               , PPMPF_VAR41() \
                               , PPMPF_VAR42() \
                               , PPMPF_VAR43() \
                               , PPMPF_VAR44() \
                               , PPMPF_VAR45() \
                               , PPMPF_VAR46() \
                               , PPMPF_VAR47() \
                               , PPMPF_VAR48() \
                               , PPMPF_VAR49() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(4)
    #undef _PPMPF_FARG4
    #undef _PPMPF_FARG40
    #undef _PPMPF_FARG41
    #undef _PPMPF_FARG42
    #undef _PPMPF_FARG43
    #undef _PPMPF_FARG44
    #undef _PPMPF_FARG45
    #undef _PPMPF_FARG46
    #undef _PPMPF_FARG47
    #undef _PPMPF_FARG48
    #undef PPMPF_VAR41
    #undef PPMPF_VAR42
    #undef PPMPF_VAR43
    #undef PPMPF_VAR44
    #undef PPMPF_VAR45
    #undef PPMPF_VAR46
    #undef PPMPF_VAR47
    #undef PPMPF_VAR48
    #undef PPMPF_VAR49
    #undef PPMPF_VXPP_ARITY41
    #undef PPMPF_VXPP_ARITY42
    #undef PPMPF_VXPP_ARITY43
    #undef PPMPF_VXPP_ARITY44
    #undef PPMPF_VXPP_ARITY45
    #undef PPMPF_VXPP_ARITY46
    #undef PPMPF_VXPP_ARITY47
    #undef PPMPF_VXPP_ARITY48
    #undef PPMPF_VXPP_ARITY49
#endif
    #undef PPMPF_VXPP_SET4
    #undef PPMPF_VXPP_ENDL4
    #undef PPMPF_VXPP_ENDR4
    #undef PPMPF_VXPP_SLOT4
#undef CLAUSE_PPMPF_VXPP_SET4_
#undef PPMPF_VXPP
#endif /* CLAUSE_PPMPF_VXPP_SET4_ */
