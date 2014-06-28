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

#ifndef _CLAUSE_PPMPF_ALGORITHMS_FUNCTIONAL_HH_
#define _CLAUSE_PPMPF_ALGORITHMS_FUNCTIONAL_HH_

#include <clause/ppmpf/kernel/cpro/core.hh>
#include <clause/ppmpf/algorithms/fold.hh>

/* 
 * NOTE: PPMPF_COMPOSE: given a ppmpf sequence of macro functions in the form
 * of (f)(g)(h)(i)...(z), they are applied to a parenthesis enclosed ppmpf
 * token of the form (token) in the following order: f(g(h(i(...z(token))))).
 * In practice, this is a macro performing function composition, for an unary
 * parenthesis enclosed macro argument. Due to "dereferencing" occuring during
 * argument forwarding, n-ary functions are supported, though this is a far
 * more demanding conceptually.
 */

#define PPMPF_APPLY2(f,...) PPMPF_APPLY2_(f,__VA_ARGS__)
#define PPMPF_APPLY2_(...) PPMPF_APPLY2__(__VA_ARGS__)
#define PPMPF_APPLY2__(f,...) f(__VA_ARGS__)

#define PPMPF_COMPOSE(x,fseq) \
        PPMPF_DREF(PPMPF_SEQ_FOLDR(PPMPF_APPLY2,(),fseq x))

#endif /* _CLAUSE_PPMPF_ALGORITHMS_FUNCTIONAL_HH_ */
