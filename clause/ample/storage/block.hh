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

#ifndef _CLAUSE_AMPLE_STORAGE_BLOCK_HH_
#define _CLAUSE_AMPLE_STORAGE_BLOCK_HH_

#include <clause/ample/base/start_types.hh>
#include <clause/ample/base/basic_number.hh>
#include <clause/ample/oprt/fundamentals.hh>

namespace clause {
namespace ample {

template<typename...>
struct storage_push_back
{};

template<typename...>
struct storage_push_front
{};

template<typename... Types_T>
struct storage_sequence {
    struct oprt_size_of
         : natural<sizeof...(Types_T)>
    {};

    template<typename Type_X>
    struct oprt_push_back
         : is_just<storage_sequence<Types_T..., Type_X>>
    {};

    template<typename Type_X>
    struct oprt_push_front
         : is_just<storage_sequence<Types_T..., Type_X>>
    {};
};

template< typename Target_T = storage_sequence<>
        , typename OriginBlock_T = storage_sequence<>
        , typename Number_S = natural<>
        , typename Number_F = natural<>>
struct storage_block : OriginBlock_T {

    using OriginBlock_T::parameter;

    static is_just<Target_T>
    parameter(typename Number_S::type);

    struct oprt_size_of
         : sub<next<size_of<OriginBlock_T>>, Number_F>
    {};

    struct oprt_factor_of
         : Number_F
    {};

    struct oprt_base_of
         : is_just<OriginBlock_T>
    {};

};

template<typename Number_S, typename Number_F>
struct storage_block< storage_sequence<>
                    , storage_sequence<>
                    , Number_S
                    , Number_F> {
    static storage_sequence<>
    parameter(...);

    struct oprt_base_of
         : is_just<storage_block>
    {};

    struct oprt_factor_of
         : natural<>
    {};

    struct oprt_size_of
         : natural<>
    {};
};

} /* ample */
} /* clause */

#endif /* _CLAUSE_AMPLE_STORAGE_BLOCK_HH_ */
