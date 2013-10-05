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

#ifndef _ODREEX_PPMPF_COLLECTIONS_SIZEOF_HH_
#define _ODREEX_PPMPF_COLLECTIONS_SIZEOF_HH_

#include <odreex/ppmpf/kernel/cpro/core.hh>
#include <odreex/ppmpf/kernel/logic/alu.hh>
#include <odreex/ppmpf/kernel/cpro/tupseq.hh>
#include <odreex/ppmpf/algorithms/fold.hh>

/* Assistive macro for integer incrementation during folding. */
#define PPMPF_PLUS__(x,y) PPMPF_NEXT(PPMPF_DREF(x))

/* NOTE: PPMPF_TUP_SIZEOF(tup) returns the number of tuple members existing
 * in a given tuple (tup), which is a parenthesis enclosed comma separated
 * series of preprocessor tokens.
 */
#define PPMPF_TUP_SIZEOF(tup) \
        PPMPF_DREF(PPMPF_TUP_FOLDL(PPMPF_PLUS__,(PPMPF_IMINV()),tup))

/* NOTE: PPMPF_SEQ_SIZEOF(seq) returns the number of sequence members existing
 * in a given sequence (seq), whitespace separated series of parenthesis
 * enclosed preprocessor tokens.
 */
#define PPMPF_SEQ_SIZEOF(seq) \
        PPMPF_DREF(PPMPF_SEQ_FOLDL(PPMPF_PLUS__,(PPMPF_IMINV()),seq))

#endif /* _ODREEX_PPMPF_COLLECTIONS_SIZEOF_HH_ */
