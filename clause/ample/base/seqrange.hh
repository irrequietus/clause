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

#ifndef CLAUSE_AMPLE_BASE_SEQRANGE_HH
#define CLAUSE_AMPLE_BASE_SEQRANGE_HH

#include <clause/ample/base/start_types.hh>
#include <clause/ppmpf/vxpp.hh>
#include <stdint.h>

namespace clause {
namespace ample {
namespace seqrange_ {

/*~
 * @desc Integer range implementation layer for compilers not supporting
 *       native generation; another implementation of well known mechanism
 *       for logarithmic instantiation time sequence generation.
 * @parm Type_T: instantiated wrapper for POD (integer / character) range of
 *               the form wrapper<a,b> where range is [a,b) of type decltype(a)
 *               and such is the deployed template.
 * @parm G     : Type of the POD involved.
 * @parm D     : boolean, if true ascending order, else descending order.
 */
template<typename Type_T, typename G, bool D = true>
struct gseq final {
private:
    template<typename X>
    using T = typename X::type;

    template<typename X>
    struct W { typedef X type; };

    template<template<G...> class S, G... X, G Y>
    static auto I(S<X...>, S<Y>)
        -> W<S<(X+Y)...>>;

    template<template<G...> class S, G... X, G Y>
    static auto I(S<X...>, S<0>)
        -> W<S<X...>>;

    template<template<G...> class S, G... X, G... Y, G Z>
    static auto I(S<X...>,S<Y...>,S<Z,2>)
        -> W<S<X..., (sizeof...(X)+Y)...>>;

    template<template<G...> class S, G... X, G... Y, G Z>
    static auto I(S<X...>,S<Y...>,S<Z,1>)
        -> W<S<(sizeof...(X)+Y)...,X...>>;

    template<G C,template<G...> class S, G X, G Z>
    struct P
         : decltype(I(T<P<C,S,X/2,Z>>(),T<P<C,S,X-X/2,Z>>(),S<C,Z>()))
    {};

    template<G C, template<G...> class S, G Z>
    struct P<C,S,0,Z>
         : W<S<>>
    {};

    template<G C, template<G...> class S, G Z>
    struct P<C,S,1,Z>
         : W<S<0>>
    {};

    template<template<G... X> class S, G A, G B, G Z>
    static auto I(S<A,B>,G(*)[Z])
        -> decltype(I(T<P<B-A,S,B-A,Z>>(), S<A>()));

public:
    using type = T<decltype(I(Type_T(),(G(*)[(D+1)])(0)))>;
};

/*~
 * @desc Partial specialization of `gseq template, termination clause.
 */
template<typename N, template<typename X, X...> class F, N A, N B, bool C>
struct gseq<F<N,A,B>,N,C> {
    template<N... z>
    struct p2
    {};

    template<N... a>
    static auto swap(p2<a...>)
        -> F<N,a...>;

    using type
        = decltype(swap(typename gseq<p2<A,B>,N,C>::type()));
};

template<typename N, template<N...> class S>
struct provide_generator {
    template<N A, N B>
    using generate_range_t
        = extype<gseq< S<(A<B) ? A : B, (A<B) ? B : A>, N, (A<B) >>;
};

template<typename N, template<N...> class S>
struct provide_generator1 {
    template<N A, N B>
    using generate_range_t
        = extype<gseq< S<(A<B) ? A : B, (A<B) ? B+1 : A+1>, N, (A<B) >>;
};

template<typename N, N... I>
struct provide_array {
protected:
    static N constexpr array[sizeof...(I) > 0 ? sizeof...(I) : 1] = { I... };
public:
    static constexpr N* begin() noexcept
    { return &array[0]; }

    static constexpr N* end()   noexcept
    { return &array[sizeof...(I)];  }
};

template<typename N, template<N...> class S, N... I>
struct seq_generate
     : provide_array<N,I...>
     , is_just<S<I...>>
{ static std::size_t constexpr value = sizeof...(I); };

} /* seqrange_ */

/*~
 * @note Will be deploying vertical preprocessor expansion generators for
 *       creating a series of sequence wrappers over fundamental types.
 */

#define PPMPF_VXPP_SET0(a) \
  ()( template<a... I> \
      struct a##_seq \
           : seqrange_::seq_generate<a, a##_seq, I...> \
           , seqrange_::provide_generator<a,a##_seq> \
      {}; \
      template<a A, a B> \
      using a##_range_t \
          = typename a##_seq<>::generate_range_t<A,B>::type; ) \
    ( int, short, unsigned, long, bool )

#define PPMPF_VXPP_SET1(a) \
  ()( template<a##_t... I> \
      struct a##_seq \
           : seqrange_::seq_generate<a##_t, a##_seq, I...> \
           , seqrange_::provide_generator<a##_t,a##_seq> \
      {}; \
      template<a##_t A, a##_t B> \
      using a##_range_t \
          = typename a##_seq<>::generate_range_t<A,B>::type; ) \
    ( int8, int16, int32, int64, uint8, uint16, uint32, uint64 )

#define PPMPF_VXPP_SET2(a) \
  ()( template<a##_t... I> \
      struct a##_seq \
           : seqrange_::seq_generate<a##_t, a##_seq, I...> \
           , seqrange_::provide_generator1<a##_t,a##_seq> \
      {}; \
      template<a##_t A, a##_t B> \
      using a##_range_t \
          = typename a##_seq<>::generate_range_t<A,B>::type; ) \
    ( char16, char32 )

#define PPMPF_VXPP_SET3(a) \
    ()( template<a... I> \
        struct a##_seq \
             : seqrange_::seq_generate<a, a##_seq, I...> \
             , seqrange_::provide_generator1<a,a##_seq> \
        {}; \
        template<a A, a B> \
        using a##_range_t \
            = typename a##_seq<>::generate_range_t<A,B>::type; ) \
      ( char, wchar_t )

#define PPMPF_VXPP_SETS() (0,1,2,3)
#include PPMPF_VXPP_FMAPSETS()

template<std::size_t... I>
struct size_seq
     : seqrange_::seq_generate<std::size_t, size_seq, I...>
     , seqrange_::provide_generator<std::size_t,size_seq>
{};

template<std::size_t A, std::size_t B>
using size_range_t
    = typename size_seq<>::generate_range_t<A,B>::type;

/*~
 * @desc A range of integers as a template non-type parameter list wrapped
 *       in an appropriate for them template.
 * @parm I... : range of character values in sequence.
 *
 */
template<int... I>
struct intgr_seq
     : seqrange_::seq_generate<int, intgr_seq, I...>
     , seqrange_::provide_generator<int,intgr_seq>
{};


/*~
 * @desc A range of characters as a template non-type parameter list wrapped
 *       in an appropriate for them template.
 * @parm C... : range of character values in sequence.
 *
 */
template<char... C>
struct chars_seq
     : seqrange_::seq_generate<char, chars_seq, C...>
     , seqrange_::provide_generator1<char, chars_seq>
{};

/*~
 * @desc Instantiate chars_range to a specific, consecutive sequence where
 *       itself is defined between an increasing or a decreasing range.
 */
template<char A, char B>
using chars_range_t
    = typename chars_seq<>::generate_range_t<A,B>::type;

/*~
 * @desc Instantiate intgr_range to a specific, consecutive sequence where
 *       itself is defined between an increasing or a decreasing range.
 */
template<int A, int B>
using intgr_range_t
    = typename intgr_seq<>::generate_range_t<A,B>::type;

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_BASE_SEQRANGE_HH */
