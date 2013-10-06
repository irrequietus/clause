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

#ifndef _ODREEX_AMPLE_STORAGE_BLOCK_HH_
#define _ODREEX_AMPLE_STORAGE_BLOCK_HH_

#include <odreex/ample/base/start_types.hh>
#include <odreex/ample/base/basic_number.hh>
#include <odreex/ample/oprt/fundamentals.hh>

namespace odreex {
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
} /* odreex */

#endif /* _ODREEX_AMPLE_STORAGE_BLOCK_HH_ */
