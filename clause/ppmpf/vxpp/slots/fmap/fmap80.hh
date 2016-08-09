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

#ifdef CLAUSE_PPMPF_VXPP_SET8_
    #error Already iterating macro set with identifier 8.
#else
#define CLAUSE_PPMPF_VXPP_SET8_
#undef PPMPF_VXPP_ENDL8
#undef PPMPF_VXPP_ENDR8
#undef PPMPF_VXPP
#define PPMPF_VXPP() 8
#define PPMPF_VXPP_ENDR8() \
        PPMPF_DREF( \
            PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_POP(PPMPF_VXPP_SET(8)))))
#define PPMPF_VXPP_ENDL8() \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_TUP_POP(PPMPF_VXPP_SET(8))))
#include PPMPF_VXPP_INIT(8)
#undef _PPMPF_FARG8
#undef _PPMPF_FARG80
#undef _PPMPF_FARG81
#undef _PPMPF_FARG82
#undef _PPMPF_FARG83
#undef _PPMPF_FARG84
#undef _PPMPF_FARG85
#undef _PPMPF_FARG86
#undef _PPMPF_FARG87
#undef _PPMPF_FARG88
#undef PPMPF_VAR81
#undef PPMPF_VAR82
#undef PPMPF_VAR83
#undef PPMPF_VAR84
#undef PPMPF_VAR85
#undef PPMPF_VAR86
#undef PPMPF_VAR87
#undef PPMPF_VAR88
#undef PPMPF_VAR89
#undef PPMPF_VXPP_ARITY81
#undef PPMPF_VXPP_ARITY82
#undef PPMPF_VXPP_ARITY83
#undef PPMPF_VXPP_ARITY84
#undef PPMPF_VXPP_ARITY85
#undef PPMPF_VXPP_ARITY86
#undef PPMPF_VXPP_ARITY87
#undef PPMPF_VXPP_ARITY88
#undef PPMPF_VXPP_ARITY89
#undef PPMPF_VXPP_FUNC8
#undef PPMPF_VXPP_SLOT8
#if PPMPF_VXPP_XCHK(PPMPF_TUP_GET(PPMPF_VXPP_SET8(0)))
        #define PPMPF_N8() \
                PPMPF_VXPP_DN_ITEM8()
        #define PPMPF_VXPP_SLOT8() \
                PPMPF_TUP_GET(PPMPF_VXPP_SET8(0))
        #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
        #include PPMPF_VXPP_SLOT(8)
#else
    #if PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(PPMPF_FLDX26(0,PPMPF_VXPP_SET8(0)))) == 1
        #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
        #define PPMPF_VXPP_FUNC8() \
                PPMPF_JUST(PPMPF_VXPP_MCF(8)(PPMPF_VXPP_DN_ITEM(8)))
    #else
        #define _PPMPF_FARG80()  _PPMPF_FARG8(0,8)
        #define _PPMPF_FARG81()  _PPMPF_FARG8(1,8)
        #define _PPMPF_FARG82()  _PPMPF_FARG8(2,8)
        #define _PPMPF_FARG83()  _PPMPF_FARG8(3,8)
        #define _PPMPF_FARG84()  _PPMPF_FARG8(4,8)
        #define _PPMPF_FARG85()  _PPMPF_FARG8(5,8)
        #define _PPMPF_FARG86()  _PPMPF_FARG8(6,8)
        #define _PPMPF_FARG87()  _PPMPF_FARG8(7,8)
        #define _PPMPF_FARG88()  _PPMPF_FARG8(8,8)
        #define _PPMPF_FARG8(n,k) \
                PPMPF_DREF(PPMPF_VXPP_T09( n \
              , PPMPF_SEQ_POP( \
                        PPMPF_TUP_GET( \
                         PPMPF_CAT(PPMPF_VXPP_SET,k)(PPMPF_VXPP_DN_ITEM(k))))))
        #if PPMPF_VXPP_XSIZE(8) == 0
            #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_JUST(PPMPF_VXPP_MCF(8)())
        #elif PPMPF_VXPP_XSIZE(8) == 1
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR81() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F04 \
                                 , PPMPF_VXPP_S8F03 \
                                 , PPMPF_VXPP_S8F02 \
                                 , PPMPF_VXPP_S8F01 \
                                 , PPMPF_VXPP_S8F00 )
                #define PPMPF_VXPP_ARITY81() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty81.hh>
            #else
                #define PPMPF_VAR81() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(8) \
                               , PPMPF_VAR81() )
            
            #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(8) == 2
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR81() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F04 \
                                 , PPMPF_VXPP_S8F03 \
                                 , PPMPF_VXPP_S8F02 \
                                 , PPMPF_VXPP_S8F01 \
                                 , PPMPF_VXPP_S8F00 )
                #define PPMPF_VXPP_ARITY81() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty81.hh>
            #else
                #define PPMPF_VAR81() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR82() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F14 \
                                 , PPMPF_VXPP_S8F13 \
                                 , PPMPF_VXPP_S8F12 \
                                 , PPMPF_VXPP_S8F11 \
                                 , PPMPF_VXPP_S8F10 )
                #define PPMPF_VXPP_ARITY82() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty82.hh>
            #else
                #define PPMPF_VAR82() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0)))
                #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(8) \
                               , PPMPF_VAR81() \
                               , PPMPF_VAR82() )
            #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
        #elif PPMPF_VXPP_XSIZE(8) == 3
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR81() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F04 \
                                 , PPMPF_VXPP_S8F03 \
                                 , PPMPF_VXPP_S8F02 \
                                 , PPMPF_VXPP_S8F01 \
                                 , PPMPF_VXPP_S8F00 )
                #define PPMPF_VXPP_ARITY81() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty81.hh>
            #else
                #define PPMPF_VAR81() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR82() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F14 \
                                 , PPMPF_VXPP_S8F13 \
                                 , PPMPF_VXPP_S8F12 \
                                 , PPMPF_VXPP_S8F11 \
                                 , PPMPF_VXPP_S8F10 )
                #define PPMPF_VXPP_ARITY82() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty82.hh>
            #else
                #define PPMPF_VAR82() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0)))
                #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR83() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F24 \
                                 , PPMPF_VXPP_S8F23 \
                                 , PPMPF_VXPP_S8F22 \
                                 , PPMPF_VXPP_S8F21 \
                                 , PPMPF_VXPP_S8F20 )
                 #define PPMPF_VXPP_ARITY83() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty83.hh>
            #else
                #define PPMPF_VAR83() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(8) \
                               , PPMPF_VAR81() \
                               , PPMPF_VAR82() \
                               , PPMPF_VAR83() )
        #elif PPMPF_VXPP_XSIZE(8) == 4
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR81() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F04 \
                                 , PPMPF_VXPP_S8F03 \
                                 , PPMPF_VXPP_S8F02 \
                                 , PPMPF_VXPP_S8F01 \
                                 , PPMPF_VXPP_S8F00 )
                #define PPMPF_VXPP_ARITY81() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty81.hh>
            #else
                #define PPMPF_VAR81() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR82() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F14 \
                                 , PPMPF_VXPP_S8F13 \
                                 , PPMPF_VXPP_S8F12 \
                                 , PPMPF_VXPP_S8F11 \
                                 , PPMPF_VXPP_S8F10 )
                #define PPMPF_VXPP_ARITY82() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty82.hh>
            #else
                #define PPMPF_VAR82() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0)))
                #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR83() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F24 \
                                 , PPMPF_VXPP_S8F23 \
                                 , PPMPF_VXPP_S8F22 \
                                 , PPMPF_VXPP_S8F21 \
                                 , PPMPF_VXPP_S8F20 )
                 #define PPMPF_VXPP_ARITY83() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty83.hh>
            #else
                #define PPMPF_VAR83() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR84() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F34 \
                                 , PPMPF_VXPP_S8F33 \
                                 , PPMPF_VXPP_S8F32 \
                                 , PPMPF_VXPP_S8F31 \
                                 , PPMPF_VXPP_S8F30 )
                #define PPMPF_VXPP_ARITY84() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty84.hh>
            #else
                #define PPMPF_VAR84() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(8) \
                               , PPMPF_VAR81() \
                               , PPMPF_VAR82() \
                               , PPMPF_VAR83() \
                               , PPMPF_VAR84() )
        #elif PPMPF_VXPP_XSIZE(8) == 5
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR81() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F04 \
                                 , PPMPF_VXPP_S8F03 \
                                 , PPMPF_VXPP_S8F02 \
                                 , PPMPF_VXPP_S8F01 \
                                 , PPMPF_VXPP_S8F00 )
                #define PPMPF_VXPP_ARITY81() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty81.hh>
            #else
                #define PPMPF_VAR81() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR82() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F14 \
                                 , PPMPF_VXPP_S8F13 \
                                 , PPMPF_VXPP_S8F12 \
                                 , PPMPF_VXPP_S8F11 \
                                 , PPMPF_VXPP_S8F10 )
                #define PPMPF_VXPP_ARITY82() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty82.hh>
            #else
                #define PPMPF_VAR82() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0)))
                #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR83() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F24 \
                                 , PPMPF_VXPP_S8F23 \
                                 , PPMPF_VXPP_S8F22 \
                                 , PPMPF_VXPP_S8F21 \
                                 , PPMPF_VXPP_S8F20 )
                 #define PPMPF_VXPP_ARITY83() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty83.hh>
            #else
                #define PPMPF_VAR83() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR84() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F34 \
                                 , PPMPF_VXPP_S8F33 \
                                 , PPMPF_VXPP_S8F32 \
                                 , PPMPF_VXPP_S8F31 \
                                 , PPMPF_VXPP_S8F30 )
                #define PPMPF_VXPP_ARITY84() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty84.hh>
            #else
                #define PPMPF_VAR84() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR85() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F44 \
                                 , PPMPF_VXPP_S8F43 \
                                 , PPMPF_VXPP_S8F42 \
                                 , PPMPF_VXPP_S8F41 \
                                 , PPMPF_VXPP_S8F40 )
               #define PPMPF_VXPP_ARITY85() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty85.hh>
            #else
                #define PPMPF_VAR85() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(8) \
                               , PPMPF_VAR81() \
                               , PPMPF_VAR82() \
                               , PPMPF_VAR83() \
                               , PPMPF_VAR84() \
                               , PPMPF_VAR85() )
        #elif PPMPF_VXPP_XSIZE(8) == 6
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR81() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F04 \
                                 , PPMPF_VXPP_S8F03 \
                                 , PPMPF_VXPP_S8F02 \
                                 , PPMPF_VXPP_S8F01 \
                                 , PPMPF_VXPP_S8F00 )
                #define PPMPF_VXPP_ARITY81() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty81.hh>
            #else
                #define PPMPF_VAR81() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR82() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F14 \
                                 , PPMPF_VXPP_S8F13 \
                                 , PPMPF_VXPP_S8F12 \
                                 , PPMPF_VXPP_S8F11 \
                                 , PPMPF_VXPP_S8F10 )
                #define PPMPF_VXPP_ARITY82() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty82.hh>
            #else
                #define PPMPF_VAR82() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0)))
                #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR83() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F24 \
                                 , PPMPF_VXPP_S8F23 \
                                 , PPMPF_VXPP_S8F22 \
                                 , PPMPF_VXPP_S8F21 \
                                 , PPMPF_VXPP_S8F20 )
                 #define PPMPF_VXPP_ARITY83() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty83.hh>
            #else
                #define PPMPF_VAR83() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR84() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F34 \
                                 , PPMPF_VXPP_S8F33 \
                                 , PPMPF_VXPP_S8F32 \
                                 , PPMPF_VXPP_S8F31 \
                                 , PPMPF_VXPP_S8F30 )
                #define PPMPF_VXPP_ARITY84() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty84.hh>
            #else
                #define PPMPF_VAR84() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR85() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F44 \
                                 , PPMPF_VXPP_S8F43 \
                                 , PPMPF_VXPP_S8F42 \
                                 , PPMPF_VXPP_S8F41 \
                                 , PPMPF_VXPP_S8F40 )
               #define PPMPF_VXPP_ARITY85() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty85.hh>
            #else
                #define PPMPF_VAR85() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR86() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F54 \
                                 , PPMPF_VXPP_S8F53 \
                                 , PPMPF_VXPP_S8F52 \
                                 , PPMPF_VXPP_S8F51 \
                                 , PPMPF_VXPP_S8F50 )
                #define PPMPF_VXPP_ARITY86() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty86.hh>
            #else
                #define PPMPF_VAR86() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(8) \
                               , PPMPF_VAR81() \
                               , PPMPF_VAR82() \
                               , PPMPF_VAR83() \
                               , PPMPF_VAR84() \
                               , PPMPF_VAR85() \
                               , PPMPF_VAR86() )
        #elif PPMPF_VXPP_XSIZE(8) == 7
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR81() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F04 \
                                 , PPMPF_VXPP_S8F03 \
                                 , PPMPF_VXPP_S8F02 \
                                 , PPMPF_VXPP_S8F01 \
                                 , PPMPF_VXPP_S8F00 )
                #define PPMPF_VXPP_ARITY81() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty81.hh>
            #else
                #define PPMPF_VAR81() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR82() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F14 \
                                 , PPMPF_VXPP_S8F13 \
                                 , PPMPF_VXPP_S8F12 \
                                 , PPMPF_VXPP_S8F11 \
                                 , PPMPF_VXPP_S8F10 )
                #define PPMPF_VXPP_ARITY82() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty82.hh>
            #else
                #define PPMPF_VAR82() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0)))
                #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR83() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F24 \
                                 , PPMPF_VXPP_S8F23 \
                                 , PPMPF_VXPP_S8F22 \
                                 , PPMPF_VXPP_S8F21 \
                                 , PPMPF_VXPP_S8F20 )
                 #define PPMPF_VXPP_ARITY83() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty83.hh>
            #else
                #define PPMPF_VAR83() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR84() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F34 \
                                 , PPMPF_VXPP_S8F33 \
                                 , PPMPF_VXPP_S8F32 \
                                 , PPMPF_VXPP_S8F31 \
                                 , PPMPF_VXPP_S8F30 )
                #define PPMPF_VXPP_ARITY84() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty84.hh>
            #else
                #define PPMPF_VAR84() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR85() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F44 \
                                 , PPMPF_VXPP_S8F43 \
                                 , PPMPF_VXPP_S8F42 \
                                 , PPMPF_VXPP_S8F41 \
                                 , PPMPF_VXPP_S8F40 )
               #define PPMPF_VXPP_ARITY85() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty85.hh>
            #else
                #define PPMPF_VAR85() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR86() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F54 \
                                 , PPMPF_VXPP_S8F53 \
                                 , PPMPF_VXPP_S8F52 \
                                 , PPMPF_VXPP_S8F51 \
                                 , PPMPF_VXPP_S8F50 )
                #define PPMPF_VXPP_ARITY86() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty86.hh>
            #else
                #define PPMPF_VAR86() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR87() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F64 \
                                 , PPMPF_VXPP_S8F63 \
                                 , PPMPF_VXPP_S8F62 \
                                 , PPMPF_VXPP_S8F61 \
                                 , PPMPF_VXPP_S8F60 )
                #define PPMPF_VXPP_ARITY87() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty87.hh>
            #else
                #define PPMPF_VAR87() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(8) \
                               , PPMPF_VAR81() \
                               , PPMPF_VAR82() \
                               , PPMPF_VAR83() \
                               , PPMPF_VAR84() \
                               , PPMPF_VAR85() \
                               , PPMPF_VAR86() \
                               , PPMPF_VAR87() )
        #elif PPMPF_VXPP_XSIZE(8) == 8
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR81() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F04 \
                                 , PPMPF_VXPP_S8F03 \
                                 , PPMPF_VXPP_S8F02 \
                                 , PPMPF_VXPP_S8F01 \
                                 , PPMPF_VXPP_S8F00 )
                #define PPMPF_VXPP_ARITY81() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty81.hh>
            #else
                #define PPMPF_VAR81() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR82() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F14 \
                                 , PPMPF_VXPP_S8F13 \
                                 , PPMPF_VXPP_S8F12 \
                                 , PPMPF_VXPP_S8F11 \
                                 , PPMPF_VXPP_S8F10 )
                #define PPMPF_VXPP_ARITY82() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty82.hh>
            #else
                #define PPMPF_VAR82() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0)))
                #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR83() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F24 \
                                 , PPMPF_VXPP_S8F23 \
                                 , PPMPF_VXPP_S8F22 \
                                 , PPMPF_VXPP_S8F21 \
                                 , PPMPF_VXPP_S8F20 )
                 #define PPMPF_VXPP_ARITY83() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty83.hh>
            #else
                #define PPMPF_VAR83() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR84() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F34 \
                                 , PPMPF_VXPP_S8F33 \
                                 , PPMPF_VXPP_S8F32 \
                                 , PPMPF_VXPP_S8F31 \
                                 , PPMPF_VXPP_S8F30 )
                #define PPMPF_VXPP_ARITY84() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty84.hh>
            #else
                #define PPMPF_VAR84() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR85() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F44 \
                                 , PPMPF_VXPP_S8F43 \
                                 , PPMPF_VXPP_S8F42 \
                                 , PPMPF_VXPP_S8F41 \
                                 , PPMPF_VXPP_S8F40 )
               #define PPMPF_VXPP_ARITY85() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty85.hh>
            #else
                #define PPMPF_VAR85() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR86() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F54 \
                                 , PPMPF_VXPP_S8F53 \
                                 , PPMPF_VXPP_S8F52 \
                                 , PPMPF_VXPP_S8F51 \
                                 , PPMPF_VXPP_S8F50 )
                #define PPMPF_VXPP_ARITY86() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty86.hh>
            #else
                #define PPMPF_VAR86() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR87() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F64 \
                                 , PPMPF_VXPP_S8F63 \
                                 , PPMPF_VXPP_S8F62 \
                                 , PPMPF_VXPP_S8F61 \
                                 , PPMPF_VXPP_S8F60 )
                #define PPMPF_VXPP_ARITY87() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty87.hh>
            #else
                #define PPMPF_VAR87() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR88() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F74 \
                                 , PPMPF_VXPP_S8F73 \
                                 , PPMPF_VXPP_S8F72 \
                                 , PPMPF_VXPP_S8F71 \
                                 , PPMPF_VXPP_S8F70 )
                #define PPMPF_VXPP_ARITY88() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty88.hh>
            #else
                #define PPMPF_VAR88() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(8) \
                               , PPMPF_VAR81() \
                               , PPMPF_VAR82() \
                               , PPMPF_VAR83() \
                               , PPMPF_VAR84() \
                               , PPMPF_VAR85() \
                               , PPMPF_VAR86() \
                               , PPMPF_VAR87() \
                               , PPMPF_VAR88() )
        #elif PPMPF_VXPP_XSIZE(8) == 9
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR81() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F04 \
                                 , PPMPF_VXPP_S8F03 \
                                 , PPMPF_VXPP_S8F02 \
                                 , PPMPF_VXPP_S8F01 \
                                 , PPMPF_VXPP_S8F00 )
                #define PPMPF_VXPP_ARITY81() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty81.hh>
            #else
                #define PPMPF_VAR81() \
                        PPMPF_DREF(PPMPF_FLDX26(0,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR82() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F14 \
                                 , PPMPF_VXPP_S8F13 \
                                 , PPMPF_VXPP_S8F12 \
                                 , PPMPF_VXPP_S8F11 \
                                 , PPMPF_VXPP_S8F10 )
                #define PPMPF_VXPP_ARITY82() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty82.hh>
            #else
                #define PPMPF_VAR82() \
                        PPMPF_DREF(PPMPF_FLDX26(1,PPMPF_VXPP_XARGS(8,0)))
                #define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR83() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F24 \
                                 , PPMPF_VXPP_S8F23 \
                                 , PPMPF_VXPP_S8F22 \
                                 , PPMPF_VXPP_S8F21 \
                                 , PPMPF_VXPP_S8F20 )
                 #define PPMPF_VXPP_ARITY83() \
                         <clause/ppmpf/vxpp/slots/func/arty/arty83.hh>
            #else
                #define PPMPF_VAR83() \
                        PPMPF_DREF(PPMPF_FLDX26(2,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR84() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F34 \
                                 , PPMPF_VXPP_S8F33 \
                                 , PPMPF_VXPP_S8F32 \
                                 , PPMPF_VXPP_S8F31 \
                                 , PPMPF_VXPP_S8F30 )
                #define PPMPF_VXPP_ARITY84() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty84.hh>
            #else
                #define PPMPF_VAR84() \
                        PPMPF_DREF(PPMPF_FLDX26(3,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR85() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F44 \
                                 , PPMPF_VXPP_S8F43 \
                                 , PPMPF_VXPP_S8F42 \
                                 , PPMPF_VXPP_S8F41 \
                                 , PPMPF_VXPP_S8F40 )
               #define PPMPF_VXPP_ARITY85() \
                       <clause/ppmpf/vxpp/slots/func/arty/arty85.hh>
            #else
                #define PPMPF_VAR85() \
                        PPMPF_DREF(PPMPF_FLDX26(4,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR86() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F54 \
                                 , PPMPF_VXPP_S8F53 \
                                 , PPMPF_VXPP_S8F52 \
                                 , PPMPF_VXPP_S8F51 \
                                 , PPMPF_VXPP_S8F50 )
                #define PPMPF_VXPP_ARITY86() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty86.hh>
            #else
                #define PPMPF_VAR86() \
                        PPMPF_DREF(PPMPF_FLDX26(5,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR87() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F64 \
                                 , PPMPF_VXPP_S8F63 \
                                 , PPMPF_VXPP_S8F62 \
                                 , PPMPF_VXPP_S8F61 \
                                 , PPMPF_VXPP_S8F60 )
                #define PPMPF_VXPP_ARITY87() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty87.hh>
            #else
                #define PPMPF_VAR87() \
                        PPMPF_DREF(PPMPF_FLDX26(6,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR88() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F74 \
                                 , PPMPF_VXPP_S8F73 \
                                 , PPMPF_VXPP_S8F72 \
                                 , PPMPF_VXPP_S8F71 \
                                 , PPMPF_VXPP_S8F70 )
                #define PPMPF_VXPP_ARITY88() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty88.hh>
            #else
                #define PPMPF_VAR88() \
                        PPMPF_DREF(PPMPF_FLDX26(7,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #if (PPMPF_VXPP_XCHK(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(8,0))))
                #define PPMPF_VAR89() \
                        PPMPF_XFY( 0 \
                                 , PPMPF_VXPP_S8F84 \
                                 , PPMPF_VXPP_S8F83 \
                                 , PPMPF_VXPP_S8F82 \
                                 , PPMPF_VXPP_S8F81 \
                                 , PPMPF_VXPP_S8F80 )
                #define PPMPF_VXPP_ARITY89() \
                        <clause/ppmpf/vxpp/slots/func/arty/arty89.hh>
            #else
                #define PPMPF_VAR89() \
                        PPMPF_DREF(PPMPF_FLDX26(8,PPMPF_VXPP_XARGS(8,(()))))
                #define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
            #endif
            #define PPMPF_VXPP_FUNC8() \
                    PPMPF_APPLY( PPMPF_VXPP_MCF(8) \
                               , PPMPF_VAR81() \
                               , PPMPF_VAR82() \
                               , PPMPF_VAR83() \
                               , PPMPF_VAR84() \
                               , PPMPF_VAR85() \
                               , PPMPF_VAR86() \
                               , PPMPF_VAR87() \
                               , PPMPF_VAR88() \
                               , PPMPF_VAR89() )
        #endif
    #endif
    #include PPMPF_VXPP_SLOT(8)
    #undef _PPMPF_FARG8
    #undef _PPMPF_FARG80
    #undef _PPMPF_FARG81
    #undef _PPMPF_FARG82
    #undef _PPMPF_FARG83
    #undef _PPMPF_FARG84
    #undef _PPMPF_FARG85
    #undef _PPMPF_FARG86
    #undef _PPMPF_FARG87
    #undef _PPMPF_FARG88
    #undef PPMPF_VAR81
    #undef PPMPF_VAR82
    #undef PPMPF_VAR83
    #undef PPMPF_VAR84
    #undef PPMPF_VAR85
    #undef PPMPF_VAR86
    #undef PPMPF_VAR87
    #undef PPMPF_VAR88
    #undef PPMPF_VAR89
    #undef PPMPF_VXPP_ARITY81
    #undef PPMPF_VXPP_ARITY82
    #undef PPMPF_VXPP_ARITY83
    #undef PPMPF_VXPP_ARITY84
    #undef PPMPF_VXPP_ARITY85
    #undef PPMPF_VXPP_ARITY86
    #undef PPMPF_VXPP_ARITY87
    #undef PPMPF_VXPP_ARITY88
    #undef PPMPF_VXPP_ARITY89
#endif
    #undef PPMPF_VXPP_SET8
    #undef PPMPF_VXPP_ENDL8
    #undef PPMPF_VXPP_ENDR8
    #undef PPMPF_VXPP_SLOT8
#undef CLAUSE_PPMPF_VXPP_SET8_
#undef PPMPF_VXPP
#endif /* CLAUSE_PPMPF_VXPP_SET8_ */
