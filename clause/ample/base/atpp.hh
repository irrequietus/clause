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

#ifndef CLAUSE_AMPLE_BASE_ATPP_HH
#define CLAUSE_AMPLE_BASE_ATPP_HH

#include <cstdint>
#include <clause/ample/base/start_types.hh>
#include <clause/ample/base/seqrange.hh>

namespace clause {
namespace ample {

// NOTE: important forward declaration for atpp.
template<typename...> struct atpp;

namespace atpp_ {

template<typename = void, int = 0>
struct base {};

template<typename... T>
struct wrap : base<> {

    template<typename X, typename... Y>
    static auto head_(wrap<X,Y...>*) -> wrap<X>;

    template<typename X, typename... Y>
    static auto tail_(wrap<X,Y...>*) -> wrap<Y...>;

    static auto head_(wrap<>*) -> wrap<>;

    static auto tail_(wrap<>*) -> wrap<>;
    
    using type = wrap<T...>;

    using head = decltype(head_((wrap<T...>*)nullptr));
    using tail = decltype(tail_((wrap<T...>*)nullptr));

    template<typename X>
    static X unpack(atpp_::wrap<X>);
};

template<typename T = void, int N = 0>
struct pwrap : base<>
{};

template<int N>
using bwrap = base<>;

template< template<typename...> class W
        , template<int...> class G_
        , typename... T
        , typename... Z
        , int... N
        , template<typename, int> class P >
static auto peek_x(W<Z...>, G_<0>, P<T,N>*... t)
    -> W<Z...>;

template< template<typename...> class W
        , typename... T
        , template<int...> class G_
        , typename... Z
        , int D
        , int... N
        , int J
        , typename C
        , template<typename, int> class P >
static auto peek_x(W<Z...>, G_<D>, P<C,J>*, P<T,N>*... t)
    -> decltype( peek_x(W<Z..., C>(), G_<D-1>(), t...) );

template< template<typename...> class W
        , typename... T
        , template<int...> class G_
        , typename... Z
        , int... N
        , template<typename, int> class P >
static auto peek_y( W<Z...>, G_<0>, P<T,N>*... t )
    -> W<Z...>;

template< template<typename...> class W
        , typename... T
        , template<int...> class G_
        , typename... Z
        , int D
        , int... N
        , int J
        , typename C
        , template<typename, int> class P >
static auto peek_y(W<Z...>, G_<D>, P<C,J>*, P<T,N>*... t)
    -> decltype(peek_y(W<C,Z...>(), G_<D-1>(), t...));

template<template<typename...> class W, typename... T, typename... Y>
static auto repeat(W<T...>, W<Y...>,char(*)[1])
    -> decltype(W<Y...>());

template<template<typename...> class W, typename... T, typename... Y>
static auto repeat(W<T...>, W<Y...>,...)
    -> decltype(W<Y...>());

template<template<typename...> class W, int X, typename... T, typename... Y>
static auto repeat(W<T...>, W<Y...>, char(*)[X])
    -> decltype(repeat(W<T...>(), W<Y...,T...>(), (char(*)[X-1])0));

template<template<typename...> class W, int X, typename... T, typename... Y>
static auto repeat(W<W<T...>>, W<Y...>, char(*)[X])
    -> decltype(repeat(W<T...>(), W<Y...,T...>(), (char(*)[X-1])0));

template<template<typename...> class W, typename ... X, typename... Y>
static auto identity_(W<X...>, W<Y...>)
    -> boolean<false>; // false

template<template<typename...> class W, typename... X>
static auto identity(W<X...>, W<X...>)
    -> boolean<true>; // true

template<typename A, typename B>
using atpp_identity = decltype(identity(A(),B()));


template<int... A>
struct atpp_layer {

    template<int S>
    struct impl {

        template< typename... T, int... N, template<int...> class G_>
        static auto peek_p(G_<>,bwrap<A>*..., pwrap<T,N>*... t)
            -> decltype(peek_x(wrap<>(), G_<S>(), t...));

        template< typename... T, int... N, template<int...> class G_>
        static auto peek_q(G_<>,bwrap<A>*..., pwrap<T,N>*... t)
            -> decltype(peek_y(wrap<>(), G_<S>(), t...));
    };

};

template< int K
        , int L
        , typename... Y
        , int... X
        , int... Z
        , template<int...> class I>
static auto expand(I<Z...>, I<X...>)
    -> decltype( (char (*)[K<L])(nullptr)
                , atpp_layer<Z...>::template
                    impl<L-K>::peek_p( I<>()
                                     , (pwrap<Y,X>*)(nullptr)...
                                     , (pwrap<>*)(nullptr) ) );
template< int K
        , int L
        , typename... Y
        , int... X
        , int... Z
        , template<int...> class I >
static auto expand(I<Z...>, I<X...>)
    -> decltype( (char (*)[K>L])(nullptr)
                , atpp_layer<Z...>::template
                    impl<K-L>::peek_q( I<>()
                                     , (pwrap<Y,X>*)(nullptr)...
                                     , (pwrap<>*)(nullptr) ) );

template<typename ...X>
struct wrap2_
{};

template<typename X>
struct wrap2_<X>
{ using type = X; };

template<typename... X, typename Y>
struct wrap2_<wrap2_<X...>, Y>
{ using type = wrap2_<Y,X...>; };

template<typename Y>
struct wrap2_<wrap2_<>, Y>
{ using type = wrap2_<Y>; };

template<>
struct wrap2_<wrap2_<>, wrap2_<>>
{ using type = wrap2_<>; };



template<typename...>
struct wrap3_;

template<>
struct wrap3_<> {
    static auto check(...) -> wrap2_<>;

    template<typename... X>
    static auto count(wrap2_<X...>)
        -> natural<sizeof...(X)>;

    template<std::size_t N, typename... X>
    static auto index(wrap2_<X...>, natural<N>)
        -> intgr_seq<(N - X::value)...>;

    template<typename X>
    using contains = natural<0>;

    template<typename X>
    using indices_of = intgr_seq<>;

    /*
     * Decided to keep an alternative that isn't respecting the order, unlike
     * the `wrap4_::m7 template.

    using uniques = wrap<>;

    template<typename X, int N, typename... Y>
    static auto uniqt(intgr_seq<N>, X, wrap<Y...>)
        -> wrap<X,Y...>;

    template<typename X, int... N, typename... Y>
    static auto uniqt(intgr_seq<N...>, X, wrap<Y...>)
        -> wrap<Y...>;
    */
};

template<typename A, typename... X>
struct wrap3_<A,X...> : wrap3_<X...> {

    using wrap3_<X...>::check;
    using wrap3_<X...>::count;
    using wrap3_<X...>::index;
    // using wrap3_<X...>::uniqt;

    static auto check(wrap2_<A>)
        -> extype< wrap2_< decltype(wrap3_<X...>::check(wrap2_<A>()))
                         , natural<sizeof...(X)> > >;

    template<typename T>
    using contains
        = decltype(count(decltype(check(wrap2_<T>()))()));

    template<typename T>
    using indices_of
          = decltype( index( decltype(check(wrap2_<T>()))()
                           , natural<sizeof...(X)>() ) );
    /*
     * Same reason as before, it is a quite interesting construct.

    using uniques
        = decltype( uniqt( indices_of<A>()
                         , A()
                         , typename wrap3_<X...>::uniques() ) );
    */
};

struct wrap4_ {

template<typename...> struct m;

template<typename X, typename... T>
struct m<X,T...> : m<T...> {
    using m<T...>::C;
    static auto C(X) -> X;
};

template<typename X>
struct m<X> {
    static auto C(X)   -> X;
    static auto C(...) -> m<>;
};

template<typename W, typename X>
struct m2 : W {
    using W::C;
    static auto C(X) ->  wrap<>;
};

template<typename,typename,typename>
struct m4;

template< typename S
        , typename A
        , typename... X
        , typename... Y >
struct m4<S, m<A, X...>, m<Y...>>
     : m4< m2<S,A>
         , m<X...>
         , m<Y...,decltype(S::C(A()))> >
{};

template<typename S, typename... Y>
struct m4<S, m<>, m<Y...>>
{ using type = m<Y...>; };

template<typename A, typename...>
struct m5 { using type = A; };

template<typename... A, typename... B, typename X>
struct m5<m<A...>, m<X,B...>> : m5<m<A...,X>,m<B...>>
{};

template<typename... A, typename... B>
struct m5<m<A...>, m<wrap<>,B...>> : m5<m<A...>,m<B...>>
{};

template<typename... A>
struct m5<m<wrap<A>...>,m<>> : m5<m<A...>>
{ template<template<typename...> class R> using rebind = R<A...>; };

template<template<typename...> class W, typename... X>
using m7
    = typename m5< m<>
                , extype< m4< m<decltype(m<wrap<X>...>::C(wrap<X>()))...>
                            , m<wrap<X>...>
                            , m<>>>>::template rebind<W>;
}; /* wrap4_ */

struct wrap5_ {

    template< typename S
            , typename F
            , typename R
            , typename A
            , typename B>
    struct filter_;

    template< template<typename...> class W
            , typename F
            , typename X
            , typename Q
            , typename... Y
            , typename... Z>
    struct filter_<boolean<true>,F,X,W<Q,Y...>, W<Z...>>
         : filter_< typename F::template oprt_apply<Q>::type
                 , F
                 , Q
                 , W<Y...>
                 , W<Z...,X> >::type
    {};

    template< template<typename...> class W
            , typename F
            , typename X
            , typename Q
            , typename... Y
            , typename... Z>
    struct filter_<boolean<false>,F,X,W<Q,Y...>, W<Z...>>
         : filter_< typename F::template oprt_apply<Q>::type
                 , F
                 , Q
                 , W<Y...>
                 , W<Z...> >::type
    {};

    template< template<typename...> class W
            , typename F
            , typename X
            , typename... Z>
    struct filter_<boolean<true>,F,X,W<>, W<Z...>>
         : is_just<W<Z...,X>>
    {};

    template< template<typename...> class W
            , typename F
            , typename X
            , typename... Z>
    struct filter_<boolean<false>,F,X,W<>, W<Z...>>
         : is_just<W<Z...>>
    {};

    template<typename F, typename A, typename... X>
    using filter__
        = typename filter_< typename F::template oprt_apply<A>::type
                 , F
                 , A
                 , atpp<X...>
                 , atpp<> >::type;

    template<typename F, typename A, typename... X>
    static auto filter(F,A,X...) -> filter__<F,extype<A>,extype<X>...>;

    template<typename F>
    static auto filter(F) -> atpp<>;

}; /* wrap5_ */


} /* atpp_ */

template<int X, typename... T>
using atpp_repeat
    = decltype( atpp_::repeat( atpp_::wrap<T...>()
                             , atpp_::wrap<>()
                             , (char(*)[X+1])(nullptr) ) );

template<int X, int Y, typename... T>
using atpp_expand
    = decltype( atpp_::expand<X,Y,T...>( intgr_range_t<0,(X>Y?Y:X)>()
                                       , intgr_range_t<0,sizeof...(T)>()));

template<int N, typename... T>
using atpp_atpos
    = decltype(atpp_::wrap<>::unpack(atpp_expand<N,N+1,T...>()));

template<int N, int M, int K, typename... T>
using atpp_restrict
    = decltype( atpp_::identity( atpp_::wrap<T...>()
                               , atpp_repeat<K, atpp_expand<N,M,T...>>() ) );

template<typename A, typename B>
using atpp_identity
    = decltype(atpp_::identity(A(),B()));

template<typename... A, typename... B>
static auto insert__(atpp<A...>, atpp<B...>) -> atpp<A..., B...>;

template<typename A, typename B>
using atpp_insert
    = decltype(insert__(A(),B()));

template<typename... T, template<typename...> class W>
static auto cvt_(atpp_::wrap<T...>, W<>*) -> W<T...>;

template<typename T>
using atpp_cvt
    = decltype(cvt_(T(),(atpp<>*)0));


/*~
 * @desc Allowing manipulation of a parameter pack through the use of integral
 *       constant expressions and pattern matched sequences. Member template
 *       aliases offer eager evaluation semantics. For a given pack X, expansion
 *       between indexes N,M occurs in [N,M) fashion; a "pattern" factor K is
 *       optionally deployed for either certifying the existence of a pattern
 *       inside or a multiplier during generation by repetition. Expansion and
 *       generation can occur in reverse iteration mode too.
 *
 *   NOTE: following primitives are implemented so far:
 *
 *   1) atpp<X...>::repeat<N>        // repeat X... N times
 *   2) atpp<X...>::pattern_of<N>    // X... is repetition of first N types
 *   3) atpp<X...>::expand<N,M>      // [N,M) expansion
 *   4) atpp<X...>::generate<N,M,K>  // [N,M) expansion * K times repetition
 *   5) atpp<X...>::pattern_is<Y...> // constituting pattern of X... is Y...
 *   6) atpp<X...>::atpos_is<N,T>    // at index N, we have type T
 *   7) atpp<X...>::atpos<N>         // get the type at index N
 *   8) atpp<X...>::insert<N,T>      // at index N insert type T
 *   9) atpp<X...>::insert<N,T...>   // at index N insert pack T...
 *  10) atpp<X...>::replace<N,T...>  // T... replaces [N, N + sizeof...(T))
 *  11) atpp<X...>::remove<N,M>      // [N,M) removed from T...
 *  12) atpp<X...>::remove<N>        // [N,N+1) removed from T... (just N)
 *  13) atpp<X...>::contains<T>      // natural<N> where N = occurences of T
 *  14) atpp<X...>::indices_of<T>    // to intgr_seq<N...>, N... = indices
 *  15) atpp<X...>::uniques          // remove all duplicates from X...
 *  16) atpp<X...>::uniques_as<W>    // remove duplicates from X..., wrap to W
 *  17) atpp<X...>::filter<F>        // Predicate yielding boolean<B> equivalent
 *
 */
template<typename... X>
struct atpp {

    using type = atpp<X...>;

    static std::size_t constexpr value = sizeof...(X);

    template<template<typename...> class R>
    using rebind = R<X...>;

    template<std::size_t N, std::size_t M = N+1, std::size_t K = 1>
    using generate
        = atpp_cvt<atpp_repeat<K, atpp_expand<N,M,X...>>>;

    template<std::size_t N, std::size_t M>
    using expand
        = atpp_cvt<atpp_expand<N,M,X...>>;

    template<std::size_t N>
    using repeat
        = atpp_cvt<atpp_repeat<N,X...>>;

    template<std::size_t N, std::size_t M, std::size_t K = 1>
    using restrict
        = atpp_restrict<N,M,K,X...>;

    template<std::size_t N, typename... T>
    using insert
        = atpp_insert< atpp_insert< expand<0,N>,atpp<T...> >
                     , expand<N,sizeof...(X)> >;

    template<std::size_t N, typename ...T>
    using replace
        = atpp_insert< atpp_insert<expand<0,N>,atpp<T...>>
                     , expand<N+sizeof...(T),sizeof...(X)> >;

    template<std::size_t N, std::size_t M = N + 1>
    using remove
        = atpp_insert<expand<0,N>,expand<M,sizeof...(X)>>;

    template<std::size_t N>
    using atpos
        = atpp_atpos<N, X...>;

    template<std::size_t N, typename T>
    using atpos_is
        = atpp_identity< atpp_::wrap<T>
                       , atpp_::wrap<atpos<N> > >;

    template<typename... T>
    using pattern_is
        = atpp_identity< atpp_repeat< sizeof...(X)/sizeof...(T), T...>
                       , atpp_::wrap<X...>>;

    template<std::size_t N>
    using pattern_of
        = atpp_identity< atpp_repeat< sizeof...(X) / N, atpp_expand<0,N,X...>>
                       , atpp_::wrap<X...> >;

    template<typename T>
    using contains
        = typename atpp_::wrap3_<X...>::template contains<T>;

    template<typename T>
    using indices_of
        = typename atpp_::wrap3_<X...>::template indices_of<T>;

    using uniques
        = atpp_cvt<typename atpp_::wrap4_::template m7<atpp_::wrap,X...>>;

    template<template<typename...> class W>
    using uniques_as
        = typename atpp_::wrap4_::template m7<W,X...>;

    template<typename FTypl>
    using filter
       = decltype(atpp_::wrap5_::template filter( FTypl()
                                                , atpp_::wrap2_<X>()...) );

};

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_BASE_ATPP_HH */
