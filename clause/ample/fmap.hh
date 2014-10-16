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

#ifndef _CLAUSE_AMPLE_FMAP_HH_
#define _CLAUSE_AMPLE_FMAP_HH_

#include <clause/ample/oprt/fundamentals.hh>
#include <clause/ample/logic/logical.hh>
#include <clause/ample/logic/when.hh>
#include <clause/ample/logic/relational.hh>
#include <clause/ample/applying.hh>

namespace clause {
namespace ample {

/*~
 * @desc Perform a structure preserving transformation over a type container
 *       abstraction, following the semantics of the `clause::ample` model.
 * @tprm Fnc_T   : The unary function abstraction that is to be applied over
 *                 the contained types for the transformation to occur.
 * @tprm Origin_T: The type container abstraction where the types are actually
 *                 contained, for example `clause::ample::vector`. By default,
 *                 the metaprogramming interface of a container abstraction type
 *                 resulting from clear<Origin_T> will be used.
 * @tprm Target_T: The type containr abstraction where the transformed types
 *                 are to be stored, for example `clause::ample::vector`.
 * @inst Instantiates to an abstraction preserving the metaprogramming interface
 *       of Target_T, or to a failure<> depending on type container semantics
 *       and operation.
 */
template<typename Fnc_T, typename Origin_T, typename Target_T = clear<Origin_T>>
struct fmap
     : where< size_of<Origin_T>
            , where< greater_than<size_of<Origin_T>, natural<1>>
                   , fmap< Fnc_T
                         , tail_of<Origin_T>
                         , push_back<Target_T, apply<Fnc_T, head_of<Origin_T>>>>
                   , push_back<Target_T,apply<Fnc_T, head_of<Origin_T>>>>
            , Target_T >
{};

} /* ample */
} /* clause */

#endif /* _CLAUSE_AMPLE_ALGORITHM_HH_ */
