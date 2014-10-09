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

/*~
 * @desc Apply PPMPF_VXPP_FMAPOF to a sequence of set macro identifiers
 * @mmii PPMPF_VXPP_SETS() : has to be defined as a 0- to 10-tuple of set
 *       macro identifiers (PPMPF_VXPP_SET0,...9) with only the identifier
 *       digit. An example follows:
 * 
 *           #define PPMPF_VXPP_SET0(n) ((f),(0,100))
 *           #define PPMPF_VXPP_SET1(n) ((g),(10,50))
 *           #define PPMPF_VXPP_SETS()  (0,1)
 *           #include PPMPF_VXPP_FMAPSETS() // will expand 0 then 1 etc.
 * 
 */
#define PPMPF_VXPP_FMAPSETS() \
        PPMPF_IFELSE( \
          PPMPF_AND( PPMPF_IS(3,PPMPF_NARGS( PPMPF_COMMA PPMPF_VXPP_SETS() \
                                           , PPMPF_COMMA )) \
                   , PPMPF_NOT(PPMPF_TUP_EMPTY(\
                                       PPMPF_JUST(PPMPF_VXPP_SETS())))) \
      , PPMPF_VXPP_FMAPSETS_  \
      , <clause/ppmpf/vxpp/slots/null.hh> PPMPF_JUST)()

/*~
 * @mgrp PPMPF_VXPP_FMAPSETS
 */
#define PPMPF_VXPP_FMAPSETS_() \
        PPMPF_IFELSE( PPMPF_ILTE( (0)(0)(0)(2) \
                                , PPMPF_TUP_SIZEOF(PPMPF_VXPP_SETS()) ) \
      , <clause/ppmpf/vxpp/slots/fmul/fmul.hh>  \
      , PPMPF_IFELSE( PPMPF_IEQL( (0)(0)(0)(1) \
                                , PPMPF_TUP_SIZEOF(PPMPF_VXPP_SETS()) )\
                    , PPMPF_VXPP_FMAPOF(PPMPF_TUP_GET(PPMPF_VXPP_SETS())) \
                    , <clause/ppmpf/vxpp/slots/null.hh> ) )

/*~
 * @desc Expand a ppmpf set macro identifier vertically
 * @todo Remaining documentation for this.
 */
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
