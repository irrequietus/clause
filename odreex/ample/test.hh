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

#ifndef _ODREEX_AMPLE_TEST_HH_
#define _ODREEX_AMPLE_TEST_HH_

#include <odreex/ample/base/start_types.hh>
#include <odreex/ample/oprt/fundamentals.hh>
#include <odreex/ample/base/basic_number.hh>
#include <odreex/ample/charseq.hh>

#define ample_vldt_(t) \
    static constexpr char const * showln() noexcept \
    { return t ; }

#define AMPLE_TEST_RUN(name,text) \
        odreex::ample::test::name::deploy(text);

# ifdef AMPLE_PRINTLN_LIM
#    if AMPLE_PRINTLN_LIM > 255
#        define AMPLE_PRINTLN_LIM 52
#    endif
# else
#    define AMPLE_PRINTLN_LIM 52
# endif

/* ++
 * Technical NOTE of importance: Using printf format specifiers is often a
 * problem in code portability. One of the alternatives is to use C++ streams,
 * but that is *not* the choice for this library. In the C++11 standard, there
 * are very specific format specifiers that can be used with printf but that
 * does not mean that certain compiler vendors decide to follow them to the
 * letter. This happens a lot with people dealing with compilation on Microsoft
 * Windows, where even with certain versions of MinGW, C++11 compliant printf
 * format specifiers like %llu (brought from C99) and PRIu64 (brought from C99)
 * may have inconsistent behaviour.
 * 
 * This means that if compilation with "C++11 compliant compiler" occurs on
 * such platforms, -Wformat will issue warnings that should not issue because
 * "some" of the C99 "parts" that are supposed to accompany the "C++11" parts
 * are relatively incompatible even with C89 (eighty - nine). That is a very
 * important issue to consider when using C library functions within C++11 that
 * are of course supposed to be C99 compliant, but are not. printf is one of
 * those cases, at times.
 * 
 * Notice that really compliant platforms, where these tests are compiled with
 * -Wall -Wextra -pedantic, never issue any kind of warning. Because they are
 * compliant in all the C99-ness of their C++11-ness. And that is a primary
 * requisite for using odreex.
 * 
 * Often, the simplest choice is the best option. The right choice would be to
 * implement a better, type - safe printf or use a ready made one. Since this
 * library is to be void of dependencies outside what the standard(s) offer, it
 * will eventually offer a better way to handle printf on its own merit. So,
 * the best option (but not the "right" choice) right now, is downcasting to
 * a C89 (eighty - nine) compatible integer for the case of std::size_t as is
 * used when printf-ing test results where std::size_t is involved. That is
 * going to be unsigned long, (%lu printf format specifier).
 * 
 */
#ifdef USE_ANSI_COLORS
#define ample_printf_(i, sz, N) \
    printf( "\033[1;37m[%06lu]\033[0m: %s | %s |: \033[34m%s%s\033[0m\n" \
          , static_cast<unsigned long>(i) \
          , result[ i ] ? "\033[36mpass\033[0m" : "\033[31mfail\033[0m" \
          , output[ i ] ? "\033[1;36mpass\033[0m" : "\033[1;31mfail\033[0m" \
          , cbuf \
          , sz < N ? "" : "..." )
#else
#define ample_printf_(i, sz, N) \
    printf( "[%06lu]: %s | %s |: %s%s\n" \
          , static_cast<unsigned long>(i) \
          , result[ i ] ? "pass" : "fail" \
          , output[ i ] ? "pass" : "fail" \
          , cbuf \
          , sz < N ? "" : "..." )
#endif

/**
 * NOTE: Testing mechanism fundamentals for the various odreex::ample template
 * metaprogramming constructs.
 **/

#include <cstdio>
#include <cstring>
#include <type_traits>
#include <algorithm>

namespace odreex {
namespace ample {
namespace test {

struct as_passed {};
struct as_failed {};
struct as_output {};
struct as_expect {};
struct as_result {};
struct as_showln {};

/* class template for types that must be "matched" */
template<typename Type_X, typename Type_Y>
struct types_match 
    : std::integral_constant<bool, std::is_same<Type_X, Type_Y>::value >
{};

/* class template for values in types that must be "matched" */
template<typename Type_X, typename Type_Y>
struct values_match
    : std::integral_constant<bool, Type_X::value == Type_Y::value>
{};

/* the default test class templates providing details */

template<typename Type_A, typename Type_B, bool Expected_B = true>
struct vldt_types : types_match<Type_A, Type_B> {
    
    static constexpr bool expected() {
        return Expected_B;
    }
    
    static constexpr bool result() {
        return types_match<Type_A, Type_B>::value;
    }
    
    static constexpr bool output() {
        return types_match<Type_A, Type_B>::value == Expected_B;
    }
    
    static constexpr char const * showln() {
        return "default odreex::ample::test validation showln";
    }
};

template<typename Type_A, typename Type_B, bool Expected_B = true>
struct vldt_values : values_match<Type_A, Type_B> {
    
    static constexpr bool expected() {
        return Expected_B;
    }
    
    static constexpr bool result() {
        return values_match<Type_A, Type_B>::value;
    }
    
    static constexpr bool output() {
        return values_match<Type_A, Type_B>::value == Expected_B;
    }
    
    static constexpr char const * showln() {
        return "default odreex::ample::test validation showln";
    }
};

/*NOTE: a wrapper class that is a temporary utility */
template<std::size_t... N>
struct wrap_
{};

constexpr std::size_t nozero_array(std::size_t n) {
    return n == 0 ? 1 : n;
}

/* NOTE: constexpr arrays seem to be having some issues with clang++ (3.3.x) so
 * we will be using the "old" way of doing things until this thing gets fixed.
 * Notice that g++ has no problem with either style.
 */
template<typename... T>
struct check_all {
    
    template<typename, typename, typename, typename, std::size_t, bool Casc_B>
    struct check_impl;
    
    template< typename X
            , typename... Xn
            , std::size_t... A
            , std::size_t... B
            , std::size_t... C
            , std::size_t N
            , bool Casc_B >
    struct check_impl< wrap_<A...>
                     , wrap_<B...>
                     , wrap_<C...>
                     , check_all<X, Xn...>
                     , N
                     , Casc_B >
         : std::conditional< X::output() == Casc_B
                           , check_impl< wrap_<A..., N>
                                       , wrap_<B...>
                                       , wrap_<C..., N>
                                       , check_all<Xn...>
                                       , N + 1
                                       , Casc_B >
                           , check_impl< wrap_<A...>
                                       , wrap_<B..., N>
                                       , wrap_<C..., N>
                                       , check_all<Xn...>
                                       , N + 1
                                       , Casc_B >>::type
    {};
    
    template< std::size_t... A
            , std::size_t... B
            , std::size_t... C
            , std::size_t N
            , bool Casc_B >
    struct check_impl< wrap_<A...>
                     , wrap_<B...>
                     , wrap_<C...>
                     , check_all<>
                     , N
                     , Casc_B > {
        static std::size_t const    passed_total = sizeof...(A);
        static std::size_t const    failed_total = sizeof...(B);
        static std::size_t const    checks_total = sizeof...(T);
        static std::size_t const    passed[nozero_array(sizeof...(A))];
        static std::size_t const    failed[nozero_array(sizeof...(B))];
        static std::size_t const    shnoop[nozero_array(sizeof...(C))];
        static char const *         showln[nozero_array(sizeof...(T))];
        static bool const           output[nozero_array(sizeof...(T))];
        static bool const           result[nozero_array(sizeof...(T))];
        static bool const           expect[nozero_array(sizeof...(T))];
    };
    
public:
    template<bool B>
    using apply = check_impl<wrap_<>, wrap_<>, wrap_<>, check_all<T...>, 0, B>;
};

template<typename... T>
template< std::size_t... A
        , std::size_t... B
        , std::size_t... C
        , std::size_t N
        , bool Cb >
std::size_t const check_all<T...>
    ::check_impl< wrap_<A...>
                , wrap_<B...>
                , wrap_<C...>
                , check_all<>
                , N
                , Cb >::passed[] = {
    A...
};

template<typename... T>
template< std::size_t... A
        , std::size_t... B
        , std::size_t... C
        , std::size_t N
        , bool Cb >
std::size_t const check_all<T...>
    ::check_impl< wrap_<A...>
                , wrap_<B...>
                , wrap_<C...>
                , check_all<>
                , N
                , Cb >::failed[] = {
    B...
};

template<typename... T>
template< std::size_t... A
        , std::size_t... B
        , std::size_t... C
        , std::size_t N
        , bool Cb >
bool const check_all<T...>
    ::check_impl< wrap_<A...>
                , wrap_<B...>
                , wrap_<C...>
                , check_all<>
                , N
                , Cb >::result[] = {
    T::result()...
};

template<typename... T>
template< std::size_t... A
        , std::size_t... B
        , std::size_t... C
        , std::size_t N
        , bool Cb >
bool const check_all<T...>
    ::check_impl< wrap_<A...>
                , wrap_<B...>
                , wrap_<C...>
                , check_all<>
                , N
                , Cb >::output[] = {
    T::output()...
};

template<typename... T>
template< std::size_t... A
        , std::size_t... B
        , std::size_t... C
        , std::size_t N
        , bool Cb >
bool const check_all<T...>
    ::check_impl< wrap_<A...>
                , wrap_<B...>
                , wrap_<C...>
                , check_all<>
                , N
                , Cb >::expect[] = {
    T::expected()...
};

template<typename... T>
template< std::size_t... A
        , std::size_t... B
        , std::size_t... C
        , std::size_t N
        , bool Cb >
char const * check_all<T...>
    ::check_impl< wrap_<A...>
                , wrap_<B...>
                , wrap_<C...>
                , check_all<>
                , N
                , Cb >::showln[] = {
    T::showln()...
};

template<typename... T>
template< std::size_t... A
        , std::size_t... B
        , std::size_t... C
        , std::size_t N
        , bool Cb >
std::size_t const check_all<T...>
    ::check_impl< wrap_<A...>
                , wrap_<B...>
                , wrap_<C...>
                , check_all<>
                , N
                , Cb >::shnoop[] = {
    C...
};

template<bool Cascade_B, typename Check_T>
struct check : private Check_T::template apply<Cascade_B> {
private:
    using Check_T::template apply<Cascade_B>::passed;
    using Check_T::template apply<Cascade_B>::failed;
    using Check_T::template apply<Cascade_B>::output;
    using Check_T::template apply<Cascade_B>::result;
    using Check_T::template apply<Cascade_B>::expect;
    using Check_T::template apply<Cascade_B>::showln;
    using Check_T::template apply<Cascade_B>::shnoop;
    using Check_T::template apply<Cascade_B>::passed_total;
    using Check_T::template apply<Cascade_B>::failed_total;
    using Check_T::template apply<Cascade_B>::checks_total;
    
    static constexpr char const * at_(std::size_t const &i, as_failed) {
        return showln[failed[i]];
    }
    
    static constexpr char const * at_(std::size_t const &i, as_passed) {
        return showln[passed[i]];
    }
    
    static constexpr char const * at_(std::size_t const &i, as_showln) {
        return showln[i];
    }
    
    static constexpr std::size_t const * begin_(as_output) {
        return &output[0];
    }
    
    static constexpr std::size_t const * begin_(as_result) {
        return &result[0];
    }
    
    static constexpr std::size_t const * begin_(as_expect) {
        return &expect[0];
    }
    
    static constexpr std::size_t const * begin_(as_failed) {
        return &failed[0];
    }
    
    static constexpr std::size_t const * begin_(as_passed) {
        return &passed[0];
    }
    
    static constexpr std::size_t const * begin_(as_showln) {
        return &shnoop[0];
    }
    
    static constexpr std::size_t const * end_(as_output) {
        return &output[checks_total];
    }
    
    static constexpr std::size_t const * end_(as_result) {
        return &result[checks_total];
    }
    
    static constexpr std::size_t const * end_(as_expect) {
        return &expect[checks_total];
    }
    
    static constexpr std::size_t const * end_(as_failed) {
        return &failed[failed_total];
    }
    
    static constexpr std::size_t const * end_(as_passed) {
        return &passed[passed_total];
    }
    
    static constexpr std::size_t const * end_(as_showln) {
        return &shnoop[checks_total];
    }
    
    static constexpr std::size_t total_(as_output) {
        return checks_total;
    }
    
    static constexpr std::size_t total_(as_result) {
        return checks_total;
    }
    
    static constexpr std::size_t total_(as_expect) {
        return checks_total;
    }
    
    static constexpr std::size_t total_(as_failed) {
        return failed_total;
    }
    
    static constexpr std::size_t total_(as_passed) {
        return passed_total;
    }
    
    static constexpr std::size_t total_(as_showln) {
        return checks_total;
    }
    
public:
    template<typename Input_T = as_showln>
    static constexpr auto at(std::size_t const & i)
        -> decltype(at_(i, Input_T()))
    { return at_(i, Input_T()); }
    
    template<typename Input_T = as_showln>
    static constexpr auto begin()
        -> decltype(begin_(Input_T()))
    { return begin_(Input_T()); }
    
    template<typename Input_T = as_showln>
    static constexpr auto end()
        -> decltype(begin_(Input_T()))
    { return end_(Input_T()); }
    
    template<typename Input_T = as_showln>
    auto operator[](std::size_t const &i) const
      -> decltype(at_(i, Input_T()))
    { return at_(i, Input_T()); }
    
    template<typename Input_T = as_showln>
    static constexpr std::size_t total()
    { return total_(Input_T()); }
    
    static bool println(std::size_t const &i) {
        size_t sz(strlen(showln[i]))
             , cz(sz < AMPLE_PRINTLN_LIM ? sz : AMPLE_PRINTLN_LIM);
        char cbuf[AMPLE_PRINTLN_LIM + 1];
        std::copy_n(showln[i], cz, cbuf);
        cbuf[cz] = (char)0;
        ample_printf_(i, cz, AMPLE_PRINTLN_LIM);
        return result[i];
    }
    
    static void println_head(char const *s) {
#ifdef USE_ANSI_COLORS
        printf("\n\033[1;37m* %s\033[0m\n", s);
#else
        printf("\n* %s\n", s);
#endif
    }
    
    static void println_foot(char const *s) {
#ifdef USE_ANSI_COLORS
        printf("\033[1;37m* %s\033[0m\n", s);
#else
        printf("* %s\n", s);
#endif
    }
    
    static std::size_t deploy(char const *s = nullptr) {
        println_head(!s ? "test block initiating" : s);
        std::for_each(begin(), end(), println);
        println_foot("test block complete");
        return total<as_failed>();
    }

};


} /* test */
} /* ample */
} /* odreex */

#undef ample_printf_ /* remove this macro */

#endif /* _ODREEX_AMPLE_TEST_HH_ */
