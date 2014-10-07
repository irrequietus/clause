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

#define PPMPF_VXPP_ARITY91() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY92() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY93() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY94() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY95() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY96() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY97() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY98() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY99() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL9
#undef PPMPF_VXPP_ENDR9
#define PPMPF_VXPP() 9
#define PPMPF_VXPP_ENDL9() 0
#define PPMPF_VXPP_ENDR9() \
        PPMPF_DIGNM(PPMPF_TUP_SIZEOF(PPMPF_SEQ_POP(PPMPF_VXPP_SET9(/**/))))
#define PPMPF_VXPP_SLOT9() \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_SEQ_GET(PPMPF_VXPP_SET9(/**/))))
#define PPMPF_VXPP_ITEM9() \
        PPMPF_DREF( \
            PPMPF_TUP_ATPOS( PPMPF_SEQ_POP(PPMPF_VXPP_SN_ITEM(9)) \
                           , PPMPF_SEQ_POP(PPMPF_VXPP_SET9(/**/))))
#include PPMPF_VXPP_INIT(9)
#undef PPMPF_VXPP_ENDL9
#define PPMPF_VXPP_ENDL9() 0
#include PPMPF_VXPP_SLOT(9)
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ARITY91
#undef PPMPF_VXPP_ARITY92
#undef PPMPF_VXPP_ARITY93
#undef PPMPF_VXPP_ARITY94
#undef PPMPF_VXPP_ARITY95
#undef PPMPF_VXPP_ARITY96
#undef PPMPF_VXPP_ARITY97
#undef PPMPF_VXPP_ARITY98
#undef PPMPF_VXPP_ARITY99
#undef PPMPF_VXPP_ITEM9
#undef PPMPF_VXPP_SET9
#undef PPMPF_VXPP_SLOT9
