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

#ifndef CLAUSE_AMPLE_FMAP_HH
#define CLAUSE_AMPLE_FMAP_HH

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
 * @note One of the optimizations that can be done in order to run the algorithm
 *       optimally, is to take advantage of the "functorial" nature of pack
 *       expansion. Namely, we can for example define such a function template
 *       that a class template F accepting a single parameter is immediately
 *       expanded using the classical pack expansion mechanism:
 * 
 *       template<template<typename> class F, typename... X>
 *       void fun(F<X>...) {}; // notice the position of the triple-dot
 *       
 *       One problem is that the internals of type containers may have several
 *       implementations (whether with recursive instantiations and overloads,
 *       vertical expansions using preprocessor tricks, integer sequences and
 *       their expansions (this is actually derived from an old technique used
 *       by preprocessor metaprogrammers to get a specific token in a comma
 *       separated token list and "ported" to templates). We are not yet fully
 *       optimized for different scenarios where folds and fmaps are applicable.
 *       
 *       The diversity is justified by the semantics of said containers and
 *       some are to obviously "run" slower when it comes to instantiation time.
 *       That requires diverse implementations not covered by F<X>... and there
 *       are cases (see graph structures) where you may end up requiring very
 *       particular internals. Thus, there are cases where the F<X>... tricks
 *       may not cut it, to be short while there are others that may be fitted
 *       into working perfectly with it. The nice thing is that this fmap kind
 *       can be specialized to move to an optimal version, whether F<X>... is
 *       applicable or not. Until all the different kinds of containers I have
 *       in mind are in place, using this version is adequate for developing
 *       algorithms depending on fmap as a notion.
 * 
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

#endif /* CLAUSE_AMPLE_ALGORITHM_HH */
