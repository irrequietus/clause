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

#ifndef _ODREEX_AMPLE_CHARSEQ_HH_
#define _ODREEX_AMPLE_CHARSEQ_HH_

#include <cstdint>
#include <type_traits>
#include <odreex/ppmpf/kernel/cpro/base.hh>

namespace odreex {
namespace ample {

/* NOTE: A prototypical template "metastring" implementation. Despite several
 * advances in C++11, it is still not possible for a series of reasons to deploy
 * strings as non type template parameters. Using the PPMPF_REPEAT macro family
 * from the odreex ppmpf framework, we can "add" this facility without the need
 * of a third party dependency. Null characters can be introduced in this
 * "metastring" called charseq from now on. In a few words this macro expands
 * as follows:
 *
 * Given : ample_charseq("hello, world")
 * Equals: charseq<'h', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd'>
 *
 * And this is a regular type that can be used as a type parameter wherever this
 * is applicable.
 */
template<char... Chars_C>
struct charseq {

    static char const value[(sizeof...(Chars_C) != 0) ? sizeof...(Chars_C) : 1];
    static std::size_t const size = sizeof...(Chars_C);

    template<std::size_t Z>
    static constexpr uint16_t intfy_at(char const (&a)[Z], std::size_t N) {
        return static_cast<uint16_t>(Z - 1 > N ? a[N] : 256);
    }

    template<uint16_t... Int_N>
    struct intfy {
    private:
        template<typename, typename = intfy<>>
        struct impl;

        template<uint16_t X, uint16_t... A, uint16_t... B>
        struct impl<intfy<X, A...>, intfy<B...>>
            : std::conditional< (X == 256)
                              , impl< intfy<A...>, intfy<B...>>
                              , impl <intfy<A...>, intfy<B...,X>>>::type
        {};

        template<uint16_t... X>
        struct impl<intfy<>, intfy<X...>> {
            typedef charseq<static_cast<unsigned char>(X)...> type;
        };
    public:
        typedef typename impl<intfy<Int_N...>>::type type;
    };
};

template<char... X>
char const charseq<X...>::value[(sizeof...(X) != 0) ? sizeof...(X) : 1] =
{ X... };

/* NOTE: The charsops::match function is used in ppmpf tests, eventually fusion
 * with the future version of charseq is planned.
 */
struct charsops {
private:
    template<std::size_t N, std::size_t K>
    static constexpr bool impl( char const (&a)[N]
                              , char const (&b)[K]
                              , int c = 0 ) {
        return (a[c] == b[c])
             ? ( c + 1 == N ? true : impl(a,b,c+1) )
             : false;
    }

public:
    template<std::size_t N, std::size_t K>
    static constexpr bool match( char const (&a)[N]
                               , char const (&b)[K]) {
        return (impl(a,b));
    }
};

} /* ample */
} /* odreex */

/* NOTE: ample_charseq(x) where x is a quoted string is the function macro doing
 * the generation of the charseq<char...> equivalent type from the x string. The
 * ample_charseq_intfy_at is left as a macro to use during generation. The
 * PPMPF_HRMAX value is used for the time being as indicating the maximum string
 * "length" allowed, which right now defaults to 64.
 */
#define ample_charseq_intfy_at(n,x) \
        odreex::ample::charseq<>::intfy_at(x, n)

#define ample_charseq(x) \
    typename odreex::ample::charseq<>::intfy< \
        PPMPF_REPEATS(ample_charseq_intfy_at, PPMPF_COMMA, x) \
    >::type

#endif /* _ODREEX_AMPLE_CHARSEQ_HH_ */
