/* --
 * Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
 *
 * This file is part of odreex.
 *
 * odreex is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * odreex is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * odreex. If not, see http://www.gnu.org/licenses/.
 *
 */

#ifndef _ODREEX_AMPLE_LOGIC_WHEN_HH_
#define _ODREEX_AMPLE_LOGIC_WHEN_HH_

#include <odreex/ample/base/start_types.hh>

namespace odreex {
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
} /* odreex */


#endif /* _ODREEX_AMPLE_LOGIC_WHEN_HH_ */
