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

#define PPMPF_VXPP_ARITY21() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY22() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY23() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY24() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY25() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY26() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY27() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY28() <clause/ppmpf/vxpp/slots/null.hh>
#define PPMPF_VXPP_ARITY29() <clause/ppmpf/vxpp/slots/null.hh>
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ENDL2
#undef PPMPF_VXPP_ENDR2
#define PPMPF_VXPP() 2
#define PPMPF_VXPP_ENDL2(n) 0
#define PPMPF_VXPP_ENDR2(n) \
        PPMPF_DIGNM( \
            PPMPF_TUP_SIZEOF( \
                PPMPF_SEQ_POP(PPMPF_SEQ_POP(PPMPF_VXPP_SET2(/**/)))))
#define PPMPF_VXPP_FUNC2() \
        PPMPF_DPAR(PPMPF_SEQ_GET(PPMPF_SEQ_POP( \
          PPMPF_APPLY(PPMPF_VXPP_SET2 \
            , PPMPF_DREF( \
                PPMPF_TUP_ATPOS( \
                    PPMPF_SEQ_POP( PPMPF_VXPP_SN_ITEM(2)) \
                  , PPMPF_SEQ_POP( \
                      PPMPF_SEQ_POP(PPMPF_VXPP_SET2(/**/)))) \
                  )))))
#include PPMPF_VXPP_INIT(2)
#undef PPMPF_VXPP_ENDL2
#define PPMPF_VXPP_ENDL2() 0
#include PPMPF_VXPP_SLOT(2)
#undef PPMPF_VXPP
#undef PPMPF_VXPP_ARITY21
#undef PPMPF_VXPP_ARITY22
#undef PPMPF_VXPP_ARITY23
#undef PPMPF_VXPP_ARITY24
#undef PPMPF_VXPP_ARITY25
#undef PPMPF_VXPP_ARITY26
#undef PPMPF_VXPP_ARITY27
#undef PPMPF_VXPP_ARITY28
#undef PPMPF_VXPP_ARITY29
#undef PPMPF_VXPP_FUNC2
#undef PPMPF_VXPP_SET2
