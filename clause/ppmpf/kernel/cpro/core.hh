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

#ifndef CLAUSE_PPMPF_KERNEL_CPRO_CORE_HH
#define CLAUSE_PPMPF_KERNEL_CPRO_CORE_HH

#include <clause/ppmpf/kernel/cpro/limits.hh>


/*~
 * @desc Given a digit [0,9] get the previous one.
 * @pfrg n: the digit for which to get its previous one.
 * @pexp To the previous digit; if it is 0, expand to Z.
 */
#define PPMPF_PNX(n) \
        PPMPF_CAT(PPMPF_NX, n)()
#define PPMPF_NX0()  Z
#define PPMPF_NX1()  0
#define PPMPF_NX2()  1
#define PPMPF_NX3()  2
#define PPMPF_NX4()  3
#define PPMPF_NX5()  4
#define PPMPF_NX6()  5
#define PPMPF_NX7()  6
#define PPMPF_NX8()  7
#define PPMPF_NX9()  8
#define PPMPF_NX10() 9

/*~
 * @desc Given a digit [0,9] get the next one.
 * @pfrg n: the digit for which to get its next one.
 * @pexp To the next digit; if it is 9, expand to Z.
 */
#define PPMPF_NNX(n) \
        PPMPF_CAT(PPMPF_MX, n)()
#define PPMPF_MXZ()  0
#define PPMPF_MX0()  1
#define PPMPF_MX1()  2
#define PPMPF_MX2()  3
#define PPMPF_MX3()  4
#define PPMPF_MX4()  5
#define PPMPF_MX5()  6
#define PPMPF_MX6()  7
#define PPMPF_MX7()  8
#define PPMPF_MX8()  9
#define PPMPF_MX9()  Z

/*~
 * @desc A function macro always expanding to 1
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Always to 1.
 */
#define PPMPF_TRUE(...) 1

/*~
 * @desc A function macro always expanding to 0
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Always to 0.
 */
#define PPMPF_FALSE(...) 0

/*~
 * @desc A function macro for enclosing in quotes any comma separated sequence
 *       of preprocessor tokens.
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Double - quotes delimited string.
 */
#define PPMPF_QUOTE(...) PPMPF_QUOTE_(__VA_ARGS__)
#define PPMPF_QUOTE_(...) # __VA_ARGS__

/* NOTE: PPMPF_COMMA and PPMPF_WSPC are just , and whitespace respectively.
 * The PPMPF_EMPTY macro expands to nothing, PPMPF_JUST to its arguments and
 * PPMPF_UNIT() to a unit i.e. (). */

/*~
 * @desc A function macro always expanding to a single comma.
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Always to a single comma.
 */
#define PPMPF_COMMA(...) ,

/*~
 * @desc A function macro always expanding to a single whitespace.
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Always to a single whitespace.
 */
#define PPMPF_WSPC(...) /**/

/*~
 * @desc A function macro always expanding to the empty preprocessor token.
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Always to an empty preprocessor token.
 */
#define PPMPF_EMPTY(...)

/*~
 * @desc A function macro always expanding to a balanced parenthetical
 *       enclosure.
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Always to a balanced parenthetical enclosure.
 */
#define PPMPF_UNIT(...) ()

/*~
 * @desc A function macro always expanding to the preprocessor tokens it is
 *       handed.
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Always to the preprocessor tokens used as arguments.
 */
#define PPMPF_JUST(...) __VA_ARGS__

/*~
 * @desc A function macro always expanding to the preprocessor tokens it is
 *       handed. This is a duplicate of `PPMPF_JUST`
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Always to the preprocessor tokens used as arguments.
 */
#define PPMPF_JUSX(...) __VA_ARGS__

/*~
 * @desc "Dereference" a preprocessor token from a parenthetical its enclosure.
 * @pfrg x: argument representing a single, parenthesis enclosed preprocessor
 *          token.
 * @pexp To the contents of the balanced parenthetical enclosure.
 */
#define PPMPF_DREF(x) \
        PPMPF_DREF_(x)
#define PPMPF_DREF_(...) \
        PPMPF_JUST __VA_ARGS__


/*~
 * @desc "Dereference" a preprocessor token from a parenthetical its enclosure.
 *       This is a reimplementation of the `PPMPF_DREF`
 * @pfrg x: argument representing a single, parenthesis enclosed preprocessor
 *          token.
 * @pexp To the contents of the balanced parenthetical enclosure.
 */
#define PPMPF_DPAR(x) \
        PPMPF_DREF(x)

/*~
 * @desc Invoke a function macro with a series of preprocessor tokens.
 * @pfrg   f: An n-ary function macro.
 * @pfrg ...: A comma separated sequence of preprocessor tokens.
 * @pexp To the expansion of f(__VA_ARGS__).
 */
#define PPMPF_APPLY(f,...) \
        PPMPF_APPLY_(f,__VA_ARGS__)
#define PPMPF_APPLY__(f,...) \
        f(__VA_ARGS__)
#define PPMPF_APPLY_(f,...) \
        PPMPF_APPLY__(f,__VA_ARGS__)

/*~
 * @desc A function macro enclosing any number of preprocessor tokens within
 *       a balanced parenthesis.
 * @pfrg ...: any comma separated sequence of preprocessor tokens.
 * @pexp Always to (__VA_ARGS__)
 */
#define PPMPF_ENCLOSE(...) \
        (__VA_ARGS__)

/*~
 * @desc Concatenate two arguments.
 * @pfrg x: any valid preprocessor token.
 * @pfrg y: any valid preprocessor token.
 * @pexp Always expands to x##y if and only if x##y is a valid token itself.
 */
#define PPMPF_CAT(x,y) \
        PPMPF_CAT_1(x,y)
#define PPMPF_CAT_1(x,y) \
        PPMPF_CAT_2(x,y)
#define PPMPF_CAT_2(x,y) \
        PPMPF_CAT_3( x ## y )
#define PPMPF_CAT_3(x) x

/*~
 * @desc A simple if - else - then ternary macro.
 * @pfrg n: A preprocessor token that is either 0 (false) or 1 (true).
 * @pfrg t: Any valid preprocessor token.
 * @pfrg e: Any valid preprocessor token.
 * @pexp Expands to `t` it `n` is 1, else expands to `e`.
 */
#define PPMPF_IFELSE_0(t,e) e
#define PPMPF_IFELSE_1(t,e) t
#define PPMPF_IFELSE(n,t,e) \
        PPMPF_CAT(PPMPF_IFELSE_,n)(t,e)

/*~
 * @desc Logical AND applied to two arguments of values either 0 or 1.
 * @pfrg x: a macro argument that is strictly 0 or 1.
 * @pfrg y: a macro argument that is strictly 0 or 1.
 * @pexp Respects logical AND truth table.
 */
#define PPMPF_AND(x,y) \
        PPMPF_CAT(PPMPF_CAT(PPMPF_AND_, x), y)()
#define PPMPF_AND_11() 1
#define PPMPF_AND_00() 0
#define PPMPF_AND_10() 0
#define PPMPF_AND_01() 0

/*~
 * @desc Logical NAND applied to two arguments of values either 0 or 1.
 * @pfrg x: a macro argument that is strictly 0 or 1.
 * @pfrg y: a macro argument that is strictly 0 or 1.
 * @pexp Respects logical NAND truth table.
 */
#define PPMPF_NAND(x,y) \
        PPMPF_CAT(PPMPF_CAT(PPMPF_NAND_, x), y)()
#define PPMPF_NAND_11() 0
#define PPMPF_NAND_00() 1
#define PPMPF_NAND_10() 1
#define PPMPF_NAND_01() 1

/*~
 * @desc Logical OR applied to two arguments of values either 0 or 1.
 * @pfrg x: a macro argument that is strictly 0 or 1.
 * @pfrg y: a macro argument that is strictly 0 or 1.
 * @pexp Respects logical OR truth table.
 */
#define PPMPF_OR(x,y) \
        PPMPF_CAT(PPMPF_CAT(PPMPF_OR_, x), y)()
#define PPMPF_OR_11() 1
#define PPMPF_OR_00() 0
#define PPMPF_OR_10() 1
#define PPMPF_OR_01() 1

/*~
 * @desc Logical NOR applied to two arguments of values either 0 or 1.
 * @pfrg x: a macro argument that is strictly 0 or 1.
 * @pfrg y: a macro argument that is strictly 0 or 1.
 * @pexp Respects logical NOR truth table.
 */
#define PPMPF_NOR(x,y) \
        PPMPF_CAT(PPMPF_CAT(PPMPF_NOR_, x), y)()
#define PPMPF_NOR_11() 0
#define PPMPF_NOR_00() 1
#define PPMPF_NOR_10() 0
#define PPMPF_NOR_01() 0

/*~
 * @desc Logical XOR applied to two arguments of values either 0 or 1.
 * @pfrg x: a macro argument that is strictly 0 or 1.
 * @pfrg y: a macro argument that is strictly 0 or 1.
 * @pexp Respects logical XOR truth table.
 */
#define PPMPF_XOR(x,y) \
        PPMPF_CAT(PPMPF_CAT(PPMPF_XOR_, x), y)()
#define PPMPF_XOR_11() 0
#define PPMPF_XOR_00() 0
#define PPMPF_XOR_10() 1
#define PPMPF_XOR_01() 1

/*~
 * @desc Logical XNOR applied to two arguments of values either 0 or 1.
 * @pfrg x: a macro argument that is strictly 0 or 1.
 * @pfrg y: a macro argument that is strictly 0 or 1.
 * @pexp Respects logical XNOR truth table.
 */
#define PPMPF_XNOR(x,y) \
        PPMPF_CAT(PPMPF_CAT(PPMPF_XNOR_, x), y)()
#define PPMPF_XNOR_11() 1
#define PPMPF_XNOR_00() 1
#define PPMPF_XNOR_10() 0
#define PPMPF_XNOR_01() 0

/*~
 * @desc Logical NOT applied on a 0 / 1 argument.
 * @pfrg x: a macro argument that is strictly 0 or 1.
 * @pexp Logical NOT of x.
 */
#define PPMPF_NOT(x) \
        PPMPF_CAT(PPMPF_NOT_, x)()
#define PPMPF_NOT_1() 0
#define PPMPF_NOT_0() 1

/*~
 * @pgrp PPMPF_EMPTY_*
 * @desc A series of macro constructs dedicated to detecting whether the empty
 *       preprocessor token is the one being used as an argument. The main
 *       problem with empty token detection is that when function macro
 *       identifiers or other particular character combinations are used in
 *       preprocessor tokens, these may cause trouble in detecting whether
 *       the empty token is actually the single token involved. These constructs
 *       provide a base to build a more versatile detection facility, such that
 *       when function macro identifiers are used as the single or the last
 *       token passed to a function, counting said argument does not cause an
 *       error.
 * @pexp Variable, depending on `PPMPF_EMPTY_` member.
 */
#define PPMPF_EMPTY_0(...) (,)
#define PPMPF_EMPTY_1(...) (,) ,
#define PPMPF_EMPTY_2(...) ()
#define PPMPF_EMPTY_3(...) \
        PPMPF_EMPTY_4(PPMPF_EMPTY_1 __VA_ARGS__ (,),)
#define PPMPF_EMPTY_4(a,...) \
        PPMPF_EMPTY_5(PPMPF_EMPTY_0  a)
#define PPMPF_EMPTY_5(...) \
        PPMPF_EMPTY_6(PPMPF_COMMA __VA_ARGS__)
#define PPMPF_EMPTY_6(...) \
        PPMPF_EMPTY_7(__VA_ARGS__)
#define PPMPF_EMPTY_7(...) \
        PPMPF_EMPTY_8(__VA_ARGS__,1,1,0,)
#define PPMPF_EMPTY_8(...) \
        PPMPF_EMPTY_9(__VA_ARGS__)
#define PPMPF_EMPTY_9(a,b,c,n,...) n
#define PPMPF_EMPTY_10(...) \
        PPMPF_EMPTY_11(__VA_ARGS__,1,0,0)
#define PPMPF_EMPTY_11(a,b,n,...) n
#define PPMPF_EMPTY_12(x) \
        PPMPF_EMPTY_10(PPMPF_COMMA x)
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
#define PPMPF__PPMPF_EMPTY____ /**/

/*~
 * @desc Determine whether an argument is a balanced parenthetical enclosure or
 *       any other legal preprocessor token.
 * @pfrg x: token to check whether is or is not a ()
 * @pexp to 1 if it is, to 0 if it is not.
 */
#define PPMPF_ISPRN(x) \
        PPMPF_EMPTY_12(PPMPF_COMMA x)

/*~
 * @desc A fast way to access the items from a comma separated sequence of
 *       preprocessor tokens. This is related to `PPMPF_TUP_ATPOS` only that
 *       it is less 'secure' and limited to the first 10 items.
 * @pfrg n: index in range [0,9] for accessing in comma separated tokens that
 *          are enclosed by balanced parenthesis.
 * @pexp Expands to the token at index `n`, provided that is a valid index.
 */
#define PPMPF_QTAT(n,x) \
        PPMPF_QTATZ(n,PPMPF_DREF(x))
#define PPMPF_QTATZ(n,...) \
        PPMPF_CAT(PPMPF_QTAT,n)(__VA_ARGS__,)
#define PPMPF_QTAT0(x0,...) x0
#define PPMPF_QTAT1(x0,x1,...) x1
#define PPMPF_QTAT2(x0,x1,x2,...) x2
#define PPMPF_QTAT3(x0,x1,x2,x3,...) x3
#define PPMPF_QTAT4(x0,x1,x2,x3,x4,...) x4
#define PPMPF_QTAT5(x0,x1,x2,x3,x4,x5,...) x5
#define PPMPF_QTAT6(x0,x1,x2,x3,x4,x5,x6,...) x6
#define PPMPF_QTAT7(x0,x1,x2,x3,x4,x5,x6,x7,...) x7
#define PPMPF_QTAT8(x0,x1,x2,x3,x4,x5,x6,x7,x8,...) x8
#define PPMPF_QTAT9(x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,...) x9

/*~
 * @term `ppmpf typeclause`: This refers to a 2-tuple (pair) consisting of a
 *       `ppmpf collection` (tuple, sequence) and a decimal number following it
 *       that serves as a type identifier, referred to as typeid. Typeclauses
 *       are a sort of an agreement between the programmer and ppmpf internals
 *       that serve for implementing "overloadable" high order function macros.
 *       This is a sort of a "type system" for preprocessor constructs as the
 *       ones implemented in ppmpf, but it is more a convenient bypass than
 *       anything else.
 */

/*~
 * @desc Given an enclosed token representing a ppmpf "type", get the
 *       type numerical identifier that is pertinent to it.
 * @pfrg x: a ppmpf compound type token (i.e. enclosed comma separated
 *          sequence consisting of data, followed by type.
 * @pexp Expands to the type identifier.
 */
#define PPMPF_TYPEOF(x) \
        PPMPF_TYPED1(PPMPF_DREF(x),)
#define PPMPF_TYPED0(...) PPMPF_TYPED00(__VA_ARGS__)
#define PPMPF_TYPED1(...) PPMPF_TYPED10(__VA_ARGS__)
#define PPMPF_TYPED00(a,b,...) a
#define PPMPF_TYPED10(a,b,...) b

/*~
 * @desc Given an enclosed token representing a ppmpf "type", get the
 *       "data" section that is pertinent to it.
 * @pfrg x: a ppmpf compound type token (i.e. enclosed comma separated
 *          sequence consisting of data, followed by type.
 * @pexp Expands to the data section included.
 */
#define PPMPF_DATAOF(x) \
        PPMPF_TYPED0(PPMPF_DREF(x),)
/*~
 * @desc Given an enclosed token representing a ppmpf "type", get the
 *       "data" section that is pertinent to it and apply PPMPF_DREF to it.
 * @pfrg x: a ppmpf compound type token (i.e. enclosed comma separated
 *          sequence consisting of data, followed by type.
 * @pexp Expands to the data section included and applies PPMPF_DREF to it.
 */
#define PPMPF_EXCISE(x) \
        PPMPF_DREF(PPMPF_TYPED0(PPMPF_DREF(x),))

/*~
 * @desc Handles the dispatching to both typeid and function metahandlers. This
 *       also controls the dispatching of partial application expressions with
 *       the new "bind" support high order function macros are getting. Of note,
 *       it does not require the ppmpf data content or seed argument to be
 *       passed.
 * @note The extra bypass in PPMPF_TFY1 expansion is likely to be necessary for
 *       different ways of implementing the C99 preprocessor by different
 *       vendors. This is a recurring technique throughout ppmpf.
 * @pfrg p   : The pfld pipeline that is to be used for recursive expansion.
 * @pfrg f   : The function to apply or the expression to be used.
 * @pfrg fn1 : The high order type metahandler to which the `type` argument is
 *             passed. Such a metahandler is always an unary function. Returns
 *             another metahandler function macro itself, invocable with the
 *             empty token alone.
 * @pfrg fn2 : The high order function metahandler to which the `type` argument
 *             is passed. Such a metahandler is always an unary function.
 * @pfrg tycl: The ppmpf typeclause of the collection involved, from which the
 *             typeid identifier is extracted and used in the supporting macro
 *             framework for `PPMPF_TYPEFY`
 */
#define PPMPF_TYPEFY(p,fn1,fn2,f,seed,tycl) \
        (PPMPF_APPLY( p,f,(seed)(PPMPF_DATAOF(tycl)) \
                    , PPMPF_TFY0( PPMPF_TYPEOF(tycl) \
                                , f,fn1,fn2),),PPMPF_TYPEOF(tycl))
#define PPMPF_TFY0(type,f,fn1,fn2) \
        PPMPF_TFY1(PPMPF_ISPRN(f),fn1(type),fn2(type))
#define PPMPF_TFY1(c,fn1,fn2) \
        PPMPF_TFY2(c,fn1(),fn2())
#define PPMPF_TFY2(c,...) \
        PPMPF_TFY3(c,__VA_ARGS__)
#define PPMPF_TFY3(c,ex1,ex2,ex3) \
        PPMPF_TFY4(ex1,PPMPF_IFELSE(c,ex3,ex2))
#define PPMPF_TFY4(ex1,ex2) \
        PPMPF_DREF(ex1),PPMPF_DREF(ex2)

#endif /* CLAUSE_PPMPF_KERNEL_CPRO_CORE_HH */
