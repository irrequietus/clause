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
#include <clause/ppmpf/range.hh>

PPMPF_TST( ppmpf_nrange_seq_0_0
         , PPMPF_NRANGE_SEQ
         , ((0)(0)(0)(0),(0)(0)(0)(0))
         , (0)
         , "PPMPF_NRANGE_SEQ on [0,0], expansion only" )

PPMPF_TST( ppmpf_nrange_seq_0_1
          , PPMPF_NRANGE_SEQ
          , ((0)(0)(0)(0),(0)(0)(0)(1))
          , (0)(1)
          , "PPMPF_NRANGE_SEQ on [0,1], expansion only" )

PPMPF_TST( ppmpf_nrange_seq_0_32
         , PPMPF_NRANGE_SEQ
         , ((0)(0)(0)(0),(0)(0)(3)(2))
         , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(10)(11)(12)(13)(14)(15)(16)(17)\
(18)(19)(20)(21)(22)(23)(24)(25)(26)(27)(28)(29)(30)(31)(32)
         , "PPMPF_NRANGE_SEQ on [0,32], expansion only" )

PPMPF_TST( ppmpf_nrange_seq_0_64
         , PPMPF_NRANGE_SEQ
         , ((0)(0)(0)(0),(0)(0)(6)(4))
         , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(10)(11)(12)(13)(14)(15)(16)(17)\
(18)(19)(20)(21)(22)(23)(24)(25)(26)(27)(28)(29)(30)(31)(32)(33)(34)(35)(36)\
(37)(38)(39)(40)(41)(42)(43)(44)(45)(46)(47)(48)(49)(50)(51)(52)(53)(54)(55)\
(56)(57)(58)(59)(60)(61)(62)(63)(64)
         , "PPMPF_NRANGE_SEQ on [0,64], expansion only" )

PPMPF_TEST_BLOCK( ppmpf
                , check_seq_range
                , ( ppmpf_nrange_seq_0_0
                  , ppmpf_nrange_seq_0_1
                  , ppmpf_nrange_seq_0_32
                  , ppmpf_nrange_seq_0_64 )
               , true
               , "testing ppmpf seq range generators")

PPMPF_TEST_MRUN(check_seq_range)
