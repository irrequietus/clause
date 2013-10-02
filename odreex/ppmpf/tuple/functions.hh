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

#ifndef _ODREEX_PPMPF_TUPLE_FUNCTIONS_HH_
#define _ODREEX_PPMPF_TUPLE_FUNCTIONS_HH_

#include <odreex/ppmpf/core.hh>
#include <odreex/ppmpf/tupseq.hh>
#include <odreex/ppmpf/fold.hh>

/* NOTE: PPMPF_TUP2SEQ: convert a ppmpf tuple to a ppmpf sequence, preserving
 * the original order of elements */
#define PPMPF_TUP2SEQ(tup) \
        PPMPF_DREF( \
            PPMPF_TUP_FOLDL( PPMPF_T2S_ \
                           , (PPMPF_TUP_GET(tup)) \
                           , PPMPF_TUP_POP(tup) ) )

#endif /* _ODREEX_PPMPF_TUPLE_FUNCTIONS_HH_ */
