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

#include <clause/test.hh>
#include <clause/ppmpf/collections/tuple.hh>

PPMPF_TST( ppmpf_tup_zipwith
         , PPMPF_TUP_ZIPWITH
         , ( PPMPF_VCAT
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 ) )
         , ((00),(11),(22),(33),(44),(55),(66),(77),(88),(99))
         , "PPMPF_TUP_ZIPWITH (zipwith using 2 safe tuples)" )

PPMPF_TST( ppmpf_tup_zipwith3   
         , PPMPF_TUP_ZIPWITH3
         , ( PPMPF_VCAT
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
           , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 ) )
         , ((0a0),(1b1),(2c2),(3d3),(4e4),(5f5),(6g6),(7h7),(8i8),(9j9))
         , "PPMPF_TUP_ZIPWITH3 (zipwith using 3 safe tuples)" )

PPMPF_TST( ppmpf_tup_zipwith4
         , PPMPF_TUP_ZIPWITH4
         , ( PPMPF_VCAT
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
           , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
           , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j ) )
         , ((0a0a),(1b1b),(2c2c),(3d3d),(4e4e),\
(5f5f),(6g6g),(7h7h),(8i8i),(9j9j))
         , "PPMPF_TUP_ZIPWITH4 (zipwith using 4 safe tuples)" )

PPMPF_TST( ppmpf_tup_zipwith5
         , PPMPF_TUP_ZIPWITH5
         , ( PPMPF_VCAT
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
           , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
           , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 ) )
         , ((0a0a0),(1b1b1),(2c2c2),(3d3d3),(4e4e4),\
(5f5f5),(6g6g6),(7h7h7),(8i8i8),(9j9j9))
         , "PPMPF_TUP_ZIPWITH5 (zipwith using 5 safe tuples)" )

PPMPF_TST( ppmpf_tup_zipwith6
         , PPMPF_TUP_ZIPWITH6
         , ( PPMPF_VCAT
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
           , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
           , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j )
           , PPMPF_TUPLE( 0,1,2,3,4,5,6,7,8,9 )
           , PPMPF_TUPLE( a,b,c,d,e,f,g,h,i,j ) )
         , ((0a0a0a),(1b1b1b),(2c2c2c),(3d3d3d),(4e4e4e),\
(5f5f5f),(6g6g6g),(7h7h7h),(8i8i8i),(9j9j9j))
          , "PPMPF_TUP_ZIPWITH6 (zipwith using 6 safe tuples)" )

PPMPF_TEST_BLOCK( ppmpf
                , check_tuple_zipwith
                , ( ppmpf_tup_zipwith
                  , ppmpf_tup_zipwith3
                  , ppmpf_tup_zipwith4
                  , ppmpf_tup_zipwith5
                  , ppmpf_tup_zipwith6 )
                , true
                , "testing ppmpf PPMPF_TUP_ZIPWITH (2 - 6)" )

PPMPF_TEST_MRUN(check_tuple_zipwith)
