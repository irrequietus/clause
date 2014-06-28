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
    typedef typename when_<If::value, Then, Else>::type_ type;
};

} /* ample */
} /* clause */


#endif /* _CLAUSE_AMPLE_LOGIC_WHEN_HH_ */
