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

#ifndef _ODREEX_AMPLE_BASE_START_TYPES_HH_
#define _ODREEX_AMPLE_BASE_START_TYPES_HH_

#include <type_traits>

namespace odreex {
namespace ample {

template<bool b = true>
struct boolean {
    typedef boolean type;
    static bool const value = b;
};

template<typename Type_T>
struct is_just {
    typedef Type_T type;
};

template<typename Type_T>
struct is_just_type
     : is_just<typename Type_T::type>
{};

template<typename Type_T>
struct as_bool
     : boolean<static_cast<bool>(Type_T::value)>
{};

template<typename Type_T, Type_T Value_V>
struct as
     : std::integral_constant<Type_T, Value_V>
{};

namespace hidden {
template<typename Type_T>
struct as_type_providing_impl {
private:
    template<typename Type_X>
    static boolean<true>
    inspect(Type_X*, decltype(typename Type_X::type()) * = 0);

    template<typename Type_X>
    static boolean<false>
    inspect(...);
public:

    typedef decltype(inspect<Type_T>(0)) type;
};

} /* hidden */

template<typename Type_T>
struct as_type_providing
     : hidden::as_type_providing_impl<Type_T>
{};

} /* ample */
} /* odreex */

#endif /* _ODREEX_AMPLE_BASE_START_TYPES_HH_ */
