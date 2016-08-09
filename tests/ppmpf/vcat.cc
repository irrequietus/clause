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

PPMPF_TST( ppmpf_cat
         , PPMPF_CAT
         , (a,b)
         , ab
         , "PPMPF_CAT for two preprocessor tokens." )

PPMPF_TST( ppmpf_vcat0
         , PPMPF_VCAT
         , (0,1)
         , 01
         , "PPMPF_VCAT with 2 arguments" )

PPMPF_TST( ppmpf_vcat1
         , PPMPF_VCAT
         , (0,1,2)
         , 012
         , "PPMPF_VCAT with 3 arguments" )

PPMPF_TST( ppmpf_vcat2
         , PPMPF_VCAT
         , (0,1,2,3)
         , 0123
         , "PPMPF_VCAT with 4 arguments" )

PPMPF_TST( ppmpf_vcat3
         , PPMPF_VCAT
         , (0,1,2,3,4,5,6,7)
         , 01234567
         , "PPMPF_VCAT with 8 arguments" )

PPMPF_TST( ppmpf_vcat4
         , PPMPF_VCAT
         , (0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f)
         , 0123456789abcdef
         , "PPMPF_VCAT with 16 arguments" )

PPMPF_TST( ppmpf_vcat5
         , PPMPF_VCAT
         , (0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f)
         , 0123456789abcdef0123456789abcdef
         , "PPMPF_VCAT with 32 arguments" )

PPMPF_TST( ppmpf_vcat6
         , PPMPF_VCAT
         , (0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f)
         , 0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef
         , "PPMPF_VCAT with 64 arguments" )

PPMPF_TST( ppmpf_vcat7
         , PPMPF_VCAT
         , (0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f)
, 0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef
         , "PPMPF_VCAT with 128 arguments" )

PPMPF_TST( ppmpf_vcat8
         , PPMPF_VCAT
         , (0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
           ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f)
, 0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef
         , "PPMPF_VCAT with 256 arguments" )

PPMPF_TEST_BLOCK( ppmpf
                , check_vcat
                , ( ppmpf_vcat0
                  , ppmpf_vcat1
                  , ppmpf_vcat2
                  , ppmpf_vcat3
                  , ppmpf_vcat4
                  , ppmpf_vcat5
                  , ppmpf_vcat6
                  , ppmpf_vcat7
                  , ppmpf_vcat8 )
               , true
               , "testing ppmpf concatenation" )

PPMPF_TEST_MRUN(check_vcat)

