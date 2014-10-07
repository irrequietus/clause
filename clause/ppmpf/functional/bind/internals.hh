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

#ifndef _CLAUSE_PPMPF_FUNCTIONAL_BIND_INTERNALS_HH_
#define _CLAUSE_PPMPF_FUNCTIONAL_BIND_INTERNALS_HH_

#include <clause/ppmpf/collections/tuple.hh>
#include <clause/ppmpf/collections/sequence.hh>
#include <clause/ppmpf/kernel/pfld.hh>

/*~
 * @info These are all internal for the implementation of the function macro
 *       binding feature. They could eventually be changed according to the
 *       needs of the function macro implementation they are assisting in their
 *       whole.
 * @inrl PPMPF_BDS22, PPMPF_BDS23
 */

#define PPMPF_BDP1_(x) x
#define PPMPF_BDP(x)   PPMPF_CAT(PPMPF_BDP1,x)

#define PPMPF_BDS0(x)  PPMPF_CAT(PPMPF_BDX,x)()
#define PPMPF_BDS1(x)  PPMPF_CAT(PPMPF_BDA,x)
#define PPMPF_BDS2(x)  PPMPF_CAT(PPMPF_BDB,x)

#define PPMPF_BDS4(c,g,x,y,n) \
        PPMPF_IFELSE( c(PPMPF_DREF(g(y))) \
                    , PPMPF_BDS8 \
                    , PPMPF_BDS9)(g,x,y,n)

#define PPMPF_BDS5(c,g,x,y,n) \
        PPMPF_IFELSE( c(PPMPF_DREF(g(y))) \
                    , PPMPF_BDS6 \
                    , PPMPF_BDS7)(g,x,y,n)

#define PPMPF_BDS7(g,x,y,n) (x)(n)

#define PPMPF_BDS6(g,x,y,n) \
        ( ( PPMPF_DREF(x) \
          , PPMPF_BDP(PPMPF_DREF(g(y))))) \
        ((PPMPF_NNX(PPMPF_DREF(n))))

#define PPMPF_BDS8(g,x,y,n) \
        ( (PPMPF_DREF(x) \
        , PPMPF_DREF(g(y))) )

#define PPMPF_BDS9(f,x,y,n) \
        (( PPMPF_DREF(x) \
         , PPMPF_DREF(n) ))

#define PPMPF_BDS10(f,sl,g,c,v,...) \
        (PPMPF_DREF(PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl)))))(c,v))

#define PPMPF_BDS11(a,b,c) \
            PPMPF_FLDX1V( \
                        , (())(a)            \
                        , PPMPF_UTUP_GET   \
                        , PPMPF_TUP_POP    \
                        , PPMPF_UTUP_EMPTY \
                        , PPMPF_BDS10      \
                        , PPMPF_FLDX0D     \
                        , PPMPF_FLDX22, b, c, )

#define PPMPF_BDS14A(x) \
        PPMPF_UTUP_MAP( PPMPF_BDS0 \
                      , PPMPF_TUP_POP(PPMPF_DREF(PPMPF_SEQ_AT09(0,x))))

#define PPMPF_BDS14B(x) \
        PPMPF_TUP_POP(PPMPF_DREF(PPMPF_SEQ_AT09(2,x)))

#define PPMPF_BDS15(f,slbc,g,p,h,i,w,x,...) \
        PPMPF_BDS16( f,g,p,h,i,w,x \
                    , PPMPF_DREF(PPMPF_SEQ_AT09(0,slbc)) \
                    , PPMPF_DREF(PPMPF_SEQ_AT09(1,slbc)) \
                    , PPMPF_DREF(PPMPF_SEQ_AT09(2,slbc)) \
                    , PPMPF_DREF(PPMPF_SEQ_AT09(3,slbc)), )

#define PPMPF_BDS16(f,g,p,h,i,w,x,s,l,b,c,...) \
        PPMPF_BDS4(x,g,s,l,c)(p(l)) \
        PPMPF_BDS5(w,g,b,l,c)

#define PPMPF_BDS18(x) \
        PPMPF_FLDX25( \
                    , (())(PPMPF_TUPLE(PPMPF_DREF(x)))(())((0)) \
                    , PPMPF_TUP_GET   \
                    , PPMPF_TUP_POP   \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX23    \
                    , PPMPF_FLDX24    \
                    , PPMPF_BDS15    \
                    , PPMPF_BDS1      \
                    , PPMPF_BDS2, )

#define PPMPF_BDS19(x) \
        PPMPF_BDS14A(x), PPMPF_BDS14B(x)

#define PPMPF_BDS20(x) \
        PPMPF_CAT(PPMPF_BDX,PPMPF_DREF(PPMPF_SEQ_GET(x)))() \
      , PPMPF_BDS19(PPMPF_BDS18(PPMPF_SEQ_POP(x)))

#define PPMPF_BDS21(f,a,b,c) \
        PPMPF_APPLY(f,PPMPF_DREF(PPMPF_BDS11(a,b,c)))

#define PPMPF_BDSN1(f,sl,g,z,l,...) \
        (PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))(z,l))

#define PPMPF_BDSN2(f,sl,g,p,h,i,...) \
        ( PPMPF_UTUP_JOIN( PPMPF_DREF(PPMPF_SEQ_GET(sl)) \
                         , PPMPF_IFELSE( h(PPMPF_DREF(PPMPF_SEQ_POP(sl))) \
                                       , PPMPF_UNIT \
                                       , i )(f,sl,g,__VA_ARGS__)) ) \
        (p(PPMPF_DREF(PPMPF_SEQ_POP(sl))))

#define PPMPF_BDSN3(f,sl,g,...) \
        (f((g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))))

#define PPMPF_BDSN4(f,sl,g,...) \
        (PPMPF_BDS30( PPMPF_TUP_GET(f)             \
                    , PPMPF_DREF(PPMPF_TUP_POP(f)) \
                    , PPMPF_TUP_GET(PPMPF_SEQ_POP(sl))))

#define PPMPF_BDS27(t,a,b) \
        PPMPF_PFLD0( , (())(t)       \
                   , PPMPF_TUP_GET   \
                   , PPMPF_TUP_POP   \
                   , PPMPF_TUP_EMPTY \
                   , PPMPF_BDSN1    \
                   , PPMPF_FLDX0D    \
                   , PPMPF_FLDX22    \
                   , (PPMPF_DREF(a),)               \
                   , (PPMPF_DREF(b),) ,)

#define PPMPF_BDS28(f,r,t,a,b) \
        r(PPMPF_APPLY2(f,PPMPF_DREF(PPMPF_BDS27(t,a,b))))
#define PPMPF_BDS29(...) \
        PPMPF_BDS28(__VA_ARGS__)
#define PPMPF_BDS30(a,b,c) \
        PPMPF_BDS29(a,PPMPF_BDS20(b),c)

#endif /* _CLAUSE_PPMPF_FUNCTIONAL_BIND_INTERNALS_HH_ */
