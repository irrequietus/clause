/*~
 * Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
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

#ifndef _CLAUSE_PPMPF_COLLECTIONS_SEQUENCE_FUNCTIONS_HH_
#define _CLAUSE_PPMPF_COLLECTIONS_SEQUENCE_FUNCTIONS_HH_

#include <clause/ppmpf/collections/sequence/essence.hh>
#include <clause/ppmpf/algorithms/fold.hh>
#include <clause/ppmpf/algorithms/functional.hh>
#include <clause/ppmpf/collections/sequence/type.hh>

/* NOTE: PPMPF_SEQ_GET: Get the first element of a sequence, enclosed in ().*/
#define PPMPF_SEQ_GET___(x,...) x
#define PPMPF_SEQ_GET__(...) PPMPF_SEQ_GET___(__VA_ARGS__)
#define PPMPF_SEQ_GET_(...) (__VA_ARGS__) ,
#define PPMPF_SEQ_GET(s) PPMPF_SEQ_GET__(PPMPF_SEQ_GET_ s)

/* NOTE:PPMPF_SEQ_POP: Remove the first element, get the rest. */
#define PPMPF_SEQ_POP(s) PPMPF_EMPTY s

/* NOTE: PPMPF_SEQ_EMPTY: Checking for an empty ppmpf sequence. */
#define PPMPF_SEQ_EMPTY(s) \
        PPMPF_XOR( PPMPF_EMPTY_3(PPMPF_EMPTY_2 s,) \
                 , PPMPF_EMPTY_3(PPMPF_EMPTY_2 s) )

/* NOTE: PPMPF_SEQ_FOLDL: high order function performing a left fold over a
 *       ppmpf sequence. */
#define PPMPF_SEQ_FOLDL(f,s,l) \
        PPMPF_FLDX1V( f \
                    , (s)(l) \
                    , PPMPF_SEQ_GET \
                    , PPMPF_SEQ_POP \
                    , PPMPF_SEQ_EMPTY \
                    , PPMPF_FLDX0I \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_SEQ_FOLDL: high order function performing a left fold over a
 *       ppmpf sequence. */
#define PPMPF_SEQ_FOLDL_OF(f,s) \
        PPMPF_FLDX1V( f \
                    , PPMPF_FLDX1W(PPMPF_SEQ_GET, PPMPF_SEQ_POP, s) \
                    , PPMPF_SEQ_GET \
                    , PPMPF_SEQ_POP \
                    , PPMPF_SEQ_EMPTY \
                    , PPMPF_FLDX0I \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_SEQ_REVERSE: reverse a ppmpf sequence. */
#define PPMPF_SEQ_REVERSE(seq) \
        PPMPF_DREF( PPMPF_SEQ_FOLDL( PPMPF_FLDX08 \
                                   , (PPMPF_SEQ_GET(seq)) \
                                   , PPMPF_SEQ_POP(seq)) )

/* NOTE: PPMPF_SEQ_FOLDR: high order function performing a left fold over a
 *       ppmpf sequence. */
#define PPMPF_SEQ_FOLDR(f,s,l) \
        PPMPF_FLDX1V( f \
                    , PPMPF_FLDX1W( PPMPF_SEQ_GET \
                                  , PPMPF_SEQ_POP \
                                  , PPMPF_SEQ_REVERSE((PPMPF_DREF(s))l) ) \
                    , PPMPF_SEQ_GET \
                    , PPMPF_SEQ_POP \
                    , PPMPF_SEQ_EMPTY \
                    , PPMPF_FLDX0O \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_SEQ_FOLDR_OF: high order function performing a right fold over a
 *       ppmpf sequence. */
#define PPMPF_SEQ_FOLDR_OF(f,l) \
        PPMPF_FLDX1V( f \
                    , PPMPF_FLDX1W( PPMPF_SEQ_GET \
                                  , PPMPF_SEQ_POP \
                                  , PPMPF_SEQ_REVERSE(l) ) \
                    , PPMPF_SEQ_GET \
                    , PPMPF_SEQ_POP \
                    , PPMPF_SEQ_EMPTY \
                    , PPMPF_FLDX0O \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_SEQ_SIZEOF(seq) returns the number of sequence members existing
 *       in a given sequence (seq), whitespace separated series of parenthesis
 *       enclosed preprocessor tokens.
 */
#define PPMPF_SEQ_SIZEOF(seq) \
        PPMPF_DREF(PPMPF_SEQ_FOLDL(PPMPF_PLUS__,(PPMPF_IMINV()),seq))

/* NOTE: PPMPF_SEQ2TUP: Convert a ppmpf sequence to a ppmpf tuple. */
#define PPMPF_SEQ2TUP(seq) \
        PPMPF_DREF( \
            PPMPF_SEQ_FOLDL( PPMPF_S3T_ \
                           , ((PPMPF_SEQ_GET(seq))) \
                           , PPMPF_SEQ_POP(seq) ) )

/* NOTE: PPMPF_SEQ2TUP: Convert a ppmpf sequence to an unsafe / raw ppmpf
 *       tuple.
 */
#define PPMPF_SEQ2UTUP(seq) \
        PPMPF_DREF( \
            PPMPF_SEQ_FOLDL( PPMPF_S2T_ \
                           , (PPMPF_SEQ_GET(seq)) \
                           , PPMPF_SEQ_POP(seq) ) )

/* NOTE: PPMPF_SEQ_AT09: Fast access to sequence items with index 0 to 9. */

#define PPMPF_SEQ_AT09(n,s) PPMPF_SEQAUX_(n,s)

/* NOTE: PPMPF_SEQ_MAP: An implementation of the map high order function for
 *       ppmpf sequence constructs.
 */
#define PPMPF_SEQ_MAP(f,s) \
        PPMPF_FLDX0G( f \
                    , ((f(PPMPF_DREF(PPMPF_SEQ_GET(s)))))(PPMPF_SEQ_POP(s)) \
                    , PPMPF_SEQ_GET \
                    , PPMPF_SEQ_POP \
                    , PPMPF_SEQ_EMPTY \
                    , PPMPF_FLDX1Y \
                    , PPMPF_FLDX0D \
                    , PPMPF_FLDX1X, )

#endif /* _CLAUSE_PPMPF_COLLECTIONS_SEQUENCE_FUNCTIONS_HH_ */
