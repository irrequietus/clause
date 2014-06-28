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

#ifndef _CLAUSE_PPMPF_ALGORITHMS_BIND_HH_
#define _CLAUSE_PPMPF_ALGORITHMS_BIND_HH_

#include <clause/ppmpf/collections/tuple.hh>
#include <clause/ppmpf/ppfk.hh>

#define PPMPF_BNDJ1(x) PPMPF_TUP_ATPOS((0)(0)(0)(0),x)
#define PPMPF_BNDJ2(x) PPMPF_TUP_ATPOS((0)(0)(0)(1),x)
#define PPMPF_BNDJ3(x) PPMPF_TUP_ATPOS((0)(0)(0)(2),x)
#define PPMPF_BNDJ4(x) PPMPF_TUP_ATPOS((0)(0)(0)(3),x)
#define PPMPF_BNDJ5(x) PPMPF_TUP_ATPOS((0)(0)(0)(4),x)
#define PPMPF_BNDJ6(x) PPMPF_TUP_ATPOS((0)(0)(0)(5),x)
#define PPMPF_BNDJ7(x) PPMPF_TUP_ATPOS((0)(0)(0)(6),x)
#define PPMPF_BNDJ8(x) PPMPF_TUP_ATPOS((0)(0)(0)(7),x)
#define PPMPF_BNDJ9(x) PPMPF_TUP_ATPOS((0)(0)(0)(8),x)
#define PPMPF_BNDR1(x) PPMPF_DPAR(PPMPF_TUP_ATPOS((0)(0)(0)(0),x))
#define PPMPF_BNDR2(x) PPMPF_DPAR(PPMPF_TUP_ATPOS((0)(0)(0)(1),x))
#define PPMPF_BNDR3(x) PPMPF_DPAR(PPMPF_TUP_ATPOS((0)(0)(0)(2),x))
#define PPMPF_BNDR4(x) PPMPF_DPAR(PPMPF_TUP_ATPOS((0)(0)(0)(3),x))
#define PPMPF_BNDR5(x) PPMPF_DPAR(PPMPF_TUP_ATPOS((0)(0)(0)(4),x))
#define PPMPF_BNDR6(x) PPMPF_DPAR(PPMPF_TUP_ATPOS((0)(0)(0)(5),x))
#define PPMPF_BNDR7(x) PPMPF_DPAR(PPMPF_TUP_ATPOS((0)(0)(0)(6),x))
#define PPMPF_BNDR8(x) PPMPF_DPAR(PPMPF_TUP_ATPOS((0)(0)(0)(7),x))
#define PPMPF_BNDR9(x) PPMPF_DPAR(PPMPF_TUP_ATPOS((0)(0)(0)(8),x))

#define PPMPF_BNDX_0() PPMPF_ENCLOSE
#define PPMPF_BNDX_1() PPMPF_BNDJ1
#define PPMPF_BNDX_2() PPMPF_BNDJ2
#define PPMPF_BNDX_3() PPMPF_BNDJ3
#define PPMPF_BNDX_4() PPMPF_BNDJ4
#define PPMPF_BNDX_5() PPMPF_BNDJ5
#define PPMPF_BNDX_6() PPMPF_BNDJ6
#define PPMPF_BNDX_7() PPMPF_BNDJ7
#define PPMPF_BNDX_8() PPMPF_BNDJ8
#define PPMPF_BNDX_9() PPMPF_BNDJ9

#define PPMPF_BNDX__0() PPMPF_JUST
#define PPMPF_BNDX__1() PPMPF_BNDR1
#define PPMPF_BNDX__2() PPMPF_BNDR2
#define PPMPF_BNDX__1() PPMPF_BNDR1
#define PPMPF_BNDX__2() PPMPF_BNDR2
#define PPMPF_BNDX__3() PPMPF_BNDR3
#define PPMPF_BNDX__4() PPMPF_BNDR4
#define PPMPF_BNDX__5() PPMPF_BNDR5
#define PPMPF_BNDX__6() PPMPF_BNDR6
#define PPMPF_BNDX__7() PPMPF_BNDR7
#define PPMPF_BNDX__8() PPMPF_BNDR8
#define PPMPF_BNDX__9() PPMPF_BNDR9

#define PPMPF_BNDY_0() PPMPF_ENCLOSE
#define PPMPF_BNDY_1() PPMPF_BNDJ1
#define PPMPF_BNDY_2() PPMPF_BNDJ2
#define PPMPF_BNDY_3() PPMPF_BNDJ3
#define PPMPF_BNDY_4() PPMPF_BNDJ4
#define PPMPF_BNDY_5() PPMPF_BNDJ5
#define PPMPF_BNDY_6() PPMPF_BNDJ6
#define PPMPF_BNDY_7() PPMPF_BNDJ7
#define PPMPF_BNDY_8() PPMPF_BNDJ8
#define PPMPF_BNDY_9() PPMPF_BNDJ9

#define PPMPF_BNDY__0() PPMPF_JUST
#define PPMPF_BNDY__1() PPMPF_BNDJ1
#define PPMPF_BNDY__2() PPMPF_BNDJ2
#define PPMPF_BNDY__1() PPMPF_BNDJ1
#define PPMPF_BNDY__2() PPMPF_BNDJ2
#define PPMPF_BNDY__3() PPMPF_BNDJ3
#define PPMPF_BNDY__4() PPMPF_BNDJ4
#define PPMPF_BNDY__5() PPMPF_BNDJ5
#define PPMPF_BNDY__6() PPMPF_BNDJ6
#define PPMPF_BNDY__7() PPMPF_BNDJ7
#define PPMPF_BNDY__8() PPMPF_BNDJ8
#define PPMPF_BNDY__9() PPMPF_BNDJ9

#define PPMPF_BNDX1(t,q,x) x(0,t)(q)
#define PPMPF_BNDX2(t,q,x) PPMPF_BNDX1(t,q,x),x(1,t)(q)
#define PPMPF_BNDX3(t,q,x) PPMPF_BNDX2(t,q,x),x(2,t)(q)
#define PPMPF_BNDX4(t,q,x) PPMPF_BNDX3(t,q,x),x(3,t)(q)
#define PPMPF_BNDX5(t,q,x) PPMPF_BNDX4(t,q,x),x(4,t)(q)
#define PPMPF_BNDX6(t,q,x) PPMPF_BNDX5(t,q,x),x(5,t)(q)
#define PPMPF_BNDX7(t,q,x) PPMPF_BNDX6(t,q,x),x(6,t)(q)
#define PPMPF_BNDX8(t,q,x) PPMPF_BNDX7(t,q,x),x(7,t)(q)
#define PPMPF_BNDX9(t,q,x) PPMPF_BNDX8(t,q,x),x(8,t)(q)

#define PPMPF_DPR3(x)   PPMPF_DPAR(PPMPF_DPAR(PPMPF_DPAR(x)))
#define PPMPF_BNDD(n,t) PPMPF_DPR3(PPMPF_TUP_ATPOS((0)(0)(0)(n),t))
#define PPMPF_BNDQ(x) PPMPF_CAT(PPMPF_BNDX,x)()
#define PPMPF_BNDZ(x) PPMPF_CAT(PPMPF_BNDY,x)()
#define PPMPF_BNDE(f,t,q,h) PPMPF_APPLY(f,h(t,q,PPMPF_BNDD))
#define PPMPF_BNDF(x) PPMPF_TUP_MAP(PPMPF_BNDQ,x)
#define PPMPF_BNDG(x) PPMPF_TUP_MAP(PPMPF_BNDZ,x)

#define PPMPF_BIND0(f,g,t2,t) f()
#define PPMPF_BIND1(f,g,t2,t) PPMPF_BNDE(f,g(t2),t, PPMPF_BNDX1)
#define PPMPF_BIND2(f,g,t2,t) PPMPF_BNDE(f,g(t2),t, PPMPF_BNDX2)
#define PPMPF_BIND3(f,g,t2,t) PPMPF_BNDE(f,g(t2),t, PPMPF_BNDX3)
#define PPMPF_BIND4(f,g,t2,t) PPMPF_BNDE(f,g(t2),t, PPMPF_BNDX4)
#define PPMPF_BIND5(f,g,t2,t) PPMPF_BNDE(f,g(t2),t, PPMPF_BNDX5)
#define PPMPF_BIND6(f,g,t2,t) PPMPF_BNDE(f,g(t2),t, PPMPF_BNDX6)
#define PPMPF_BIND7(f,g,t2,t) PPMPF_BNDE(f,g(t2),t, PPMPF_BNDX7)
#define PPMPF_BIND8(f,g,t2,t) PPMPF_BNDE(f,g(t2),t, PPMPF_BNDX8)
#define PPMPF_BIND9(f,g,t2,t) PPMPF_BNDE(f,g(t2),t, PPMPF_BNDX9)

/*
 * NOTE: A version of a "binding" macro for safe ppmpf tuples, for placeholders
 *       ranging from _1 to _9 and __1 to __9. This is an n-ary macro that was
 *       discussed about in the 'M' macros semantics in issue #18. Some examples
 *       of use follow:
 * 
 *       PPMPF_TUP_BIND(f,(__0)(_1,_3),(a),(b),(c))    -> f((a),(c))
 *       PPMPF_TUP_BIND(f,(__0)(__2,_1),(a),(b),(c))   -> f(b,(a))
 *       PPMPF_TUP_BIND(f,(_0)(_1,_3,__2),(a),(b),(c)) -> (f((a),(c),b))
 *       ... and so on.
 */
#define PPMPF_TUP_BIND(f,x,...) \
        PPMPF_CAT(PPMPF_BNDX,PPMPF_DPAR(PPMPF_SEQ_GET(x)))()( \
        PPMPF_CAT( PPMPF_BIND \
                 , PPMPF_NARGS(PPMPF_DREF(PPMPF_SEQ_POP(x))))( f \
                                  , PPMPF_BNDF \
                                  , PPMPF_TUPLE(PPMPF_DREF(PPMPF_SEQ_POP(x))) \
                                  , (__VA_ARGS__) ) )
/*
 * NOTE: This is the version of the same function for unsafe ppmpf tuples but
 *       in this case, either single or double underscore placeholders ranging
 *       [1,9] do not result in removing parenthetical enclosures. The __0, _0
 *       semantics (do not enclose, enclose respectively) remain for the final
 *       result of function application.
 */
#define PPMPF_UTUP_BIND(f,x,...) \
        PPMPF_CAT(PPMPF_BNDY,PPMPF_DPAR(PPMPF_SEQ_GET(x)))()( \
        PPMPF_CAT( PPMPF_BIND \
                 , PPMPF_NARGS(PPMPF_DREF(PPMPF_SEQ_POP(x))))( f \
                                  , PPMPF_BNDG \
                                  , PPMPF_TUPLE(PPMPF_DREF(PPMPF_SEQ_POP(x))) \
                                  , (__VA_ARGS__) ) )

#endif /* _CLAUSE_PPMPF_ALGORITHMS_BIND_HH_ */
