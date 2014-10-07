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

#ifndef _CLAUSE_AMPLE_OPRT_FUNDAMENTALS_HH_
#define _CLAUSE_AMPLE_OPRT_FUNDAMENTALS_HH_

namespace clause {
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

template<typename Type_T, typename Type_Q>
struct mod
     : Type_T::template oprt_mod<Type_Q>::type
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
} /* clause */

#endif /* _CLAUSE_AMPLE_OPRT_FUNDAMENTALS_HH_ */
