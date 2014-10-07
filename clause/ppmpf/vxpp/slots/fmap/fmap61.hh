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

#define PPMPF_VXPP_ARITY61() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY62() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY63() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY64() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY65() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY66() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY67() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY68() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY69() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL6
#undef PPMPF_VXPP_ENDR6
#define PPMPF_VXPP() 6
#define PPMPF_VXPP_ENDL6() 0
#define PPMPF_VXPP_ENDR6() \
        PPMPF_DIGNM(PPMPF_TUP_SIZEOF(PPMPF_SEQ_POP(PPMPF_VXPP_SET6(/**/))))
#define PPMPF_VXPP_SLOT6() \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_SEQ_GET(PPMPF_VXPP_SET6(/**/))))
#define PPMPF_VXPP_ITEM6() \
        PPMPF_DREF( \
            PPMPF_TUP_ATPOS( PPMPF_SEQ_POP(PPMPF_VXPP_SN_ITEM(6)) \
                           , PPMPF_SEQ_POP(PPMPF_VXPP_SET6(/**/))))
#include PPMPF_VXPP_INIT(6)
#undef PPMPF_VXPP_ENDL6
#define PPMPF_VXPP_ENDL6() 0
#include PPMPF_VXPP_SLOT(6)
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ARITY61
#undef PPMPF_VXPP_ARITY62
#undef PPMPF_VXPP_ARITY63
#undef PPMPF_VXPP_ARITY64
#undef PPMPF_VXPP_ARITY65
#undef PPMPF_VXPP_ARITY66
#undef PPMPF_VXPP_ARITY67
#undef PPMPF_VXPP_ARITY68
#undef PPMPF_VXPP_ARITY69
#undef PPMPF_VXPP_ITEM6
#undef PPMPF_VXPP_SET6
#undef PPMPF_VXPP_SLOT6
