/*~
 * Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
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

#ifndef _CLAUSE_AMPLE_OPRT_STORAGE_HH_
#define _CLAUSE_AMPLE_OPRT_STORAGE_HH_

#include <clause/ample/oprt/fundamentals.hh>

/*++
 * Several oprt metafunction handlers that are to be used on ample - based
 * collections.
 */

namespace clause {
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

template<typename Collection_T>
struct clear
     : Collection_T::template oprt_clear<>::type
{};

} /* ample */
} /* clause */

#endif /* _CLAUSE_AMPLE_OPRT_STORAGE_HH_ */
