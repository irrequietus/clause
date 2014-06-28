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

#ifndef _CLAUSE_PPMPF_ALGORITHMS_MAP_HH_
#define _CLAUSE_PPMPF_ALGORITHMS_MAP_HH_

#include <clause/ppmpf/collections/tuple.hh>
#include <clause/ppmpf/collections/sequence.hh>

/*~
 * @desc A high order function applying a given function to each element of a
 *       a given ppmpf collection (sequences, safe and unsafe ppmpf tuples),
 *       also supporting closures with a particular syntax and expanding to
 *       a ppmpf collection of the same typeclause.
 * @pfrg fexp: a plain function or a ppmpf closure.
 * @pfrg tycl: a ppmpf typeclause.
 * @pexp Application of fexp over a ppmpf collection as the latter is described
 *       in the typeclause enclosing it.
 */
#define PPMPF_MAP(fexp,tycl) \
        PPMPF_TYPEFY( PPMPF_PFLD1 \
                    , PPMPF_MHD \
                    , PPMPF_MAP_MHD \
                    , fexp \
                    , PPMPF_IFELSE( PPMPF_IS(PPMPF_TYPEOF(tycl), 2) \
                                  , \
                                  , () )\
                    , tycl )

#endif /* _CLAUSE_PPMPF_ALGORITHMS_MAP_HH_ */
