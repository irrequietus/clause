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

#ifndef _CLAUSE_PARSE_BASE_HH_
#define _CLAUSE_PARSE_BASE_HH_

#include <clause/parse/util.hh>

namespace clause {
namespace parse {

/*~
 * @desc Store a given amount of PODs into a template through non-type parameter
 *       packs in a template header parameter list.
 * @tprm Type_T : The type of the POD allowed to be stored.
 * @tprm Items_N: Pack of non-type parameters to be deployed.
 * @note This can be used in concert with the `charseq template available
 *       within `clause::ample .
 */
template<typename Type_T, Type_T... Items_N>
struct basic_storage {
private:
    static constexpr Type_T const value[] = { Items_N... };
public:
    static constexpr Type_T const *
    begin()
    { return &value[0]; }

    static constexpr Type_T const *
    end()
    { return &value[sizeof...(Items_N)]; }

    static constexpr Type_T const &
    at(std::size_t n)
    { return value[n]; }
};

/*~
 * @note This has to be explicit.
 */
template<typename Type_T, Type_T... Items_N>
constexpr Type_T const basic_storage<Type_T, Items_N...>::value[];

/*~
 * @desc A CRTP building block for creating a logical conjunction over the
 *       items contained in a `clause::parse::basic_storage like interface.
 * @tprm Storage_T: a `clause::parse::basic_storage interface class.
 * @mtdf deploy   : actual implementation through a metadeployer.
 */
template<typename Storage_T>
struct basic_storage_conjunction {
    //*~: @tprm Iterable_T: A parser instance with iterable semantics.
    //*~: @tprm Proxy_T   : In essence, the Storage_T type for CRTP use.
    template<typename Iterable_T, typename Proxy_T = Storage_T>
    static bool deploy(Iterable_T & o) {
        for (auto x(Proxy_T::begin()), y(Proxy_T::end()); x != y; ++x, ++o)
            if(!o || *x != *o)
                return false;
        return true;
    }
};

/*~
 * @desc A CRTP building block for creating a logical disjunction over the
 *       items contained in a `clause::parse::basic_storage like interface.
 * @tprm Storage_T: a `clause::parse::basic_storage interface class.
 * @mtdf deploy   : actual implementation through a metadeployer.
 */
template<typename Storage_T>
struct basic_storage_disjunction {
    //*~: @tprm Iterable_T: A parser instance with iterable semantics.
    //*~: @tprm Proxy_T   : In essence, the Storage_T type for CRTP use.
    template<typename Iterable_T, typename Proxy_T = Storage_T>
    static bool deploy(Iterable_T & o) {
        if (o) {
            for (auto x(Proxy_T::begin()), y(Proxy_T::end()); x != y; ++x) {
                if (*x == *o) { ++o; return true; }
            }
        }
        return false;
    }
};


} /* parse */
} /* clause */

#endif /* _CLAUSE_PARSE_BASE_HH_ */
