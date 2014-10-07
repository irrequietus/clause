/*~
 * Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
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

#define PPMPF_VXPP_ARITY51() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY52() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY53() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY54() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY55() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY56() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY57() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY58() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY59() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL5
#undef PPMPF_VXPP_ENDR5
#define PPMPF_VXPP() 5
#define PPMPF_VXPP_ENDL5(n) 0
#define PPMPF_VXPP_ENDR5(n) \
        PPMPF_DIGNM( \
            PPMPF_TUP_SIZEOF(PPMPF_SEQ_POP(PPMPF_VXPP_SET5(/**/))))
#define PPMPF_VXPP_FUNC5() \
        PPMPF_APPLY( \
          PPMPF_DREF(PPMPF_DPAR(PPMPF_SEQ_GET(PPMPF_VXPP_SET5(/**/)))) \
        , PPMPF_DREF(PPMPF_TUP_ATPOS( PPMPF_SEQ_POP( PPMPF_VXPP_SN_ITEM(5)) \
                                    , PPMPF_SEQ_POP( PPMPF_VXPP_SET5(/**/)))))
#include PPMPF_VXPP_SLOT(5)
#undef PPMPF_VXPP
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
#undef PPMPF_VXPP_SET5
#undef PPMPF_VXPP_ENDL5
#undef PPMPF_VXPP_ENDR5
#define PPMPF_VXPP_ENDR5(s) \
        PPMPF_DREF(PPMPF_TUP_POP(PPMPF_TUP_GET(PPMPF_VXPP_SET(s))))
#define PPMPF_VXPP_ENDL5(s) \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_VXPP_SET(s)))
