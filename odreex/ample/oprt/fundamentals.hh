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

#ifndef _ODREEX_AMPLE_OPRT_FUNDAMENTALS_HH_
#define _ODREEX_AMPLE_OPRT_FUNDAMENTALS_HH_

namespace odreex {
namespace ample {

template<typename Type_T, typename Type_Q>
struct add
     : Type_T::template oprt_add<Type_Q>::type
{};

template<typename Type_T, typename Type_Q>
struct sub
     : Type_T::template oprt_sub<Type_Q>::type
{};

template<typename Type_T, typename Type_Q>
struct mul
     : Type_T::template oprt_mul<Type_Q>::type
{};

template<typename Type_T, typename Type_Q>
struct div
     : Type_T::template oprt_div<Type_Q>::type
{};

template<typename Type_T>
struct next
     : Type_T::oprt_next::type
{};

template<typename Type_T>
struct prev
     : Type_T::oprt_prev::type
{};

template<typename Type_T>
struct size_of
     : Type_T::oprt_size_of::type
{};

template<typename Type_T>
struct factor_of
     : Type_T::oprt_factor_of::type
{};

template<typename Type_T>
struct base_of
     : Type_T::oprt_base_of::type
{};

template<typename Type_T>
struct enclosed_base_of
     : Type_T::oprt_base_of
{};

} /* ample */
} /* odreex */

#endif /* _ODREEX_AMPLE_OPRT_FUNDAMENTALS_HH_ */
