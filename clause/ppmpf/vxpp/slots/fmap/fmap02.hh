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

#define PPMPF_VXPP_ARITY01() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY02() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY03() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY04() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY05() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY06() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY07() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY08() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY09() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL0
#undef PPMPF_VXPP_ENDR0
#define PPMPF_VXPP() 0
#define PPMPF_VXPP_ENDL0(n) 0
#define PPMPF_VXPP_ENDR0(n) \
        PPMPF_DIGNM( \
            PPMPF_TUP_SIZEOF(PPMPF_SEQ_POP(PPMPF_VXPP_SET0(/**/))))
#define PPMPF_VXPP_FUNC0() \
        PPMPF_APPLY( \
          PPMPF_DREF(PPMPF_DPAR(PPMPF_SEQ_GET(PPMPF_VXPP_SET0(/**/)))) \
        , PPMPF_DREF(PPMPF_TUP_ATPOS( PPMPF_SEQ_POP( PPMPF_VXPP_SN_ITEM(0)) \
                                    , PPMPF_SEQ_POP( PPMPF_VXPP_SET0(/**/)))))
#include PPMPF_VXPP_SLOT(0)
#undef PPMPF_VXPP
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
#undef PPMPF_VXPP_SET0
#undef PPMPF_VXPP_ENDL0
#undef PPMPF_VXPP_ENDR0
#define PPMPF_VXPP_ENDR0(s) \
        PPMPF_DREF(PPMPF_TUP_POP(PPMPF_TUP_GET(PPMPF_VXPP_SET(s))))
#define PPMPF_VXPP_ENDL0(s) \
        PPMPF_TUP_GET(PPMPF_TUP_GET(PPMPF_VXPP_SET(s)))
