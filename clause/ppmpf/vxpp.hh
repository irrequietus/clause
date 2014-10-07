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

#ifndef _CLAUSE_PPMPF_VXPP_HH_
#define _CLAUSE_PPMPF_VXPP_HH_

#include <clause/ppmpf/ppfk.hh>
#include <clause/ppmpf/collections/tuple.hh>
#include <clause/ppmpf/collections/sequence.hh>
#include <clause/ppmpf/vxpp/number/tuple.hh>
#include <clause/ppmpf/vxpp/number/sequence.hh>
#include <clause/ppmpf/vxpp/number/decimal.hh>

#ifndef PPMPF_VXPP_FACTOR
#define PPMPF_VXPP_FACTOR 99
#endif

#ifndef PPMPF_VXPP_LIMIT
#define PPMPF_VXPP_LIMIT 100000
#endif

#define PPMPF_VXPP_INIT(n) \
        <PPMPF_CAT(clause/ppmpf/vxpp/slots/init/init,n).hh>

#define PPMPF_VXPP_SLOT(n) \
        <PPMPF_CAT(clause/ppmpf/vxpp/slots/slot,n).hh>

#define PPMPF_VXPP_SET(n) \
        PPMPF_JUST(PPMPF_CAT(PPMPF_VXPP_SET,n)(PPMPF_VXPP_SLOT(n)))

#define PPMPF_VXPP_ITEM(n) \
        PPMPF_CAT(PPMPF_VXPP_ITEM,n)()

#define PPMPF_VXPP_FMAPOF(n) \
        <PPMPF_CAT( PPMPF_CAT(clause/ppmpf/vxpp/slots/fmap/fmap,n) \
                  , PPMPF_IFELSE( \
            PPMPF_IS( 3 \
                    , PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(\
                                    PPMPF_CAT(PPMPF_VXPP_SET,n)(/**/)))) \
          , 3 \
          , PPMPF_IFELSE( \
              PPMPF_IS( 2 \
                      , PPMPF_DIGNM(PPMPF_SEQ_SIZEOF(\
                                      PPMPF_CAT(PPMPF_VXPP_SET,n)(/**/)))) \
            , PPMPF_DIGNM( \
                PPMPF_TUP_SIZEOF( \
                    (PPMPF_JUST(PPMPF_COMMA \
                                PPMPF_DREF( \
                                  PPMPF_SEQ_GET( \
                                      PPMPF_CAT(PPMPF_VXPP_SET,n)(/**/))) \
                                      ,)))) \
                          , 0 ))).hh>
        
#define PPMPF_VXPP_ENDL(s) PPMPF_CAT(PPMPF_VXPP_ENDL,s)()
#define PPMPF_VXPP_ENDR(s) PPMPF_CAT(PPMPF_VXPP_ENDR,s)()

#define PPMPF_VXPP_EVAL(n) \
       ( (PPMPF_VXPP_DN_ITEM(n) >= PPMPF_VXPP_ENDL(n)) \
      && (PPMPF_VXPP_DN_ITEM(n) <  PPMPF_VXPP_ENDR(n)) ) \
      && (PPMPF_VXPP_DN_ITEM(n) < PPMPF_VXPP_LIMIT)
      
#define PPMPF_VXPP_ITERATE(n) \
      ((PPMPF_VXPP_DN_ITEM(n) % (PPMPF_VXPP_FACTOR + 1)) == PPMPF_VXPP_FACTOR)


#define PPMPF_VXPP_XCHK(n)  \
        PPMPF_APPLY(PPMPF_ISEXPR0,PPMPF_ISEXPRZ n,)

#define PPMPF_ISEXPR0(a,...) \
        PPMPF_ISEXPR1(a)

#define PPMPF_ISEXPR1(a) \
        PPMPF_ISEXPRX(a)

#define PPMPF_ISEXPRZ(...) 0,

#define PPMPF_ISEXPRZ0 0,

#define PPMPF_ISEXPRZPPMPF_ISEXPRZ 1,

#define PPMPF_ISEXPRX(a) \
        PPMPF_UTUP_GET_(PPMPF_CAT(PPMPF_ISEXPRZ,a))
        
#define PPMPF_VXPP_T09(n,t) \
        PPMPF_TUP_ATPOS((0)(0)(0)(n),t)

#define PPMPF_N(x) \
        PPMPF_JUST(PPMPF_CAT(PPMPF_N,x)())
        
#define PPMPF_VXPP_XARGS(s,n) \
        PPMPF_SEQ_POP(PPMPF_TUP_GET(PPMPF_CAT(PPMPF_VXPP_SET,s)(n)))

#define PPMPF_VXPP_XSIZE(s) \
        PPMPF_DIGNM( \
          PPMPF_TUP_SIZEOF( \
            PPMPF_SEQ_POP(PPMPF_TUP_GET(PPMPF_CAT(PPMPF_VXPP_SET,s)(())))))

#define PPMPF_VXPP_MCF(s) \
        PPMPF_DREF( \
            PPMPF_SEQ_GET(PPMPF_TUP_GET(PPMPF_CAT(PPMPF_VXPP_SET,s)(/**/))))

#define PPMPF_VXPP_FUNC(n) \
        PPMPF_JUST(PPMPF_CAT(PPMPF_VXPP_FUNC,n)())



#endif /* _CLAUSE_PPMPF_VXPP_HH_ */
