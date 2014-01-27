/* --
 * Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
 *
 * This file is part of odreex.
 *
 * odreex is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * odreex is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * odreex. If not, see http://www.gnu.org/licenses/.
 *
 */

#ifndef _ODREEX_PPMPF_RANGE_FUNCTIONS_HH_
#define _ODREEX_PPMPF_RANGE_FUNCTIONS_HH_

#include <odreex/ppmpf/kernel/cpro/base.hh>
#include <odreex/ppmpf/kernel/cpro/core.hh>
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


#endif /* _ODREEX_PPMPF_RANGE_FUNCTIONS_HH_ */
