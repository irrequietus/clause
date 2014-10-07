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

#define PPMPF_VXPP_ARITY71() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY72() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY73() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY74() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY75() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY76() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY77() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY78() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY79() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL7
#undef PPMPF_VXPP_ENDR7
#define PPMPF_VXPP() 7
#define PPMPF_VXPP_ENDL7() 0
#define PPMPF_VXPP_ENDR7() \
        PPMPF_DIGNM(PPMPF_TUP_SIZEOF(PPMPF_SEQ_POP(PPMPF_VXPP_SET7(/**/))))
#define PPMPF_VXPP_SLOT7() \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_SEQ_GET(PPMPF_VXPP_SET7(/**/))))
#define PPMPF_VXPP_ITEM7() \
        PPMPF_DREF( \
            PPMPF_TUP_ATPOS( PPMPF_SEQ_POP(PPMPF_VXPP_SN_ITEM(7)) \
                           , PPMPF_SEQ_POP(PPMPF_VXPP_SET7(/**/))))
#include PPMPF_VXPP_INIT(7)
#undef PPMPF_VXPP_ENDL7
#define PPMPF_VXPP_ENDL7() 0
#include PPMPF_VXPP_SLOT(7)
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ARITY71
#undef PPMPF_VXPP_ARITY72
#undef PPMPF_VXPP_ARITY73
#undef PPMPF_VXPP_ARITY74
#undef PPMPF_VXPP_ARITY75
#undef PPMPF_VXPP_ARITY76
#undef PPMPF_VXPP_ARITY77
#undef PPMPF_VXPP_ARITY78
#undef PPMPF_VXPP_ARITY79
#undef PPMPF_VXPP_ITEM7
#undef PPMPF_VXPP_SET7
#undef PPMPF_VXPP_SLOT7
