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

#ifdef _CLAUSE_PPMPF_VXPP_SET0_
    #error Already iterating macro set with identifier 0.
#else
#define _CLAUSE_PPMPF_VXPP_SET0_
#undef PPMPF_VXPP_ENDL0
#undef PPMPF_VXPP_ENDR0
#undef PPMPF_VXPP
#define PPMPF_VXPP() 0
#define PPMPF_VXPP_ENDR0() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(0)))))
#define PPMPF_VXPP_ENDL0() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(0))))
#include PPMPF_VXPP_INIT(0)
#undef _PPMPF_FARG0
#undef _PPMPF_FARG00
#undef _PPMPF_FARG01
#undef _PPMPF_FARG02
#undef _PPMPF_FARG03
#undef _PPMPF_FARG04
#undef _PPMPF_FARG05
#undef _PPMPF_FARG06
#undef _PPMPF_FARG07
#undef _PPMPF_FARG08
#undef PPMPF_VAR01
#undef PPMPF_VAR02
#undef PPMPF_VAR03
#undef PPMPF_VAR04
#undef PPMPF_VAR05
#undef PPMPF_VAR06
#undef PPMPF_VAR07
#undef PPMPF_VAR08
#undef PPMPF_VAR09
#undef PPMPF_VXPP_ARITY01
#undef PPMPF_VXPP_ARITY02
#undef PPMPF_VXPP_ARITY03
#undef PPMPF_VXPP_ARITY04
#undef PPMPF_VXPP_ARITY05
#undef PPMPF_VXPP_ARITY06
#undef PPMPF_VXPP_ARITY07
#undef PPMPF_VXPP_ARITY08
#undef PPMPF_VXPP_ARITY09
#undef PPMPF_VXPP_FUNC0
#undef PPMPF_VXPP_SLOT0
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET0(0)))
        #define PPMPF_N0() \
                PPMPF_VXPP_DN_ITEM0()
        #define PPMPF_VXPP_SLOT0() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET0(0))
        #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(0)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET0(0)))) == 1
        #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC0() \
                PPMPF_JUST(PPMPF_VXPP_MCF(0)(PPMPF_VXPP_DN_ITEM(0)))
    #else
        #define _PPMPF_FARG00()  _PPMPF_FARG0(0,0)
        #define _PPMPF_FARG01()  _PPMPF_FARG0(1,0)
        #define _PPMPF_FARG02()  _PPMPF_FARG0(2,0)
        #define _PPMPF_FARG03()  _PPMPF_FARG0(3,0)
        #define _PPMPF_FARG04()  _PPMPF_FARG0(4,0)
        #define _PPMPF_FARG05()  _PPMPF_FARG0(5,0)
        #define _PPMPF_FARG06()  _PPMPF_FARG0(6,0)
        #define _PPMPF_FARG07()  _PPMPF_FARG0(7,0)
        #define _PPMPF_FARG08()  _PPMPF_FARG0(8,0)
        #define _PPMPF_FARG0(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(0) == 0
            #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(0)())
        #elif PPMPF_VXPP_XSIZE(0) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR01() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F04 \
                                 , PPMPF_VXPP_S0F03 \
                                 , PPMPF_VXPP_S0F02 \
                                 , PPMPF_VXPP_S0F01 \
                                 , PPMPF_VXPP_S0F00 )
                #define PPMPF_VXPP_ARITY01() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty01.hh>
            #else
                #define PPMPF_VAR01() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(0) \
                               , PPMPF_VAR01() )
            
            #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(0) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR01() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F04 \
                                 , PPMPF_VXPP_S0F03 \
                                 , PPMPF_VXPP_S0F02 \
                                 , PPMPF_VXPP_S0F01 \
                                 , PPMPF_VXPP_S0F00 )
                #define PPMPF_VXPP_ARITY01() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty01.hh>
            #else
                #define PPMPF_VAR01() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR02() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F14 \
                                 , PPMPF_VXPP_S0F13 \
                                 , PPMPF_VXPP_S0F12 \
                                 , PPMPF_VXPP_S0F11 \
                                 , PPMPF_VXPP_S0F10 )
                #define PPMPF_VXPP_ARITY02() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty02.hh>
            #else
                #define PPMPF_VAR02() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0)))
                #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(0) \
                               , PPMPF_VAR01() \
                               , PPMPF_VAR02() )
            #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(0) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR01() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F04 \
                                 , PPMPF_VXPP_S0F03 \
                                 , PPMPF_VXPP_S0F02 \
                                 , PPMPF_VXPP_S0F01 \
                                 , PPMPF_VXPP_S0F00 )
                #define PPMPF_VXPP_ARITY01() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty01.hh>
            #else
                #define PPMPF_VAR01() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR02() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F14 \
                                 , PPMPF_VXPP_S0F13 \
                                 , PPMPF_VXPP_S0F12 \
                                 , PPMPF_VXPP_S0F11 \
                                 , PPMPF_VXPP_S0F10 )
                #define PPMPF_VXPP_ARITY02() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty02.hh>
            #else
                #define PPMPF_VAR02() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0)))
                #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR03() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F24 \
                                 , PPMPF_VXPP_S0F23 \
                                 , PPMPF_VXPP_S0F22 \
                                 , PPMPF_VXPP_S0F21 \
                                 , PPMPF_VXPP_S0F20 )
                 #define PPMPF_VXPP_ARITY03() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty03.hh>
            #else
                #define PPMPF_VAR03() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(0) \
                               , PPMPF_VAR01() \
                               , PPMPF_VAR02() \
                               , PPMPF_VAR03() )
        #elif PPMPF_VXPP_XSIZE(0) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR01() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F04 \
                                 , PPMPF_VXPP_S0F03 \
                                 , PPMPF_VXPP_S0F02 \
                                 , PPMPF_VXPP_S0F01 \
                                 , PPMPF_VXPP_S0F00 )
                #define PPMPF_VXPP_ARITY01() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty01.hh>
            #else
                #define PPMPF_VAR01() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR02() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F14 \
                                 , PPMPF_VXPP_S0F13 \
                                 , PPMPF_VXPP_S0F12 \
                                 , PPMPF_VXPP_S0F11 \
                                 , PPMPF_VXPP_S0F10 )
                #define PPMPF_VXPP_ARITY02() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty02.hh>
            #else
                #define PPMPF_VAR02() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0)))
                #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR03() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F24 \
                                 , PPMPF_VXPP_S0F23 \
                                 , PPMPF_VXPP_S0F22 \
                                 , PPMPF_VXPP_S0F21 \
                                 , PPMPF_VXPP_S0F20 )
                 #define PPMPF_VXPP_ARITY03() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty03.hh>
            #else
                #define PPMPF_VAR03() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR04() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F34 \
                                 , PPMPF_VXPP_S0F33 \
                                 , PPMPF_VXPP_S0F32 \
                                 , PPMPF_VXPP_S0F31 \
                                 , PPMPF_VXPP_S0F30 )
                #define PPMPF_VXPP_ARITY04() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty04.hh>
            #else
                #define PPMPF_VAR04() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(0) \
                               , PPMPF_VAR01() \
                               , PPMPF_VAR02() \
                               , PPMPF_VAR03() \
                               , PPMPF_VAR04() )
        #elif PPMPF_VXPP_XSIZE(0) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR01() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F04 \
                                 , PPMPF_VXPP_S0F03 \
                                 , PPMPF_VXPP_S0F02 \
                                 , PPMPF_VXPP_S0F01 \
                                 , PPMPF_VXPP_S0F00 )
                #define PPMPF_VXPP_ARITY01() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty01.hh>
            #else
                #define PPMPF_VAR01() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR02() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F14 \
                                 , PPMPF_VXPP_S0F13 \
                                 , PPMPF_VXPP_S0F12 \
                                 , PPMPF_VXPP_S0F11 \
                                 , PPMPF_VXPP_S0F10 )
                #define PPMPF_VXPP_ARITY02() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty02.hh>
            #else
                #define PPMPF_VAR02() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0)))
                #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR03() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F24 \
                                 , PPMPF_VXPP_S0F23 \
                                 , PPMPF_VXPP_S0F22 \
                                 , PPMPF_VXPP_S0F21 \
                                 , PPMPF_VXPP_S0F20 )
                 #define PPMPF_VXPP_ARITY03() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty03.hh>
            #else
                #define PPMPF_VAR03() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR04() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F34 \
                                 , PPMPF_VXPP_S0F33 \
                                 , PPMPF_VXPP_S0F32 \
                                 , PPMPF_VXPP_S0F31 \
                                 , PPMPF_VXPP_S0F30 )
                #define PPMPF_VXPP_ARITY04() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty04.hh>
            #else
                #define PPMPF_VAR04() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR05() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F44 \
                                 , PPMPF_VXPP_S0F43 \
                                 , PPMPF_VXPP_S0F42 \
                                 , PPMPF_VXPP_S0F41 \
                                 , PPMPF_VXPP_S0F40 )
               #define PPMPF_VXPP_ARITY05() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty05.hh>
            #else
                #define PPMPF_VAR05() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(0) \
                               , PPMPF_VAR01() \
                               , PPMPF_VAR02() \
                               , PPMPF_VAR03() \
                               , PPMPF_VAR04() \
                               , PPMPF_VAR05() )
        #elif PPMPF_VXPP_XSIZE(0) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR01() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F04 \
                                 , PPMPF_VXPP_S0F03 \
                                 , PPMPF_VXPP_S0F02 \
                                 , PPMPF_VXPP_S0F01 \
                                 , PPMPF_VXPP_S0F00 )
                #define PPMPF_VXPP_ARITY01() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty01.hh>
            #else
                #define PPMPF_VAR01() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR02() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F14 \
                                 , PPMPF_VXPP_S0F13 \
                                 , PPMPF_VXPP_S0F12 \
                                 , PPMPF_VXPP_S0F11 \
                                 , PPMPF_VXPP_S0F10 )
                #define PPMPF_VXPP_ARITY02() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty02.hh>
            #else
                #define PPMPF_VAR02() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0)))
                #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR03() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F24 \
                                 , PPMPF_VXPP_S0F23 \
                                 , PPMPF_VXPP_S0F22 \
                                 , PPMPF_VXPP_S0F21 \
                                 , PPMPF_VXPP_S0F20 )
                 #define PPMPF_VXPP_ARITY03() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty03.hh>
            #else
                #define PPMPF_VAR03() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR04() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F34 \
                                 , PPMPF_VXPP_S0F33 \
                                 , PPMPF_VXPP_S0F32 \
                                 , PPMPF_VXPP_S0F31 \
                                 , PPMPF_VXPP_S0F30 )
                #define PPMPF_VXPP_ARITY04() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty04.hh>
            #else
                #define PPMPF_VAR04() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR05() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F44 \
                                 , PPMPF_VXPP_S0F43 \
                                 , PPMPF_VXPP_S0F42 \
                                 , PPMPF_VXPP_S0F41 \
                                 , PPMPF_VXPP_S0F40 )
               #define PPMPF_VXPP_ARITY05() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty05.hh>
            #else
                #define PPMPF_VAR05() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR06() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F54 \
                                 , PPMPF_VXPP_S0F53 \
                                 , PPMPF_VXPP_S0F52 \
                                 , PPMPF_VXPP_S0F51 \
                                 , PPMPF_VXPP_S0F50 )
                #define PPMPF_VXPP_ARITY06() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty06.hh>
            #else
                #define PPMPF_VAR06() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(0) \
                               , PPMPF_VAR01() \
                               , PPMPF_VAR02() \
                               , PPMPF_VAR03() \
                               , PPMPF_VAR04() \
                               , PPMPF_VAR05() \
                               , PPMPF_VAR06() )
        #elif PPMPF_VXPP_XSIZE(0) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR01() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F04 \
                                 , PPMPF_VXPP_S0F03 \
                                 , PPMPF_VXPP_S0F02 \
                                 , PPMPF_VXPP_S0F01 \
                                 , PPMPF_VXPP_S0F00 )
                #define PPMPF_VXPP_ARITY01() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty01.hh>
            #else
                #define PPMPF_VAR01() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR02() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F14 \
                                 , PPMPF_VXPP_S0F13 \
                                 , PPMPF_VXPP_S0F12 \
                                 , PPMPF_VXPP_S0F11 \
                                 , PPMPF_VXPP_S0F10 )
                #define PPMPF_VXPP_ARITY02() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty02.hh>
            #else
                #define PPMPF_VAR02() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0)))
                #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR03() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F24 \
                                 , PPMPF_VXPP_S0F23 \
                                 , PPMPF_VXPP_S0F22 \
                                 , PPMPF_VXPP_S0F21 \
                                 , PPMPF_VXPP_S0F20 )
                 #define PPMPF_VXPP_ARITY03() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty03.hh>
            #else
                #define PPMPF_VAR03() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR04() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F34 \
                                 , PPMPF_VXPP_S0F33 \
                                 , PPMPF_VXPP_S0F32 \
                                 , PPMPF_VXPP_S0F31 \
                                 , PPMPF_VXPP_S0F30 )
                #define PPMPF_VXPP_ARITY04() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty04.hh>
            #else
                #define PPMPF_VAR04() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR05() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F44 \
                                 , PPMPF_VXPP_S0F43 \
                                 , PPMPF_VXPP_S0F42 \
                                 , PPMPF_VXPP_S0F41 \
                                 , PPMPF_VXPP_S0F40 )
               #define PPMPF_VXPP_ARITY05() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty05.hh>
            #else
                #define PPMPF_VAR05() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR06() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F54 \
                                 , PPMPF_VXPP_S0F53 \
                                 , PPMPF_VXPP_S0F52 \
                                 , PPMPF_VXPP_S0F51 \
                                 , PPMPF_VXPP_S0F50 )
                #define PPMPF_VXPP_ARITY06() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty06.hh>
            #else
                #define PPMPF_VAR06() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR07() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F64 \
                                 , PPMPF_VXPP_S0F63 \
                                 , PPMPF_VXPP_S0F62 \
                                 , PPMPF_VXPP_S0F61 \
                                 , PPMPF_VXPP_S0F60 )
                #define PPMPF_VXPP_ARITY07() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty07.hh>
            #else
                #define PPMPF_VAR07() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(0) \
                               , PPMPF_VAR01() \
                               , PPMPF_VAR02() \
                               , PPMPF_VAR03() \
                               , PPMPF_VAR04() \
                               , PPMPF_VAR05() \
                               , PPMPF_VAR06() \
                               , PPMPF_VAR07() )
        #elif PPMPF_VXPP_XSIZE(0) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR01() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F04 \
                                 , PPMPF_VXPP_S0F03 \
                                 , PPMPF_VXPP_S0F02 \
                                 , PPMPF_VXPP_S0F01 \
                                 , PPMPF_VXPP_S0F00 )
                #define PPMPF_VXPP_ARITY01() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty01.hh>
            #else
                #define PPMPF_VAR01() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR02() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F14 \
                                 , PPMPF_VXPP_S0F13 \
                                 , PPMPF_VXPP_S0F12 \
                                 , PPMPF_VXPP_S0F11 \
                                 , PPMPF_VXPP_S0F10 )
                #define PPMPF_VXPP_ARITY02() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty02.hh>
            #else
                #define PPMPF_VAR02() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0)))
                #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR03() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F24 \
                                 , PPMPF_VXPP_S0F23 \
                                 , PPMPF_VXPP_S0F22 \
                                 , PPMPF_VXPP_S0F21 \
                                 , PPMPF_VXPP_S0F20 )
                 #define PPMPF_VXPP_ARITY03() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty03.hh>
            #else
                #define PPMPF_VAR03() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR04() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F34 \
                                 , PPMPF_VXPP_S0F33 \
                                 , PPMPF_VXPP_S0F32 \
                                 , PPMPF_VXPP_S0F31 \
                                 , PPMPF_VXPP_S0F30 )
                #define PPMPF_VXPP_ARITY04() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty04.hh>
            #else
                #define PPMPF_VAR04() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR05() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F44 \
                                 , PPMPF_VXPP_S0F43 \
                                 , PPMPF_VXPP_S0F42 \
                                 , PPMPF_VXPP_S0F41 \
                                 , PPMPF_VXPP_S0F40 )
               #define PPMPF_VXPP_ARITY05() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty05.hh>
            #else
                #define PPMPF_VAR05() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR06() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F54 \
                                 , PPMPF_VXPP_S0F53 \
                                 , PPMPF_VXPP_S0F52 \
                                 , PPMPF_VXPP_S0F51 \
                                 , PPMPF_VXPP_S0F50 )
                #define PPMPF_VXPP_ARITY06() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty06.hh>
            #else
                #define PPMPF_VAR06() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR07() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F64 \
                                 , PPMPF_VXPP_S0F63 \
                                 , PPMPF_VXPP_S0F62 \
                                 , PPMPF_VXPP_S0F61 \
                                 , PPMPF_VXPP_S0F60 )
                #define PPMPF_VXPP_ARITY07() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty07.hh>
            #else
                #define PPMPF_VAR07() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR08() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F74 \
                                 , PPMPF_VXPP_S0F73 \
                                 , PPMPF_VXPP_S0F72 \
                                 , PPMPF_VXPP_S0F71 \
                                 , PPMPF_VXPP_S0F70 )
                #define PPMPF_VXPP_ARITY08() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty08.hh>
            #else
                #define PPMPF_VAR08() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(0) \
                               , PPMPF_VAR01() \
                               , PPMPF_VAR02() \
                               , PPMPF_VAR03() \
                               , PPMPF_VAR04() \
                               , PPMPF_VAR05() \
                               , PPMPF_VAR06() \
                               , PPMPF_VAR07() \
                               , PPMPF_VAR08() )
        #elif PPMPF_VXPP_XSIZE(0) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR01() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F04 \
                                 , PPMPF_VXPP_S0F03 \
                                 , PPMPF_VXPP_S0F02 \
                                 , PPMPF_VXPP_S0F01 \
                                 , PPMPF_VXPP_S0F00 )
                #define PPMPF_VXPP_ARITY01() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty01.hh>
            #else
                #define PPMPF_VAR01() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR02() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F14 \
                                 , PPMPF_VXPP_S0F13 \
                                 , PPMPF_VXPP_S0F12 \
                                 , PPMPF_VXPP_S0F11 \
                                 , PPMPF_VXPP_S0F10 )
                #define PPMPF_VXPP_ARITY02() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty02.hh>
            #else
                #define PPMPF_VAR02() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(0,0)))
                #define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR03() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F24 \
                                 , PPMPF_VXPP_S0F23 \
                                 , PPMPF_VXPP_S0F22 \
                                 , PPMPF_VXPP_S0F21 \
                                 , PPMPF_VXPP_S0F20 )
                 #define PPMPF_VXPP_ARITY03() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty03.hh>
            #else
                #define PPMPF_VAR03() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR04() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F34 \
                                 , PPMPF_VXPP_S0F33 \
                                 , PPMPF_VXPP_S0F32 \
                                 , PPMPF_VXPP_S0F31 \
                                 , PPMPF_VXPP_S0F30 )
                #define PPMPF_VXPP_ARITY04() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty04.hh>
            #else
                #define PPMPF_VAR04() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR05() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F44 \
                                 , PPMPF_VXPP_S0F43 \
                                 , PPMPF_VXPP_S0F42 \
                                 , PPMPF_VXPP_S0F41 \
                                 , PPMPF_VXPP_S0F40 )
               #define PPMPF_VXPP_ARITY05() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty05.hh>
            #else
                #define PPMPF_VAR05() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR06() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F54 \
                                 , PPMPF_VXPP_S0F53 \
                                 , PPMPF_VXPP_S0F52 \
                                 , PPMPF_VXPP_S0F51 \
                                 , PPMPF_VXPP_S0F50 )
                #define PPMPF_VXPP_ARITY06() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty06.hh>
            #else
                #define PPMPF_VAR06() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR07() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F64 \
                                 , PPMPF_VXPP_S0F63 \
                                 , PPMPF_VXPP_S0F62 \
                                 , PPMPF_VXPP_S0F61 \
                                 , PPMPF_VXPP_S0F60 )
                #define PPMPF_VXPP_ARITY07() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty07.hh>
            #else
                #define PPMPF_VAR07() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR08() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F74 \
                                 , PPMPF_VXPP_S0F73 \
                                 , PPMPF_VXPP_S0F72 \
                                 , PPMPF_VXPP_S0F71 \
                                 , PPMPF_VXPP_S0F70 )
                #define PPMPF_VXPP_ARITY08() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty08.hh>
            #else
                #define PPMPF_VAR08() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(0,0))))
                #define PPMPF_VAR09() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S0F84 \
                                 , PPMPF_VXPP_S0F83 \
                                 , PPMPF_VXPP_S0F82 \
                                 , PPMPF_VXPP_S0F81 \
                                 , PPMPF_VXPP_S0F80 )
                #define PPMPF_VXPP_ARITY09() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty09.hh>
            #else
                #define PPMPF_VAR09() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(0,(()))))
                #define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC0() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(0) \
                               , PPMPF_VAR01() \
                               , PPMPF_VAR02() \
                               , PPMPF_VAR03() \
                               , PPMPF_VAR04() \
                               , PPMPF_VAR05() \
                               , PPMPF_VAR06() \
                               , PPMPF_VAR07() \
                               , PPMPF_VAR08() \
                               , PPMPF_VAR09() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(0)
    #undef _PPMPF_FARG0
    #undef _PPMPF_FARG00
    #undef _PPMPF_FARG01
    #undef _PPMPF_FARG02
    #undef _PPMPF_FARG03
    #undef _PPMPF_FARG04
    #undef _PPMPF_FARG05
    #undef _PPMPF_FARG06
    #undef _PPMPF_FARG07
    #undef _PPMPF_FARG08
    #undef PPMPF_VAR01
    #undef PPMPF_VAR02
    #undef PPMPF_VAR03
    #undef PPMPF_VAR04
    #undef PPMPF_VAR05
    #undef PPMPF_VAR06
    #undef PPMPF_VAR07
    #undef PPMPF_VAR08
    #undef PPMPF_VAR09
    #undef PPMPF_VXPP_ARITY01
    #undef PPMPF_VXPP_ARITY02
    #undef PPMPF_VXPP_ARITY03
    #undef PPMPF_VXPP_ARITY04
    #undef PPMPF_VXPP_ARITY05
    #undef PPMPF_VXPP_ARITY06
    #undef PPMPF_VXPP_ARITY07
    #undef PPMPF_VXPP_ARITY08
    #undef PPMPF_VXPP_ARITY09
#endif
    #undef PPMPF_VXPP_SET0
    #undef PPMPF_VXPP_ENDL0
    #undef PPMPF_VXPP_ENDR0
    #undef PPMPF_VXPP_SLOT0
#undef _CLAUSE_PPMPF_VXPP_SET0_
#undef PPMPF_VXPP
#endif /* _CLAUSE_PPMPF_VXPP_SET0_ */
