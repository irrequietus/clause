/* --
 * Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_TESTS_PPMPF_HH_
#define _ODREEX_TESTS_PPMPF_HH_

#include <odreex/ample/test.hh>
#include <odreex/ppmpf/ppfk.hh>
#include <odreex/ppmpf/range.hh>
#include <odreex/ppmpf/test.hh>

PPMPF_TEST( ppmpf_test
          , "Initial PPMPF_TEST macro testing"
          , (a hello world string that is getting quoted)
          , (a hello world string that is getting quoted) )

PPMPF_TEST( ppmpf_tup_reverse
          , "PPMPF_TUP_REVERSE with 128 arguments"
          , PPMPF_TUP_REVERSE((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
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
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0))

PPMPF_TEST( ppmpf_cat
          , "PPMPF_CAT for two preprocessor tokens."
          , (PPMPF_CAT(a,b))
          , (ab) )

PPMPF_TEST( ppmpf_vcat0
          , "PPMPF_VCAT with 2 arguments"
          , (PPMPF_VCAT(0,1))
          , (01) )

PPMPF_TEST( ppmpf_vcat1
          , "PPMPF_VCAT with 3 arguments"
          , (PPMPF_VCAT(0,1,2))
          , (012) )

PPMPF_TEST( ppmpf_vcat2
          , "PPMPF_VCAT with 4 arguments"
          , (PPMPF_VCAT(0,1,2,3))
          , (0123) )

PPMPF_TEST( ppmpf_vcat3
          , "PPMPF_VCAT with 8 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7))
          , (01234567) )

PPMPF_TEST( ppmpf_vcat4
          , "PPMPF_VCAT with 16 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0123456789abcdef) )

PPMPF_TEST( ppmpf_vcat5
          , "PPMPF_VCAT with 32 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0123456789abcdef0123456789abcdef) )

PPMPF_TEST( ppmpf_vcat6
          , "PPMPF_VCAT with 64 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef))

PPMPF_TEST( ppmpf_vcat7
          , "PPMPF_VCAT with 128 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
, (0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef))

PPMPF_TEST( ppmpf_vcat8
          , "PPMPF_VCAT with 256 arguments"
          , (PPMPF_VCAT(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
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
                       ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
, (0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef\
0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef))


PPMPF_TEST( ppmpf_nargs0
          , "PPMPF_NARGS with 2 arguments"
          , (PPMPF_NARGS(0,1))
          , (2) )

PPMPF_TEST( ppmpf_nargs1
          , "PPMPF_NARGS with 3 arguments"
          , (PPMPF_NARGS(0,1,2))
          , (3) )

PPMPF_TEST( ppmpf_nargs2
          , "PPMPF_NARGS with 4 arguments"
          , (PPMPF_NARGS(0,1,2,3))
          , (4) )

PPMPF_TEST( ppmpf_nargs3
          , "PPMPF_NARGS with 8 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7))
          , (8) )

PPMPF_TEST( ppmpf_nargs4
          , "PPMPF_NARGS with 16 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (16) )

PPMPF_TEST( ppmpf_nargs5
          , "PPMPF_NARGS with 32 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (32) )

PPMPF_TEST( ppmpf_nargs6
          , "PPMPF_NARGS with 64 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (64))

PPMPF_TEST( ppmpf_nargs7
          , "PPMPF_NARGS with 128 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (128))

PPMPF_TEST( ppmpf_nargs8
          , "PPMPF_NARGS with 256 arguments"
          , (PPMPF_NARGS(0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
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
                        ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (256))

PPMPF_TEST( ppmpf_nrange_tup_0_64
          , "PPMPF_NRANGE_TUP on [0,64], expansion only"
          , PPMPF_NRANGE_TUP((0)(0)(0)(0),(0)(0)(6)(4))
          , (0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,\
25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,\
51,52,53,54,55,56,57,58,59,60,61,62,63,64))

PPMPF_TEST( ppmpf_nrange_seq_0_64
          , "PPMPF_NRANGE_SEQ on [0,64], expansion only"
          , PPMPF_NRANGE_SEQ((0)(0)(0)(0),(0)(0)(6)(4))
          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(10)(11)(12)(13)(14)(15)(16)(17)\
(18)(19)(20)(21)(22)(23)(24)(25)(26)(27)(28)(29)(30)(31)(32)(33)(34)(35)(36)\
(37)(38)(39)(40)(41)(42)(43)(44)(45)(46)(47)(48)(49)(50)(51)(52)(53)(54)(55)\
(56)(57)(58)(59)(60)(61)(62)(63)(64))

PPMPF_TEST( ppmpf_irange_tup_0_140
          , "PPMPF_IRANGE_TUP on [0,140], adding all numbers"
          , PPMPF_TUP_FOLDL_OF( ((PPMPF_IADD,_1),_2)
                              , PPMPF_IRANGE_TUP((0)(0)(0)(0),(0)(1)(4)(0)) )
          , ((9)(8)(7)(0)))

PPMPF_TEST( ppmpf_irange_seq_0_140
          , "PPMPF_IRANGE_SEQ on [0,140], adding all numbers"
          , PPMPF_SEQ_FOLDL_OF( ((PPMPF_IADD,_1),_2)
                              , PPMPF_IRANGE_SEQ((0)(0)(0)(0),(0)(1)(4)(0)) )
          , ((9)(8)(7)(0)))

namespace odreex {
namespace ample {
namespace test {

struct check_ppmpf
     : check< true
            , check_all< PPMPF_TEST_TYPE(ppmpf_test)
                       , PPMPF_TEST_TYPE(ppmpf_vcat0)
                       , PPMPF_TEST_TYPE(ppmpf_vcat1)
                       , PPMPF_TEST_TYPE(ppmpf_vcat2)
                       , PPMPF_TEST_TYPE(ppmpf_vcat3)
                       , PPMPF_TEST_TYPE(ppmpf_vcat4)
                       , PPMPF_TEST_TYPE(ppmpf_vcat5)
                       , PPMPF_TEST_TYPE(ppmpf_vcat6)
                       , PPMPF_TEST_TYPE(ppmpf_vcat7)
                       , PPMPF_TEST_TYPE(ppmpf_vcat8)
                       , PPMPF_TEST_TYPE(ppmpf_nargs0)
                       , PPMPF_TEST_TYPE(ppmpf_nargs1)
                       , PPMPF_TEST_TYPE(ppmpf_nargs2)
                       , PPMPF_TEST_TYPE(ppmpf_nargs3)
                       , PPMPF_TEST_TYPE(ppmpf_nargs4)
                       , PPMPF_TEST_TYPE(ppmpf_nargs5)
                       , PPMPF_TEST_TYPE(ppmpf_nargs6)
                       , PPMPF_TEST_TYPE(ppmpf_nargs7)
                       , PPMPF_TEST_TYPE(ppmpf_nargs8)
                       , PPMPF_TEST_TYPE(ppmpf_tup_reverse)
                       , PPMPF_TEST_TYPE(ppmpf_nrange_tup_0_64)
                       , PPMPF_TEST_TYPE(ppmpf_nrange_seq_0_64)
                       , PPMPF_TEST_TYPE(ppmpf_irange_tup_0_140)
                       , PPMPF_TEST_TYPE(ppmpf_irange_seq_0_140) >>
{};

} /* test */
} /* ppmpf */
} /* odreex */

#endif /* _ODREEX_TESTS_PPMPF_HH_ */
