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

#ifdef _CLAUSE_PPMPF_VXPP_SET2_
    #error Already iterating macro set with identifier 2.
#else
#define _CLAUSE_PPMPF_VXPP_SET2_
#undef PPMPF_VXPP_ENDL2
#undef PPMPF_VXPP_ENDR2
#undef PPMPF_VXPP
#define PPMPF_VXPP() 2
#define PPMPF_VXPP_ENDR2() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(2)))))
#define PPMPF_VXPP_ENDL2() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(2))))
#include PPMPF_VXPP_INIT(2)
#undef _PPMPF_FARG2
#undef _PPMPF_FARG20
#undef _PPMPF_FARG21
#undef _PPMPF_FARG22
#undef _PPMPF_FARG23
#undef _PPMPF_FARG24
#undef _PPMPF_FARG25
#undef _PPMPF_FARG26
#undef _PPMPF_FARG27
#undef _PPMPF_FARG28
#undef PPMPF_VAR21
#undef PPMPF_VAR22
#undef PPMPF_VAR23
#undef PPMPF_VAR24
#undef PPMPF_VAR25
#undef PPMPF_VAR26
#undef PPMPF_VAR27
#undef PPMPF_VAR28
#undef PPMPF_VAR29
#undef PPMPF_VXPP_ARITY21
#undef PPMPF_VXPP_ARITY22
#undef PPMPF_VXPP_ARITY23
#undef PPMPF_VXPP_ARITY24
#undef PPMPF_VXPP_ARITY25
#undef PPMPF_VXPP_ARITY26
#undef PPMPF_VXPP_ARITY27
#undef PPMPF_VXPP_ARITY28
#undef PPMPF_VXPP_ARITY29
#undef PPMPF_VXPP_FUNC2
#undef PPMPF_VXPP_SLOT2
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET2(0)))
        #define PPMPF_N2() \
                PPMPF_VXPP_DN_ITEM2()
        #define PPMPF_VXPP_SLOT2() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET2(0))
        #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(2)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET2(0)))) == 1
        #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC2() \
                PPMPF_JUST(PPMPF_VXPP_MCF(2)(PPMPF_VXPP_DN_ITEM(2)))
    #else
        #define _PPMPF_FARG20()  _PPMPF_FARG2(0,2)
        #define _PPMPF_FARG21()  _PPMPF_FARG2(1,2)
        #define _PPMPF_FARG22()  _PPMPF_FARG2(2,2)
        #define _PPMPF_FARG23()  _PPMPF_FARG2(3,2)
        #define _PPMPF_FARG24()  _PPMPF_FARG2(4,2)
        #define _PPMPF_FARG25()  _PPMPF_FARG2(5,2)
        #define _PPMPF_FARG26()  _PPMPF_FARG2(6,2)
        #define _PPMPF_FARG27()  _PPMPF_FARG2(7,2)
        #define _PPMPF_FARG28()  _PPMPF_FARG2(8,2)
        #define _PPMPF_FARG2(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(2) == 0
            #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(2)())
        #elif PPMPF_VXPP_XSIZE(2) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR21() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F04 \
                                 , PPMPF_VXPP_S2F03 \
                                 , PPMPF_VXPP_S2F02 \
                                 , PPMPF_VXPP_S2F01 \
                                 , PPMPF_VXPP_S2F00 )
                #define PPMPF_VXPP_ARITY21() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty21.hh>
            #else
                #define PPMPF_VAR21() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(2) \
                               , PPMPF_VAR21() )
            
            #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(2) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR21() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F04 \
                                 , PPMPF_VXPP_S2F03 \
                                 , PPMPF_VXPP_S2F02 \
                                 , PPMPF_VXPP_S2F01 \
                                 , PPMPF_VXPP_S2F00 )
                #define PPMPF_VXPP_ARITY21() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty21.hh>
            #else
                #define PPMPF_VAR21() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR22() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F14 \
                                 , PPMPF_VXPP_S2F13 \
                                 , PPMPF_VXPP_S2F12 \
                                 , PPMPF_VXPP_S2F11 \
                                 , PPMPF_VXPP_S2F10 )
                #define PPMPF_VXPP_ARITY22() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty22.hh>
            #else
                #define PPMPF_VAR22() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0)))
                #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(2) \
                               , PPMPF_VAR21() \
                               , PPMPF_VAR22() )
            #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(2) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR21() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F04 \
                                 , PPMPF_VXPP_S2F03 \
                                 , PPMPF_VXPP_S2F02 \
                                 , PPMPF_VXPP_S2F01 \
                                 , PPMPF_VXPP_S2F00 )
                #define PPMPF_VXPP_ARITY21() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty21.hh>
            #else
                #define PPMPF_VAR21() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR22() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F14 \
                                 , PPMPF_VXPP_S2F13 \
                                 , PPMPF_VXPP_S2F12 \
                                 , PPMPF_VXPP_S2F11 \
                                 , PPMPF_VXPP_S2F10 )
                #define PPMPF_VXPP_ARITY22() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty22.hh>
            #else
                #define PPMPF_VAR22() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0)))
                #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR23() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F24 \
                                 , PPMPF_VXPP_S2F23 \
                                 , PPMPF_VXPP_S2F22 \
                                 , PPMPF_VXPP_S2F21 \
                                 , PPMPF_VXPP_S2F20 )
                 #define PPMPF_VXPP_ARITY23() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty23.hh>
            #else
                #define PPMPF_VAR23() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(2) \
                               , PPMPF_VAR21() \
                               , PPMPF_VAR22() \
                               , PPMPF_VAR23() )
        #elif PPMPF_VXPP_XSIZE(2) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR21() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F04 \
                                 , PPMPF_VXPP_S2F03 \
                                 , PPMPF_VXPP_S2F02 \
                                 , PPMPF_VXPP_S2F01 \
                                 , PPMPF_VXPP_S2F00 )
                #define PPMPF_VXPP_ARITY21() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty21.hh>
            #else
                #define PPMPF_VAR21() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR22() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F14 \
                                 , PPMPF_VXPP_S2F13 \
                                 , PPMPF_VXPP_S2F12 \
                                 , PPMPF_VXPP_S2F11 \
                                 , PPMPF_VXPP_S2F10 )
                #define PPMPF_VXPP_ARITY22() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty22.hh>
            #else
                #define PPMPF_VAR22() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0)))
                #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR23() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F24 \
                                 , PPMPF_VXPP_S2F23 \
                                 , PPMPF_VXPP_S2F22 \
                                 , PPMPF_VXPP_S2F21 \
                                 , PPMPF_VXPP_S2F20 )
                 #define PPMPF_VXPP_ARITY23() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty23.hh>
            #else
                #define PPMPF_VAR23() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR24() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F34 \
                                 , PPMPF_VXPP_S2F33 \
                                 , PPMPF_VXPP_S2F32 \
                                 , PPMPF_VXPP_S2F31 \
                                 , PPMPF_VXPP_S2F30 )
                #define PPMPF_VXPP_ARITY24() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty24.hh>
            #else
                #define PPMPF_VAR24() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(2) \
                               , PPMPF_VAR21() \
                               , PPMPF_VAR22() \
                               , PPMPF_VAR23() \
                               , PPMPF_VAR24() )
        #elif PPMPF_VXPP_XSIZE(2) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR21() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F04 \
                                 , PPMPF_VXPP_S2F03 \
                                 , PPMPF_VXPP_S2F02 \
                                 , PPMPF_VXPP_S2F01 \
                                 , PPMPF_VXPP_S2F00 )
                #define PPMPF_VXPP_ARITY21() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty21.hh>
            #else
                #define PPMPF_VAR21() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR22() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F14 \
                                 , PPMPF_VXPP_S2F13 \
                                 , PPMPF_VXPP_S2F12 \
                                 , PPMPF_VXPP_S2F11 \
                                 , PPMPF_VXPP_S2F10 )
                #define PPMPF_VXPP_ARITY22() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty22.hh>
            #else
                #define PPMPF_VAR22() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0)))
                #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR23() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F24 \
                                 , PPMPF_VXPP_S2F23 \
                                 , PPMPF_VXPP_S2F22 \
                                 , PPMPF_VXPP_S2F21 \
                                 , PPMPF_VXPP_S2F20 )
                 #define PPMPF_VXPP_ARITY23() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty23.hh>
            #else
                #define PPMPF_VAR23() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR24() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F34 \
                                 , PPMPF_VXPP_S2F33 \
                                 , PPMPF_VXPP_S2F32 \
                                 , PPMPF_VXPP_S2F31 \
                                 , PPMPF_VXPP_S2F30 )
                #define PPMPF_VXPP_ARITY24() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty24.hh>
            #else
                #define PPMPF_VAR24() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR25() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F44 \
                                 , PPMPF_VXPP_S2F43 \
                                 , PPMPF_VXPP_S2F42 \
                                 , PPMPF_VXPP_S2F41 \
                                 , PPMPF_VXPP_S2F40 )
               #define PPMPF_VXPP_ARITY25() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty25.hh>
            #else
                #define PPMPF_VAR25() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(2) \
                               , PPMPF_VAR21() \
                               , PPMPF_VAR22() \
                               , PPMPF_VAR23() \
                               , PPMPF_VAR24() \
                               , PPMPF_VAR25() )
        #elif PPMPF_VXPP_XSIZE(2) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR21() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F04 \
                                 , PPMPF_VXPP_S2F03 \
                                 , PPMPF_VXPP_S2F02 \
                                 , PPMPF_VXPP_S2F01 \
                                 , PPMPF_VXPP_S2F00 )
                #define PPMPF_VXPP_ARITY21() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty21.hh>
            #else
                #define PPMPF_VAR21() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR22() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F14 \
                                 , PPMPF_VXPP_S2F13 \
                                 , PPMPF_VXPP_S2F12 \
                                 , PPMPF_VXPP_S2F11 \
                                 , PPMPF_VXPP_S2F10 )
                #define PPMPF_VXPP_ARITY22() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty22.hh>
            #else
                #define PPMPF_VAR22() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0)))
                #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR23() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F24 \
                                 , PPMPF_VXPP_S2F23 \
                                 , PPMPF_VXPP_S2F22 \
                                 , PPMPF_VXPP_S2F21 \
                                 , PPMPF_VXPP_S2F20 )
                 #define PPMPF_VXPP_ARITY23() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty23.hh>
            #else
                #define PPMPF_VAR23() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR24() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F34 \
                                 , PPMPF_VXPP_S2F33 \
                                 , PPMPF_VXPP_S2F32 \
                                 , PPMPF_VXPP_S2F31 \
                                 , PPMPF_VXPP_S2F30 )
                #define PPMPF_VXPP_ARITY24() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty24.hh>
            #else
                #define PPMPF_VAR24() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR25() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F44 \
                                 , PPMPF_VXPP_S2F43 \
                                 , PPMPF_VXPP_S2F42 \
                                 , PPMPF_VXPP_S2F41 \
                                 , PPMPF_VXPP_S2F40 )
               #define PPMPF_VXPP_ARITY25() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty25.hh>
            #else
                #define PPMPF_VAR25() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR26() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F54 \
                                 , PPMPF_VXPP_S2F53 \
                                 , PPMPF_VXPP_S2F52 \
                                 , PPMPF_VXPP_S2F51 \
                                 , PPMPF_VXPP_S2F50 )
                #define PPMPF_VXPP_ARITY26() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty26.hh>
            #else
                #define PPMPF_VAR26() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(2) \
                               , PPMPF_VAR21() \
                               , PPMPF_VAR22() \
                               , PPMPF_VAR23() \
                               , PPMPF_VAR24() \
                               , PPMPF_VAR25() \
                               , PPMPF_VAR26() )
        #elif PPMPF_VXPP_XSIZE(2) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR21() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F04 \
                                 , PPMPF_VXPP_S2F03 \
                                 , PPMPF_VXPP_S2F02 \
                                 , PPMPF_VXPP_S2F01 \
                                 , PPMPF_VXPP_S2F00 )
                #define PPMPF_VXPP_ARITY21() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty21.hh>
            #else
                #define PPMPF_VAR21() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR22() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F14 \
                                 , PPMPF_VXPP_S2F13 \
                                 , PPMPF_VXPP_S2F12 \
                                 , PPMPF_VXPP_S2F11 \
                                 , PPMPF_VXPP_S2F10 )
                #define PPMPF_VXPP_ARITY22() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty22.hh>
            #else
                #define PPMPF_VAR22() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0)))
                #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR23() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F24 \
                                 , PPMPF_VXPP_S2F23 \
                                 , PPMPF_VXPP_S2F22 \
                                 , PPMPF_VXPP_S2F21 \
                                 , PPMPF_VXPP_S2F20 )
                 #define PPMPF_VXPP_ARITY23() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty23.hh>
            #else
                #define PPMPF_VAR23() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR24() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F34 \
                                 , PPMPF_VXPP_S2F33 \
                                 , PPMPF_VXPP_S2F32 \
                                 , PPMPF_VXPP_S2F31 \
                                 , PPMPF_VXPP_S2F30 )
                #define PPMPF_VXPP_ARITY24() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty24.hh>
            #else
                #define PPMPF_VAR24() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR25() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F44 \
                                 , PPMPF_VXPP_S2F43 \
                                 , PPMPF_VXPP_S2F42 \
                                 , PPMPF_VXPP_S2F41 \
                                 , PPMPF_VXPP_S2F40 )
               #define PPMPF_VXPP_ARITY25() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty25.hh>
            #else
                #define PPMPF_VAR25() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR26() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F54 \
                                 , PPMPF_VXPP_S2F53 \
                                 , PPMPF_VXPP_S2F52 \
                                 , PPMPF_VXPP_S2F51 \
                                 , PPMPF_VXPP_S2F50 )
                #define PPMPF_VXPP_ARITY26() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty26.hh>
            #else
                #define PPMPF_VAR26() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR27() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F64 \
                                 , PPMPF_VXPP_S2F63 \
                                 , PPMPF_VXPP_S2F62 \
                                 , PPMPF_VXPP_S2F61 \
                                 , PPMPF_VXPP_S2F60 )
                #define PPMPF_VXPP_ARITY27() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty27.hh>
            #else
                #define PPMPF_VAR27() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(2) \
                               , PPMPF_VAR21() \
                               , PPMPF_VAR22() \
                               , PPMPF_VAR23() \
                               , PPMPF_VAR24() \
                               , PPMPF_VAR25() \
                               , PPMPF_VAR26() \
                               , PPMPF_VAR27() )
        #elif PPMPF_VXPP_XSIZE(2) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR21() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F04 \
                                 , PPMPF_VXPP_S2F03 \
                                 , PPMPF_VXPP_S2F02 \
                                 , PPMPF_VXPP_S2F01 \
                                 , PPMPF_VXPP_S2F00 )
                #define PPMPF_VXPP_ARITY21() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty21.hh>
            #else
                #define PPMPF_VAR21() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR22() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F14 \
                                 , PPMPF_VXPP_S2F13 \
                                 , PPMPF_VXPP_S2F12 \
                                 , PPMPF_VXPP_S2F11 \
                                 , PPMPF_VXPP_S2F10 )
                #define PPMPF_VXPP_ARITY22() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty22.hh>
            #else
                #define PPMPF_VAR22() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0)))
                #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR23() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F24 \
                                 , PPMPF_VXPP_S2F23 \
                                 , PPMPF_VXPP_S2F22 \
                                 , PPMPF_VXPP_S2F21 \
                                 , PPMPF_VXPP_S2F20 )
                 #define PPMPF_VXPP_ARITY23() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty23.hh>
            #else
                #define PPMPF_VAR23() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR24() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F34 \
                                 , PPMPF_VXPP_S2F33 \
                                 , PPMPF_VXPP_S2F32 \
                                 , PPMPF_VXPP_S2F31 \
                                 , PPMPF_VXPP_S2F30 )
                #define PPMPF_VXPP_ARITY24() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty24.hh>
            #else
                #define PPMPF_VAR24() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR25() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F44 \
                                 , PPMPF_VXPP_S2F43 \
                                 , PPMPF_VXPP_S2F42 \
                                 , PPMPF_VXPP_S2F41 \
                                 , PPMPF_VXPP_S2F40 )
               #define PPMPF_VXPP_ARITY25() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty25.hh>
            #else
                #define PPMPF_VAR25() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR26() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F54 \
                                 , PPMPF_VXPP_S2F53 \
                                 , PPMPF_VXPP_S2F52 \
                                 , PPMPF_VXPP_S2F51 \
                                 , PPMPF_VXPP_S2F50 )
                #define PPMPF_VXPP_ARITY26() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty26.hh>
            #else
                #define PPMPF_VAR26() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR27() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F64 \
                                 , PPMPF_VXPP_S2F63 \
                                 , PPMPF_VXPP_S2F62 \
                                 , PPMPF_VXPP_S2F61 \
                                 , PPMPF_VXPP_S2F60 )
                #define PPMPF_VXPP_ARITY27() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty27.hh>
            #else
                #define PPMPF_VAR27() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR28() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F74 \
                                 , PPMPF_VXPP_S2F73 \
                                 , PPMPF_VXPP_S2F72 \
                                 , PPMPF_VXPP_S2F71 \
                                 , PPMPF_VXPP_S2F70 )
                #define PPMPF_VXPP_ARITY28() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty28.hh>
            #else
                #define PPMPF_VAR28() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(2) \
                               , PPMPF_VAR21() \
                               , PPMPF_VAR22() \
                               , PPMPF_VAR23() \
                               , PPMPF_VAR24() \
                               , PPMPF_VAR25() \
                               , PPMPF_VAR26() \
                               , PPMPF_VAR27() \
                               , PPMPF_VAR28() )
        #elif PPMPF_VXPP_XSIZE(2) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR21() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F04 \
                                 , PPMPF_VXPP_S2F03 \
                                 , PPMPF_VXPP_S2F02 \
                                 , PPMPF_VXPP_S2F01 \
                                 , PPMPF_VXPP_S2F00 )
                #define PPMPF_VXPP_ARITY21() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty21.hh>
            #else
                #define PPMPF_VAR21() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR22() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F14 \
                                 , PPMPF_VXPP_S2F13 \
                                 , PPMPF_VXPP_S2F12 \
                                 , PPMPF_VXPP_S2F11 \
                                 , PPMPF_VXPP_S2F10 )
                #define PPMPF_VXPP_ARITY22() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty22.hh>
            #else
                #define PPMPF_VAR22() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(2,0)))
                #define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR23() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F24 \
                                 , PPMPF_VXPP_S2F23 \
                                 , PPMPF_VXPP_S2F22 \
                                 , PPMPF_VXPP_S2F21 \
                                 , PPMPF_VXPP_S2F20 )
                 #define PPMPF_VXPP_ARITY23() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty23.hh>
            #else
                #define PPMPF_VAR23() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR24() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F34 \
                                 , PPMPF_VXPP_S2F33 \
                                 , PPMPF_VXPP_S2F32 \
                                 , PPMPF_VXPP_S2F31 \
                                 , PPMPF_VXPP_S2F30 )
                #define PPMPF_VXPP_ARITY24() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty24.hh>
            #else
                #define PPMPF_VAR24() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR25() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F44 \
                                 , PPMPF_VXPP_S2F43 \
                                 , PPMPF_VXPP_S2F42 \
                                 , PPMPF_VXPP_S2F41 \
                                 , PPMPF_VXPP_S2F40 )
               #define PPMPF_VXPP_ARITY25() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty25.hh>
            #else
                #define PPMPF_VAR25() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR26() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F54 \
                                 , PPMPF_VXPP_S2F53 \
                                 , PPMPF_VXPP_S2F52 \
                                 , PPMPF_VXPP_S2F51 \
                                 , PPMPF_VXPP_S2F50 )
                #define PPMPF_VXPP_ARITY26() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty26.hh>
            #else
                #define PPMPF_VAR26() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR27() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F64 \
                                 , PPMPF_VXPP_S2F63 \
                                 , PPMPF_VXPP_S2F62 \
                                 , PPMPF_VXPP_S2F61 \
                                 , PPMPF_VXPP_S2F60 )
                #define PPMPF_VXPP_ARITY27() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty27.hh>
            #else
                #define PPMPF_VAR27() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR28() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F74 \
                                 , PPMPF_VXPP_S2F73 \
                                 , PPMPF_VXPP_S2F72 \
                                 , PPMPF_VXPP_S2F71 \
                                 , PPMPF_VXPP_S2F70 )
                #define PPMPF_VXPP_ARITY28() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty28.hh>
            #else
                #define PPMPF_VAR28() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(2,0))))
                #define PPMPF_VAR29() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S2F84 \
                                 , PPMPF_VXPP_S2F83 \
                                 , PPMPF_VXPP_S2F82 \
                                 , PPMPF_VXPP_S2F81 \
                                 , PPMPF_VXPP_S2F80 )
                #define PPMPF_VXPP_ARITY29() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty29.hh>
            #else
                #define PPMPF_VAR29() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(2,(()))))
                #define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC2() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(2) \
                               , PPMPF_VAR21() \
                               , PPMPF_VAR22() \
                               , PPMPF_VAR23() \
                               , PPMPF_VAR24() \
                               , PPMPF_VAR25() \
                               , PPMPF_VAR26() \
                               , PPMPF_VAR27() \
                               , PPMPF_VAR28() \
                               , PPMPF_VAR29() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(2)
    #undef _PPMPF_FARG2
    #undef _PPMPF_FARG20
    #undef _PPMPF_FARG21
    #undef _PPMPF_FARG22
    #undef _PPMPF_FARG23
    #undef _PPMPF_FARG24
    #undef _PPMPF_FARG25
    #undef _PPMPF_FARG26
    #undef _PPMPF_FARG27
    #undef _PPMPF_FARG28
    #undef PPMPF_VAR21
    #undef PPMPF_VAR22
    #undef PPMPF_VAR23
    #undef PPMPF_VAR24
    #undef PPMPF_VAR25
    #undef PPMPF_VAR26
    #undef PPMPF_VAR27
    #undef PPMPF_VAR28
    #undef PPMPF_VAR29
    #undef PPMPF_VXPP_ARITY21
    #undef PPMPF_VXPP_ARITY22
    #undef PPMPF_VXPP_ARITY23
    #undef PPMPF_VXPP_ARITY24
    #undef PPMPF_VXPP_ARITY25
    #undef PPMPF_VXPP_ARITY26
    #undef PPMPF_VXPP_ARITY27
    #undef PPMPF_VXPP_ARITY28
    #undef PPMPF_VXPP_ARITY29
#endif
    #undef PPMPF_VXPP_SET2
    #undef PPMPF_VXPP_ENDL2
    #undef PPMPF_VXPP_ENDR2
    #undef PPMPF_VXPP_SLOT2
#undef _CLAUSE_PPMPF_VXPP_SET2_
#undef PPMPF_VXPP
#endif /* _CLAUSE_PPMPF_VXPP_SET2_ */
