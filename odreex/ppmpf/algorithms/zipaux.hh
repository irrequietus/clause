/* --
 * Copyright (C) 2014, George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_PPMPF_ALGORITHMS_ZIPAUX_HH_
#define _ODREEX_PPMPF_ALGORITHMS_ZIPAUX_HH_

#ifndef _ODREEX_PPMPF_ALGORITHMS_FOLD_HH_
#error ppmpf: <odreex/ppmpf/algorithms/zip.hh> must precede.
#endif

#define PPMPF_ZIPAUX_GET(x) \
        ( PPMPF_FLDX0P(0,x) \
        , PPMPF_FLDX0P(1,x) )
        
#define PPMPF_ZIPAUX_3GET(x) \
        ( PPMPF_FLDX0P(0,x) \
        , PPMPF_FLDX0P(1,x) \
        , PPMPF_FLDX0P(2,x) )
        
#define PPMPF_ZIPAUX_4GET(x) \
        ( PPMPF_FLDX0P(0,x) \
        , PPMPF_FLDX0P(1,x) \
        , PPMPF_FLDX0P(2,x) \
        , PPMPF_FLDX0P(3,x) )
        
#define PPMPF_ZIPAUX_5GET(x) \
        ( PPMPF_FLDX0P(0,x) \
        , PPMPF_FLDX0P(1,x) \
        , PPMPF_FLDX0P(2,x) \
        , PPMPF_FLDX0P(3,x) \
        , PPMPF_FLDX0P(4,x) )
        
#define PPMPF_ZIPAUX_6GET(x) \
        ( PPMPF_FLDX0P(0,x) \
        , PPMPF_FLDX0P(1,x) \
        , PPMPF_FLDX0P(2,x) \
        , PPMPF_FLDX0P(3,x) \
        , PPMPF_FLDX0P(4,x) \
        , PPMPF_FLDX0P(5,x) )
        
#define PPMPF_ZIPAUX_7GET(x) \
        ( PPMPF_FLDX0P(0,x) \
        , PPMPF_FLDX0P(1,x) \
        , PPMPF_FLDX0P(2,x) \
        , PPMPF_FLDX0P(3,x) \
        , PPMPF_FLDX0P(4,x) \
        , PPMPF_FLDX0P(5,x) \
        , PPMPF_FLDX0P(6,x) )
        
#define PPMPF_ZIPAUX_8GET(x) \
        ( PPMPF_FLDX0P(0,x) \
        , PPMPF_FLDX0P(1,x) \
        , PPMPF_FLDX0P(2,x) \
        , PPMPF_FLDX0P(3,x) \
        , PPMPF_FLDX0P(4,x) \
        , PPMPF_FLDX0P(5,x) \
        , PPMPF_FLDX0P(6,x) \
        , PPMPF_FLDX0P(7,x) )

#define PPMPF_ZIPAUX_9GET(x) \
        ( PPMPF_FLDX0P(0,x) \
        , PPMPF_FLDX0P(1,x) \
        , PPMPF_FLDX0P(2,x) \
        , PPMPF_FLDX0P(3,x) \
        , PPMPF_FLDX0P(4,x) \
        , PPMPF_FLDX0P(5,x) \
        , PPMPF_FLDX0P(6,x) \
        , PPMPF_FLDX0P(7,x) \
        , PPMPF_FLDX0P(8,x) )
        
#define PPMPF_ZIPAUX_POP(x) \
        ( PPMPF_FLDX0Q(0,x) \
        , PPMPF_FLDX0Q(1,x) )

#define PPMPF_ZIPAUX_3POP(x) \
        ( PPMPF_FLDX0Q(0,x) \
        , PPMPF_FLDX0Q(1,x) \
        , PPMPF_FLDX0Q(2,x) )
        
#define PPMPF_ZIPAUX_4POP(x) \
        ( PPMPF_FLDX0Q(0,x) \
        , PPMPF_FLDX0Q(1,x) \
        , PPMPF_FLDX0Q(2,x) \
        , PPMPF_FLDX0Q(3,x))
        
#define PPMPF_ZIPAUX_5POP(x) \
        ( PPMPF_FLDX0Q(0,x) \
        , PPMPF_FLDX0Q(1,x) \
        , PPMPF_FLDX0Q(2,x) \
        , PPMPF_FLDX0Q(3,x) \
        , PPMPF_FLDX0Q(4,x) ) 

#define PPMPF_ZIPAUX_6POP(x) \
        ( PPMPF_FLDX0Q(0,x) \
        , PPMPF_FLDX0Q(1,x) \
        , PPMPF_FLDX0Q(2,x) \
        , PPMPF_FLDX0Q(3,x) \
        , PPMPF_FLDX0Q(4,x) \
        , PPMPF_FLDX0Q(5,x) )

#define PPMPF_ZIPAUX_7POP(x) \
        ( PPMPF_FLDX0Q(0,x) \
        , PPMPF_FLDX0Q(1,x) \
        , PPMPF_FLDX0Q(2,x) \
        , PPMPF_FLDX0Q(3,x) \
        , PPMPF_FLDX0Q(4,x) \
        , PPMPF_FLDX0Q(5,x) \
        , PPMPF_FLDX0Q(6,x) )

#define PPMPF_ZIPAUX_8POP(x) \
        ( PPMPF_FLDX0Q(0,x) \
        , PPMPF_FLDX0Q(1,x) \
        , PPMPF_FLDX0Q(2,x) \
        , PPMPF_FLDX0Q(3,x) \
        , PPMPF_FLDX0Q(4,x) \
        , PPMPF_FLDX0Q(5,x) \
        , PPMPF_FLDX0Q(6,x) \
        , PPMPF_FLDX0Q(7,x) )

#define PPMPF_ZIPAUX_9POP(x) \
        ( PPMPF_FLDX0Q(0,x) \
        , PPMPF_FLDX0Q(1,x) \
        , PPMPF_FLDX0Q(2,x) \
        , PPMPF_FLDX0Q(3,x) \
        , PPMPF_FLDX0Q(4,x) \
        , PPMPF_FLDX0Q(5,x) \
        , PPMPF_FLDX0Q(6,x) \
        , PPMPF_FLDX0Q(7,x) \
        , PPMPF_FLDX0Q(8,x) )
        
#define PPMPF_ZIPAUX_EMPTY(x) \
        PPMPF_OR( PPMPF_FLDX0R(0, x) \
                , PPMPF_FLDX0R(1, x) )
                
#define PPMPF_ZIPAUX_3EMPTY(x) \
        PPMPF_OR( PPMPF_FLDX0R(0, x) \
      , PPMPF_OR( PPMPF_FLDX0R(1, x) \
                , PPMPF_FLDX0R(2, x) ))
                          
#define PPMPF_ZIPAUX_4EMPTY(x) \
        PPMPF_OR( PPMPF_FLDX0R(0, x) \
      , PPMPF_OR( PPMPF_FLDX0R(1, x) \
      , PPMPF_OR( PPMPF_FLDX0R(2, x) \
                , PPMPF_FLDX0R(3, x) )))

#define PPMPF_ZIPAUX_5EMPTY(x) \
        PPMPF_OR( PPMPF_FLDX0R(0, x) \
      , PPMPF_OR( PPMPF_FLDX0R(1, x) \
      , PPMPF_OR( PPMPF_FLDX0R(2, x) \
      , PPMPF_OR( PPMPF_FLDX0R(3, x) \
                , PPMPF_FLDX0R(4, x) ))))
                
#define PPMPF_ZIPAUX_6EMPTY(x) \
        PPMPF_OR( PPMPF_FLDX0R(0, x) \
      , PPMPF_OR( PPMPF_FLDX0R(1, x) \
      , PPMPF_OR( PPMPF_FLDX0R(2, x) \
      , PPMPF_OR( PPMPF_FLDX0R(3, x) \
      , PPMPF_OR( PPMPF_FLDX0R(4, x) \
                , PPMPF_FLDX0R(5, x) )))))

#define PPMPF_ZIPAUX_7EMPTY(x) \
        PPMPF_OR( PPMPF_FLDX0R(0, x) \
      , PPMPF_OR( PPMPF_FLDX0R(1, x) \
      , PPMPF_OR( PPMPF_FLDX0R(2, x) \
      , PPMPF_OR( PPMPF_FLDX0R(3, x) \
      , PPMPF_OR( PPMPF_FLDX0R(4, x) \
      , PPMPF_OR( PPMPF_FLDX0R(5, x) \
                , PPMPF_FLDX0R(6, x) ))))))

#define PPMPF_ZIPAUX_8EMPTY(x) \
        PPMPF_OR( PPMPF_FLDX0R(0, x) \
      , PPMPF_OR( PPMPF_FLDX0R(1, x) \
      , PPMPF_OR( PPMPF_FLDX0R(2, x) \
      , PPMPF_OR( PPMPF_FLDX0R(3, x) \
      , PPMPF_OR( PPMPF_FLDX0R(4, x) \
      , PPMPF_OR( PPMPF_FLDX0R(5, x) \
      , PPMPF_OR( PPMPF_FLDX0R(6, x) \
                , PPMPF_FLDX0R(7, x) )))))))

#define PPMPF_ZIPAUX_8EMPTY(x) \
        PPMPF_OR( PPMPF_FLDX0R(0, x) \
      , PPMPF_OR( PPMPF_FLDX0R(1, x) \
      , PPMPF_OR( PPMPF_FLDX0R(2, x) \
      , PPMPF_OR( PPMPF_FLDX0R(3, x) \
      , PPMPF_OR( PPMPF_FLDX0R(4, x) \
      , PPMPF_OR( PPMPF_FLDX0R(5, x) \
      , PPMPF_OR( PPMPF_FLDX0R(6, x) \
                , PPMPF_FLDX0R(7, x) )))))))

#define PPMPF_ZIPAUX_9EMPTY(x) \
        PPMPF_OR( PPMPF_FLDX0R(0, x) \
      , PPMPF_OR( PPMPF_FLDX0R(1, x) \
      , PPMPF_OR( PPMPF_FLDX0R(2, x) \
      , PPMPF_OR( PPMPF_FLDX0R(3, x) \
      , PPMPF_OR( PPMPF_FLDX0R(4, x) \
      , PPMPF_OR( PPMPF_FLDX0R(5, x) \
      , PPMPF_OR( PPMPF_FLDX0R(6, x) \
      , PPMPF_OR( PPMPF_FLDX0R(7, x) \
                , PPMPF_FLDX0R(8, x) ))))))))

#define PPMPF_ZIPAUX_APPLY(f,sl,g,...) \
        ((PPMPF_APPLY(f,PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl)))))))
        
#endif /* _ODREEX_PPMPF_ALGORITHMS_ZIPAUX_HH_ */
