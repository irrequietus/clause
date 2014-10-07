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

#ifndef _CLAUSE_PPMPF_FUNCTIONAL_BIND_HH_
#define _CLAUSE_PPMPF_FUNCTIONAL_BIND_HH_

#include <clause/ppmpf/functional/bind/base.hh>
#include <clause/ppmpf/functional/bind/internals.hh>

/*~
 * @desc A prototype for a new kind of function binder; this should be the
 *       conceptual base upon which the new implementation of PPMPF_TUP_BIND
 *       and PPMPF_SEQ_BIND should be based on.
 * @pfrg f: A preprocessor function macro identifier, for an n-ary function
 *          macro to be used during binding.
 * @pfrg x: A two item ppmpf sequence containing on its first item either of
 *          _0, __0 placeholders for specifying parenthetical enclosure of the
 *          application of f to its arguments or not, respectively. The second
 *          item is a comma separated sequence of identifiers within ranges of
 *          [_1,_9], [__1,__9] and any amount of _(...) containers representing
 *          "constants" to be applied at the given ordinal position.
 *           
 *          Depending on whether single or double underscore placeholders have
 *          been chosen, removal of parenthetical enclosure is performed or
 *          not, respectively.
 * @pfrg y: A safe ppmpf tuple of arguments that are to be passed to the macro
 *          resulting from the "binding" operation.
 * @pexp The result of the function application according to the binding
 *       signature semantics.
 */
#define PPMPF_BDS22(f,x,y) \
        PPMPF_CAT( PPMPF_BDX \
                 , PPMPF_DPAR(PPMPF_SEQ_GET(x)))()( \
                    PPMPF_BDS21( f \
                               , PPMPF_BDS20(PPMPF_SEQ_POP(x)),y))

/*~
 * @desc This is the more useful version of PPMPF_BDS22 for deployment during
 *       high order function emulation through recursive expansion constructs.
 * @pfrg f: A preprocessor function macro identifier, for an n-ary function
 *          macro to be used during binding.
 * @pfrg r: A preprocessor function macro identifier which is either PPMPF_JUST
 *          or PPMPF_ENCLOSE.
 * @pfrg x: A safe ppmpf tuple of the internal accessors after these have been
 *          derived from an initial comma separated sequence of placeholders
 *          in ranges [_1,_9] and [__1,__9] and any amount of _(...) "constants"
 *          used.
 * @pfrg y: A safe ppmpf tuple of the arguments that should be passed to the
 *          "bound" function macro.
 * @pexp The result of the function application according to the binding
 *       signature semantics.
 */
#define PPMPF_BDS23(f,r,x,y,z) \
        r(PPMPF_APPLY(f,PPMPF_DREF(PPMPF_BDS11(x,y,z))))

/*~
 * @desc Parsing the "signature" part of the "binding" ppmpf macro instruction.
 *       This is going to be used to introduce binding in the high order
 *       function emulations.
 * 
 * @pfrg x: A two item sequence where first item is either _0 or __0 of
 *           the ppmpf placeholders, second is a comma separated sequence of
 *           any of the remaining placeholders and / or _(...) "constants".
 * @pexp A sequence of comma separated tokens where the first is either of
 *       two preprocessor function macro identifiers (PPMPF_ENCLOSE,PPMPF_JUST),
 *       the second a safe ppmpf tuple of the metafunction macro identifiers
 *       replacing the placeholders used and the final third a raw tuple of
 *       the constants used in _(...) during the binding operation.
 */
#define PPMPF_BDS24(x) \
        PPMPF_CAT( PPMPF_BDX \
                 , PPMPF_DREF(PPMPF_SEQ_GET(x)))() \
      , PPMPF_BDS20(PPMPF_SEQ_POP(x))

#define PPMPF_BDS25(x) \
        PPMPF_DREF(PPMPF_UTUP_GET(x)) \
      , PPMPF_BDS24(PPMPF_DREF(PPMPF_TUP_POP(x)))

/*~
 * @desc This is a prototype for a ppmpf high order map function that accepts
 *       ppmpf "bind" expressions only. This is the base upon which solutions
 *       existing for demonstrative reasons (current PPMPF_TUP_BIND and
 *       PPMPF_UTUP_BIND) are to be deprecated.
 * @pfrg f: the ppmpf "bind" expression.
 * @pfrg t: a safe / unsafe ppmpf tuple for each member of which the f "bound"
 *          expression is applied.
 * @note More documentation is needed after PPMPF_BDS31 completes its role as
 *       a proof of concept prototype. Tests can be found in the usual folder,
 *       i.e. test file is tests/ppmpf/bds31.cc, make target for just testing
 *       that is make just ppmpf/bds31.cc
 */
#define PPMPF_BDS31(f,t) \
        PPMPF_PFLD1( f \
                   , (())(t) \
                   , PPMPF_TUP_GET \
                   , PPMPF_TUP_POP \
                   , PPMPF_UTUP_EMPTY \
                   , PPMPF_BDSN4 \
                   , PPMPF_FLDX0D \
                   , PPMPF_BDSN2, )
/*~
 * @desc The true implementation of a partial applicator for use outside high
 *       order function internals.
 * @pfrg fexp: a ppmpf function expression.
 * @pfrg  ...: a series of arguments to which the ppmpf function expression
 *             placeholders refer to.
 * @pexp The application of fexp over the series of arguments passed.
 */
#define PPMPF_BIND(fexp,...) \
        PPMPF_BIND_0( (PPMPF_QTAT(0,fexp) \
                    , PPMPF_BDS20(PPMPF_QTAT(1,fexp))) \
                    , (__VA_ARGS__,))

#define PPMPF_BIND_0(x,y) \
        PPMPF_BIND_1( PPMPF_QTAT(0,x) \
                    , PPMPF_QTAT(1,x) \
                    , PPMPF_QTAT(2,x) \
                    , PPMPF_QTAT(3,x) \
                    , y )

#define PPMPF_BIND_1(a,b,c,d,e) \
        PPMPF_BDS23(a,b,c,d,e)

#endif /* _CLAUSE_PPMPF_FUNCTIONAL_BIND_HH_ */
