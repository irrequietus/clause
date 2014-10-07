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

#ifndef _CLAUSE_AMPLE_VECTOR_HH_
#define _CLAUSE_AMPLE_VECTOR_HH_

#include <clause/ample/storage/pack.hh>
#include <clause/ample/oprt/storage.hh>

namespace clause {
namespace ample {

/* ++
 * An implementation of a "type" vector, for use in template metaprogramming.
 * Practically, an ample "vector" is an ample "collection" of types. It gets
 * instantiated through recursive instantiations of the ample/storage related
 * class templates, aiming to offer efficient type access and manipulation
 * in compile time type containers and O(1) semantics where applicable.
 */
template<typename... Types_T>
struct vector
     : storage_pack<storage_push_back<Types_T...>>
{};

/* ++
 * An implementation of a "type" deque, for use in template metaprogramming.
 * For the time being, clause::ample::vector and clause::ample::deque class
 * templates are identical, but that will not be the case in revisions of
 * this library.
 */
template<typename... Types_T>
struct deque
     : storage_pack<storage_push_back<Types_T...>>
{};

} /* ample */
} /* clause */

#endif /* _CLAUSE_AMPLE_VECTOR_HH_ */
