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

#include <clause/test.hh>
#include <clause/ppmpf/ppfk.hh>

PPMPF_TST( ppmpf_nargs0
         , PPMPF_NARGS
         , (0,1)
         , 2
         , "PPMPF_NARGS with 2 arguments" )

PPMPF_TST( ppmpf_nargs1
         , PPMPF_NARGS
         , (0,1,2)
         , 3
         , "PPMPF_NARGS with 3 arguments" )

PPMPF_TST( ppmpf_nargs2
         , PPMPF_NARGS
         , (0,1,2,3)
         , 4
         , "PPMPF_NARGS with 4 arguments" )

PPMPF_TST( ppmpf_nargs3
         , PPMPF_NARGS
         , (0,1,2,3,4,5,6,7)
         , 8
         , "PPMPF_NARGS with 8 arguments" )

PPMPF_TST( ppmpf_nargs4
         , PPMPF_NARGS
         , (0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f)
         , 16
         , "PPMPF_NARGS with 16 arguments" )

PPMPF_TST( ppmpf_nargs5
         , PPMPF_NARGS
         , ( 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f )
         , 32
         , "PPMPF_NARGS with 32 arguments" )

PPMPF_TST( ppmpf_nargs6
         , PPMPF_NARGS
         , ( 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f)
         , 64
         , "PPMPF_NARGS with 64 arguments" )

PPMPF_TST( ppmpf_nargs7
         , PPMPF_NARGS
         , ( 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f )
          , 128
          , "PPMPF_NARGS with 128 arguments")

PPMPF_TST( ppmpf_nargs8
         , PPMPF_NARGS
         , ( 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           , 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f )
         , 256
         , "PPMPF_NARGS with 256 arguments" )

PPMPF_TEST_BLOCK( ppmpf
                , check_nargs
                , ( ppmpf_nargs0
                  , ppmpf_nargs1
                  , ppmpf_nargs2
                  , ppmpf_nargs3
                  , ppmpf_nargs4
                  , ppmpf_nargs5
                  , ppmpf_nargs6
                  , ppmpf_nargs7
                  , ppmpf_nargs8 )
               , true
               , "testing ppmpf argument counters" )

PPMPF_TEST_MRUN(check_nargs)
