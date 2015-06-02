/*~
 * Copyright (C) 2013, 2014, 2015 George Makrydakis <george@irrequietus.eu>
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

#ifndef _CLAUSE_PARSE_UTIL_HH_
#define _CLAUSE_PARSE_UTIL_HH_

#include <clause/ample/ensure.hh>
#include <clause/ample/base/basic_number.hh>
#include <clause/ample/logic/when.hh>
#include <clause/parse/prsr.hh>

namespace clause {
namespace parse {

/*~
 * @desc A tool for handling deployment of clause::parse `deployable static
 *       member templates for parsing use.
 * @note We only require a specific specialization to work.
 */
template<typename T>
struct deployable_as
     : ample::failure<deployable_as<ample::failure<>>>
{};

/*~
 * @desc Termination aid for `recursively_conjunctive, `recursively_disjunctive.
 * @tprm Type_T: The actual type performing the conjunction/disjunction.
 */
template<typename Type_T>
struct deployable_term {
    template<typename X, typename Type_X>
    static inline bool deployable(Type_X & x, ample::natural<1>)
    { return X::template deploy(x); }
};

/*~
 * @pspc clause::parse::deployable_as
 * @note Resets a compliant parser interface depending on evaluation.
 * @tprm Operation_T: Enclosing operation to be applied upon other expressions.
 * @tprm Types_T    : A type parameter type pack representing other expressions.
 */
template<template<typename...> class Operation_T, typename... Types_T>
struct deployable_as<Operation_T<Types_T...>> {
    template< typename Type_T
            , typename Proxy_T = Operation_T<Types_T...>
            , typename Tag_T = ample::natural<sizeof...(Types_T)> >
    static bool deploy(Type_T & x) {
        of_iterator<Type_T> tmp(x.getl());
        return Proxy_T::template deployable<Types_T...>(x, Tag_T())
            ? true
            : [&](){ x.setl(tmp); return false; }();
    }
};

/*~
 * @desc Allowing recursion to occur as a CRTP-like interface for the parsing
 *       components of clause over a conjunction.
 * @tprm Z: Enclosing template type parameter type used for abstracting the
 *          actual recursion through the `deployable static member templates.
 *          It has to offer a deploy static member template.
 * @tprm F:
 * @todo Implement constraints (will *not* be using 'concepts lite' etc).
 * @note It can be rearranged without friend class template injection but
 *       this is the quick prototype.
 */
template<template<typename...> class Z>
struct recursively_conjunctive
     : private deployable_term<recursively_conjunctive<Z>> {
private:
    template<typename> friend struct deployable_as;
    using deployable_term<recursively_conjunctive<Z>>::deployable;
    template<typename X, typename... Y, typename Type_T>
    static inline bool deployable(Type_T & x, ample::natural<sizeof...(Y)+1>)
    {  return X::template deploy(x) && Z<Y...>::template deploy(x); }

};

/*~
 * @desc Allowing recursion to occur as a CRTP-like interface for the parsing
 *       components of clause over a disjunction.
 * @tprm Z: Enclosing template type parameter type used for abstracting the
 *          actual recursion through the `deployable static member templates.
 *          It has to offer a deploy static member template.
 * @tprm F:
 * @todo Implement constraints (will *not* be using 'concepts lite' etc).
 * @note It can be rearranged without friend class template injection but
 *       this is the quick prototype.
 */
template<template<typename...> class Z>
struct recursively_disjunctive
     : private deployable_term<recursively_disjunctive<Z>> {
private:
    template<typename> friend struct deployable_as;
    using deployable_term<recursively_disjunctive<Z>>::deployable;
    template<typename X, typename... Y, typename Type_T>
    static inline bool deployable(Type_T & x, ample::natural<sizeof...(Y)+1>)
    {  return X::template deploy(x) || Z<Y...>::template deploy(x); }

};

/*~
 * @desc Create a parsing object compatible with the semantics we need, out of
 *       two iterators.
 * @tprm I       : iterator type
 * @tprm Parser_T: the parser type is actually clause::parse::toyparser<> by
 *       default for the time being.
 */
template<typename I, typename Parser_T = toyparser<>>
Parser_T make_parser(I a, I b) {
    return Parser_T(a,b);
}

} /* parse */
} /* clause */

#endif /* _CLAUSE_PARSE_UTIL_HH_ */
