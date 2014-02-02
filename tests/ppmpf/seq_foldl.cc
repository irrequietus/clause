/* --
 * Copyright (C) 2014, George Makrydakis <irrequietus@gmail.com>
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

#include <odreex/test.hh>
#include <odreex/ppmpf/collections/sequence.hh>

PPMPF_TST( ppmpf_seq_foldl_10 
         , PPMPF_SEQ_FOLDL
         , (PPMPF_CAT, (0), (1)(2)(3)(4)(5)(6)(7)(8)(9))
         , (0123456789)
         , "PPMPF_SEQ_FOLDL with 10 items" )

PPMPF_TST( ppmpf_seq_foldl_20
         , PPMPF_SEQ_FOLDL
         , ( PPMPF_CAT
           , (0)
           , (1)(2)(3)(4)(5)(6)(7)(8)(9)(0)(1)(2)(3)(4)(5)(6)(7)(8)(9) )
         , (01234567890123456789)
         , "PPMPF_SEQ_FOLDL with 20 items" )

PPMPF_TEST_BLOCK( ppmpf
                , check_seq_foldl
                , ( ppmpf_seq_foldl_10
                  , ppmpf_seq_foldl_20 )
                , true
                , "testing ppmpf PPMPF_SEQ_FOLDL (10 and 20 items)" )

PPMPF_TEST_MRUN(check_seq_foldl)
