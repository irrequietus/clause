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

#ifndef _ODREEX_AMPLE_VECTOR_HH_
#define _ODREEX_AMPLE_VECTOR_HH_

#include <odreex/ample/storage/pack.hh>
#include <odreex/ample/oprt/storage.hh>

namespace odreex {
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
 * For the time being, odreex::ample::vector and odreex::ample::deque class
 * templates are identical, but that will not be the case in revisions of
 * this library.
 */
template<typename... Types_T>
struct deque
     : storage_pack<storage_push_back<Types_T...>>
{};

} /* ample */
} /* odreex */

#endif /* _ODREEX_AMPLE_VECTOR_HH_ */
