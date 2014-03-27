/* --
 * Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_PPMPF_ALGORITHMS_MAP_HH_
#define _ODREEX_PPMPF_ALGORITHMS_MAP_HH_

#include <odreex/ppmpf/collections/tuple.hh>
#include <odreex/ppmpf/functional/bind.hh>
#include <odreex/ppmpf/functional/rdfn.hh>

/*~
 * @desc A newer implementation of the map high order function, for tuples,
 *       that is bind - aware.
 * @pfrg f: a plain function or a ppmpf bind expression.
 * @pfrg t: a safe tuple
 * @pexp Application of f over an n-ary ppmpf tuple.
 * @note This is very much a work in progress, based on work done with the
 *       `PPMPF_BDS31` bind map prototype.
 * @todo Implement the first ppmpf "type" system within this prototype and
 *       optimize expansion times of the initial code inheritance from the
 *       `PPMPF_BDS31` proof of concept code.
 */

#define PPMPF_MAP(f,t) \
        PPMPF_RDFN( PPMPF_PFLD1 \
                  , f \
                  , ( (())(t) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_UTUP_EMPTY \
                    , PPMPF_BDSN4 \
                    , PPMPF_FLDX0D \
                    , PPMPF_BDSN2 ) \
                  , ( (())(t) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0E \
                    , PPMPF_FLDX0D \
                    , PPMPF_FLDX0H ) )

#endif /* _ODREEX_PPMPF_ALGORITHMS_MAP_HH_ */
