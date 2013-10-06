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

#ifndef _ODREEX_AMPLE_LOGICAL_LOGICAL_HH_

#include <odreex/ample/base/start_types.hh>

namespace odreex {
namespace ample {

template<typename Type_A, typename Type_B>
struct logical_nor
     : boolean< ! ( static_cast<bool>(Type_A::value) ||
                    static_cast<bool>(Type_B::value) ) >
{};

template<typename Type_A, typename Type_B>
struct logical_and
     : boolean< static_cast<bool>(Type_A::value) &&
                static_cast<bool>(Type_B::value) >
{};

template<typename Type_A, typename Type_B>
struct logical_or
     : boolean< static_cast<bool>(Type_A::value) ||
                static_cast<bool>(Type_B::value) >
{};

template<typename Type_T>
struct logical_not
     : boolean<!static_cast<bool>(Type_T::value) >
{};

template<typename Type_A, typename Type_B>
struct logical_nand
     : logical_not<logical_and<Type_A, Type_B> >
{};

template<typename Type_A, typename Type_B>
struct logical_xor
     : logical_nor< logical_and<Type_A, Type_B>
                  , logical_nor<Type_A, Type_B> >
{};

template<typename Type_A, typename Type_B>
struct logical_xnor
     : logical_nor< logical_nor<Type_A, logical_nor<Type_A, Type_B> >
                  , logical_nor<Type_B, logical_nor<Type_A, Type_B> > >
{};

template<typename Type_T>
struct is_true
     : boolean<static_cast<bool>(Type_T::value) == true>
{};

template<typename Type_T>
struct is_false
     : boolean<static_cast<bool>(Type_T::value) == false>
{};

template<typename Type_T>
struct is_not
     : boolean<!static_cast<bool>(Type_T::value)>
{};

template<typename Type_T>
struct is_null
     : boolean<is_not<Type_T>::value>
{};

template<typename Collection_T>
struct is_empty
     : is_not<size_of<Collection_T>>
{};

} /* ample */
} /* odreex */

#endif /* _ODREEX_AMPLE_LOGICAL_LOGICAL_HH_ */
