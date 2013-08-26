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

#ifndef _ODREEX_PPMPF_FOLD_HH_
#define _ODREEX_PPMPF_FOLD_HH_

#include <odreex/ppmpf/base.hh>

/* Assistive macro */
#define PPMPF_FLDT(b,n,sl) PPMPF_IFELSE(b,sl PPMPF_EMPTY, PPMPF_0F ## n)

/* NOTE: Macro infrastructure for implementing preprocessor based "folding".
 * As with repeats, recursion depth internals are implemented in such a manner
 * as to allow for folding over 10000 elements as a maximum limit. */
#define PPMPF_0FZ(f,sl,g,p,h,d,m) sl

/* NOTE: PPMPF_0F* - macro framework component for folding (0) */
#define PPMPF_0F0(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),Z,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

#define PPMPF_0F1(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),0,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

#define PPMPF_0F2(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),1,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

#define PPMPF_0F3(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),2,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

#define PPMPF_0F4(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),3,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

#define PPMPF_0F5(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),4,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

#define PPMPF_0F6(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),5,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

#define PPMPF_0F7(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),6,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

#define PPMPF_0F8(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),7,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

#define PPMPF_0F9(f,sl,g,p,h,d,m) \
        m(h(PPMPF_DREF(PPMPF_SEQPOP(sl))),8,sl)\
            (f,(f( d(PPMPF_SEQGET(sl)) \
                 , d(PPMPF_SEQGET(PPMPF_DREF(PPMPF_SEQPOP(sl)))))) \
         (PPMPF_SEQPOP(PPMPF_DREF(PPMPF_SEQPOP(sl)))),g,p,h,d,m)

/* NOTE: PPMPF_1F* - macro framework component for folding (1) */
#define PPMPF_1F0(f,sl,g,p,h,d,m) \
        PPMPF_0F9(f,sl,g,p,h,d,m)
#define PPMPF_1F1(f,sl,g,p,h,d,m) \
        PPMPF_1F0(f,PPMPF_0F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_1F2(f,sl,g,p,h,d,m) \
        PPMPF_1F1(f,PPMPF_0F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_1F3(f,sl,g,p,h,d,m) \
        PPMPF_1F2(f,PPMPF_0F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_1F4(f,sl,g,p,h,d,m) \
        PPMPF_1F3(f,PPMPF_0F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_1F5(f,sl,g,p,h,d,m) \
        PPMPF_1F4(f,PPMPF_0F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_1F6(f,sl,g,p,h,d,m) \
        PPMPF_1F5(f,PPMPF_0F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_1F7(f,sl,g,p,h,d,m) \
        PPMPF_1F6(f,PPMPF_0F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_1F8(f,sl,g,p,h,d,m) \
        PPMPF_1F7(f,PPMPF_0F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_1F9(f,sl,g,p,h,d,m) \
        PPMPF_1F8(f,PPMPF_0F9(f,sl,g,p,h,d,m),g,p,h,d,m)

/* NOTE: PPMPF_2F* - macro framework component for folding (2) */
#define PPMPF_2F0(f,sl,g,p,h,d,m) \
        PPMPF_1F9(f,sl,g,p,h,d,m)
#define PPMPF_2F1(f,sl,g,p,h,d,m) \
        PPMPF_2F0(f,PPMPF_1F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_2F2(f,sl,g,p,h,d,m) \
        PPMPF_2F1(f,PPMPF_1F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_2F3(f,sl,g,p,h,d,m) \
        PPMPF_2F2(f,PPMPF_1F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_2F4(f,sl,g,p,h,d,m) \
        PPMPF_2F3(f,PPMPF_1F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_2F5(f,sl,g,p,h,d,m) \
        PPMPF_2F4(f,PPMPF_1F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_2F6(f,sl,g,p,h,d,m) \
        PPMPF_2F5(f,PPMPF_1F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_2F7(f,sl,g,p,h,d,m) \
        PPMPF_2F6(f,PPMPF_1F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_2F8(f,sl,g,p,h,d,m) \
        PPMPF_2F7(f,PPMPF_1F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_2F9(f,sl,g,p,h,d,m) \
        PPMPF_2F8(f,PPMPF_1F9(f,sl,g,p,h,d,m),g,p,h,d,m)

/* NOTE: PPMPF_3F* - macro framework component for folding (3) */
#define PPMPF_3F0(f,sl,g,p,h,d,m) \
        PPMPF_2F9(f,sl,g,p,h,d,m)
#define PPMPF_3F1(f,sl,g,p,h,d,m) \
        PPMPF_3F0(f,PPMPF_2F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_3F2(f,sl,g,p,h,d,m) \
        PPMPF_3F1(f,PPMPF_2F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_3F3(f,sl,g,p,h,d,m) \
        PPMPF_3F2(f,PPMPF_2F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_3F4(f,sl,g,p,h,d,m) \
        PPMPF_3F3(f,PPMPF_2F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_3F5(f,sl,g,p,h,d,m) \
        PPMPF_3F4(f,PPMPF_2F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_3F6(f,sl,g,p,h,d,m) \
        PPMPF_3F5(f,PPMPF_2F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_3F7(f,sl,g,p,h,d,m) \
        PPMPF_3F6(f,PPMPF_2F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_3F8(f,sl,g,p,h,d,m) \
        PPMPF_3F7(f,PPMPF_2F9(f,sl,g,p,h,d,m),g,p,h,d,m)
#define PPMPF_3F9(f,sl,g,p,h,d,m) \
        PPMPF_3F8(f,PPMPF_2F9(f,sl,g,p,h,d,m),g,p,h,d,m)

#endif /* _ODREEX_PPMPF_FOLD_HH_ */
