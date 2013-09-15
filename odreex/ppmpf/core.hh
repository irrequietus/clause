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

#ifndef _ODREEX_PPMPF_CORE_HH_
#define _ODREEX_PPMPF_CORE_HH_

/* NOTE: PPMPF_QUOTE - Double quote enclosing macro. */
#define PPMPF_QUOTE(...) PPMPF_QUOTE_(__VA_ARGS__)
#define PPMPF_QUOTE_(...) # __VA_ARGS__

/* NOTE: PPMPF_COMMA and PPMPF_WSPC are just , and whitespace respectively.
 * The PPMPF_EMPTY macro expands to nothing, PPMPF_JUST to its arguments and
 * PPMPF_UNIT() to a unit i.e. (). */
#define PPMPF_COMMA(...) ,
#define PPMPF_WSPC(...) /**/
#define PPMPF_EMPTY(...)
#define PPMPF_UNIT(...) ()
#define PPMPF_JUST(...) __VA_ARGS__

/* NOTE: Since most "items" we use are enclosed in parentheses, there should
 * be a macro removing those where applicable, so here it goes.
 */
#define PPMPF_DREF(x) PPMPF_JUST x

/* NOTE: PPMPF_CAT - Binary Concatenation macro */
#define PPMPF_CAT_1(x, y) PPMPF_CAT_2( x , y )
#define PPMPF_CAT_2(x, y) PPMPF_CAT_3( x ## y )
#define PPMPF_CAT_3(x) x
#define PPMPF_CAT(x, y) PPMPF_CAT_1(x, y)

#endif /* _ODREEX_PPMPF_CORE_HH_ */
