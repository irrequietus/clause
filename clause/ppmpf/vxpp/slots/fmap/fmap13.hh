/*~
 * Copyright (C) 1013, 1014 George Makrydakis <irrequietus@gmail.com>
 * 
 * This file is part of 'clause', a highly generic C++ meta-programming library,
 * subject to the terms and conditions of the Mozilla Public License v 1.0. If
 * a copy of the MPLv1 license text was not distributed with this file, you can
 * obtain it at: http://mozilla.org/MPL/1.0/.
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

#define PPMPF_VXPP_ARITY11() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY12() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY13() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY14() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY15() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY16() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY17() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY18() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY19() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL1
#undef PPMPF_VXPP_ENDR1
#define PPMPF_VXPP() 1
#define PPMPF_VXPP_ENDL1(n) 0
#define PPMPF_VXPP_ENDR1(n) \
        PPMPF_DIGNM( \
            PPMPF_TUP_SIZEOF( \
                PPMPF_SEQ_POP(PPMPF_SEQ_POP(PPMPF_VXPP_SET1(/**/)))))
#define PPMPF_VXPP_FUNC1() \
        PPMPF_DPAR(PPMPF_SEQ_GET(PPMPF_SEQ_POP( \
          PPMPF_APPLY(PPMPF_VXPP_SET1 \
            , PPMPF_DREF( \
                PPMPF_TUP_ATPOS( \
                    PPMPF_SEQ_POP( PPMPF_VXPP_SN_ITEM(1)) \
                  , PPMPF_SEQ_POP( \
                      PPMPF_SEQ_POP(PPMPF_VXPP_SET1(/**/)))) \
                  )))))
#include PPMPF_VXPP_INIT(1)
#undef PPMPF_VXPP_ENDL1
#define PPMPF_VXPP_ENDL1() 0
#include PPMPF_VXPP_SLOT(1)
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ARITY11
#undef PPMPF_VXPP_ARITY12
#undef PPMPF_VXPP_ARITY13
#undef PPMPF_VXPP_ARITY14
#undef PPMPF_VXPP_ARITY15
#undef PPMPF_VXPP_ARITY16
#undef PPMPF_VXPP_ARITY17
#undef PPMPF_VXPP_ARITY18
#undef PPMPF_VXPP_ARITY19
#undef PPMPF_VXPP_FUNC1
#undef PPMPF_VXPP_SET1
