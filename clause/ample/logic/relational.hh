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

#ifndef _CLAUSE_AMPLE_LOGIC_RELATIONAL_HH_
#define _CLAUSE_AMPLE_LOGIC_RELATIONAL_HH_

#include <clause/ample/base/start_types.hh>

namespace clause {
namespace ample {

template<typename Type_A, typename Type_B>
struct is_equal
     : boolean<(Type_A::value == Type_B::value)>
{};

template<typename Type_A, typename Type_B>
struct less_than
     : boolean<(Type_A::value < Type_B::value)>
{};

template<typename Type_A, typename Type_B>
struct greater_than
     : boolean<(Type_A::value > Type_B::value)>
{};

template<typename Type_A, typename Type_B>
struct less_or_equal
     : boolean<(Type_A::value <= Type_B::value)>
{};

template<typename Type_A, typename Type_B>
struct greater_or_equal
     : boolean<(Type_A::value >= Type_B::value)>
{};

} /* ample */
} /* clause */

#endif /* _CLAUSE_AMPLE_LOGIC_RELATIONAL_HH_ */
