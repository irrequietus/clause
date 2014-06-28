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

#ifndef _CLAUSE_AMPLE_LOGICAL_LOGICAL_HH_

#include <clause/ample/base/start_types.hh>

namespace clause {
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
} /* clause */

#endif /* _CLAUSE_AMPLE_LOGICAL_LOGICAL_HH_ */
