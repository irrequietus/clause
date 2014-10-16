/*~
 * Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
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

#ifndef _CLAUSE_AMPLE_APPLYING_HH_
#define _CLAUSE_AMPLE_APPLYING_HH_

/*~
 * @desc Apply a template template type parameter and handle it over through a
 *       oprt_apply metahandler, making it clause::ample::apply usable in all
 *       algorithms.
 * @tprm F: template template type parameter.
 * @inst Depends on how the internal oprt_apply is used by clause::ample::apply.
 */
template<template<typename...> class F>
struct applying {
    template<typename... X>
    struct oprt_apply {
        typedef F<X...> type;
    };
};

#endif /* _CLAUSE_AMPLE_APPLYING_HH_ */
