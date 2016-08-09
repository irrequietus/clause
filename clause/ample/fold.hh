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

#ifndef CLAUSE_AMPLE_FOLD_HH
#define CLAUSE_AMPLE_FOLD_HH

#include <clause/ample/oprt/fundamentals.hh>
#include <clause/ample/logic/logical.hh>
#include <clause/ample/logic/when.hh>
#include <clause/ample/logic/relational.hh>
#include <clause/ample/applying.hh>

namespace clause {
namespace ample {
/*~
 * @desc Perform a catamorphism (left fold), over an abstraction containing a
 *       sequence of types according to the clause semantical model. Notice that
 *       the parameter types to be used for instantiating this template have to
 *       obey the 'clause::ample' model.
 * @tprm Fnc_T   : An abstraction to be applied as a binary function using the
 *                `clause::ample::apply` operation.
 * @tprm Seed_T  : An abstraction serving as the seed value for the folding to
 *                 occur properly.
 * @tprm Vector_T: The abstraction containing the types over which the left
 *                 fold is to be performed.
 * @inst To an abstraction providing the semantics of Seed_T oprt handlers. In
 *       case of failure to instantiate for any reason, it adops the failure<>
 *       metaprogramming interface.
 */
template<typename Fnc_T, typename Seed_T, typename Vector_T>
struct foldl
     : where< size_of<Vector_T>
            , where< greater_than<size_of<Vector_T>, natural<1>>
                   , foldl< Fnc_T
                          , apply<Fnc_T, Seed_T, head_of<Vector_T>>
                          , tail_of<Vector_T>>
                   , apply<Fnc_T, Seed_T, head_of<Vector_T>>>
            , Seed_T >
{};

/*~
 * @desc Perform a catamorphism (right fold), over an abstraction containing a
 *       sequence of types according to the clause semantical model. Notice that
 *       the parameter types to be used for instantiating this template have to
 *       obey the 'clause::ample' model.
 * @tprm Fnc_T   : An abstraction to be applied as a binary function using the
 *                `clause::ample::apply` operation.
 * @tprm Seed_T  : An abstraction serving as the seed value for the folding to
 *                 occur properly.
 * @tprm Vector_T: The abstraction containing the types over which the right
 *                 fold is to be performed.
 * @inst To an abstraction providing the semantics of Seed_T oprt handlers. In
 *       case of failure to instantiate for any reason, it adops the failure<>
 *       metaprogramming interface.
 */
template<typename Fnc_T, typename Seed_T, typename Vector_T>
struct foldr
     : where< size_of<Vector_T>
            , where< greater_than<size_of<Vector_T>, natural<1>>
                   , foldr< Fnc_T
                          , apply<Fnc_T, back_of<Vector_T>, Seed_T>
                          , pop_back<Vector_T>>
                   , apply<Fnc_T, back_of<Vector_T>, Seed_T>>
            , Seed_T >
{};

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_ALGORITHM_HH */
