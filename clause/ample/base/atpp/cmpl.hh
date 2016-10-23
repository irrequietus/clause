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

#ifndef CLAUSE_AMPLE_BASE_ATPP_CMPL_HH
#define CLAUSE_AMPLE_BASE_ATPP_CMPL_HH

#include <cstdio>
#include <clause/ample/base/seqrange.hh>
#include <clause/ample/base/start_types.hh>
#include <clause/ample/base/basic_number.hh>
#include <clause/ppmpf/vxpp.hh>

/*~
 * @warn: do not include as standalone.
 */

namespace clause {
namespace ample {

// -- A better repeater construct, could generalize.
template< template<template<typename...> class...> class W
        , template<typename...> class Q
        , std::size_t Z >
using mplix_proxy = W<Q>;

template< template<template<typename...> class ...> class W
        , template<typename...> class... Q
        , template<typename...> class R
        , template<typename...> class A
        , std::size_t... Z >
static auto mplix(W<Q...>, W<A>, W<R>, size_seq<Z...>)
         -> decltype(mplix(W<Q...>(),W<A>(),mplix_proxy<W,R,Z>()...));

template< template<template<typename...> class ...> class W
        , template<typename...> class... Q
        , template<typename...> class... R
        , template<typename...> class A >
static auto mplix(W<Q...>, W<A>, W<R>...)
         -> W<Q...,R...,A>;

template<typename A, typename B, typename C, std::size_t M>
using mplixer
    = decltype(mplix(A(),B(),C(),size_range_t<0,M>()));

template<typename...>
struct atpp;

template<template<typename> class...>
struct atpp_inst {};

template<template<typename...> class F>
struct template_f {
    template<typename... X>
    struct oprt_apply
         : is_just<F<X...>>
    {};
};

template<typename> struct merging;
template<typename> struct instantiation;
template<typename> struct expansion;
template<typename> struct restriction;
template<typename> struct pattern;
template<typename> struct repetition;
template<typename> struct at_position;
template<typename> struct skip_block;
template<typename> struct subst_type;
template<typename> struct fmap_type;
template<typename> struct dotfmap_type;

// Code generation block 1
#define PPMPF_VXPP_SET0(aID) \
  ()(template< std::size_t... X \
             , std::size_t A \
             , std::size_t B \
             , typename ...Q \
             , template<typename...> class W \
             , template<template<typename> class...> class S \
             , template<typename> class... I \
             , typename... T> \
  struct aID <W<size_seq<A,B,X...>,W<failure<Q...>, T...>,S<I...>>> \
       : is_just< failure<Q...> > \
  {}; ) \
    ( merging, instantiation, expansion \
    , restriction, pattern, repetition, at_position \
    , skip_block, subst_type, fmap_type, dotfmap_type )
#include PPMPF_VXPP_FMAPOF(0)

template<template<typename...> class... F>
struct template_bound {
private:

    template<typename...> struct i2{};

    template< template<template<typename...> class...> class W
            , template<typename...> class... G
            , template<typename...> class... A
            , template<typename...> class B >
    struct i2<W<A...>,W<B,G...>>
        : i2<W<B,A...>, W<G...>>
    {};

    template< template<template<typename...> class...> class W
            , template<typename...> class ... A >
    struct i2<W<A...>,W<>>
        : is_just< W<A...>>
        {};

    template<typename...> struct i3;

    template<template<template<typename...> class ...> class W
            , template<typename...> class... B
            , template<typename...> class A
            , template<typename...> class T
            , typename... X >
    struct i3<W<A,B...>,T<X...>>
         : i3<W<B...>, T<A<X>...>>
    {};

    template<template<template<typename...> class ...> class W
            , template<typename...> class T
            , typename... X >
    struct i3<W<>,T<X...>>
         : is_just<T<X...>>
    {};

public:
    constexpr template_bound() noexcept = default;

    template<template<typename...> class W, typename... X>
    constexpr auto operator()(W<X...>) const noexcept;

    template<template<typename...> class... Q>
    constexpr auto operator*(template_bound<Q...>) const noexcept;

    template<typename... T>
    constexpr auto operator*(atpp<T...> q) const noexcept;

};

template<>
struct template_bound<> {
    template<typename T> using apply = T;
    constexpr template_bound() noexcept = default;

    template<template<typename...> class W, typename... X>
    constexpr auto operator()(W<X...>) const noexcept;

    template<template<typename...> class... Q>
    constexpr auto operator*(template_bound<Q...>) const noexcept;

    template<typename... T>
    constexpr auto operator*(atpp<T...> q) const noexcept;
};

template<template<typename...> class W>
struct template_bound<W> {
    template<typename... T> using apply = W<T...>;
    constexpr template_bound() noexcept = default;

    template<template<typename...> class Q>
    constexpr auto operator*(template_bound<Q>) const noexcept;

    template<template<typename...> class G, typename... X>
    constexpr auto operator()(G<X...>) const noexcept;

    template<typename... T>
    constexpr auto operator*(atpp<T...>) const noexcept;

    template<template<typename...> class... F>
    constexpr auto operator*(template_bound<F...>) const noexcept;

};

template<template<typename...> class... F>
constexpr template_bound<F...>
as_template_of = template_bound<F...>{};

template< std::size_t... X
        , typename ...Q
        , typename ...R
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I
        , typename... T>
struct merging<W<size_seq<X...>,W<P<Q...>,P<R...>, T...>,S<I...>>>
     : is_just<W<size_seq<X...>,W<P<Q...,R...>,T...>,S<I...>>>
{};

template< std::size_t... X
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename...> class Z >
struct instantiation<W<size_seq<X...>,W<P<Q...>,P<template_bound<Z>>>,S<>>>
     : is_just<W<size_seq<X...>,W<Z<Q...>>,S<>>>
{};

template< std::size_t... X
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S >
struct instantiation<W<size_seq<X...>,W<P<Q...>,P<template_bound<>>>,S<>>>
     : is_just<W<size_seq<X...>,W<Q...>,S<>>>
{};

template< std::size_t... X
        , std::size_t A
        , std::size_t B
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I
        , typename... T>
struct expansion<W<size_seq<A,B,X...>,W<P<Q...>, T...>,S<I...>>>
     : is_just< W< size_seq<X...>
                 , W< typename P<Q...>::template expand<A,B>
                    , T... >
              , S<I...>>>
{};

template< std::size_t... X
        , std::size_t A
        , std::size_t B
        , typename ...Q
        , typename F
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I
        , typename... T>
struct fmap_type<W<size_seq<A,B,X...>,W<P<Q...>, P<F>, T...>,S<I...>>>
     : is_just< W< size_seq<X...>
                 , W< typename P<Q...>::template fmap<F>
                    , T... >
              , S<I...>>>
{};

template< std::size_t... X
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I, typename H
        , typename... T>
struct dotfmap_type<W<size_seq<X...>,W<P<Q...>, H, T...>,S<I...>>>
     : is_just< W< size_seq<X...>
                 , W< decltype(H()(P<Q...>()))
                    , T... >
              , S<I...>>>
{};

template< std::size_t... X
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I, template<typename...> class... F
        , template<typename...> class... G
        , typename... T>
struct dotfmap_type<W<size_seq<X...>,W<P<Q...>
                     , template_bound<F...>
                     , template_bound<G...> , T...>,S<dotfmap_type,I...>>>
     : dotfmap_type<W<size_seq<X...>,W<P<Q...>
                    , template_bound<F...,G...> , T...>,S<I...>>>
{};

template< std::size_t... X
        , std::size_t A
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I
        , typename... T>
struct at_position<W<size_seq<A,X...>,W<P<Q...>, T...>,S<I...>>>
     : is_just< W< size_seq<X...>
                 , W< P<Q..., typename P<Q...>::template atpos<A>>
                    , T... >
              , S<I...>>>
{};

template< std::size_t... X
        , std::size_t A
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I
        , typename... T>
struct skip_block<W<size_seq<A,X...>,W<P<Q...>, T...>,S<I...>>>
     : is_just< W< size_seq<X...>
                 , W< typename P<Q...>::template expand< sizeof...(Q)-A
                                                       , sizeof...(Q) >
                    , T... >
              , S<I...>>>
{};

template< std::size_t... X
        , std::size_t A
        , std::size_t B
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I
        , typename... T>
struct restriction<W<size_seq<A,B,X...>,W<P<Q...>, T...>,S<I...>>>
     : is_just< W< size_seq<X...>
                 , W< typename P<Q...>::template restrict_f<A,B>
                    , T... >
              , S<I...>>>
{};

template< std::size_t... X
        , std::size_t A
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I
        , typename... T>
struct pattern<W<size_seq<A,X...>,W<P<Q...>, T...>,S<I...>>>
     : is_just< W< size_seq<X...>
                 , W< typename P<Q...>::template pattern_factor<A>
                    , T... >
              , S<I...>>>
{};

template< std::size_t... X, std::size_t A
        , typename ...Q
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I
        , typename... T>
struct repetition<W<size_seq<A,X...>,W<P<Q...>, T...>,S<I...>>>
     : is_just< W< size_seq<X...>
                 , W< typename P<Q...>::template repeat<A>
                    , T... >
              , S<I...>>>
{};

template< std::size_t... X
        , typename ...Q
        , typename Z
        , template<typename...> class W
        , template<typename...> class P
        , template<template<typename> class...> class S
        , template<typename> class... I
        , typename... T>
struct subst_type<W<size_seq<X...>,W<P<Q...>, P<Z>, T...>,S<I...>>>
     : is_just< W< size_seq<X...>
                 , W< Z , T... >
              , S<I...>>>
{};

template< template<template<typename> class...> class S
        , typename A
        , typename... B
        , typename... T
        , template<typename...> class W
        , template<typename> class... G >
static auto atpp_cmpl(W<A, W<failure<T...>,B...>, S<G...>>)
         -> is_just<failure<T...>>;

template< template<template<typename> class...> class S
        , template<typename> class F
        , typename A
        , typename B
        , template<typename...> class W
        , template<typename> class... G >
static auto atpp_cmpl(W<A,B,S<F,G...>>)
         -> decltype(atpp_cmpl(extype<F<W<A,B,S<G...>>>>()));

template< template<template<typename> class...> class S
        , typename A
        , typename B
        , template<typename...> class W >
static auto atpp_cmpl(W<A, W<B>, S<>>)
         -> is_just<B>;

template<typename, std::size_t>
struct atpp_expr;

/*~
 * @desc Recursion limiting step for `atpp_expr.
 */
template<typename ...X, template<typename> class... Y>
struct atpp_expr<atpp<atpp<X...>,atpp_inst<Y...>>,0>
{};

template< typename... X
        , template<typename> class... I
        , std::size_t N >
struct atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
     : atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N-1> {
private:
    std::size_t m_val;

private:
    template<typename Q, std::size_t M, std::size_t K>
    static constexpr atpp_expr<Q,M + K>
    join(atpp_expr<Q,M>, atpp_expr<Q,K>) noexcept;

    template< typename Q
            , std::size_t M
            , std::size_t K
            , std::size_t... A
            , std::size_t... B >
    static constexpr atpp_expr<Q,M + K>
    join( atpp_expr<Q,M>
        , atpp_expr<Q,K>
        , size_seq<A...>
        , size_seq<B...> ) noexcept;

    template<typename Q, std::size_t M, typename... T>
    static constexpr atpp_expr<Q, M+sizeof...(T)>
    join(atpp_expr<Q,M>, T... args) noexcept;

    template<typename T, typename Q, std::size_t M, std::size_t... Z>
    static constexpr atpp_expr<T,M>
    tswap(atpp_expr<Q,M>, size_seq<Z...>) noexcept;

    template<typename T, typename Q, std::size_t M>
    static constexpr atpp_expr<T,M>
    tswap(atpp_expr<Q,M>) noexcept;

public:

    template<typename... T>
    constexpr atpp_expr(std::size_t, T...) noexcept;

    constexpr std::size_t
    head() const noexcept;

    template<std::size_t M>
    constexpr decltype((char(*)[N>M])(nullptr),std::size_t{})
    get() const noexcept;

    template<std::size_t M>
    constexpr decltype((char(*)[N<=M])(nullptr),std::size_t{})
    get() const noexcept;

    template<std::size_t... M, char(*)[sizeof...(M)>1] = nullptr>
    constexpr auto
    get() const noexcept;

    template<std::size_t... M>
    constexpr auto
    get(size_seq<M...>) const noexcept;

    template<typename Z, std::size_t K>
    constexpr auto
    g(Z (*)[K]) const noexcept
    { return get<K-1>(); }

    constexpr auto g(...) const noexcept
    { return get<0>(); }

    constexpr atpp_expr<atpp<atpp<X...>,atpp_inst<I...,pattern>>,N+1>
    operator[](std::size_t const &) const noexcept;

    constexpr atpp_expr<atpp<atpp<X...>,atpp_inst<I...,expansion>>,N+2>
    operator>>=(std::size_t const (&)[2]) const noexcept;

    constexpr atpp_expr<atpp<atpp<X...>,atpp_inst<I...,repetition>>,N+1>
    operator^(std::size_t const &) const noexcept;

    template<template<typename...> class W>
    constexpr auto operator|=(template_bound<W>) const noexcept;

    constexpr auto operator|=(template_bound<>) const noexcept;

    template<typename T>
    constexpr auto operator|=(T) const noexcept;

    template<typename... T>
    constexpr auto operator()(T... t) const noexcept;

    template<typename T>
    constexpr auto operator,(T) const noexcept;

    template<typename... T>
    constexpr auto operator,(atpp<T...>) const noexcept;

    template< template<typename...> class... F
            , template<typename...> class W = atpp >
    constexpr auto operator*(template_bound<F...>) const noexcept;
};

/*~
 * @note The following are the `atpr_expr member function definitions.
 */
template<typename... X, template<typename> class... I, std::size_t N>
template<typename Q, std::size_t M, std::size_t K>
constexpr atpp_expr<Q,M + K>
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::join(atpp_expr<Q,M> a, atpp_expr<Q,K> b) noexcept
{ return join(a,b, size_range_t<0,M>(), size_range_t<0,K>()); }

template< typename... X, template<typename> class... I, std::size_t N >
template< typename Q
        , std::size_t M
        , std::size_t K
        , std::size_t ... A
        , std::size_t... B >
constexpr atpp_expr<Q,M + K>
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::join( atpp_expr<Q,M> a
          , atpp_expr<Q,K> b
          , size_seq<A...>
          , size_seq<B...> ) noexcept
{
    return atpp_expr<Q,M + K>
        { (a.template get<A>())..., (b.template get<B>())... };
}

template<typename... X, template<typename> class... I, std::size_t N>
template<typename Q, std::size_t M, typename... T>
constexpr atpp_expr<Q, M+sizeof...(T)>
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::join(atpp_expr<Q,M> a, T... args) noexcept
{ return join(a, atpp_expr<Q,sizeof...(T)>{(std::size_t)args...}); }

template<typename... X, template<typename> class... I, std::size_t N>
template<typename T, typename Q, std::size_t M, std::size_t... Z>
constexpr atpp_expr<T,M>
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::tswap(atpp_expr<Q,M> x, size_seq<Z...>) noexcept
{ return atpp_expr<T,M>{x.template get<Z>()...}; }

template<typename... X, template<typename> class... I, std::size_t N>
template<typename T, typename Q, std::size_t M>
constexpr atpp_expr<T,M>
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::tswap(atpp_expr<Q,M> a) noexcept
{ return tswap<T>(a, size_range_t<0,M>()); }

template<typename... X, template<typename> class... I, std::size_t N>
template<typename... T>
constexpr atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::atpp_expr(std::size_t i, T... args) noexcept
     : atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N-1>(args...)
     , m_val(i)
{}

template<typename... X, template<typename> class... I, std::size_t N>
constexpr std::size_t
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>::head() const noexcept
{ return m_val; }

template<typename... X, template<typename> class... I, std::size_t N>
template<std::size_t M>
constexpr decltype((char(*)[N>M])(nullptr),std::size_t{})
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::get() const noexcept
{
    return static_cast<atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N-M> const&>
        (*this).head();
}

template<typename... X, template<typename> class... I, std::size_t N>
template<std::size_t M>
constexpr decltype((char(*)[N<=M])(nullptr),std::size_t{})
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::get() const noexcept
{ return {}; }

template<typename... X, template<typename> class... I, std::size_t N>
template<std::size_t... M, char(*)[sizeof...(M)>1]>
constexpr auto
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::get() const noexcept
{
    return atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>, sizeof...(M)>
        { get<M>()... };
}

template<typename... X, template<typename> class... I, std::size_t N>
template<std::size_t... M>
constexpr auto
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::get(size_seq<M...>) const noexcept
{ return get<M...>(); }


template<typename... X, template<typename> class... I, std::size_t N>
constexpr atpp_expr<atpp<atpp<X...>,atpp_inst<I...,pattern>>,N+1>
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator[](std::size_t const & i) const noexcept
{
    return tswap<atpp<atpp<X...>,atpp_inst<I...,pattern>>>
       (join(get(size_range_t<0,N>()), i));
}

template<typename... X, template<typename> class... I, std::size_t N>
constexpr atpp_expr<atpp<atpp<X...>,atpp_inst<I...,expansion>>,N+2>
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator>>=(std::size_t const (&x)[2]) const noexcept
{
    return tswap<atpp<atpp<X...>,atpp_inst<I...,expansion>>>
           (join(*this,x[0],x[1]));
}

template<typename... X, template<typename> class... I, std::size_t N>
constexpr atpp_expr<atpp<atpp<X...>,atpp_inst<I...,repetition>>,N+1>
atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator^(std::size_t const &i) const noexcept
{
    return tswap<atpp<atpp<X...>,atpp_inst<I...,repetition>>>
       (join(get(size_range_t<0,N>()), i));
}

template<typename... X, template<typename> class... I, std::size_t N>
template<typename... T>
constexpr auto atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator()(T... t) const noexcept
{
    return
        tswap<atpp< atpp<X...>
                  , mplixer< atpp_inst<I...>
                           , atpp_inst<skip_block>
                           , atpp_inst<at_position>
                           , sizeof...(T) >>>
        (join(*this, t..., sizeof...(T)));
}

template<typename... X, template<typename> class... I, std::size_t N>
template<typename T>
constexpr auto atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator,(T) const noexcept
{ return tswap<atpp<atpp<X...,atpp<T>>,atpp_inst<I...,merging>>>(*this); }

template<typename... X, template<typename> class... I, std::size_t N>
template<typename... T>
constexpr auto atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator,(atpp<T...>) const noexcept
{ return tswap<atpp<atpp<X...,atpp<T...>>,atpp_inst<I...,merging>>>(*this); }

template<typename... X, template<typename> class... I, std::size_t N>
template<template<typename...> class W>
constexpr auto atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator|=(template_bound<W>) const noexcept
{
    return
       tswap<atpp< atpp<X..., atpp<template_bound<W>>>
                 , atpp_inst<I...,instantiation> > >
            (*this);
}

template<typename... X, template<typename> class... I, std::size_t N>
constexpr auto atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator|=(template_bound<>) const noexcept
{
    return
            tswap<atpp< atpp<X..., atpp<template_bound<>>>
                      , atpp_inst<I...,instantiation> > >
                 (*this);
}

template<typename... X, template<typename> class... I, std::size_t N>
template<typename T>
constexpr auto atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator|=(T) const noexcept
{
    return
       tswap<atpp< atpp<X..., atpp<T>>, atpp_inst<I...,subst_type> > >
            (*this);
}

template<typename... X, template<typename> class... I, std::size_t N>
template<template<typename...> class... F, template<typename...> class W>
constexpr auto atpp_expr<atpp<atpp<X...>,atpp_inst<I...>>,N>
    ::operator*(template_bound<F...>) const noexcept
{
     return
        tswap<atpp< atpp<X..., template_bound<F...>>
                  , atpp_inst<I...,dotfmap_type> > >(*this);
}

template<template<typename...> class... F>
template<template<typename...> class W, typename... X>
constexpr auto template_bound<F...>
    ::operator()(W<X...>) const noexcept {
    return
       decltype(extype<i3<extype<i2< template_bound<>
                                   , template_bound<F...>> >,W<X...>>>())();
}

template<template<typename...> class... F>
template<template<typename...> class... Q>
constexpr auto template_bound<F...>
    ::operator*(template_bound<Q...>) const noexcept
{ return template_bound<F...,Q...>(); }

template<template<typename...> class... F>
template<typename... T>
constexpr auto template_bound<F...>
    ::operator*(atpp<T...> q) const noexcept
{ return q * (*this); }

template<template<typename...> class W, typename... X>
constexpr auto template_bound<>
    ::operator()(W<X...>) const noexcept
{ return W<X...>(); }

template<template<typename...> class... Q>
constexpr auto template_bound<>
    ::operator*(template_bound<Q...>) const noexcept
{ return template_bound<Q...>(); }

template<typename... T>
constexpr auto template_bound<>
    ::operator*(atpp<T...> q) const noexcept
{ return q; }

template<template<typename...> class W>
template<template<typename...> class Q>
constexpr auto template_bound<W>
    ::operator*(template_bound<Q>) const noexcept
{ return template_bound<W,Q>(); }

template<template<typename...> class W>
template<template<typename...> class G, typename... X>
constexpr auto template_bound<W>
    ::operator()(G<X...>) const noexcept
{ return G<W<X>...>(); }

template<template<typename...> class W>
template<typename... T>
constexpr auto template_bound<W>
    ::operator*(atpp<T...> q) const noexcept
{ return q * (*this); }

template<template<typename...> class W>
template<template<typename...> class... F>
constexpr auto template_bound<W>
    ::operator*(template_bound<F...>) const noexcept
{ return template_bound<W,F...>{}; }

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_BASE_ATPP_CMPL_HH */
