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

#ifndef CLAUSE_AMPLE_STORAGE_ALIGNUTIL_HH
#define CLAUSE_AMPLE_STORAGE_ALIGNUTIL_HH

#include <cstddef>

namespace clause {
namespace ample {
namespace alignutil_ { /* implementation layer */

template<typename T>
using M0 = typename T::type;

/*~
 * @note Forward declarations for several utility templates that are to be used
 *       for emulating high order functions over a pack without using the rest
 *       of the clause::ample library for two reasons: (1) alignof allows for
 *       special optimizations when applied over a pack of types range for the
 *       "sorting by alignof" step; (2) a single header solution was required
 *       and depending on other parts would mean bring increasing compoments
 *       of full-fledged metaprogramming library features. This header is to
 *       provide utilities for aligned storage and it came up when a challenge
 *       was thrown to me during a discussion with my fellow C++ programmers
 *       Jonathan Müller and Manu Sánchez. Purpose of inclusion to `clause is
 *       simple: it can be of use when analyzing boilerplate generation for
 *       runtime containers and memory allocators by template metaprogramming.
 *
 *       tl;dr: fully standalone header for getting a duplicate-free, sorted by
 *       alignment list of types unique by alignment.
 */
template<typename...>                struct M1; // Insert by alignof (map)
template<typename, typename>         struct M2; // Remove by alignof (M1 map)
template<typename...>                struct M3; // A pack wrap instead of M1
template<typename,typename,typename> struct M4; // 'foldl,fmap' dups to M1<>
template<typename, typename...>      struct M5; // Remove M1<>
template< typename
        , std::size_t
        , std::size_t
        , std::size_t... >           struct M6; // Sort by alignof

template<typename T>
using M0 = typename T::type;

/*~
 * @note Both `M1,`M2 are used as a mutable compile-time "map"; `M1 inheritance
 *       of function signature of the kind:
 *
 *          static auto C(int(*)[alignof(X)]) -> X
 *
 *       is used as a key/value store in the first "fold", while `M2 is used for
 *       a lookup removing occurences of duplicates in the second "fold" by
 *       substituting each with `M1<>; this is orchestrated by `M4 while cleanup
 *       is handled by `M5 (removal of those `M1<> markers).
 */
template<typename X, typename... T>
struct M1<X,T...> : M1<T...> {
    using M1<T...>::C;

    static auto C(int(*)[alignof(X)]) -> X;

    static std::size_t constexpr min_val
        = alignof(X) < M1<T...>::min_val
            ? alignof(X) : M1<T...>::min_val;

    static std::size_t constexpr max_val
        = alignof(X) > M1<T...>::max_val
            ? alignof(X) : M1<T...>::max_val;

    template<template<typename...> class W>
    using rebind = W<X,T...>;
};

template<>
struct M1<> {
    static M1<> C(...);
    static std::size_t constexpr min_val = 1;
    static std::size_t constexpr max_val = 1;

    template<template<typename...> class W>
    using rebind = W<>;
};

template<typename W, typename X>
struct M2 : W {
    using W::C;
    static auto C(int(*)[alignof(X)]) ->  M1<>;
};

template<typename...> struct M3
{ /* one could use M1 instead, but it renders the code more cryptic */ };

/*~
 * @note Scanning for duplicates while removing them at the same time.
 */
template< typename S
        , typename A
        , template<typename...> class W
        , typename... X
        , typename... Y >
struct M4<S, W<A, X...>, W<Y...>>
     : M4< M2<S,A>
         , W<X...>
         , W<Y...,decltype(S::C((int(*)[alignof(A)])(nullptr)))> >
{};

template<typename S, template<typename...> class W, typename... Y>
struct M4<S, W<>, W<Y...>>
{ using type = W<Y...>; };

template<typename A, typename...>
struct M5 { using type = A; };

/*~
 * @note Cleaning up random empty `M1<> types after `M4.
 */
template< template<typename...> class W
        , typename... A
        , typename... B
        , typename X >
struct M5<W<A...>, W<X,B...>> : M5<W<A...,X>,W<B...>> {};

template< template<typename...> class W
        , typename... A
        , typename... B >
struct M5<W<A...>, W<M1<>,B...>> : M5<W<A...>,W<B...>> {};

template<template<typename...> class W, typename... A>
struct M5<W<A...>,W<>> : M5<M1<A...>> {}; // ::type instantiates to M1<A...> !

/*~
 * @note Sorting step; because of alignof(X) being a power of 2 and the way
 *       our "map" in M1/M2 works, it is extremely simple to optimize using
 *       linear expansion of a sequence of powers of two, then use intrinsic
 *       "fmap" properties of  the triple-dot operator for pack expansion to
 *       yield the types remaining in the M1/M2 "map" (here, it is the S type
 *       parameter). Iterates through min/max values (parameters A, B) by
 *       creating that sequence then deploying it upon the ::C(int(*)[Z])
 *       function signature doing the lookup for M1/M2.
 */
template<typename S, std::size_t A, std::size_t B, std::size_t... Z>
struct M6 : M6<S,A*2, B, Z...,A> {};

template<typename S, std::size_t A, std::size_t... Z>
struct M6<S,A,A,Z...> {
    using type
        = M1< decltype(S::C((int(*)[Z])(nullptr)))...
            , decltype(S::C((int(*)[A])(nullptr))) >;
};

/*~
 * @note Assembling everything together; `M0 is just for convenience purposes
 *       in order to avoid writing typename Type::type where applicable; while
 *       the `M4 cleans up duplicates by replacement through `M1 and `M2 lookup
 *       in combination with triple-dot expansion ("fmap"...). Notice that `M1
 *       is re-used many times as a plain linear container itself, upon which
 *       `M4 partial specializations match through ordering.
 */
template<typename... X>
using M7
    = M0<
        M5< M3<>
          , M0< M4< M1<decltype(M1<X...>::C((int(*)[alignof(X)])(nullptr)))...>
                  , M3<X...>
                  , M3<> > >
        >
    >;

template<typename... X>
using unisorted_aligned_
    = M0<M6<M7<X...>, M1<X...>::min_val, M1<X...>::max_val>>;

} /* alignutil_ */

/*~
 * @desc Given a sequence of types that may contain duplicates of both quality
 *       (the kind of type X) and of alignment (result of alignedof(X)) provide
 *       the equivalent sorted list of unique types by alignment. Semantics are
 *       eager.
 * @parm W   : template template parameter type wrapping a sequence of types.
 * @parm X...: parameter pack containing the aforementioned types.
 */
template<template<typename...> class W, typename... X>
using unisorted_aligned_wrap
    = typename alignutil_::unisorted_aligned_<X...>::template rebind<W>;

/*~
 * @desc Given a sequence of types that may contain duplicates of both quality
 *       (the kind of type X) and of alignment (result of alignedof(X)) provide
 *       the minimum alignment value.
 * @parm X...: parameter pack containing the aforementioned types.
 */
template<typename... X>
constexpr std::size_t alignedof_min
    = alignutil_::M1<X...>::min_val;

/*~
 * @desc Given a sequence of types that may contain duplicates of both quality
 *       (the kind of type X) and of alignment (result of alignedof(X)) provide
 *       the maximum alignment value.
 * @parm X...: parameter pack containing the aforementioned types.
 */
template<typename... X>
constexpr std::size_t alignedof_max
    = alignutil_::M1<X...>::max_val;

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_STORAGE_ALIGNUTIL_HH */
