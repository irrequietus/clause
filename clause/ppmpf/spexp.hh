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

#ifndef CLAUSE_PPMPF_SPEXP_HH
#define CLAUSE_PPMPF_SPEXP_HH

#include <clause/ppmpf/ppfk.hh>
#include <clause/ppmpf/algorithms/map.hh>
#include <clause/ppmpf/range.hh>

// Far too often there is the need of generating an indexed sequence of comma
// separated tokens; these macros handle everything pertaining to it while they
// illustrate the use of ppmpf lambdas.

/*~
 * @desc Given an identifier as a prefix, combine it with a number of items
 *       into a comma separated sequence of tokens up to a limit.
 * @pfrg identifier: the prefix.
 * @pfrg       pnum: the upper limit in (a)(b)(c)(d) format.
 */
#define PPMPF_PREFEXP(identifier, pnum) \
        PPMPF_EXCISE( \
            PPMPF_MAP( (PPMPF_CAT,(__0)(_(identifier),__1)) \
                     , (PPMPF_NRANGE_TUP((0)(0)(0)(0), pnum),1)))

/*~
 * @desc Given an identifier as a prefix, combine it with a number of items
 *       of a range, into a comma separated sequence of tokens up to a limit.
 * @pfrg identifier: the prefix.
 * @pfrg         p1: the lower limit in (a)(b)(c)(d) format.
 * @pfrg         p2: the upper limit in (a)(b)(c)(d) format.
 */
#define PPMPF_PREFEXP_RANGE(identifier, p1, p2) \
        PPMPF_EXCISE( \
            PPMPF_MAP( (PPMPF_CAT,(__0)(_(identifier),__1)) \
                     , (PPMPF_NRANGE_TUP(p1, p2),1)))

/*~
 * @desc Given an identifier as a prefix, combine it with a number of items
 *       into a comma separated sequence of tokens up to a limit.
 * @pfrg        pre: prefix to be used.
 * @pfrg       post: suffix to be used.
 * @pfrg       pnum: the upper limit in (a)(b)(c)(d) format.
 */
#define PPMPF_SPEXP(pre,post,pnum) \
        PPMPF_EXCISE( \
            PPMPF_MAP( (PPMPF_VCAT,(__0)(_(pre),__1,_(post))) \
                     , (PPMPF_NRANGE_TUP((0)(0)(0)(0), pnum),1)))

/*~
 * @desc Given an identifier as a prefix, combine it with a number of items
 *       of a range into a comma separated sequence of tokens up to a limit.
 * @pfrg        pre: prefix to be used.
 * @pfrg       post: suffix to be used.
 * @pfrg         p1: the lower limit in (a)(b)(c)(d) format.
 * @pfrg         p2: the upper limit in (a)(b)(c)(d) format.
 */
#define PPMPF_SPEXP_RANGE(pre, post, p1, p2) \
        PPMPF_EXCISE( \
            PPMPF_MAP( (PPMPF_VCAT,(__0)(_(pre),__1,_(post))) \
                     , (PPMPF_NRANGE_TUP(p1, p2),1)))

#endif /* CLAUSE_PPMPF_SPEXP_HH */
