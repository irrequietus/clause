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

#include <odreex/ample/test.hh>
#include <odreex/ppmpf/range.hh>
#include <odreex/ppmpf/test.hh>

PPMPF_TEST( ppmpf_nrange_tup_0_0
          , "PPMPF_NRANGE_TUP on [0,0], expansion only"
          , PPMPF_NRANGE_TUP((0)(0)(0)(0),(0)(0)(0)(0))
          , ((0)))

PPMPF_TEST( ppmpf_nrange_tup_0_1
          , "PPMPF_NRANGE_TUP on [0,1], expansion only"
          , PPMPF_NRANGE_TUP((0)(0)(0)(0),(0)(0)(0)(1))
          , ((0),(1)))

PPMPF_TEST( ppmpf_nrange_tup_0_32
          , "PPMPF_NRANGE_TUP on [0,32], expansion only"
          , PPMPF_NRANGE_TUP((0)(0)(0)(0),(0)(0)(3)(2))
          , ((0),(1),(2),(3),(4),(5),(6),(7),(8),(9),(10),(11),(12),(13),(14),\
(15),(16),(17),(18),(19),(20),(21),(22),(23),(24),(25),(26),(27),(28),(29),\
(30),(31),(32)))

PPMPF_TEST( ppmpf_nrange_tup_0_64
          , "PPMPF_NRANGE_TUP on [0,64], expansion only"
          , PPMPF_NRANGE_TUP((0)(0)(0)(0),(0)(0)(6)(4))
          , ((0),(1),(2),(3),(4),(5),(6),(7),(8),(9),(10),(11),(12),(13),(14),\
(15),(16),(17),(18),(19),(20),(21),(22),(23),(24),(25),(26),(27),(28),(29),\
(30),(31),(32),(33),(34),(35),(36),(37),(38),(39),(40),(41),(42),(43),(44),\
(45),(46),(47),(48),(49),(50),(51),(52),(53),(54),(55),(56),(57),(58),(59),\
(60),(61),(62),(63),(64)))

PPMPF_TEST( ppmpf_nrange_seq_0_0
          , "PPMPF_NRANGE_SEQ on [0,0], expansion only"
          , PPMPF_NRANGE_SEQ((0)(0)(0)(0),(0)(0)(0)(0))
          , (0) )

PPMPF_TEST( ppmpf_nrange_seq_0_1
          , "PPMPF_NRANGE_SEQ on [0,1], expansion only"
          , PPMPF_NRANGE_SEQ((0)(0)(0)(0),(0)(0)(0)(1))
          , (0)(1) )

PPMPF_TEST( ppmpf_nrange_seq_0_32
          , "PPMPF_NRANGE_SEQ on [0,32], expansion only"
          , PPMPF_NRANGE_SEQ((0)(0)(0)(0),(0)(0)(3)(2))
          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(10)(11)(12)(13)(14)(15)(16)(17)\
(18)(19)(20)(21)(22)(23)(24)(25)(26)(27)(28)(29)(30)(31)(32))

PPMPF_TEST( ppmpf_nrange_seq_0_64
          , "PPMPF_NRANGE_SEQ on [0,64], expansion only"
          , PPMPF_NRANGE_SEQ((0)(0)(0)(0),(0)(0)(6)(4))
          , (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(10)(11)(12)(13)(14)(15)(16)(17)\
(18)(19)(20)(21)(22)(23)(24)(25)(26)(27)(28)(29)(30)(31)(32)(33)(34)(35)(36)\
(37)(38)(39)(40)(41)(42)(43)(44)(45)(46)(47)(48)(49)(50)(51)(52)(53)(54)(55)\
(56)(57)(58)(59)(60)(61)(62)(63)(64))

PPMPF_TEST_BLOCK( ppmpf
                , check_range
                , ( ppmpf_nrange_tup_0_0
                  , ppmpf_nrange_tup_0_1
                  , ppmpf_nrange_tup_0_32
                  , ppmpf_nrange_tup_0_64
                  , ppmpf_nrange_seq_0_0
                  , ppmpf_nrange_seq_0_1
                  , ppmpf_nrange_seq_0_32
                  , ppmpf_nrange_seq_0_64 )
               , true )

int main() {
    return
        PPMPF_TEST_RUN( check_range
                    , "testing ppmpf range generators" );
}
