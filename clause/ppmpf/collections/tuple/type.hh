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

#ifndef CLAUSE_PPMPF_COLLECTIONS_TUPLE_TYPE_HH
#define CLAUSE_PPMPF_COLLECTIONS_TUPLE_TYPE_HH

#ifndef CLAUSE_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH
#error ppmpf: <clause/ppmpf/collections/tuple/functions.hh> must precede.
#endif

#include <clause/ppmpf/functional/bind.hh>

/*~
 * @desc The unsafe ppmpf tuple collection constructor.
 * @pfrg ...: A sequence of comma separated C99 preprocessor tokens, with the
 *            condition that the last item (if special character sequence) is
 *            followed by the empty preprocessor token (i.e. just a comma after
 *            it, since the empty preprocessor comma  follows exactly after
 *            said comma).
 * @pexp Expands to a ppmpf typeclause with typeid 0.
 *
 */
#define PPMPF_UTUP(...) \
        ((__VA_ARGS__),0)

/*~
 * @desc The safe ppmpf tuple collection constructor.
 * @pfrg ...: A sequence of comma separated C99 preprocessor tokens, with the
 *            condition that the last item (if special character sequence) is
 *            followed by the empty preprocessor token (i.e. just a comma after
 *            it, since the empty preprocessor comma  follows exactly after
 *            said comma).
 * @pexp Expands to a ppmpf typeclause with typeid 1.
 */
#define PPMPF_STUP(...) \
        (PPMPF_IFELSE( PPMPF_TUP_EMPTY((__VA_ARGS__)) \
                     , PPMPF_UNIT \
                     , PPMPF_FLDX1V) \
         (, (())((__VA_ARGS__)), PPMPF_UTUP_GET   \
                               , PPMPF_TUP_POP    \
                               , PPMPF_UTUP_EMPTY \
                               , PPMPF_FLDX1T     \
                               , PPMPF_FLDX0D     \
                               , PPMPF_FLDX22, ),1)

/*~
 * @desc The default, first - level type - dispatching recursive expansion
 *       function metahandler for ppmpf typeclauses.
 * @pfrg n: Digit [0-9] representing the type identifier entry of a given ppmpf
 *          typeclause.
 * @pexp Expands to PPMPF_MHD0 or PPMPF_MHD1 or ... or PPMPF_MHD9 depending on
 *       which type identifier is used. Each of these expansions refers to a
 *       function macro that is invocable with the empty preprocessor token.
 *       Once the resulting function macro is invoked, an unsafe 3-tuple is
 *       returned with the three functions dedicated for retrieval, erasure and
 *       emptyness check for a given ppmpf collection.
 */
#define PPMPF_MHD(n) \
        PPMPF_CAT(PPMPF_MHD,n)

/*~
 * @desc The default, second - level type - dispatching recursive expansion
 *       function metahandler for ppmpf typeclauses, in case of unsafe tuples
 *       (the type identifier for them is 0).
 * @pexp Expands to an unsafe 3-tuple is with the three functions contained
 *       as dedicated for retrieval, erasure and emptyness check for a given
 *       unsafe ppmpf tuple.
 */
#define PPMPF_MHD0() \
        ( PPMPF_UTUP_GET, PPMPF_TUP_POP, PPMPF_UTUP_EMPTY )

/*~
 * @desc The default, second - level type - dispatching recursive expansion
 *       function metahandler for ppmpf typeclauses, in case of safe tuples
 *       (the type identifier for them is 1).
 * @pexp Expands to an unsafe 3-tuple is with the three functions contained
 *       as dedicated for retrieval, erasure and emptyness check for a given
 *       safe ppmpf tuple.
 */
#define PPMPF_MHD1() \
        ( PPMPF_TUP_GET, PPMPF_TUP_POP, PPMPF_TUP_EMPTY )

/*~
 * @desc The default, third - level function - dispatching recursive expansion
 *       function metahandler for ppmpf typeclauses, for the `PPMPF_MAP` high
 *       order function macro. This metahandler deals with partial application,
 *       function "binding" semantics as well as the regular, plain function
 *       macro identifiers used in `PPMPF_MAP`.
 * @pfrg n: Digit [0-9] representing the type identifier entry of a given ppmpf
 *          typeclause.
 * @pexp Expands to PPMPF_MAP_MHD0 or PPMPF_MAP_MHD1 or ... or PPMPF_MAP_MHD9
 *       depending on which type identifier is used. Each of these expansions
 *       refers to a function macro that is invocable with the empty
 *       preprocessor token. Once the resulting function macro is invoked, it
 *       expands to two unsafe 3-tuples. The first 3-tuple is used in the
 *       "folding pipeline" of the `PPMPF_PFLD*` for when a plain function
 *       macro identifier has been detected, the second when it is the case for
 *       a complex expression.
 */
#define PPMPF_MAP_MHD(n) \
        PPMPF_CAT(PPMPF_MAP_MHD,n)

/*~
 * @desc Folding pipeline metahandler for the `PPMPF_MAP` high order function
 *       macro, in the case of unsafe ppmpf tuples.
 * @pexp Expands to a pair of 3-tuples where the first contains the necessary
 *       internals for "folding pipelines" of the `PPMPF_PFLD*` construct
 *       family when a plain function macro identifier is detected, the second
 *       one the ones used in the case of a more complex expression.
 */
#define PPMPF_MAP_MHD0() \
        ( PPMPF_FLDX1T, PPMPF_FLDX0D , PPMPF_FLDX22 ) \
      , ( PPMPF_BDSN4 , PPMPF_FLDX0D , PPMPF_BDSN2 )

/*~
 * @desc Folding pipeline metahandler for the `PPMPF_MAP` high order function
 *       macro, in the case of safe ppmpf tuples.
 * @pexp Expands to a pair of 3-tuples where the first contains the necessary
 *       internals for "folding pipelines" of the `PPMPF_PFLD*` construct
 *       family when a plain function macro identifier is detected, the second
 *       one the ones used in the case of a more complex expression.
 */
#define PPMPF_MAP_MHD1() \
        ( PPMPF_FLDX0E, PPMPF_FLDX0D, PPMPF_FLDX0H ) \
      , ( PPMPF_BDSN4 , PPMPF_FLDX0D, PPMPF_BDSN2 )

#endif /* CLAUSE_PPMPF_COLLECTIONS_TUPLE_TYPE_HH */
