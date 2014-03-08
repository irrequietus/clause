/* --
 * Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
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

#include <odreex/ppmpf/functional/bind.hh>
#include <odreex/ppmpf/range.hh>
#include <odreex/test.hh>
#include <odreex/ppmpf/ppfk.hh>

PPMPF_TST( PPMPF_BDS318
         , PPMPF_BDS31
         , ( (f,(__0)(_(X),__1))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(0)(7) ) )
         , (f(X,0),f(X,1),f(X,2),f(X,3),f(X,4),f(X,5),f(X,6),f(X,7))
         , "PPMPF_BDS31,  8 arguments, (f,(__0)(_(X),__1))" )

PPMPF_TST( PPMPF_BDS3116
         , PPMPF_BDS31
         , ( (f,(__0)(_(X),__1))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(1)(5) ) )
         , (f(X,0),f(X,1),f(X,2),f(X,3),f(X,4),f(X,5),f(X,6),f(X,7),f(X,8),\
f(X,9),f(X,10),f(X,11),f(X,12),f(X,13),f(X,14),f(X,15))
         , "PPMPF_BDS31, 16 arguments, (f,(__0)(_(X),__1))" )

PPMPF_TST( PPMPF_BDS3132
         , PPMPF_BDS31
         , ( (f,(__0)(_(X),__1))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(3)(1) ) )
         , (f(X,0),f(X,1),f(X,2),f(X,3),f(X,4),f(X,5),f(X,6),f(X,7),f(X,8),\
f(X,9),f(X,10),f(X,11),f(X,12),f(X,13),f(X,14),f(X,15),f(X,16),f(X,17),\
f(X,18),f(X,19),f(X,20),f(X,21),f(X,22),f(X,23),f(X,24),f(X,25),f(X,26),\
f(X,27),f(X,28),f(X,29),f(X,30),f(X,31))
         , "PPMPF_BDS31, 32 arguments, (f,(__0)(_(X),__1))" )

PPMPF_TST( PPMPF_BDS3164
         , PPMPF_BDS31
         , ( (f,(__0)(_(X),__1))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(6)(3) ) )
         , (f(X,0),f(X,1),f(X,2),f(X,3),f(X,4),f(X,5),f(X,6),f(X,7),f(X,8),\
f(X,9),f(X,10),f(X,11),f(X,12),f(X,13),f(X,14),f(X,15),f(X,16),f(X,17),\
f(X,18),f(X,19),f(X,20),f(X,21),f(X,22),f(X,23),f(X,24),f(X,25),f(X,26),\
f(X,27),f(X,28),f(X,29),f(X,30),f(X,31),f(X,32),f(X,33),f(X,34),f(X,35),\
f(X,36),f(X,37),f(X,38),f(X,39),f(X,40),f(X,41),f(X,42),f(X,43),f(X,44),\
f(X,45),f(X,46),f(X,47),f(X,48),f(X,49),f(X,50),f(X,51),f(X,52),f(X,53),\
f(X,54),f(X,55),f(X,56),f(X,57),f(X,58),f(X,59),f(X,60),f(X,61),f(X,62),\
f(X,63))
         , "PPMPF_BDS31, 64 arguments, (f,(__0)(_(X),__1))" )

// --

PPMPF_TST( PPMPF_BDS3180
         , PPMPF_BDS31
         , ( (f,(__0)(__1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(0)(7) ) )
         , (f(0,X),f(1,X),f(2,X),f(3,X),f(4,X),f(5,X),f(6,X),f(7,X))
         , "PPMPF_BDS31,  8 arguments, (f,(__0)(__1,_(X)))" )

PPMPF_TST( PPMPF_BDS31160
         , PPMPF_BDS31
         , ( (f,(__0)(__1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(1)(5) ) )
         , (f(0,X),f(1,X),f(2,X),f(3,X),f(4,X),f(5,X),f(6,X),f(7,X),f(8,X),\
f(9,X),f(10,X),f(11,X),f(12,X),f(13,X),f(14,X),f(15,X))
         , "PPMPF_BDS31, 16 arguments, (f,(__0)(__1,_(X)))" )

PPMPF_TST( PPMPF_BDS31320
         , PPMPF_BDS31
         , ( (f,(__0)(__1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(3)(1) ) )
         , (f(0,X),f(1,X),f(2,X),f(3,X),f(4,X),f(5,X),f(6,X),f(7,X),f(8,X),\
f(9,X),f(10,X),f(11,X),f(12,X),f(13,X),f(14,X),f(15,X),f(16,X),f(17,X),\
f(18,X),f(19,X),f(20,X),f(21,X),f(22,X),f(23,X),f(24,X),f(25,X),f(26,X),\
f(27,X),f(28,X),f(29,X),f(30,X),f(31,X))
         , "PPMPF_BDS31, 32 arguments, (f,(__0)(__1,_(X)))" )

PPMPF_TST( PPMPF_BDS31640
         , PPMPF_BDS31
         , ( (f,(__0)(__1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(6)(3) ) )
         , (f(0,X),f(1,X),f(2,X),f(3,X),f(4,X),f(5,X),f(6,X),f(7,X),f(8,X),\
f(9,X),f(10,X),f(11,X),f(12,X),f(13,X),f(14,X),f(15,X),f(16,X),f(17,X),\
f(18,X),f(19,X),f(20,X),f(21,X),f(22,X),f(23,X),f(24,X),f(25,X),f(26,X),\
f(27,X),f(28,X),f(29,X),f(30,X),f(31,X),f(32,X),f(33,X),f(34,X),f(35,X),\
f(36,X),f(37,X),f(38,X),f(39,X),f(40,X),f(41,X),f(42,X),f(43,X),f(44,X),\
f(45,X),f(46,X),f(47,X),f(48,X),f(49,X),f(50,X),f(51,X),f(52,X),f(53,X),\
f(54,X),f(55,X),f(56,X),f(57,X),f(58,X),f(59,X),f(60,X),f(61,X),f(62,X),\
f(63,X))
         , "PPMPF_BDS31, 64 arguments, (f,(__0)(__1,_(X)))" )

// --
PPMPF_TST( PPMPF_BDS3181
         , PPMPF_BDS31
         , ( (f,(__0)(_(X),_1))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(0)(7) ) )
         , (f(X,(0)),f(X,(1)),f(X,(2)),f(X,(3)),\
f(X,(4)),f(X,(5)),f(X,(6)),f(X,(7)))
         , "PPMPF_BDS31, 16 arguments, (f,(__0)(_(X),_1))" )

PPMPF_TST( PPMPF_BDS31161
         , PPMPF_BDS31
          , ( (f,(__0)(_(X),_1))
            , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                              , (0)(0)(1)(5) ) )
         , (f(X,(0)),f(X,(1)),f(X,(2)),f(X,(3)),f(X,(4)),f(X,(5)),f(X,(6)),\
f(X,(7)),f(X,(8)),f(X,(9)),f(X,(10)),f(X,(11)),f(X,(12)),f(X,(13)),f(X,(14)),\
f(X,(15)))
         , "PPMPF_BDS31, 32 arguments, (f,(__0)(_(X),_1))" )

PPMPF_TST( PPMPF_BDS31321
         , PPMPF_BDS31
         , ( (f,(__0)(_(X),_1))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(3)(1) ) )
         , (f(X,(0)),f(X,(1)),f(X,(2)),f(X,(3)),f(X,(4)),f(X,(5)),f(X,(6)),\
f(X,(7)),f(X,(8)),f(X,(9)),f(X,(10)),f(X,(11)),f(X,(12)),f(X,(13)),\
f(X,(14)),f(X,(15)),f(X,(16)),f(X,(17)),f(X,(18)),f(X,(19)),f(X,(20)),\
f(X,(21)),f(X,(22)),f(X,(23)),f(X,(24)),f(X,(25)),f(X,(26)),f(X,(27)),\
f(X,(28)),f(X,(29)),f(X,(30)),f(X,(31)))
      , "PPMPF_BDS31, 16 arguments, (f,(__0)(_(X),_1))" )

PPMPF_TST( PPMPF_BDS31641
      , PPMPF_BDS31
      , ( (f,(__0)(_(X),_1))
            , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                              , (0)(0)(6)(3) ) )
      , (f(X,(0)),f(X,(1)),f(X,(2)),f(X,(3)),f(X,(4)),f(X,(5)),f(X,(6)),\
f(X,(7)),f(X,(8)),f(X,(9)),f(X,(10)),f(X,(11)),f(X,(12)),f(X,(13)),\
f(X,(14)),f(X,(15)),f(X,(16)),f(X,(17)),f(X,(18)),f(X,(19)),f(X,(20)),\
f(X,(21)),f(X,(22)),f(X,(23)),f(X,(24)),f(X,(25)),f(X,(26)),f(X,(27)),\
f(X,(28)),f(X,(29)),f(X,(30)),f(X,(31)),f(X,(32)),f(X,(33)),f(X,(34)),\
f(X,(35)),f(X,(36)),f(X,(37)),f(X,(38)),f(X,(39)),f(X,(40)),f(X,(41)),\
f(X,(42)),f(X,(43)),f(X,(44)),f(X,(45)),f(X,(46)),f(X,(47)),f(X,(48)),\
f(X,(49)),f(X,(50)),f(X,(51)),f(X,(52)),f(X,(53)),f(X,(54)),f(X,(55)),\
f(X,(56)),f(X,(57)),f(X,(58)),f(X,(59)),f(X,(60)),f(X,(61)),f(X,(62)),\
f(X,(63)))
      , "PPMPF_BDS31, 64 arguments, (f,(__0)(_(X),_1))" )

PPMPF_TST( PPMPF_BDS3182
         , PPMPF_BDS31
         , ( (f,(__0)(_1,_(X)))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                             , (0)(0)(0)(7) ) )
         , (f((0),X),f((1),X),f((2),X),f((3),X),f((4),X),f((5),X),f((6),X),\
f((7),X))
         , "PPMPF_BDS31,  8 arguments, (f,(__0)(_1,_(X)))" )

PPMPF_TST( PPMPF_BDS31162
         , PPMPF_BDS31
         , ( (f,(__0)(_1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(1)(5) ) )
         , (f((0),X),f((1),X),f((2),X),f((3),X),f((4),X),f((5),X),f((6),X),\
f((7),X),f((8),X),f((9),X),f((10),X),f((11),X),f((12),X),f((13),X),\
f((14),X),f((15),X))
, "PPMPF_BDS31, 16 arguments, (f,(__0)(_1,_(X)))" )

PPMPF_TST( PPMPF_BDS31322
         , PPMPF_BDS31
         , ( (f,(__0)(_1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(3)(1) ) )
         , (f((0),X),f((1),X),f((2),X),f((3),X),f((4),X),f((5),X),f((6),X),\
f((7),X),f((8),X),f((9),X),f((10),X),f((11),X),f((12),X),f((13),X),\
f((14),X),f((15),X),f((16),X),f((17),X),f((18),X),f((19),X),f((20),X),\
f((21),X),f((22),X),f((23),X),f((24),X),f((25),X),f((26),X),f((27),X),\
f((28),X),f((29),X),f((30),X),f((31),X))
         , "PPMPF_BDS31, 32 arguments, (f,(__0)(_1,_(X)))" )

PPMPF_TST( PPMPF_BDS31642
         , PPMPF_BDS31
         , ( (f,(__0)(_1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(6)(3) ) )
         , (f((0),X),f((1),X),f((2),X),f((3),X),f((4),X),f((5),X),f((6),X),\
f((7),X),f((8),X),f((9),X),f((10),X),f((11),X),f((12),X),f((13),X),\
f((14),X),f((15),X),f((16),X),f((17),X),f((18),X),f((19),X),f((20),X),\
f((21),X),f((22),X),f((23),X),f((24),X),f((25),X),f((26),X),f((27),X),\
f((28),X),f((29),X),f((30),X),f((31),X),f((32),X),f((33),X),f((34),X),\
f((35),X),f((36),X),f((37),X),f((38),X),f((39),X),f((40),X),f((41),X),\
f((42),X),f((43),X),f((44),X),f((45),X),f((46),X),f((47),X),f((48),X),\
f((49),X),f((50),X),f((51),X),f((52),X),f((53),X),f((54),X),f((55),X),\
f((56),X),f((57),X),f((58),X),f((59),X),f((60),X),f((61),X),f((62),X),\
f((63),X))
         , "PPMPF_BDS31, 64 arguments, (f,(__0)(_1,_(X)))" )

PPMPF_TST( PPMPF_BDS31_8
         , PPMPF_BDS31
         , ( (f,(_0)(_(X),__1))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                             , (0)(0)(0)(7) ) )
         , ((f(X,0)),(f(X,1)),(f(X,2)),(f(X,3)),(f(X,4)),(f(X,5)),(f(X,6)),\
(f(X,7)))
         , "PPMPF_BDS31,  8 arguments, (f,(_0)(_(X),__1))" )

PPMPF_TST( PPMPF_BDS31_16
         , PPMPF_BDS31
         , ( (f,(_0)(_(X),__1))
             , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                               , (0)(0)(1)(5) ) )
         , ((f(X,0)),(f(X,1)),(f(X,2)),(f(X,3)),(f(X,4)),(f(X,5)),(f(X,6)),\
(f(X,7)),(f(X,8)),(f(X,9)),(f(X,10)),(f(X,11)),(f(X,12)),(f(X,13)),(f(X,14)),\
(f(X,15)))
         , "PPMPF_BDS31, 16 arguments, (f,(_0)(_(X),__1))" )

PPMPF_TST( PPMPF_BDS31_32
         , PPMPF_BDS31
         , ( (f,(_0)(_(X),__1))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
         , (0)(0)(3)(1) ) )
         , ((f(X,0)),(f(X,1)),(f(X,2)),(f(X,3)),(f(X,4)),(f(X,5)),(f(X,6)),\
(f(X,7)),(f(X,8)),(f(X,9)),(f(X,10)),(f(X,11)),(f(X,12)),(f(X,13)),(f(X,14)),\
(f(X,15)),(f(X,16)),(f(X,17)),(f(X,18)),(f(X,19)),(f(X,20)),(f(X,21)),\
(f(X,22)),(f(X,23)),(f(X,24)),(f(X,25)),(f(X,26)),\
(f(X,27)),(f(X,28)),(f(X,29)),(f(X,30)),(f(X,31)))
         , "PPMPF_BDS31, 32 arguments, (f,(_0)(_(X),__1))" )

PPMPF_TST( PPMPF_BDS31_64
         , PPMPF_BDS31
         , ( (f,(_0)(_(X),__1))
         , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                           , (0)(0)(6)(3) ) )
         , ((f(X,0)),(f(X,1)),(f(X,2)),(f(X,3)),(f(X,4)),(f(X,5)),(f(X,6)),\
(f(X,7)),(f(X,8)),(f(X,9)),(f(X,10)),(f(X,11)),(f(X,12)),(f(X,13)),(f(X,14)),\
(f(X,15)),(f(X,16)),(f(X,17)),(f(X,18)),(f(X,19)),(f(X,20)),(f(X,21)),\
(f(X,22)),(f(X,23)),(f(X,24)),(f(X,25)),(f(X,26)),(f(X,27)),(f(X,28)),\
(f(X,29)),(f(X,30)),(f(X,31)),(f(X,32)),(f(X,33)),(f(X,34)),(f(X,35)),\
(f(X,36)),(f(X,37)),(f(X,38)),(f(X,39)),(f(X,40)),(f(X,41)),(f(X,42)),\
(f(X,43)),(f(X,44)),(f(X,45)),(f(X,46)),(f(X,47)),(f(X,48)),(f(X,49)),\
(f(X,50)),(f(X,51)),(f(X,52)),(f(X,53)),(f(X,54)),(f(X,55)),(f(X,56)),\
(f(X,57)),(f(X,58)),(f(X,59)),(f(X,60)),(f(X,61)),(f(X,62)),(f(X,63)))
         , "PPMPF_BDS31, 64 arguments, (f,(_0)(_(X),__1))" )

PPMPF_TST( PPMPF_BDS31_81
         , PPMPF_BDS31
         , ( (f,(_0)(_(X),_1))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                             , (0)(0)(0)(7) ) )
         , ((f(X,(0))),(f(X,(1))),(f(X,(2))),(f(X,(3))),\
(f(X,(4))),(f(X,(5))),(f(X,(6))),(f(X,(7))))
         , "PPMPF_BDS31, 16 arguments, (f,(_0)(_(X),_1))" )

PPMPF_TST( PPMPF_BDS31_161
         , PPMPF_BDS31
         , ( (f,(_0)(_(X),_1))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0), (0)(0)(1)(5) ) )
         , ((f(X,(0))),(f(X,(1))),(f(X,(2))),(f(X,(3))),(f(X,(4))),(f(X,(5))),\
(f(X,(6))),(f(X,(7))),(f(X,(8))),(f(X,(9))),(f(X,(10))),(f(X,(11))),\
(f(X,(12))),(f(X,(13))),(f(X,(14))),(f(X,(15))))
, "PPMPF_BDS31, 32 arguments, (f,(_0)(_(X),_1))" )

PPMPF_TST( PPMPF_BDS31_321
         , PPMPF_BDS31
         , ( (f,(_0)(_(X),_1))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                             , (0)(0)(3)(1) ) )
         , ((f(X,(0))),(f(X,(1))),(f(X,(2))),(f(X,(3))),(f(X,(4))),(f(X,(5))),\
(f(X,(6))),(f(X,(7))),(f(X,(8))),(f(X,(9))),(f(X,(10))),(f(X,(11))),\
(f(X,(12))),(f(X,(13))),(f(X,(14))),(f(X,(15))),(f(X,(16))),(f(X,(17))),\
(f(X,(18))),(f(X,(19))),(f(X,(20))),(f(X,(21))),(f(X,(22))),(f(X,(23))),\
(f(X,(24))),(f(X,(25))),(f(X,(26))),(f(X,(27))),(f(X,(28))),(f(X,(29))),\
(f(X,(30))),(f(X,(31))))
         , "PPMPF_BDS31, 16 arguments, (f,(_0)(_(X),_1))" )

PPMPF_TST( PPMPF_BDS31_641
         , PPMPF_BDS31
         , ( (f,(_0)(_(X),_1))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                             , (0)(0)(6)(3) ) )
         , ((f(X,(0))),(f(X,(1))),(f(X,(2))),(f(X,(3))),(f(X,(4))),(f(X,(5))),\
(f(X,(6))),(f(X,(7))),(f(X,(8))),(f(X,(9))),(f(X,(10))),(f(X,(11))),\
(f(X,(12))),(f(X,(13))),(f(X,(14))),(f(X,(15))),(f(X,(16))),(f(X,(17))),\
(f(X,(18))),(f(X,(19))),(f(X,(20))),(f(X,(21))),(f(X,(22))),(f(X,(23))),\
(f(X,(24))),(f(X,(25))),(f(X,(26))),(f(X,(27))),(f(X,(28))),(f(X,(29))),\
(f(X,(30))),(f(X,(31))),(f(X,(32))),(f(X,(33))),(f(X,(34))),(f(X,(35))),\
(f(X,(36))),(f(X,(37))),(f(X,(38))),(f(X,(39))),(f(X,(40))),(f(X,(41))),\
(f(X,(42))),(f(X,(43))),(f(X,(44))),(f(X,(45))),(f(X,(46))),(f(X,(47))),\
(f(X,(48))),(f(X,(49))),(f(X,(50))),(f(X,(51))),(f(X,(52))),(f(X,(53))),\
(f(X,(54))),(f(X,(55))),(f(X,(56))),(f(X,(57))),(f(X,(58))),(f(X,(59))),\
(f(X,(60))),(f(X,(61))),(f(X,(62))),(f(X,(63))))
         , "PPMPF_BDS31, 64 arguments, (f,(_0)(_(X),_1))" )

PPMPF_TST( PPMPF_BDS31_82
         , PPMPF_BDS31
         , ( (f,(_0)(_1,_(X)))
         , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
         , (0)(0)(0)(7) ) )
         , ((f((0),X)),(f((1),X)),(f((2),X)),(f((3),X)),(f((4),X)),(f((5),X)),\
(f((6),X)),(f((7),X)))
         , "PPMPF_BDS31,  8 arguments, (f,(_0)(_1,_(X)))" )

PPMPF_TST( PPMPF_BDS31_162
         , PPMPF_BDS31
         , ( (f,(_0)(_1,_(X)))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                             , (0)(0)(1)(5) ) )
         , ((f((0),X)),(f((1),X)),(f((2),X)),(f((3),X)),(f((4),X)),(f((5),X)),\
(f((6),X)),(f((7),X)),(f((8),X)),(f((9),X)),(f((10),X)),(f((11),X)),\
(f((12),X)),(f((13),X)),(f((14),X)),(f((15),X)))
         , "PPMPF_BDS31, 16 arguments, (f,(_0)(_1,_(X)))" )

PPMPF_TST( PPMPF_BDS31_322
         , PPMPF_BDS31
         , ( (f,(_0)(_1,_(X)))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
         , (0)(0)(3)(1) ) )
         , ((f((0),X)),(f((1),X)),(f((2),X)),(f((3),X)),(f((4),X)),(f((5),X)),\
(f((6),X)),(f((7),X)),(f((8),X)),(f((9),X)),(f((10),X)),(f((11),X)),\
(f((12),X)),(f((13),X)),(f((14),X)),(f((15),X)),(f((16),X)),(f((17),X)),\
(f((18),X)),(f((19),X)),(f((20),X)),(f((21),X)),(f((22),X)),(f((23),X)),\
(f((24),X)),(f((25),X)),(f((26),X)),(f((27),X)),(f((28),X)),(f((29),X)),\
(f((30),X)),(f((31),X)))
         , "PPMPF_BDS31, 32 arguments, (f,(_0)(_1,_(X)))" )

PPMPF_TST( PPMPF_BDS31_642
         , PPMPF_BDS31
         , ( (f,(_0)(_1,_(X)))
           , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                             , (0)(0)(6)(3) ) )
         , ((f((0),X)),(f((1),X)),(f((2),X)),(f((3),X)),(f((4),X)),(f((5),X)),\
(f((6),X)),(f((7),X)),(f((8),X)),(f((9),X)),(f((10),X)),(f((11),X)),\
(f((12),X)),(f((13),X)),(f((14),X)),(f((15),X)),(f((16),X)),(f((17),X)),\
(f((18),X)),(f((19),X)),(f((20),X)),(f((21),X)),(f((22),X)),(f((23),X)),\
(f((24),X)),(f((25),X)),(f((26),X)),(f((27),X)),(f((28),X)),(f((29),X)),\
(f((30),X)),(f((31),X)),(f((32),X)),(f((33),X)),(f((34),X)),(f((35),X)),\
(f((36),X)),(f((37),X)),(f((38),X)),(f((39),X)),(f((40),X)),(f((41),X)),\
(f((42),X)),(f((43),X)),(f((44),X)),(f((45),X)),(f((46),X)),(f((47),X)),\
(f((48),X)),(f((49),X)),(f((50),X)),(f((51),X)),(f((52),X)),(f((53),X)),\
(f((54),X)),(f((55),X)),(f((56),X)),(f((57),X)),(f((58),X)),(f((59),X)),\
(f((60),X)),(f((61),X)),(f((62),X)),(f((63),X)))
        , "PPMPF_BDS31, 64 arguments, (f,(_0)(_1,_(X)))" )

PPMPF_TST( PPMPF_BDS31_83
         , PPMPF_BDS31
         , ( (f,(_0)(__1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(0)(7) ) )
         , ((f(0,X)),(f(1,X)),(f(2,X)),(f(3,X)),(f(4,X)),(f(5,X)),(f(6,X)),\
(f(7,X)))
         , "PPMPF_BDS31,  8 arguments, (f,(_0)(__1,_(X)))" )

PPMPF_TST( PPMPF_BDS31_163
         , PPMPF_BDS31
         , ( (f,(_0)(__1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(1)(5) ) )
         , ((f(0,X)),(f(1,X)),(f(2,X)),(f(3,X)),(f(4,X)),(f(5,X)),(f(6,X)),\
(f(7,X)),(f(8,X)),(f(9,X)),(f(10,X)),(f(11,X)),(f(12,X)),(f(13,X)),(f(14,X)),\
(f(15,X)))
         , "PPMPF_BDS31, 16 arguments, (f,(_0)(__1,_(X)))" )

PPMPF_TST( PPMPF_BDS31_323
         , PPMPF_BDS31
         , ( (f,(_0)(__1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(3)(1) ) )
         , ((f(0,X)),(f(1,X)),(f(2,X)),(f(3,X)),(f(4,X)),(f(5,X)),(f(6,X)),\
(f(7,X)),(f(8,X)),(f(9,X)),(f(10,X)),(f(11,X)),(f(12,X)),(f(13,X)),(f(14,X)),\
(f(15,X)),(f(16,X)),(f(17,X)),(f(18,X)),(f(19,X)),(f(20,X)),(f(21,X)),\
(f(22,X)),(f(23,X)),(f(24,X)),(f(25,X)),(f(26,X)),(f(27,X)),(f(28,X)),\
(f(29,X)),(f(30,X)),(f(31,X)))
         , "PPMPF_BDS31, 32 arguments, (f,(_0)(__1,_(X)))" )

PPMPF_TST( PPMPF_BDS31_643
         , PPMPF_BDS31
         , ( (f,(_0)(__1,_(X)))
               , PPMPF_NRANGE_TUP( (0)(0)(0)(0)
                                 , (0)(0)(6)(3) ) )
         , ((f(0,X)),(f(1,X)),(f(2,X)),(f(3,X)),(f(4,X)),(f(5,X)),(f(6,X)),\
(f(7,X)),(f(8,X)),(f(9,X)),(f(10,X)),(f(11,X)),(f(12,X)),(f(13,X)),(f(14,X)),\
(f(15,X)),(f(16,X)),(f(17,X)),(f(18,X)),(f(19,X)),(f(20,X)),(f(21,X)),\
(f(22,X)),(f(23,X)),(f(24,X)),(f(25,X)),(f(26,X)),(f(27,X)),(f(28,X)),\
(f(29,X)),(f(30,X)),(f(31,X)),(f(32,X)),(f(33,X)),(f(34,X)),(f(35,X)),\
(f(36,X)),(f(37,X)),(f(38,X)),(f(39,X)),(f(40,X)),(f(41,X)),(f(42,X)),\
(f(43,X)),(f(44,X)),(f(45,X)),(f(46,X)),(f(47,X)),(f(48,X)),(f(49,X)),\
(f(50,X)),(f(51,X)),(f(52,X)),(f(53,X)),(f(54,X)),(f(55,X)),(f(56,X)),\
(f(57,X)),(f(58,X)),(f(59,X)),(f(60,X)),(f(61,X)),(f(62,X)),(f(63,X)))
         , "PPMPF_BDS31, 64 arguments, (f,(_0)(__1,_(X)))" )


PPMPF_TEST_BLOCK( ppmpf
                , check_bind_map_candidate
                , ( PPMPF_BDS318   , PPMPF_BDS3116  , PPMPF_BDS3132
                  , PPMPF_BDS3164  , PPMPF_BDS3180  , PPMPF_BDS31160
                  , PPMPF_BDS31320 , PPMPF_BDS31640 , PPMPF_BDS3181
                  , PPMPF_BDS31161 , PPMPF_BDS31321 , PPMPF_BDS31641
                  , PPMPF_BDS3182  , PPMPF_BDS31162 , PPMPF_BDS31322
                  , PPMPF_BDS31642 , PPMPF_BDS31_8  , PPMPF_BDS31_16
                  , PPMPF_BDS31_32 , PPMPF_BDS31_64 , PPMPF_BDS31_81
                  , PPMPF_BDS31_161, PPMPF_BDS31_321, PPMPF_BDS31_641
                  , PPMPF_BDS31_82 , PPMPF_BDS31_162, PPMPF_BDS31_322
                  , PPMPF_BDS31_642, PPMPF_BDS31_83 , PPMPF_BDS31_163
                  , PPMPF_BDS31_323, PPMPF_BDS31_643 )
               , true
               , "testing PPMPF_BDS31 (bind map candidate)" )

PPMPF_TEST_MRUN(check_bind_map_candidate)
