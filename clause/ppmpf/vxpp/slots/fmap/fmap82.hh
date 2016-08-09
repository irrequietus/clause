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

#define PPMPF_VXPP_ARITY81() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY82() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY83() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY84() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY85() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY86() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY87() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY88() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY89() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL8
#undef PPMPF_VXPP_ENDR8
#define PPMPF_VXPP() 8
#define PPMPF_VXPP_ENDL8(n) 0
#define PPMPF_VXPP_ENDR8(n) \
        PPMPF_DIGNM( \
            PPMPF_TUP_SIZEOF(PPMPF_SEQ_POP(PPMPF_VXPP_SET8(/**/))))
#define PPMPF_VXPP_FUNC8() \
        PPMPF_APPLY( \
          PPMPF_DREF(PPMPF_DPAR(PPMPF_SEQ_GET(PPMPF_VXPP_SET8(/**/)))) \
        , PPMPF_DREF(PPMPF_TUP_ATPOS( PPMPF_SEQ_POP( PPMPF_VXPP_SN_ITEM(8)) \
                                    , PPMPF_SEQ_POP( PPMPF_VXPP_SET8(/**/)))))
#include PPMPF_VXPP_SLOT(8)
#undef PPMPF_VXPP
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
#undef PPMPF_VXPP_SET8
#undef PPMPF_VXPP_ENDL8
#undef PPMPF_VXPP_ENDR8
#define PPMPF_VXPP_ENDR8(s) \
        PPMPF_DREF(PPMPF_TUP_POP(PPMPF_TUP_GET(PPMPF_VXPP_SET(s))))
#define PPMPF_VXPP_ENDL8(s) \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_VXPP_SET(s)))
