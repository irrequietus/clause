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

#ifndef CLAUSE_AMPLE_BASE_BASIC_NUMBER_HH
#define CLAUSE_AMPLE_BASE_BASIC_NUMBER_HH

#include <cinttypes>

namespace clause {
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
    
    template<typename...>
    struct oprt_next
         : oprt_add<basic_number<Type_T, 1>>
    {};
    
    template<typename...>
    struct oprt_prev
         : oprt_sub<basic_number<Type_T, 1>>
    {};
};

template<uint64_t N = 0>
using num64u = basic_number<uint64_t, N>;

template<uint32_t N = 0>
using num32u = basic_number<uint32_t, N>;

template<int64_t N = 0>
using num64 = basic_number<int64_t, N>;

template<int32_t N = 0>
using num32 = basic_number<int32_t, N>;

template<uint64_t N = 0>
using natural = basic_number<uint64_t, N>;

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_BASE_BASIC_NUMBER_HH */
