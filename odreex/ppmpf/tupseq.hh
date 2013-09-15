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

#ifndef _ODREEX_PPMPF_TUPSEQ_HH_
#define _ODREEX_PPMPF_TUPSEQ_HH_

#include <odreex/ppmpf/core.hh>
#include <odreex/ppmpf/alu.hh>

/* NOTE: PPMPF_EMPTY_ Checking whether __VA_ARGS__ is the empty token or not
 * can be done without needing to count the individual number of arguments each
 * time, but by just using this macro.
 */
#define PPMPF_EMPTY_0(...) (,)
#define PPMPF_EMPTY_1(...) (,) ,
#define PPMPF_EMPTY_2(...) ()
#define PPMPF_EMPTY_3(...) PPMPF_EMPTY_4(PPMPF_EMPTY_1 __VA_ARGS__ (,),)
#define PPMPF_EMPTY_4(a,...) PPMPF_EMPTY_5(PPMPF_EMPTY_0  a)
#define PPMPF_EMPTY_5(...) PPMPF_EMPTY_6(PPMPF_COMMA __VA_ARGS__)
#define PPMPF_EMPTY_6(...) PPMPF_EMPTY_7(__VA_ARGS__)
#define PPMPF_EMPTY_7(...) PPMPF_EMPTY_8(__VA_ARGS__,1,,0,)
#define PPMPF_EMPTY_8(...) PPMPF_EMPTY_9(__VA_ARGS__)
#define PPMPF_EMPTY_9(a,b,c,n,...) n
#define PPMPF_EMPTY_(...) \
        PPMPF_XOR( PPMPF_EMPTY_3(PPMPF_EMPTY_2 __VA_ARGS__,) \
                 , PPMPF_EMPTY_3(PPMPF_EMPTY_2 __VA_ARGS__) )

#define PPMPF_IS_EMPTY(...) \
        PPMPF_EMPTY_(__VA_ARGS__)

#define PPMPF_TUPEMPTY(t) \
        PPMPF_EMPTY_(PPMPF_JUST t)

#define PPMPF_SEQEMPTY(s) \
        PPMPF_EMPTY_(s)

/* NOTE: PPMPF_SEQGET - Get the first element of a sequence, enclosed in ()
 * PPMPF_SEGPOP - Remove the first element, get the rest.
 */
#define PPMPF_SEQGET___(x,...) x
#define PPMPF_SEQGET__(...) PPMPF_SEQGET___(__VA_ARGS__)
#define PPMPF_SEQGET_(...) (__VA_ARGS__) ,
#define PPMPF_SEQGET(s) PPMPF_SEQGET__(PPMPF_SEQGET_ s)
#define PPMPF_SEQPOP(s) PPMPF_EMPTY s

/* NOTE: PPMPF_TUPGET - Get the first element of a tuple, enclosed in ()
 *       PPMPF_TUPPOP - Remove the first element, get the rest.
 * Should be clear now, a tuple is a () enclosed list of comma separated tokens,
 * while a sequence is a list of tuples separated by whitespace. A tuple with
 * no commas is referred to as "unit".
 */
#define PPMPF_TUPGET____(x) x
#define PPMPF_TUPGET___(x,...) PPMPF_TUPGET____(x)
#define PPMPF_TUPGET__(...) PPMPF_TUPGET___(__VA_ARGS__,)
#define PPMPF_TUPGET_(...) PPMPF_TUPGET__(__VA_ARGS__,)
#define PPMPF_TUPGET(t) (PPMPF_TUPGET___(PPMPF_TUPGET_ t,))

/* NOTE: PMPF_TUPPOP will remove the first element of a tuple. */
#define PPMPF_TUPPOP___(x,...) (__VA_ARGS__)
#define PPMPF_TUPPOP__(...) PPMPF_TUPPOP___(__VA_ARGS__)
#define PPMPF_TUPPOP_(...) \
        PPMPF_IFELSE( PPMPF_JUST(PPMPF_EMPTY_ PPMPF_TUPPOP___(__VA_ARGS__,)) \
                    , PPMPF_UNIT \
                    , PPMPF_TUPPOP__)(__VA_ARGS__)
#define PPMPF_TUPPOP(x) PPMPF_TUPPOP_ x

#endif /* _ODREEX_PPMPF_TUPSEQ_HH_ */
