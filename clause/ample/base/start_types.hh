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

#ifndef _CLAUSE_AMPLE_BASE_START_TYPES_HH_
#define _CLAUSE_AMPLE_BASE_START_TYPES_HH_

#include <type_traits>

namespace clause {
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
} /* clause */

#endif /* _CLAUSE_AMPLE_BASE_START_TYPES_HH_ */
