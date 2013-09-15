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

#ifndef _ODREEX_PPMPF_PPFK_HH_
#define _ODREEX_PPMPF_PPFK_HH_

#include <odreex/ppmpf/base.hh>
#include <odreex/ppmpf/fold.hh>

/* NOTE: PPMPF_VCAT - A variadic version of PPMPF_CAT */
#define PPMPF_VCAT(x,...) \
        PPMPF_TUP_FOLDL_OF(PPMPF_CAT,(x,__VA_ARGS__))

#endif /* _ODREEX_PPMPF_PPFK_HH_ */