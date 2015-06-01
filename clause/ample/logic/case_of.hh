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

#ifndef _CLAUSE_AMPLE_LOGIC_CASE_OF_HH_
#define _CLAUSE_AMPLE_LOGIC_CASE_OF_HH_

#include <clause/ample/oprt/fundamentals.hh>

namespace clause {
namespace ample {

/*~
 * @desc A predicate/action clause pair, where the action clause is applied if
 *       and only if the predicate allows it to, otherwise it instantiates
 *       to a failure<>. The action clause has to be an unary metahandler.
 * @tprm Pred_T  : A predicate type that is casted to a boolean<...>.
 * @tprm Action_T: A type containing the function to be used through apply<...>.
 * @omth oprt_apply: It will apply `Action_T to the type parameters passed to
 *                   it provided `Pred_T evaluates to boolean<true>.
 * @note In all cases of mistaken instantiation, the internal implementation
 *       instantiates to failure<>.
 */
template<typename Pred_T, typename Action_T>
struct case_of {
    template<typename Type_X>
    struct oprt_apply {
    private:
        template<typename Arg_T>
        static apply<Action_T, Arg_T> implp__(boolean<true>,Arg_T);
        
        template<typename Arg_T>
        static failure<> implp__(boolean<false>, Arg_T);
    public:
        using type
            = extype<decltype(implp__( boolean<(bool)Pred_T::value>()
                                     , is_just<Type_X>() ) )>;
    };
};

} /* ample */
} /* clause */

#endif /* _CLAUSE_AMPLE_LOGIC_CASE_OF_HH_ */
