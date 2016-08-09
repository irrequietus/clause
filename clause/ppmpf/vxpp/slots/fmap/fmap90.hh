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

#ifdef CLAUSE_PPMPF_VXPP_SET9_
    #error Already iterating macro set with identifier 9.
#else
#define CLAUSE_PPMPF_VXPP_SET9_
#undef PPMPF_VXPP_ENDL9
#undef PPMPF_VXPP_ENDR9
#undef PPMPF_VXPP
#define PPMPF_VXPP() 9
#define PPMPF_VXPP_ENDR9() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(9)))))
#define PPMPF_VXPP_ENDL9() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(9))))
#include PPMPF_VXPP_INIT(9)
#undef _PPMPF_FARG9
#undef _PPMPF_FARG90
#undef _PPMPF_FARG91
#undef _PPMPF_FARG92
#undef _PPMPF_FARG93
#undef _PPMPF_FARG94
#undef _PPMPF_FARG95
#undef _PPMPF_FARG96
#undef _PPMPF_FARG97
#undef _PPMPF_FARG98
#undef PPMPF_VAR91
#undef PPMPF_VAR92
#undef PPMPF_VAR93
#undef PPMPF_VAR94
#undef PPMPF_VAR95
#undef PPMPF_VAR96
#undef PPMPF_VAR97
#undef PPMPF_VAR98
#undef PPMPF_VAR99
#undef PPMPF_VXPP_ARITY91
#undef PPMPF_VXPP_ARITY92
#undef PPMPF_VXPP_ARITY93
#undef PPMPF_VXPP_ARITY94
#undef PPMPF_VXPP_ARITY95
#undef PPMPF_VXPP_ARITY96
#undef PPMPF_VXPP_ARITY97
#undef PPMPF_VXPP_ARITY98
#undef PPMPF_VXPP_ARITY99
#undef PPMPF_VXPP_FUNC9
#undef PPMPF_VXPP_SLOT9
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET9(0)))
        #define PPMPF_N9() \
                PPMPF_VXPP_DN_ITEM9()
        #define PPMPF_VXPP_SLOT9() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET9(0))
        #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(9)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET9(0)))) == 1
        #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC9() \
                PPMPF_JUST(PPMPF_VXPP_MCF(9)(PPMPF_VXPP_DN_ITEM(9)))
    #else
        #define _PPMPF_FARG90()  _PPMPF_FARG9(0,9)
        #define _PPMPF_FARG91()  _PPMPF_FARG9(1,9)
        #define _PPMPF_FARG92()  _PPMPF_FARG9(2,9)
        #define _PPMPF_FARG93()  _PPMPF_FARG9(3,9)
        #define _PPMPF_FARG94()  _PPMPF_FARG9(4,9)
        #define _PPMPF_FARG95()  _PPMPF_FARG9(5,9)
        #define _PPMPF_FARG96()  _PPMPF_FARG9(6,9)
        #define _PPMPF_FARG97()  _PPMPF_FARG9(7,9)
        #define _PPMPF_FARG98()  _PPMPF_FARG9(8,9)
        #define _PPMPF_FARG9(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(9) == 0
            #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(9)())
        #elif PPMPF_VXPP_XSIZE(9) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR91() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F04 \
                                 , PPMPF_VXPP_S9F03 \
                                 , PPMPF_VXPP_S9F02 \
                                 , PPMPF_VXPP_S9F01 \
                                 , PPMPF_VXPP_S9F00 )
                #define PPMPF_VXPP_ARITY91() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty91.hh>
            #else
                #define PPMPF_VAR91() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(9) \
                               , PPMPF_VAR91() )
            
            #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(9) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR91() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F04 \
                                 , PPMPF_VXPP_S9F03 \
                                 , PPMPF_VXPP_S9F02 \
                                 , PPMPF_VXPP_S9F01 \
                                 , PPMPF_VXPP_S9F00 )
                #define PPMPF_VXPP_ARITY91() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty91.hh>
            #else
                #define PPMPF_VAR91() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR92() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F14 \
                                 , PPMPF_VXPP_S9F13 \
                                 , PPMPF_VXPP_S9F12 \
                                 , PPMPF_VXPP_S9F11 \
                                 , PPMPF_VXPP_S9F10 )
                #define PPMPF_VXPP_ARITY92() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty92.hh>
            #else
                #define PPMPF_VAR92() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0)))
                #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(9) \
                               , PPMPF_VAR91() \
                               , PPMPF_VAR92() )
            #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(9) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR91() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F04 \
                                 , PPMPF_VXPP_S9F03 \
                                 , PPMPF_VXPP_S9F02 \
                                 , PPMPF_VXPP_S9F01 \
                                 , PPMPF_VXPP_S9F00 )
                #define PPMPF_VXPP_ARITY91() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty91.hh>
            #else
                #define PPMPF_VAR91() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR92() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F14 \
                                 , PPMPF_VXPP_S9F13 \
                                 , PPMPF_VXPP_S9F12 \
                                 , PPMPF_VXPP_S9F11 \
                                 , PPMPF_VXPP_S9F10 )
                #define PPMPF_VXPP_ARITY92() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty92.hh>
            #else
                #define PPMPF_VAR92() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0)))
                #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR93() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F24 \
                                 , PPMPF_VXPP_S9F23 \
                                 , PPMPF_VXPP_S9F22 \
                                 , PPMPF_VXPP_S9F21 \
                                 , PPMPF_VXPP_S9F20 )
                 #define PPMPF_VXPP_ARITY93() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty93.hh>
            #else
                #define PPMPF_VAR93() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(9) \
                               , PPMPF_VAR91() \
                               , PPMPF_VAR92() \
                               , PPMPF_VAR93() )
        #elif PPMPF_VXPP_XSIZE(9) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR91() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F04 \
                                 , PPMPF_VXPP_S9F03 \
                                 , PPMPF_VXPP_S9F02 \
                                 , PPMPF_VXPP_S9F01 \
                                 , PPMPF_VXPP_S9F00 )
                #define PPMPF_VXPP_ARITY91() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty91.hh>
            #else
                #define PPMPF_VAR91() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR92() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F14 \
                                 , PPMPF_VXPP_S9F13 \
                                 , PPMPF_VXPP_S9F12 \
                                 , PPMPF_VXPP_S9F11 \
                                 , PPMPF_VXPP_S9F10 )
                #define PPMPF_VXPP_ARITY92() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty92.hh>
            #else
                #define PPMPF_VAR92() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0)))
                #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR93() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F24 \
                                 , PPMPF_VXPP_S9F23 \
                                 , PPMPF_VXPP_S9F22 \
                                 , PPMPF_VXPP_S9F21 \
                                 , PPMPF_VXPP_S9F20 )
                 #define PPMPF_VXPP_ARITY93() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty93.hh>
            #else
                #define PPMPF_VAR93() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR94() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F34 \
                                 , PPMPF_VXPP_S9F33 \
                                 , PPMPF_VXPP_S9F32 \
                                 , PPMPF_VXPP_S9F31 \
                                 , PPMPF_VXPP_S9F30 )
                #define PPMPF_VXPP_ARITY94() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty94.hh>
            #else
                #define PPMPF_VAR94() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(9) \
                               , PPMPF_VAR91() \
                               , PPMPF_VAR92() \
                               , PPMPF_VAR93() \
                               , PPMPF_VAR94() )
        #elif PPMPF_VXPP_XSIZE(9) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR91() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F04 \
                                 , PPMPF_VXPP_S9F03 \
                                 , PPMPF_VXPP_S9F02 \
                                 , PPMPF_VXPP_S9F01 \
                                 , PPMPF_VXPP_S9F00 )
                #define PPMPF_VXPP_ARITY91() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty91.hh>
            #else
                #define PPMPF_VAR91() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR92() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F14 \
                                 , PPMPF_VXPP_S9F13 \
                                 , PPMPF_VXPP_S9F12 \
                                 , PPMPF_VXPP_S9F11 \
                                 , PPMPF_VXPP_S9F10 )
                #define PPMPF_VXPP_ARITY92() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty92.hh>
            #else
                #define PPMPF_VAR92() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0)))
                #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR93() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F24 \
                                 , PPMPF_VXPP_S9F23 \
                                 , PPMPF_VXPP_S9F22 \
                                 , PPMPF_VXPP_S9F21 \
                                 , PPMPF_VXPP_S9F20 )
                 #define PPMPF_VXPP_ARITY93() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty93.hh>
            #else
                #define PPMPF_VAR93() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR94() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F34 \
                                 , PPMPF_VXPP_S9F33 \
                                 , PPMPF_VXPP_S9F32 \
                                 , PPMPF_VXPP_S9F31 \
                                 , PPMPF_VXPP_S9F30 )
                #define PPMPF_VXPP_ARITY94() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty94.hh>
            #else
                #define PPMPF_VAR94() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR95() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F44 \
                                 , PPMPF_VXPP_S9F43 \
                                 , PPMPF_VXPP_S9F42 \
                                 , PPMPF_VXPP_S9F41 \
                                 , PPMPF_VXPP_S9F40 )
               #define PPMPF_VXPP_ARITY95() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty95.hh>
            #else
                #define PPMPF_VAR95() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(9) \
                               , PPMPF_VAR91() \
                               , PPMPF_VAR92() \
                               , PPMPF_VAR93() \
                               , PPMPF_VAR94() \
                               , PPMPF_VAR95() )
        #elif PPMPF_VXPP_XSIZE(9) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR91() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F04 \
                                 , PPMPF_VXPP_S9F03 \
                                 , PPMPF_VXPP_S9F02 \
                                 , PPMPF_VXPP_S9F01 \
                                 , PPMPF_VXPP_S9F00 )
                #define PPMPF_VXPP_ARITY91() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty91.hh>
            #else
                #define PPMPF_VAR91() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR92() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F14 \
                                 , PPMPF_VXPP_S9F13 \
                                 , PPMPF_VXPP_S9F12 \
                                 , PPMPF_VXPP_S9F11 \
                                 , PPMPF_VXPP_S9F10 )
                #define PPMPF_VXPP_ARITY92() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty92.hh>
            #else
                #define PPMPF_VAR92() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0)))
                #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR93() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F24 \
                                 , PPMPF_VXPP_S9F23 \
                                 , PPMPF_VXPP_S9F22 \
                                 , PPMPF_VXPP_S9F21 \
                                 , PPMPF_VXPP_S9F20 )
                 #define PPMPF_VXPP_ARITY93() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty93.hh>
            #else
                #define PPMPF_VAR93() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR94() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F34 \
                                 , PPMPF_VXPP_S9F33 \
                                 , PPMPF_VXPP_S9F32 \
                                 , PPMPF_VXPP_S9F31 \
                                 , PPMPF_VXPP_S9F30 )
                #define PPMPF_VXPP_ARITY94() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty94.hh>
            #else
                #define PPMPF_VAR94() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR95() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F44 \
                                 , PPMPF_VXPP_S9F43 \
                                 , PPMPF_VXPP_S9F42 \
                                 , PPMPF_VXPP_S9F41 \
                                 , PPMPF_VXPP_S9F40 )
               #define PPMPF_VXPP_ARITY95() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty95.hh>
            #else
                #define PPMPF_VAR95() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR96() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F54 \
                                 , PPMPF_VXPP_S9F53 \
                                 , PPMPF_VXPP_S9F52 \
                                 , PPMPF_VXPP_S9F51 \
                                 , PPMPF_VXPP_S9F50 )
                #define PPMPF_VXPP_ARITY96() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty96.hh>
            #else
                #define PPMPF_VAR96() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(9) \
                               , PPMPF_VAR91() \
                               , PPMPF_VAR92() \
                               , PPMPF_VAR93() \
                               , PPMPF_VAR94() \
                               , PPMPF_VAR95() \
                               , PPMPF_VAR96() )
        #elif PPMPF_VXPP_XSIZE(9) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR91() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F04 \
                                 , PPMPF_VXPP_S9F03 \
                                 , PPMPF_VXPP_S9F02 \
                                 , PPMPF_VXPP_S9F01 \
                                 , PPMPF_VXPP_S9F00 )
                #define PPMPF_VXPP_ARITY91() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty91.hh>
            #else
                #define PPMPF_VAR91() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR92() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F14 \
                                 , PPMPF_VXPP_S9F13 \
                                 , PPMPF_VXPP_S9F12 \
                                 , PPMPF_VXPP_S9F11 \
                                 , PPMPF_VXPP_S9F10 )
                #define PPMPF_VXPP_ARITY92() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty92.hh>
            #else
                #define PPMPF_VAR92() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0)))
                #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR93() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F24 \
                                 , PPMPF_VXPP_S9F23 \
                                 , PPMPF_VXPP_S9F22 \
                                 , PPMPF_VXPP_S9F21 \
                                 , PPMPF_VXPP_S9F20 )
                 #define PPMPF_VXPP_ARITY93() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty93.hh>
            #else
                #define PPMPF_VAR93() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR94() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F34 \
                                 , PPMPF_VXPP_S9F33 \
                                 , PPMPF_VXPP_S9F32 \
                                 , PPMPF_VXPP_S9F31 \
                                 , PPMPF_VXPP_S9F30 )
                #define PPMPF_VXPP_ARITY94() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty94.hh>
            #else
                #define PPMPF_VAR94() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR95() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F44 \
                                 , PPMPF_VXPP_S9F43 \
                                 , PPMPF_VXPP_S9F42 \
                                 , PPMPF_VXPP_S9F41 \
                                 , PPMPF_VXPP_S9F40 )
               #define PPMPF_VXPP_ARITY95() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty95.hh>
            #else
                #define PPMPF_VAR95() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR96() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F54 \
                                 , PPMPF_VXPP_S9F53 \
                                 , PPMPF_VXPP_S9F52 \
                                 , PPMPF_VXPP_S9F51 \
                                 , PPMPF_VXPP_S9F50 )
                #define PPMPF_VXPP_ARITY96() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty96.hh>
            #else
                #define PPMPF_VAR96() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR97() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F64 \
                                 , PPMPF_VXPP_S9F63 \
                                 , PPMPF_VXPP_S9F62 \
                                 , PPMPF_VXPP_S9F61 \
                                 , PPMPF_VXPP_S9F60 )
                #define PPMPF_VXPP_ARITY97() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty97.hh>
            #else
                #define PPMPF_VAR97() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(9) \
                               , PPMPF_VAR91() \
                               , PPMPF_VAR92() \
                               , PPMPF_VAR93() \
                               , PPMPF_VAR94() \
                               , PPMPF_VAR95() \
                               , PPMPF_VAR96() \
                               , PPMPF_VAR97() )
        #elif PPMPF_VXPP_XSIZE(9) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR91() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F04 \
                                 , PPMPF_VXPP_S9F03 \
                                 , PPMPF_VXPP_S9F02 \
                                 , PPMPF_VXPP_S9F01 \
                                 , PPMPF_VXPP_S9F00 )
                #define PPMPF_VXPP_ARITY91() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty91.hh>
            #else
                #define PPMPF_VAR91() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR92() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F14 \
                                 , PPMPF_VXPP_S9F13 \
                                 , PPMPF_VXPP_S9F12 \
                                 , PPMPF_VXPP_S9F11 \
                                 , PPMPF_VXPP_S9F10 )
                #define PPMPF_VXPP_ARITY92() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty92.hh>
            #else
                #define PPMPF_VAR92() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0)))
                #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR93() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F24 \
                                 , PPMPF_VXPP_S9F23 \
                                 , PPMPF_VXPP_S9F22 \
                                 , PPMPF_VXPP_S9F21 \
                                 , PPMPF_VXPP_S9F20 )
                 #define PPMPF_VXPP_ARITY93() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty93.hh>
            #else
                #define PPMPF_VAR93() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR94() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F34 \
                                 , PPMPF_VXPP_S9F33 \
                                 , PPMPF_VXPP_S9F32 \
                                 , PPMPF_VXPP_S9F31 \
                                 , PPMPF_VXPP_S9F30 )
                #define PPMPF_VXPP_ARITY94() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty94.hh>
            #else
                #define PPMPF_VAR94() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR95() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F44 \
                                 , PPMPF_VXPP_S9F43 \
                                 , PPMPF_VXPP_S9F42 \
                                 , PPMPF_VXPP_S9F41 \
                                 , PPMPF_VXPP_S9F40 )
               #define PPMPF_VXPP_ARITY95() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty95.hh>
            #else
                #define PPMPF_VAR95() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR96() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F54 \
                                 , PPMPF_VXPP_S9F53 \
                                 , PPMPF_VXPP_S9F52 \
                                 , PPMPF_VXPP_S9F51 \
                                 , PPMPF_VXPP_S9F50 )
                #define PPMPF_VXPP_ARITY96() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty96.hh>
            #else
                #define PPMPF_VAR96() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR97() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F64 \
                                 , PPMPF_VXPP_S9F63 \
                                 , PPMPF_VXPP_S9F62 \
                                 , PPMPF_VXPP_S9F61 \
                                 , PPMPF_VXPP_S9F60 )
                #define PPMPF_VXPP_ARITY97() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty97.hh>
            #else
                #define PPMPF_VAR97() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR98() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F74 \
                                 , PPMPF_VXPP_S9F73 \
                                 , PPMPF_VXPP_S9F72 \
                                 , PPMPF_VXPP_S9F71 \
                                 , PPMPF_VXPP_S9F70 )
                #define PPMPF_VXPP_ARITY98() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty98.hh>
            #else
                #define PPMPF_VAR98() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(9) \
                               , PPMPF_VAR91() \
                               , PPMPF_VAR92() \
                               , PPMPF_VAR93() \
                               , PPMPF_VAR94() \
                               , PPMPF_VAR95() \
                               , PPMPF_VAR96() \
                               , PPMPF_VAR97() \
                               , PPMPF_VAR98() )
        #elif PPMPF_VXPP_XSIZE(9) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR91() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F04 \
                                 , PPMPF_VXPP_S9F03 \
                                 , PPMPF_VXPP_S9F02 \
                                 , PPMPF_VXPP_S9F01 \
                                 , PPMPF_VXPP_S9F00 )
                #define PPMPF_VXPP_ARITY91() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty91.hh>
            #else
                #define PPMPF_VAR91() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR92() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F14 \
                                 , PPMPF_VXPP_S9F13 \
                                 , PPMPF_VXPP_S9F12 \
                                 , PPMPF_VXPP_S9F11 \
                                 , PPMPF_VXPP_S9F10 )
                #define PPMPF_VXPP_ARITY92() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty92.hh>
            #else
                #define PPMPF_VAR92() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(9,0)))
                #define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR93() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F24 \
                                 , PPMPF_VXPP_S9F23 \
                                 , PPMPF_VXPP_S9F22 \
                                 , PPMPF_VXPP_S9F21 \
                                 , PPMPF_VXPP_S9F20 )
                 #define PPMPF_VXPP_ARITY93() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty93.hh>
            #else
                #define PPMPF_VAR93() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR94() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F34 \
                                 , PPMPF_VXPP_S9F33 \
                                 , PPMPF_VXPP_S9F32 \
                                 , PPMPF_VXPP_S9F31 \
                                 , PPMPF_VXPP_S9F30 )
                #define PPMPF_VXPP_ARITY94() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty94.hh>
            #else
                #define PPMPF_VAR94() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR95() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F44 \
                                 , PPMPF_VXPP_S9F43 \
                                 , PPMPF_VXPP_S9F42 \
                                 , PPMPF_VXPP_S9F41 \
                                 , PPMPF_VXPP_S9F40 )
               #define PPMPF_VXPP_ARITY95() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty95.hh>
            #else
                #define PPMPF_VAR95() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR96() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F54 \
                                 , PPMPF_VXPP_S9F53 \
                                 , PPMPF_VXPP_S9F52 \
                                 , PPMPF_VXPP_S9F51 \
                                 , PPMPF_VXPP_S9F50 )
                #define PPMPF_VXPP_ARITY96() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty96.hh>
            #else
                #define PPMPF_VAR96() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR97() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F64 \
                                 , PPMPF_VXPP_S9F63 \
                                 , PPMPF_VXPP_S9F62 \
                                 , PPMPF_VXPP_S9F61 \
                                 , PPMPF_VXPP_S9F60 )
                #define PPMPF_VXPP_ARITY97() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty97.hh>
            #else
                #define PPMPF_VAR97() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR98() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F74 \
                                 , PPMPF_VXPP_S9F73 \
                                 , PPMPF_VXPP_S9F72 \
                                 , PPMPF_VXPP_S9F71 \
                                 , PPMPF_VXPP_S9F70 )
                #define PPMPF_VXPP_ARITY98() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty98.hh>
            #else
                #define PPMPF_VAR98() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(9,0))))
                #define PPMPF_VAR99() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S9F84 \
                                 , PPMPF_VXPP_S9F83 \
                                 , PPMPF_VXPP_S9F82 \
                                 , PPMPF_VXPP_S9F81 \
                                 , PPMPF_VXPP_S9F80 )
                #define PPMPF_VXPP_ARITY99() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty99.hh>
            #else
                #define PPMPF_VAR99() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(9,(()))))
                #define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC9() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(9) \
                               , PPMPF_VAR91() \
                               , PPMPF_VAR92() \
                               , PPMPF_VAR93() \
                               , PPMPF_VAR94() \
                               , PPMPF_VAR95() \
                               , PPMPF_VAR96() \
                               , PPMPF_VAR97() \
                               , PPMPF_VAR98() \
                               , PPMPF_VAR99() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(9)
    #undef _PPMPF_FARG9
    #undef _PPMPF_FARG90
    #undef _PPMPF_FARG91
    #undef _PPMPF_FARG92
    #undef _PPMPF_FARG93
    #undef _PPMPF_FARG94
    #undef _PPMPF_FARG95
    #undef _PPMPF_FARG96
    #undef _PPMPF_FARG97
    #undef _PPMPF_FARG98
    #undef PPMPF_VAR91
    #undef PPMPF_VAR92
    #undef PPMPF_VAR93
    #undef PPMPF_VAR94
    #undef PPMPF_VAR95
    #undef PPMPF_VAR96
    #undef PPMPF_VAR97
    #undef PPMPF_VAR98
    #undef PPMPF_VAR99
    #undef PPMPF_VXPP_ARITY91
    #undef PPMPF_VXPP_ARITY92
    #undef PPMPF_VXPP_ARITY93
    #undef PPMPF_VXPP_ARITY94
    #undef PPMPF_VXPP_ARITY95
    #undef PPMPF_VXPP_ARITY96
    #undef PPMPF_VXPP_ARITY97
    #undef PPMPF_VXPP_ARITY98
    #undef PPMPF_VXPP_ARITY99
#endif
    #undef PPMPF_VXPP_SET9
    #undef PPMPF_VXPP_ENDL9
    #undef PPMPF_VXPP_ENDR9
    #undef PPMPF_VXPP_SLOT9
#undef CLAUSE_PPMPF_VXPP_SET9_
#undef PPMPF_VXPP
#endif /* CLAUSE_PPMPF_VXPP_SET9_ */
