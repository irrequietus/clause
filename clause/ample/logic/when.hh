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

#ifndef _CLAUSE_AMPLE_LOGIC_WHEN_HH_
#define _CLAUSE_AMPLE_LOGIC_WHEN_HH_

#include <clause/ample/base/start_types.hh>

namespace clause {
namespace ample {

template<bool = true>
struct enable_when
{};

template<bool = true>
struct disable_when
{};

template<typename If, typename Then, typename Else = enable_when<>>
struct when {
private:
    template<bool, typename X, typename Y>
    struct when_;

    template<typename X, typename Y>
    struct when_<true, X,Y>
    { typedef X type_; };

    template<typename X, typename Y>
    struct when_<false, X,Y>
    { typedef Y type_; };

    template<typename X>
    struct when_<true, X, disable_when<true> >
    {};

    template<typename X>
    struct when_<false, X, disable_when<true> >
    { typedef X type_; };

    template<typename X>
    struct when_<true, X, disable_when<false> >
    { typedef X type_; };

    template<typename X>
    struct when_<false, X, disable_when<false> >
    { typedef X type_; };

    template<typename X>
    struct when_<false, X, enable_when<true> >
    {};

    template<typename X>
    struct when_<true, X, enable_when<true> >
    { typedef X type_; };

    template<typename X>
    struct when_<true, X, enable_when<false> >
    {};

    template<typename X>
    struct when_<false, X, enable_when<false> >
    { typedef X type_; };

public:
    typedef
        typename when_<static_cast<bool>(If::value), Then, Else>::type_ type;
};

/*~
 * @desc A template alias for `clause::ample::when` where the contained type
 *       is exposed.
 * @parm If  : a type containing a ::value that is to be casted to a boolean,
 *             usually an integral constant expression.
 * @parm Then: when 'If' is convertible to a type representing true  ::value
 * @parm Else: when 'If' is convertible to a type representing false ::value
 * @inst Either to 'Then' when true or 'Else' when false; due to implicit
 *       enable and disable `when`, can be used for sfinae purposes as well.
 */
template<typename If, typename Then, typename Else = enable_when<>>
using where
    = typename when<If, Then, Else>::type;

} /* ample */
} /* clause */


#endif /* _CLAUSE_AMPLE_LOGIC_WHEN_HH_ */
