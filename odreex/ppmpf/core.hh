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

/* NOTE: PPMPF_TRUE, PPMPF_FALSE: When deployed, resolving to either 1 or 0. */
#define PPMPF_TRUE(...) 1
#define PPMPF_FALSE(...) 0

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

/* NOTE: PPMPF_IFELSE - An if - then - else macro construct.
 */
#define PPMPF_IFELSE_0(t,e) e
#define PPMPF_IFELSE_1(t,e) t
#define PPMPF_IFELSE(n,t,e) PPMPF_CAT(PPMPF_IFELSE_,n)(t,e)

/* NOTE: Implementations for AND, OR, NOR, XOR, XNOR, NAND, NOT could have been
 * introduced using the universal NOR / NAND combinations but it was decided to
 * implement each one separately for the time being.
 */

/* NOTE: PPMPF_AND - Logical AND */
#define PPMPF_AND_11() 1
#define PPMPF_AND_00() 0
#define PPMPF_AND_10() 0
#define PPMPF_AND_01() 0
#define PPMPF_AND(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_AND_, x), y)()

/* NOTE: PPMPF_NAND - Logical NAND */
#define PPMPF_NAND_11() 0
#define PPMPF_NAND_00() 1
#define PPMPF_NAND_10() 1
#define PPMPF_NAND_01() 1
#define PPMPF_NAND(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_NAND_, x), y)()

/* NOTE: PPMPF_OR - Logical OR */
#define PPMPF_OR_11() 1
#define PPMPF_OR_00() 0
#define PPMPF_OR_10() 1
#define PPMPF_OR_01() 1
#define PPMPF_OR(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_OR_, x), y)()

/* NOTE: PPMPF_NOR - Logical NOR */
#define PPMPF_NOR_11() 0
#define PPMPF_NOR_00() 1
#define PPMPF_NOR_10() 0
#define PPMPF_NOR_01() 0
#define PPMPF_NOR(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_NOR_, x), y)()

/* NOTE: PPMPF_XOR - Logical XOR */
#define PPMPF_XOR_11() 0
#define PPMPF_XOR_00() 0
#define PPMPF_XOR_10() 1
#define PPMPF_XOR_01() 1
#define PPMPF_XOR(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_XOR_, x), y)()

/* NOTE: PPMPF_XNOR - Logical XNOR */
#define PPMPF_XNOR_11() 1
#define PPMPF_XNOR_00() 1
#define PPMPF_XNOR_10() 0
#define PPMPF_XNOR_01() 0
#define PPMPF_XNOR(x,y) PPMPF_CAT(PPMPF_CAT(PPMPF_XNOR_, x), y)()

/* NOTE: PPMPF_NOT - Logical NOT */
#define PPMPF_NOT_1() 0
#define PPMPF_NOT_0() 1
#define PPMPF_NOT(x) PPMPF_CAT(PPMPF_NOT_, x)()

#endif /* _ODREEX_PPMPF_CORE_HH_ */
