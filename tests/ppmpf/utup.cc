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

#include <clause/ppmpf/collections/tuple.hh>
#include <clause/test.hh>

PPMPF_TST( ppmpf_utup1
         , PPMPF_UTUP
         , (a0,b0,c0,d0,e0)
         , ((a0,b0,c0,d0,e0),0)
         , "PPMPF_UTUP for  5 elements" )

PPMPF_TST( ppmpf_utup2
         , PPMPF_UTUP
         , (a0,b0,c0,d0,e0,a1,b1,c1,d1,e1)
         , ((a0,b0,c0,d0,e0,a1,b1,c1,d1,e1),0)
         , "PPMPF_UTUP for 10 elements" )

PPMPF_TEST_BLOCK( ppmpf
                , check_type
                , ( ppmpf_utup1, ppmpf_utup1 )
                , true
                , "testing ppmpf safe tuple constructor with typeclauses" )

PPMPF_TEST_MRUN(check_type)

