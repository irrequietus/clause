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
#include <clause/ppmpf/ppfk.hh>
#include <clause/ppmpf/collections/tuple.hh>
#include <clause/ppmpf/algorithms/map.hh>

PPMPF_TST( ppmpf_type_1
         , PPMPF_TYPEOF
         , (((a,b,c,d,e),0))
         , 0
         , "PPMPF_TYPEOF for ppmpf unsafe tuples" )

PPMPF_TST( ppmpf_type_2
         , PPMPF_DATAOF
         , (((a,b,c,d,e),0))
         , (a,b,c,d,e)
         , "PPMPF_DATAOF for ppmpf unsafe tuples" )

PPMPF_TST( ppmpf_type_3
         , PPMPF_TYPEOF
         , ((((a),(b),(c),(d),(e)),1))
         , 1
         , "PPMPF_TYPEOF for ppmpf safe tuples" )

PPMPF_TST( ppmpf_type_4
         , PPMPF_DATAOF
         , ((((a),(b),(c),(d),(e)),1))
         , ((a),(b),(c),(d),(e))
         , "PPMPF_DATAOF for ppmpf safe tuples" )

PPMPF_TST( ppmpf_type_5
         , PPMPF_TYPEOF
         , ((((a)(b)(c)(d)(e)),2))
         , 2
         , "PPMPF_TYPEOF for ppmpf sequences" )

PPMPF_TST( ppmpf_type_6
         , PPMPF_DATAOF
         , ((((a)(b)(c)(d)(e)),2))
         , ((a)(b)(c)(d)(e))
         , "PPMPF_DATAOF for ppmpf sequences" )

PPMPF_TST( ppmpf_qmap0
         , PPMPF_MAP
         , (f,PPMPF_UTUP(0,1,2,3,4))
         , ((f(0),f(1),f(2),f(3),f(4)),0)
         , "PPMPF_MAP with an unsafe tuple of 5 elements" )

PPMPF_TST( ppmpf_qmap1
         , PPMPF_MAP
         , (f,PPMPF_STUP(0,1,2,3,4))
         , (((f(0)),(f(1)),(f(2)),(f(3)),(f(4))),1)
         , "PPMPF_MAP with a safe tuple of 5 elements" )

PPMPF_TST( ppmpf_qmap2
         , PPMPF_MAP
         , (f,PPMPF_MAP(g,PPMPF_UTUP(0,1,2,3,4)))
         , ((f(g(0)),f(g(1)),f(g(2)),f(g(3)),f(g(4))),0)
         , "PPMPF_MAP self composition, unsafe ppmpf 5-tuple" )

PPMPF_TST( ppmpf_qmap3
         , PPMPF_MAP
         , (f,PPMPF_MAP(g,PPMPF_STUP(0,1,2,3,4)))
         , (((f(g(0))),(f(g(1))),(f(g(2))),(f(g(3))),(f(g(4)))),1)
         , "PPMPF_MAP self composition, safe ppmpf 5-tuple" )

PPMPF_TST( ppmpf_qmap4
         , PPMPF_MAP
         , ((f,(__0)(_1)),PPMPF_MAP(g,PPMPF_UTUP(0,1,2,3,4)))
         , ((f(g(0)),f(g(1)),f(g(2)),f(g(3)),f(g(4))),0)
         , "PPMPF_MAP tentative expression testing with unsafe tuples" )

PPMPF_TST( ppmpf_qmap5
         , PPMPF_MAP
         , ((f,(__0)(_1)),PPMPF_MAP(g,PPMPF_STUP(0,1,2,3,4)))
         , ((f((g(0))),f((g(1))),f((g(2))),f((g(3))),f((g(4)))),1)
         , "PPMPF_MAP tentative expression testing with safe tuples" )

PPMPF_TEST_BLOCK( ppmpf
                , check_type
                , ( ppmpf_type_1, ppmpf_type_2
                  , ppmpf_type_3, ppmpf_type_4
                  , ppmpf_type_5, ppmpf_type_6
                  , ppmpf_qmap0 , ppmpf_qmap1
                  , ppmpf_qmap2 , ppmpf_qmap3
                  , ppmpf_qmap4 , ppmpf_qmap5 )
                , true
                , "testing ppmpf type deductor and PPMPF_MAP" )

PPMPF_TEST_MRUN(check_type)
