/*~
 * Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
 * 
 * This file is part of 'clause', a highly generic C++ meta-programming library,
 * subject to the terms and conditions of the Mozilla Public License v 2.0. If
 * a copy of the MPLv2 license text was not distributed with this file, you can
 * obtain it at: http://mozilla.org/MPL/2.0/.
 * 
 * The 'clause' library is an experimental library in active development with
 * a source code repository at: https://github.com/irrequietus/clause.git and
 * issue tracker at https://github.com/irrequietus/clause/issues.
 * 
 */

#ifndef _CLAUSE_PPMPF_COLLECTIONS_TUPLE_ESSENCE_HH_
#define _CLAUSE_PPMPF_COLLECTIONS_TUPLE_ESSENCE_HH_

#ifndef _CLAUSE_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH_
#error ppmpf: <clause/ppmpf/collections/tuple/functions.hh> must precede.
#endif

/* Assistive macro for tuple -> sequence conversion. */
#define PPMPF_T2S_(a,b) PPMPF_JUST(a)(b)

/* Assistive macro function, for raw tuple macro "splitting" */
#define PPMPF_TUP_SPLIT__(x,...) x,(__VA_ARGS__)
#define PPMPF_TUP_SPLIT___(...) __VA_ARGS__()
#define PPMPF_TUP_SPLIT_(...) \
        PPMPF_IFELSE( PPMPF_TUP_EMPTY(PPMPF_TUP_POP((__VA_ARGS__))) \
                    , PPMPF_TUP_SPLIT___ \
                    , PPMPF_TUP_SPLIT__)(__VA_ARGS__)

#define PPMPF_UTUP_FOLDR_(f,t) \
        PPMPF_FLDX1V( f \
                    , (PPMPF_UTUP_GET(t))(PPMPF_TUP_POP(t)) \
                    , PPMPF_UTUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0O \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

#define PPMPF_TUP_FOLDR_(f,t) \
        PPMPF_FLDX1V( f \
                    , (PPMPF_TUP_GET(t))(PPMPF_TUP_POP(t)) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0O \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

#define PPMPF_TUP_REVERSE_(tup) \
        (PPMPF_DREF(PPMPF_UTUP_FOLDL_OF(PPMPF_FLDRT_, \
                    PPMPF_TUP_POP(tup))),PPMPF_DREF(PPMPF_UTUP_GET(tup)))

#endif /* _CLAUSE_PPMPF_COLLECTIONS_TUPLE_ESSENCE_HH_ */
