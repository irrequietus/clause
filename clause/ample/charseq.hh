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

#ifndef _CLAUSE_AMPLE_CHARSEQ_HH_
#define _CLAUSE_AMPLE_CHARSEQ_HH_

#include <cstdint>
#include <type_traits>
#include <clause/ppmpf/kernel/cpro/base.hh>
#include <clause/ample/base/start_types.hh>
#include <clause/ample/oprt/fundamentals.hh>

namespace clause {
namespace ample {

/* NOTE: A prototypical template "metastring" implementation. Despite several
 * advances in C++11, it is still not possible for a series of reasons to deploy
 * strings as non type template parameters. Using the PPMPF_REPEAT macro family
 * from the clause ppmpf framework, we can "add" this facility without the need
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

    static constexpr char const * cbegin() {
        return &value[0];
    }

    static constexpr char const * cend() {
        return &value[size];
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

    template<typename X>
    struct is_charseq {
    private:
        template<typename T>
        struct ischarseq_impl
            : boolean<false>
        {};

        template<char... Chars_X>
        struct ischarseq_impl<charseq<Chars_X...>>
            : boolean<true>
        {};

    public:
        typedef ischarseq_impl<X> type;
    };
};

template<typename T>
struct is_charseq
     : std::integral_constant< bool
                             , charsops::is_charseq<T>::type::value >
{};

} /* ample */
} /* clause */

/* NOTE: ample_charseq(x) where x is a quoted string is the function macro doing
 * the generation of the charseq<char...> equivalent type from the x string. The
 * ample_charseq_intfy_at is left as a macro to use during generation. The
 * PPMPF_HRMAX value is used for the time being as indicating the maximum string
 * "length" allowed, which right now defaults to 64.
 */
#define ample_charseq_intfy_at(n,x) \
        clause::ample::charseq<>::intfy_at(x, n)

#define ample_charseq(x) \
    typename clause::ample::charseq<>::intfy< \
        PPMPF_REPEATS(ample_charseq_intfy_at, PPMPF_COMMA, x) \
    >::type

#endif /* _CLAUSE_AMPLE_CHARSEQ_HH_ */
