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

#ifndef _CLAUSE_PPMPF_RANGE_FUNCTIONS_HH_
#define _CLAUSE_PPMPF_RANGE_FUNCTIONS_HH_

#include <clause/ppmpf/collections/tuple.hh>
#include <clause/ppmpf/collections/sequence.hh>
/*
 * NOTE: PPMPF_RANGE_GET : Get the next item in a numerical range.
 */
#define PPMPF_RANGE_GET(r) \
        PPMPF_DREF(PPMPF_SEQ_GET(r))

/*
 * NOTE: PPMPF_RANGE_POP : Move to the next item in a numerical range.
 */
#define PPMPF_RANGE_POP(r) \
        PPMPF_IFELSE( PPMPF_RANGE_EMPTY(r) \
                    ,  PPMPF_JUST \
                    , (PPMPF_CAT(,PPMPF_NEXT(PPMPF_DREF(PPMPF_SEQ_GET(r)))))\
PPMPF_SEQ_POP)(r)

/*
 * NOTE: PPMPF_RANGE_EMPTY : Check if the numerical range is empty.
 */
#define PPMPF_RANGE_EMPTY(r) \
        PPMPF_IEQL( PPMPF_DREF(PPMPF_SEQ_GET(r)) \
                  , PPMPF_DREF(PPMPF_SEQ_POP(r)))

/*
 * NOTE: PPMPF_NRANGE_TUP : Given numbers a and b in ppmpf 4 digit sequence
 * format with a <= b, generate a ppmpf tuple for all numbers in [a,b] range,
 * with numbers in that range expressed in regular decimal format - i.e.
 * ((0),...,(1234))
 */
#define PPMPF_NRANGE_TUP(a,b) \
        PPMPF_FLDX0G( PPMPF_DIGNM \
                    , (((PPMPF_DIGNM(PPMPF_RANGE_GET((a)(PPMPF_NEXT(b))))))) \
                      (PPMPF_RANGE_POP((a)(PPMPF_NEXT(b)))) \
                    , PPMPF_RANGE_GET \
                    , PPMPF_RANGE_POP \
                    , PPMPF_RANGE_EMPTY \
                    , PPMPF_FLDX20 \
                    , PPMPF_FLDX0D \
                    , PPMPF_FLDX0H, )

/*
 * NOTE: PPMPF_IRANGE_TUP : Given numbers a and b in ppmpf 4 digit sequence
 * format with a <= b, generate a ppmpf tuple for all numbers in [a,b] range,
 * with numbers in that range expressed in ppmpf 4 digit sequence format - i.e.
 * ((0)(0)(0)(0),...,(1)(2)(3)(4))
 */
#define PPMPF_IRANGE_TUP(a,b) \
        PPMPF_FLDX0G(  \
                    , ((PPMPF_RANGE_GET((a)(PPMPF_NEXT(b))))) \
                      (PPMPF_RANGE_POP((a)(PPMPF_NEXT(b)))) \
                    , PPMPF_RANGE_GET \
                    , PPMPF_RANGE_POP \
                    , PPMPF_RANGE_EMPTY \
                    , PPMPF_FLDX1Z \
                    , PPMPF_FLDX0D \
                    , PPMPF_FLDX0H, )
/*
 * NOTE: PPMPF_NRANGE_SEQ : Given numbers a and b in ppmpf 4 digit sequence
 * format with a <= b, generate a ppmpf sequence for all numbers in [a,b] range,
 * with numbers in that range expressed in ppmpf 4 digit sequence format - i.e.
 * ((0)...(1234)))
 */
#define PPMPF_NRANGE_SEQ(a,b) \
        PPMPF_FLDX0G( PPMPF_DIGNM \
                    , ((PPMPF_DIGNM(PPMPF_RANGE_GET((a)(PPMPF_NEXT(b)))))) \
                      (PPMPF_RANGE_POP((a)(PPMPF_NEXT(b)))) \
                    , PPMPF_RANGE_GET \
                    , PPMPF_RANGE_POP \
                    , PPMPF_RANGE_EMPTY \
                    , PPMPF_FLDX1Z \
                    , PPMPF_FLDX0D \
                    , PPMPF_FLDX1X, )
/*
 * NOTE: PPMPF_IRANGE_SEQ : Given numbers a and b in ppmpf 4 digit sequence
 * format with a <= b, generate a ppmpf sequence for all numbers in [a,b] range,
 * with numbers in that range expressed in ppmpf 4 digit sequence format - i.e.
 * (((0)(0)(0)(0))...((1)(2)(3)(4)))
 */
#define PPMPF_IRANGE_SEQ(a,b) \
        PPMPF_FLDX0G(  \
                    , ((PPMPF_RANGE_GET((a)(PPMPF_NEXT(b))))) \
                      (PPMPF_RANGE_POP((a)(PPMPF_NEXT(b)))) \
                    , PPMPF_RANGE_GET \
                    , PPMPF_RANGE_POP \
                    , PPMPF_RANGE_EMPTY \
                    , PPMPF_FLDX21 \
                    , PPMPF_FLDX0D \
                    , PPMPF_FLDX1X, )


#endif /* _CLAUSE_PPMPF_RANGE_FUNCTIONS_HH_ */
