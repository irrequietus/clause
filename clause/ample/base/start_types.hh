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

#ifndef CLAUSE_AMPLE_BASE_START_TYPES_HH
#define CLAUSE_AMPLE_BASE_START_TYPES_HH

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

struct types_match__ {
    template<typename X, typename Y>
    struct oprt_apply
    { typedef boolean<false> type; };
    
    template<typename A>
    struct oprt_apply<A,A>
    { typedef boolean<true> type; };
};

struct values_match__ {
    /* TODO: something equivalent to ensure is required for values */
    template<typename X, typename Y>
    struct oprt_apply
    { typedef boolean<X::value == Y::value> type; };
};

} /* hidden */

template<typename Type_T>
struct as_type_providing
     : hidden::as_type_providing_impl<Type_T>
{};

template<typename Type_T>
using extype = typename Type_T::type;

/*~
 * @desc The fundamental 'parametric error' variadic class template. This is
 *       going to be used as the common pathway to which all kinds of errors
 *       that are algorithmically detectable during recursive instantiations
 *       are to actually instantiate to.
 * @omth oprt_apply: When a failure occurs, its apply<...> should fail.
 * @parm Types_T: A series of parameters that are reserved for the time being.
 * @inst type: a member type declaration of its own instantiation.
 */
template<typename... Types_T>
struct failure {
    using type = failure<Types_T...>;

    template<typename... X>
    struct oprt_apply {
        using type = failure<X...>;
    };
};

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_BASE_START_TYPES_HH */
