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

#define PPMPF_VXPP_ARITY31() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY32() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY33() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY34() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY35() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY36() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY37() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY38() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY39() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL3
#undef PPMPF_VXPP_ENDR3
#define PPMPF_VXPP() 3
#define PPMPF_VXPP_ENDL3() 0
#define PPMPF_VXPP_ENDR3() \
        PPMPF_DIGNM(PPMPF_TUP_SIZEOF(PPMPF_SEQ_POP(PPMPF_VXPP_SET3(/**/))))
#define PPMPF_VXPP_SLOT3() \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_SEQ_GET(PPMPF_VXPP_SET3(/**/))))
#define PPMPF_VXPP_ITEM3() \
        PPMPF_DREF( \
            PPMPF_TUP_ATPOS( PPMPF_SEQ_POP(PPMPF_VXPP_SN_ITEM(3)) \
                           , PPMPF_SEQ_POP(PPMPF_VXPP_SET3(/**/))))
#include PPMPF_VXPP_INIT(3)
#undef PPMPF_VXPP_ENDL3
#define PPMPF_VXPP_ENDL3() 0
#include PPMPF_VXPP_SLOT(3)
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ARITY31
#undef PPMPF_VXPP_ARITY32
#undef PPMPF_VXPP_ARITY33
#undef PPMPF_VXPP_ARITY34
#undef PPMPF_VXPP_ARITY35
#undef PPMPF_VXPP_ARITY36
#undef PPMPF_VXPP_ARITY37
#undef PPMPF_VXPP_ARITY38
#undef PPMPF_VXPP_ARITY39
#undef PPMPF_VXPP_ITEM3
#undef PPMPF_VXPP_SET3
#undef PPMPF_VXPP_SLOT3
