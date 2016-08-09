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

#ifndef CLAUSE_AMPLE_LOGIC_WHENEVER_HH
#define CLAUSE_AMPLE_LOGIC_WHENEVER_HH

#include <clause/ample/oprt/fundamentals.hh>
#include <clause/ample/logic/case_of.hh>

namespace clause {
namespace ample {
/*~
 * @desc A logical disjunction over a sequence of predicate/action clause pairs.
 *       Each such pair is evaluated and the first one to be true has its action
 *       type parameter applied over the `oprt_apply metahandler embedded in the
 *       metafunction itself to which a type parameter is passed.
 * @tprm Types_T: sequence of `case_of compliant clauses.
 * @omth oprt_apply  : Applies the correct clause upon the parameter passed.
 * @omth oprt_size_of: The number of clauses contained in form of natural<...>
 * @inst The instantiated template is compatible for use with apply<...> and
 *       it has unary semantics (look at `oprt_apply).
 * @note In all cases of mistaken instantiation, the internal implementation
 *       instantiates to failure<>. This algorithm could be implemented in
 *       different ways, this is a suitable implementation for now.
 */
template<typename... Types_T>
struct whenever  {
private:
    template<typename... X>
    struct implp : failure<X...> {};
    
    template<typename A, typename B, typename ...Pred_T, typename... Func_T>
    struct implp<case_of<A, B>, case_of<Pred_T, Func_T>...>
         : when<A, B, extype<implp<case_of<Pred_T, Func_T>...>>>
    {};
    
    template<typename A, typename B>
    struct implp<case_of<A, B>>
         : when<A, B, failure<case_of<A, B>>>
    {};
    
public:
    //*~: oprt_apply metafunction metahandler
    template<typename X, typename...>
    struct oprt_apply
    { using type = apply<extype<implp<Types_T...>>,X>; };
    
    //*~: oprt_size_of metafunction metahandler
    template<typename...>
    struct oprt_size_of
    { using type = natural<sizeof...(Types_T)>; };
};

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_LOGIC_WHENEVER_HH */
