/*
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

#ifndef _ODREEX_AMPLE_BASE_BASIC_NUMBER_HH_
#define _ODREEX_AMPLE_BASE_BASIC_NUMBER_HH_

#include <cinttypes>

namespace odreex {
namespace ample {

template<typename Type_T, Type_T N = 0>
struct basic_number {
    typedef basic_number type;
    static Type_T const value = N;

    template<typename Number_T>
    struct oprt_add {
        typedef basic_number< Type_T
                            , N + static_cast<Type_T>(Number_T::value)> type;
    };

    template<typename Number_T>
    struct oprt_sub {
        typedef basic_number< Type_T
                            , N - static_cast<Type_T>(Number_T::value)> type;
    };

    template<typename Number_T>
    struct oprt_mul {
        typedef basic_number< Type_T
                            , N * static_cast<Type_T>(Number_T::value)> type;
    };

    template<typename Number_T>
    struct oprt_div {
        static_assert(Number_T::value, "cannot divide by zero");
        typedef basic_number< Type_T
                            , N / static_cast<Type_T>(Number_T::value)> type;
    };

    template<typename Number_T>
    struct oprt_mod {
        typedef basic_number< Type_T
                            , N % static_cast<Type_T>(Number_T::value)> type;
    };

    struct oprt_next
         : oprt_add<basic_number<Type_T, 1>>
    {};

    struct oprt_prev
         : oprt_sub<basic_number<Type_T, 1>>
    {};
};

template<uint64_t N>
using num64u = basic_number<uint64_t, N>;

template<uint32_t N>
using num32u = basic_number<uint32_t, N>;

template<int64_t N>
using num64 = basic_number<int64_t, N>;

template<int32_t N>
using num32 = basic_number<int32_t, N>;

template<uint64_t N>
using natural = basic_number<uint64_t, N>;

} /* ample */
} /* odreex */

#endif /* _ODREEX_AMPLE_BASE_BASIC_NUMBER_HH_ */
