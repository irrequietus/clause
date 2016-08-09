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

#ifndef CLAUSE_PARSE_PRED_HH
#define CLAUSE_PARSE_PRED_HH

#include <clause/parse/base.hh>

namespace clause {
namespace parse {

/*~
 * @desc A ordered sequence of values specified in a type parameter.
 * @tprm Type_T : The type of the characters as type parameter.
 * @tprm Items_N: Each of the characters as a non-type parameter.
 */
template<typename Type_T, Type_T... Items_N>
struct basic_sequence_of
     : basic_storage<Type_T, Items_N...>
     , basic_storage_conjunction<basic_sequence_of<Type_T, Items_N...>>
     , ample::is_just<basic_sequence_of<Type_T, Items_N...>>
{};

/*~
 * @desc A set of characters values specified in a type parameter.
 * @tprm Type_T : The type of the characters as type parameter.
 * @tprm Items_N: Each of the characters as a non-type parameter.
 */
template<typename Type_T, Type_T... Items_N>
struct basic_set_of
     : basic_storage<Type_T, Items_N...>
     , basic_storage_disjunction<basic_set_of<Type_T, Items_N...>>
     , ample::is_just<basic_set_of<Type_T, Items_N...>>
{};

namespace hidden {

template<typename Char_T, Char_T A, Char_T B>
struct basic_interval {
private:
    template<Char_T... X>
    struct wrap {};

    template<Char_T X, Char_T X0, Char_T XN, typename T>
    struct impl_;

    template<Char_T X, Char_T X0, Char_T XN, Char_T... C>
    struct impl_<X,X0,XN,wrap<C...>>
         : impl_<X+1,X0,XN,wrap<C...,X>>
    {};

    template<Char_T X, Char_T X0, Char_T... C>
    struct impl_<X,X0,X,wrap<C...>>
    { using type = basic_set_of<Char_T, C...,X>; };
    
public:
    using type
        = typename impl_<A,A,B,wrap<>>::type;
};

} /* hidden */

/*~
 * @desc Specifying an interval of characters.
 * @tprm Char_T: Character type used
 * @tprm Char_A: non-type Char_T type parameter, left limit.
 * @tprm Char_B: non-type Char_T type parameter, right limit.
 */
template<typename Char_T, Char_T Char_A, Char_T Char_B>
struct basic_interval
     : ample::extype<hidden::basic_interval<char, Char_A, Char_B>>
{};

/*~
 * @desc A ordered sequence of char values specified in a type parameter.
 * @tprm Chars_C: Each of the characters as a non-type parameter.
 */
template<char... Chars_C>
struct char_sequence_of
     : basic_sequence_of<char, Chars_C...>
{};

/*~
 * @desc A set of char values specified in a type parameter.
 * @tprm Chars_C: Each of the characters as a non-type parameter.
 */
template<char... Chars_C>
struct char_set_of
     : basic_set_of<char,Chars_C...>
{};

/*~
 * @desc A interval of char values specified in a type parameter.
 * @tprm Char_A: Left limit.
 * @tprm Char_B: Right limit.
 */
template<char Char_A, char Char_B>
struct char_interval_of
     : basic_interval<char, Char_A, Char_B>
{};

} /* parse */
} /* clause */

#endif /* CLAUSE_PARSE_PRED_HH */
