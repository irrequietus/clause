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

#ifndef _ODREEX_AMPLE_LOGIC_RELATIONAL_HH_
#define _ODREEX_AMPLE_LOGIC_RELATIONAL_HH_

#include <odreex/ample/base/start_types.hh>

namespace odreex {
namespace ample {

template<typename Type_A, typename Type_B>
struct is_equal
     : boolean<(Type_A::value == Type_B::value)>
{};

template<typename Type_A, typename Type_B>
struct less_than
     : boolean<(Type_A::value < Type_B::value)>
{};

template<typename Type_A, typename Type_B>
struct greater_than
     : boolean<(Type_A::value > Type_B::value)>
{};

template<typename Type_A, typename Type_B>
struct less_or_equal
     : boolean<(Type_A::value <= Type_B::value)>
{};

template<typename Type_A, typename Type_B>
struct greater_or_equal
     : boolean<(Type_A::value >= Type_B::value)>
{};

} /* ample */
} /* odreex */

#endif /* _ODREEX_AMPLE_LOGIC_RELATIONAL_HH_ */
