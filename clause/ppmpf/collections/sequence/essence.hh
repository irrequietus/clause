/*~
 * Copyright (C) 2013 - 2016 George Makrydakis <george@irrequietus.eu>
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

#ifndef CLAUSE_PPMPF_COLLECTIONS_SEQUENCE_ESSENCE_HH
#define CLAUSE_PPMPF_COLLECTIONS_SEQUENCE_ESSENCE_HH

#ifndef CLAUSE_PPMPF_COLLECTIONS_SEQUENCE_FUNCTIONS_HH
#error ppmpf: <clause/ppmpf/collections/sequence/functions.hh> must precede.
#endif

#define PPMPF_S2T_(a,b) (PPMPF_DREF(a),b)

#define PPMPF_S3T_(a,b) (PPMPF_DREF(a),(b))

#define PPMPF_SMAP_AUX1(f,s) \
        PPMPF_IFELSE( PPMPF_SEQ_EMPTY(s) \
                    , ()\
                    , (PPMPF_APPLY(f,PPMPF_DREF(PPMPF_SEQ_GET(s)))))

#define PPMPF_SEQ_FOLD_(f,s,l,i) \
        PPMPF_FOLD_( PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , PPMPF_FOLD_DFUNC \
                                 , PPMPF_JUST )(f) \
                   , s \
                   , l \
                   , PPMPF_SEQ_GET \
                   , PPMPF_SEQ_POP \
                   , PPMPF_SEQ_EMPTY \
                   , PPMPF_FLDT \
                   , PPMPF_CAT(PPMPF_3F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_2F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_1F,PPMPF_PNX(9)) \
                   , PPMPF_CAT(PPMPF_0F,PPMPF_PNX(9)) \
                   , PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , i##_ \
                                 , i ) \
                   , PPMPF_IFELSE( PPMPF_EMPTY_10(PPMPF_COMMA f) \
                                 , PPMPF_FOLD_DWRAP \
                                 , PPMPF_JUST )(f), )

#define PPMPF_SEQ_FOLDR__(f,l) \
        PPMPF_SEQ_GET( PPMPF_SEQ_FOLD_( f \
                                      , PPMPF_SEQ_GET(l) \
                                      , PPMPF_SEQ_POP(l) \
                                      , PPMPF_FLDAR ) )
#define PPMPF_FLDMS_(f,sl,g,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(sl))\
(PPMPF_APPLY(f, PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))))

#define PPMPF_SEQAUX_(n,x) PPMPF_CAT(PPMPF_SEQAUX_,n)(x)
#define PPMPF_SEQAUX_9(x) PPMPF_SEQAUX_8(PPMPF_SEQ_POP(x))
#define PPMPF_SEQAUX_8(x) PPMPF_SEQAUX_7(PPMPF_SEQ_POP(x))
#define PPMPF_SEQAUX_7(x) PPMPF_SEQAUX_6(PPMPF_SEQ_POP(x))
#define PPMPF_SEQAUX_6(x) PPMPF_SEQAUX_5(PPMPF_SEQ_POP(x))
#define PPMPF_SEQAUX_5(x) PPMPF_SEQAUX_4(PPMPF_SEQ_POP(x))
#define PPMPF_SEQAUX_4(x) PPMPF_SEQAUX_3(PPMPF_SEQ_POP(x))
#define PPMPF_SEQAUX_3(x) PPMPF_SEQAUX_2(PPMPF_SEQ_POP(x))
#define PPMPF_SEQAUX_2(x) PPMPF_SEQAUX_1(PPMPF_SEQ_POP(x))
#define PPMPF_SEQAUX_1(x) PPMPF_SEQAUX_0(PPMPF_SEQ_POP(x))
#define PPMPF_SEQAUX_0(x) PPMPF_SEQ_GET(x)


#endif /* CLAUSE_PPMPF_COLLECTIONS_SEQUENCE_ESSENCE_HH */
