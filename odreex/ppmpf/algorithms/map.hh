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
#include <odreex/ppmpf/collections/sequence.hh>

/*~
 * @desc A high order function applying a given function to each element of a
 *       a given ppmpf collection (sequences, safe and unsafe ppmpf tuples),
 *       also supporting closures with a particular syntax and expanding to
 *       a ppmpf collection of the same typeclause.
 * @pfrg fexp: a plain function or a ppmpf closure.
 * @pfrg tycl: a ppmpf typeclause.
 * @pexp Application of fexp over a ppmpf collection as the latter is described
 *       in the typeclause enclosing it.
 */
#define PPMPF_MAP(fexp,tycl) \
        PPMPF_TYPEFY( PPMPF_PFLD1 \
                    , PPMPF_MHD \
                    , PPMPF_MAP_MHD \
                    , fexp \
                    , PPMPF_IFELSE( PPMPF_IS(PPMPF_TYPEOF(tycl), 2) \
                                  , \
                                  , () )\
                    , tycl )

#endif /* _ODREEX_PPMPF_ALGORITHMS_MAP_HH_ */
