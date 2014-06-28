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

#include <clause/test.hh>
#include <clause/ppmpf/collections/tuple.hh>

PPMPF_TST( ppmpf_tup_reverse8
         , PPMPF_TUP_REVERSE
         , ((0,1,2,3,4,5,6,7))
         , (7,6,5,4,3,2,1,0)
         , "PPMPF_TUP_REVERSE with 8 arguments" )

PPMPF_TST( ppmpf_tup_reverse16
         , PPMPF_TUP_REVERSE
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
         , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0)
         , "PPMPF_TUP_REVERSE with 16 arguments" )

PPMPF_TST( ppmpf_tup_reverse32
         , PPMPF_TUP_REVERSE
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0)
         , "PPMPF_TUP_REVERSE with 32 arguments" )

PPMPF_TST( ppmpf_tup_reverse64
          , PPMPF_TUP_REVERSE
          , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
             ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
             ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
             ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0)
          , "PPMPF_TUP_REVERSE with 64 arguments")

PPMPF_TST( ppmpf_tup_reverse128
         , PPMPF_TUP_REVERSE
         , ((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
            ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0)
          , "PPMPF_TUP_REVERSE with 128 arguments" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tup_reverse
                , ( ppmpf_tup_reverse8
                  , ppmpf_tup_reverse16
                  , ppmpf_tup_reverse32
                  , ppmpf_tup_reverse64
                  , ppmpf_tup_reverse128 )
                , true
                , "testing ppmpf tuple reversal" )

PPMPF_TEST_MRUN(check_tup_reverse)
