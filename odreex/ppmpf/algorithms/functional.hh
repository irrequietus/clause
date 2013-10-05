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

#ifndef _ODREEX_PPMPF_ALGORITHMS_FUNCTIONAL_HH_
#define _ODREEX_PPMPF_ALGORITHMS_FUNCTIONAL_HH_

#include <odreex/ppmpf/kernel/cpro/core.hh>
#include <odreex/ppmpf/algorithms/fold.hh>

/* 
 * NOTE: PPMPF_COMPOSE: given a ppmpf sequence of macro functions in the form
 * of (f)(g)(h)(i)...(z), they are applied to a parenthesis enclosed ppmpf
 * token of the form (token) in the following order: f(g(h(i(...z(token))))).
 * In practice, this is a macro performing function composition, for an unary
 * parenthesis enclosed macro argument. Due to "dereferencing" occuring during
 * argument forwarding, n-ary functions are supported, though this is a far
 * more demanding conceptually.
 */
#define PPMPF_COMPOSE(x,fseq) \
        PPMPF_SEQ_FOLDR(((PPMPF_APPLY,_1),_2),x,fseq)

#endif /* _ODREEX_PPMPF_ALGORITHMS_FUNCTIONAL_HH_ */
