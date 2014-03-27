/* --
 * Copyright (C) 2013,2014 George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_PPMPF_COLLECTIONS_SEQUENCE_TYPE_HH_
#define _ODREEX_PPMPF_COLLECTIONS_SEQUENCE_TYPE_HH_

#ifndef _ODREEX_PPMPF_COLLECTIONS_SEQUENCE_FUNCTIONS_HH_
#error ppmpf: <odreex/ppmpf/collections/sequence/functions.hh> must precede.
#endif

#include <odreex/ppmpf/functional/bind.hh>

/*~
 * @desc Internal function for satisfying function dispatch in ppmpf sequences.
 * @pfrg  f: An expression that has to be applied, in the typical format for
 *           ppmpf bound expressions.
 * @pfrg sl: A 2-sequence where first item is the seed, second is the remaining
 *           items within the ppmpf sequence.
 */
#define PPMPF_BDSN5(f,sl,...) \
        (PPMPF_BDS30( PPMPF_TUP_GET(f)             \
                    , PPMPF_DREF(PPMPF_TUP_POP(f)) \
                    , PPMPF_SEQ_GET(PPMPF_DREF(PPMPF_SEQ_POP(sl)))))

/*~
 * @desc The ppmpf sequence collection constructor.
 * @pfrg ...: A sequence of comma separated C99 preprocessor tokens, with the
 *            condition that the last item (if special character sequence) is
 *            followed by the empty preprocessor token (i.e. just a comma after
 *            it, since the empty preprocessor comma  follows exactly after
 *            said comma).
 * @pexp Expands to a ppmpf typeclause with typeid 1.
 */
/* NOTE: PPMPF_SEQUENCE: constructor for ppmpf sequences. */
#define PPMPF_SEQC(...) \
        (PPMPF_IFELSE( PPMPF_TUP_EMPTY((__VA_ARGS__)) \
                     , PPMPF_EMPTY \
                     , PPMPF_UTUP2SEQ)((__VA_ARGS__)),2)
/*~
 * @desc The default, second - level type - dispatching recursive expansion
 *       function metahandler for ppmpf typeclauses, in case of safe tuples
 *       (the type identifier for them is 1).
 * @pexp Expands to an unsafe 3-tuple is with the three functions contained
 *       as dedicated for retrieval, erasure and emptyness check for a given
 *       safe ppmpf tuple.
 */
#define PPMPF_MHD2() \
        ( PPMPF_SEQ_GET, PPMPF_SEQ_POP, PPMPF_SEQ_EMPTY )

/*~
 * @desc Folding pipeline metahandler for the `PPMPF_MAP` high order function
 *       macro, in the case of safe ppmpf tuples.
 * @pexp Expands to a pair of 3-tuples where the first contains the necessary
 *       internals for "folding pipelines" of the `PPMPF_PFLD*` construct
 *       family when a plain function macro identifier is detected, the second
 *       one the ones used in the case of a more complex expression.
 */
#define PPMPF_MAP_MHD2() \
        ( PPMPF_FLDX1Y, PPMPF_FLDX0D, PPMPF_FLDX1X ) \
      , ( PPMPF_BDSN5 , PPMPF_FLDX0D, PPMPF_FLDX1X )

#endif /* _ODREEX_PPMPF_COLLECTIONS_SEQUENCE_TYPE_HH_ */
