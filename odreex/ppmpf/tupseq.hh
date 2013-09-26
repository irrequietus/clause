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

/* NOTE: The PPMPF_EMPTY_* family of macros is the framework for detecting
 * whether empty tokens are the sole arguments or not in ppmpf tuples and
 * sequences and PPMPF_TUP_EMPTY and PPMPF_SEQ_EMPTY make extensive use
 * of these macros.
 */
#define PPMPF__PPMPF_EMPTY____ /**/
#define PPMPF_EMPTY_0(...) (,)
#define PPMPF_EMPTY_1(...) (,) ,
#define PPMPF_EMPTY_2(...) ()
#define PPMPF_EMPTY_3(...) PPMPF_EMPTY_4(PPMPF_EMPTY_1 __VA_ARGS__ (,),)
#define PPMPF_EMPTY_4(a,...) PPMPF_EMPTY_5(PPMPF_EMPTY_0  a)
#define PPMPF_EMPTY_5(...) PPMPF_EMPTY_6(PPMPF_COMMA __VA_ARGS__)
#define PPMPF_EMPTY_6(...) PPMPF_EMPTY_7(__VA_ARGS__)
#define PPMPF_EMPTY_7(...) PPMPF_EMPTY_8(__VA_ARGS__,1,1,0,)
#define PPMPF_EMPTY_8(...) PPMPF_EMPTY_9(__VA_ARGS__)
#define PPMPF_EMPTY_9(a,b,c,n,...) n
#define PPMPF_EMPTY_10(...) PPMPF_EMPTY_11(__VA_ARGS__,1,0,0)
#define PPMPF_EMPTY_11(a,b,n,...) n
#define PPMPF_EMPTY_12(x) PPMPF_EMPTY_10(PPMPF_COMMA x)
#define PPMPF_EMPTY_13(x) \
        PPMPF_EMPTY_10( PPMPF_JUST(\
                            PPMPF_COMMA \
                                PPMPF_CAT(PPMPF_ x,_PPMPF_EMPTY____) ()) \
                      , 1, 0, 0 )
#define PPMPF_EMPTY_B(x) \
        PPMPF_IFELSE(PPMPF_EMPTY_12(x),PPMPF_FALSE,PPMPF_EMPTY_13)(x)
#define PPMPF_EMPTY_A(x,y) \
        PPMPF_IFELSE( PPMPF_EMPTY_C(PPMPF_DREF(x)) \
                    , PPMPF_EMPTY_B \
                    , PPMPF_FALSE )(y)
#define PPMPF_EMPTY_C(...) \
        PPMPF_XOR( PPMPF_EMPTY_3(PPMPF_EMPTY_2 __VA_ARGS__,) \
                 , PPMPF_EMPTY_3(PPMPF_EMPTY_2 __VA_ARGS__) )

/* NOTE: PPMPF_SEQ_GET - Get the first element of a sequence, enclosed in ()
 * PPMPF_SEQ_POP - Remove the first element, get the rest.
 */
#define PPMPF_SEQ_GET___(x,...) x
#define PPMPF_SEQ_GET__(...) PPMPF_SEQ_GET___(__VA_ARGS__)
#define PPMPF_SEQ_GET_(...) (__VA_ARGS__) ,
#define PPMPF_SEQ_GET(s) PPMPF_SEQ_GET__(PPMPF_SEQ_GET_ s)
#define PPMPF_SEQ_POP(s) PPMPF_EMPTY s

/* NOTE: PPMPF_TUP_GET - Get the first element of a tuple, enclosed in ()
 *       PPMPF_TUP_POP - Remove the first element, get the rest.
 * Should be clear now, a tuple is a () enclosed list of comma separated tokens,
 * while a sequence is a list of tuples separated by whitespace. A tuple with
 * no commas is referred to as "unit".
 */
#define PPMPF_TUP_GET____(x) x
#define PPMPF_TUP_GET___(x,...) PPMPF_TUP_GET____(x)
#define PPMPF_TUP_GET__(...) PPMPF_TUP_GET___(__VA_ARGS__,)
#define PPMPF_TUP_GET_(...) PPMPF_TUP_GET__(__VA_ARGS__,)
#define PPMPF_TUP_GET(t) (PPMPF_TUP_GET___(PPMPF_TUP_GET_ t,))

/* NOTE: PMPF_TUP_POP will remove the first element of a tuple. */
#define PPMPF_TUP_POP___(x,...) (__VA_ARGS__)
#define PPMPF_TUP_POP__(...) PPMPF_TUP_POP___(__VA_ARGS__)
#define PPMPF_TUP_POP_(...) \
        PPMPF_IFELSE( PPMPF_JUST(PPMPF_EMPTY_C PPMPF_TUP_POP___(__VA_ARGS__,))\
                    , PPMPF_UNIT \
                    , PPMPF_TUP_POP__)(__VA_ARGS__)
#define PPMPF_TUP_POP(x) PPMPF_TUP_POP_ x

/* NOTE: Checking for empty ppmpf tuple or sequence. */
#define PPMPF_TUP_EMPTY(t) \
        PPMPF_EMPTY_A( PPMPF_TUP_POP(PPMPF_TUP_POP((PPMPF_DREF(t),~))) \
                     , PPMPF_JUST PPMPF_TUP_GET((PPMPF_DREF(t),~)) )

#define PPMPF_SEQ_EMPTY(s) \
        PPMPF_XOR( PPMPF_EMPTY_3(PPMPF_EMPTY_2 s,) \
                 , PPMPF_EMPTY_3(PPMPF_EMPTY_2 s) )

#endif /* _ODREEX_PPMPF_TUPSEQ_HH_ */
