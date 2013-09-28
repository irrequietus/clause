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

#ifndef _ODREEX_PPMPF_IBND_HH_
#define _ODREEX_PPMPF_IBND_HH_

#include <odreex/ppmpf/prse.hh>

/* NOTE: PPMPF_IBND: checks whether "binding" is compliant. */
#define PPMPF_IBND1(x) \
        PPMPF_PRSE_IPRT(x)

#define PPMPF_IBND2(x) \
        PPMPF_IEQL( PPMPF_TUP_SIZEOF(x) \
                  , (0)(0)(0)(2) )

#define PPMPF_IBND3(x) \
        PPMPF_PRSE_IPRT(PPMPF_DREF(PPMPF_TUP_GET(x)))

#define PPMPF_IBND4(x) \
        PPMPF_AND( PPMPF_IBND2(PPMPF_DREF(PPMPF_TUP_GET(x))) \
                 , PPMPF_PRSE_ITOK( \
                    PPMPF_DREF( \
                        PPMPF_TUP_GET( \
                            PPMPF_DREF(PPMPF_TUP_GET(x)) \
                        ) ) ) )

#define PPMPF_IBND5(x) \
        PPMPF_AND( PPMPF_PRSE_ITOK(x) \
                 , PPMPF_NOT(PPMPF_PRSE_IPLH(x)))

#define PPMPF_IBND6(tup) \
        PPMPF_AND( \
            PPMPF_IBND5(PPMPF_TUP_ATPOS((0)(0)(0)(0),tup)) \
        ,   PPMPF_AND( \
                PPMPF_PRSE_IPLH(PPMPF_TUP_ATPOS((0)(0)(0)(1),tup)) \
            ,   PPMPF_PRSE_IPLH(PPMPF_TUP_ATPOS((0)(0)(0)(2),tup))))

#define PPMPF_IBND7(x) \
        ( PPMPF_DREF(PPMPF_TUP_GET(PPMPF_DREF(PPMPF_TUP_GET(x)))) \
        , PPMPF_DREF(PPMPF_TUP_POP(PPMPF_DREF(PPMPF_TUP_GET(x)))) \
        , PPMPF_DREF(PPMPF_TUP_GET(PPMPF_TUP_POP(x))) )

#define PPMPF_IBND(f) \
        PPMPF_IFELSE( \
            PPMPF_IFELSE( \
                PPMPF_IFELSE( \
                    PPMPF_IFELSE( PPMPF_IBND1(f) \
                                , PPMPF_IBND2 \
                                , PPMPF_FALSE )(f) \
                ,   PPMPF_IBND3 \
                ,   PPMPF_FALSE )(f) \
            , PPMPF_IBND4 \
            , PPMPF_FALSE)(f) \
        , PPMPF_IBND7 \
        , PPMPF_UNIT)(f)

#endif /* _ODREEX_PPMPF_IBND_HH_ */
