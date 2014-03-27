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

#ifndef _ODREEX_PPMPF_EMPTY_HH_
#define _ODREEX_PPMPF_EMPTY_HH_

#include <odreex/ppmpf/kernel/cpro/core.hh>

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
#define PPMPF_EMPTY_14(x) \
        PPMPF_EMPTY_10(PPMPF_JUST(PPMPF_COMMA x ()), 1, 0, 0 )
#define PPMPF_EMPTY_B1(x) \
        PPMPF_IFELSE(PPMPF_EMPTY_12(x),PPMPF_FALSE,PPMPF_EMPTY_13)(x)
#define PPMPF_EMPTY_B2(x) \
        PPMPF_IFELSE(PPMPF_EMPTY_12(x),PPMPF_FALSE,PPMPF_EMPTY_14)(x)
#define PPMPF_EMPTY_A(x,y) \
        PPMPF_IFELSE( PPMPF_EMPTY_C(PPMPF_DREF(x)) \
                    , PPMPF_EMPTY_B1 \
                    , PPMPF_FALSE )(y)
#define PPMPF_EMPTY_A2(x,y) \
        PPMPF_IFELSE( PPMPF_EMPTY_C(PPMPF_DREF(x)) \
                    , PPMPF_EMPTY_B2 \
                    , PPMPF_FALSE )(y)
#define PPMPF_EMPTY_C(...) \
        PPMPF_XOR( PPMPF_EMPTY_3(PPMPF_EMPTY_2 __VA_ARGS__,) \
                 , PPMPF_EMPTY_3(PPMPF_EMPTY_2 __VA_ARGS__) )

/*~
 * @desc Determine whether an argument is a balanced parenthetical enclosure or
 *       any other legal preprocessor token.
 * @pfrg x: token to check whether is or is not a ()
 * @pexp to 1 if it is, to 0 if it is not.
 */
#define PPMPF_ISPRN(x) \
        PPMPF_EMPTY_12(PPMPF_COMMA x)

#endif /* _ODREEX_PPMPF_EMPTY_HH_ */
