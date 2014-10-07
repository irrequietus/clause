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

#define PPMPF_VXPP_ARITY41() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY42() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY43() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY44() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY45() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY46() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY47() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY48() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY49() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL4
#undef PPMPF_VXPP_ENDR4
#define PPMPF_VXPP() 4
#define PPMPF_VXPP_ENDL4(n) 0
#define PPMPF_VXPP_ENDR4(n) \
        PPMPF_DIGNM( \
            PPMPF_TUP_SIZEOF(PPMPF_SEQ_POP(PPMPF_VXPP_SET4(/**/))))
#define PPMPF_VXPP_FUNC4() \
        PPMPF_APPLY( \
          PPMPF_DREF(PPMPF_DPAR(PPMPF_SEQ_GET(PPMPF_VXPP_SET4(/**/)))) \
        , PPMPF_DREF(PPMPF_TUP_ATPOS( PPMPF_SEQ_POP( PPMPF_VXPP_SN_ITEM(4)) \
                                    , PPMPF_SEQ_POP( PPMPF_VXPP_SET4(/**/)))))
#include PPMPF_VXPP_SLOT(4)
#undef PPMPF_VXPP
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
#undef PPMPF_VXPP_SET4
#undef PPMPF_VXPP_ENDL4
#undef PPMPF_VXPP_ENDR4
#define PPMPF_VXPP_ENDR4(s) \
        PPMPF_DREF(PPMPF_TUP_POP(PPMPF_TUP_GET(PPMPF_VXPP_SET(s))))
#define PPMPF_VXPP_ENDL4(s) \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_VXPP_SET(s)))
