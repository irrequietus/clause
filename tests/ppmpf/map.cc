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

#include <clause/ppmpf/algorithms/map.hh>
#include <clause/ppmpf/range.hh>
#include <clause/test.hh>

PPMPF_TST( ppmpf_map64a
         , PPMPF_MAP
         , (f,(PPMPF_NRANGE_TUP((0)(0)(0)(0),(0)(0)(6)(3)),1))
         , (((f(0)),(f(1)),(f(2)),(f(3)),(f(4)),(f(5)),(f(6)),(f(7)),(f(8)),\
(f(9)),(f(10)),(f(11)),(f(12)),(f(13)),(f(14)),(f(15)),(f(16)),(f(17)),\
(f(18)),(f(19)),(f(20)),(f(21)),(f(22)),(f(23)),(f(24)),(f(25)),(f(26)),\
(f(27)),(f(28)),(f(29)),(f(30)),(f(31)),(f(32)),(f(33)),(f(34)),(f(35)),\
(f(36)),(f(37)),(f(38)),(f(39)),(f(40)),(f(41)),(f(42)),(f(43)),(f(44)),\
(f(45)),(f(46)),(f(47)),(f(48)),(f(49)),(f(50)),(f(51)),(f(52)),(f(53)),\
(f(54)),(f(55)),(f(56)),(f(57)),(f(58)),(f(59)),(f(60)),(f(61)),(f(62)),\
(f(63))),1)
         , "PPMPF_MAP, 64 arguments, plain signature for f" )

PPMPF_TST( ppmpf_map64b
         , PPMPF_MAP
         , ( (f,(__0)(__1,_(X)))
           , (PPMPF_NRANGE_TUP((0)(0)(0)(0),(0)(0)(6)(3)),1))
         , ((f(0,X),f(1,X),f(2,X),f(3,X),f(4,X),f(5,X),f(6,X),f(7,X),f(8,X),\
f(9,X),f(10,X),f(11,X),f(12,X),f(13,X),f(14,X),f(15,X),f(16,X),f(17,X),\
f(18,X),f(19,X),f(20,X),f(21,X),f(22,X),f(23,X),f(24,X),f(25,X),f(26,X),\
f(27,X),f(28,X),f(29,X),f(30,X),f(31,X),f(32,X),f(33,X),f(34,X),f(35,X),\
f(36,X),f(37,X),f(38,X),f(39,X),f(40,X),f(41,X),f(42,X),f(43,X),f(44,X),\
f(45,X),f(46,X),f(47,X),f(48,X),f(49,X),f(50,X),f(51,X),f(52,X),f(53,X),\
f(54,X),f(55,X),f(56,X),f(57,X),f(58,X),f(59,X),f(60,X),f(61,X),f(62,X),\
f(63,X)),1)
         , "PPMPF_MAP, 64 arguments, (f,(__0)(__1,_(X)))" )

PPMPF_TST( ppmpf_map4c
         , PPMPF_MAP
         , (f, PPMPF_SEQC(1,2,3,4))
         , ((f(1))(f(2))(f(3))(f(4)),2)
         , "PPMPF_MAP, ppmpf 4-sequence")

PPMPF_TST( ppmpf_map4d
         , PPMPF_MAP
         , (f, PPMPF_STUP(1,2,3,4))
         , (((f(1)),(f(2)),(f(3)),(f(4))),1)
         , "PPMPF_MAP, ppmpf 4-tuple, safe variant")

PPMPF_TST( ppmpf_map4e
         , PPMPF_MAP
         , (f, PPMPF_UTUP(1,2,3,4))
         , ((f(1),f(2),f(3),f(4)),0)
         , "PPMPF_MAP, ppmpf 4-tuple, unsafe variant")

PPMPF_TST( ppmpf_map4f
         , PPMPF_MAP
         , ((f,(__0)(_1,_(X))), PPMPF_SEQC(1,2,3,4))
         , ((f(1,X))(f(2,X))(f(3,X))(f(4,X)),2)
         , "PPMPF_MAP, ppmpf 4-sequence, (f,(__0)(_1,_(X)))")

PPMPF_TST( ppmpf_map4g
         , PPMPF_MAP
         , ((f,(__0)(_1,_(X))), PPMPF_STUP(1,2,3,4))
         , ((f((1),X),f((2),X),f((3),X),f((4),X)),1)
         , "PPMPF_MAP, ppmpf 4-tuple, safe variant, (f,(__0)(_1,_(X)))")

PPMPF_TST( ppmpf_map4h
         , PPMPF_MAP
         , ((f,(__0)(_1,_(X))), PPMPF_UTUP(1,2,3,4))
         , ((f(1,X),f(2,X),f(3,X),f(4,X)),0)
         , "PPMPF_MAP, ppmpf 4-tuple, unsafe variant, (f,(__0)(_1,_(X)))")

PPMPF_TEST_BLOCK( ppmpf
                , check_ppmpf_map
                , ( ppmpf_map64a, ppmpf_map64b
                  , ppmpf_map4c, ppmpf_map4d
                  , ppmpf_map4e, ppmpf_map4f
                  , ppmpf_map4g, ppmpf_map4h )
               , true
               , "testing PPMPF_MAP - 4th generation" )

PPMPF_TEST_MRUN(check_ppmpf_map)
