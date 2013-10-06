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

#ifndef _ODREEX_AMPLE_OPRT_STORAGE_HH_
#define _ODREEX_AMPLE_OPRT_STORAGE_HH_

#include <odreex/ample/oprt/fundamentals.hh>

/*++
 * Several oprt metafunction handlers that are to be used on ample - based
 * collections.
 */

namespace odreex {
namespace ample {

template<typename Collection_T, typename Type_T>
struct push_back
     : Collection_T::template oprt_push_back<Type_T>::type
{};

template<typename Collection_T, typename Type_T>
struct push_front
     : Collection_T::template oprt_push_front<Type_T>::type
{};

template<typename Collection_T>
struct pop_back
     : Collection_T::oprt_pop_back::type
{};

template<typename Collection_T>
struct pop_front
     : Collection_T::oprt_pop_front::type
{};

template<typename Collection_T, typename Number_N>
struct atpos
     : Collection_T::template oprt_atpos<Number_N>::type
{};

template<typename Collection_T, typename Type_T, typename Number_N>
struct assign_atpos
     : Collection_T::template oprt_assign_atpos<Number_N, Type_T>::type
{};

template<typename Collection_T>
struct head_of
     : atpos<Collection_T, natural<>>
{};

template<typename Collection_T>
struct tail_of
     : pop_front<Collection_T>
{};

template<typename Collection_T>
struct back_of
     : atpos<Collection_T, prev<size_of<Collection_T>>>
{};

template<typename Collection_T>
struct front_of
     : atpos<Collection_T, natural<>>
{};

} /* ample */
} /* odreex */

#endif /* _ODREEX_AMPLE_OPRT_STORAGE_HH_ */
