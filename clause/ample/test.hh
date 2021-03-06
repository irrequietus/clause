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

#ifndef CLAUSE_AMPLE_TEST_HH
#define CLAUSE_AMPLE_TEST_HH


#include <clause/ample/base/start_types.hh>
#include <clause/ample/oprt/fundamentals.hh>
#include <clause/ample/base/basic_number.hh>
#include <clause/ample/logic/when.hh>
#include <clause/ample/charseq.hh>
#include <clause/ppmpf/spexp.hh>
#include <cstdio>
#include <cstring>
#include <algorithm>

#define ample_vldt_(t) \
    static constexpr char const * showln() noexcept \
    { return t ; }

#define AMPLE_TEST_RUN(name,text) \
        clause::ample::test::name::deploy(text);


/*~
 * @desc Define a validator type macro for generating `vldt_types boilerplate
 *       code; final (;) must be used after macro invocation. To be used only
 *       inside of its specific `CLAUSE_TEST_DEFN enclosure; final(;) necessary.
 * @pfrg name: The value of the identifier the validator is to assume.
 * @pfrg text: Text that is to be printed when running the test.
 * @pfrg ... : The two types to be used in the validator; the use of ... is for
 *             making sure the preprocessor doesn't hickup upon commas used
 *             in template instantiations used as such for convenience.
 */
#define CLAUSE_TEST_TYPE(name,text,value,...) \
    struct name : clause::ample::test::vldt_types<__VA_ARGS__,value> \
    { ample_vldt_(text) }

// AUX function for folding with struct keyword
#define CLAUSE_AUX_FSTRUCT__(n,x) n struct x;

/*~
 * @desc Declare the identifiers of the tests that are to be implemented inside
 *       the body of an `ample compatible test. To be used only inside of its
 *       specific `CLAUSE_TEST_DEFN enclosure. Final (;) for invocation too.
 * @pfrg ...: series of identifiers, rules of C++ identifier allowed characters
 *            must be followed.
 *
 */
#define CLAUSE_TEST_DECL(...) \
        template<bool B, typename... T>  \
        using proxy1 = clause::ample::boolean<B>(*)(T*...); \
        template<template<bool> class Z, bool B, typename... X> \
        static int proxy2(char const *s, Z<B>(*)(X*...)) { \
            using namespace clause::ample::test; \
            return check<B, check_all<X...>>::deploy(s); \
        } PPMPF_EXCISE((PPMPF_TUP_FOLDL( \
            CLAUSE_AUX_FSTRUCT__,(),PPMPF_TUPLE(__VA_ARGS__)))) \
    template<typename..., typename X = proxy1<true,__VA_ARGS__>>\
    static int deploy(char const *s){ return proxy2(s, X(nullptr)); } \
    struct PPMPF_VCAT(clause__test,name,__LINE__) { /* deliberate */ }

/*~
 * @desc Create indexed token lists for CLAUSE_TEST_DECL use.
 * @pfrg a: prefix used
 * @pfrg n: number up to and including it in (a)(b)(c)(d) format.
 */
#define CLAUSE_TEST_INDX(a_1__,n_1__) \
        CLAUSE_TEST_DECL(PPMPF_PREFEXP(a_1__, n_1__))

/*~
 * @desc Creates a full test body to be run for type matches involved, this is
 *       a high level macro that is accompanying a {} enclosed segment of single
 *       top `CLAUSE_AMPLE_DECL invocation with the list of the identifiers for
 *       the tests and one `CLAUSE_AMPLE_DEVT invocation for each of these
 *       identifiers.
 *
 */
#define CLAUSE_TEST_DEFN(name, value) \
        struct name; template<typename..., typename X = name>\
        int PPMPF_CAT(test_,name)() { return X::deploy(value); }\
        int main() { return PPMPF_CAT(test_,name)(); } struct name

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
 * requisite for using clause.
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
 * NOTE: Testing mechanism fundamentals for the various clause::ample template
 * metaprogramming constructs.
 **/
namespace clause {
namespace ample {
namespace test {

struct as_passed {};
struct as_failed {};
struct as_output {};
struct as_expect {};
struct as_result {};
struct as_showln {};

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
        return "default clause::ample::test validation showln";
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
        return "default clause::ample::test validation showln";
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
         : where< boolean<X::output() == Casc_B>
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
                            , Casc_B >>
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

template< bool Cascade_B
        , typename Check_T
        , typename CharMessage_T = charseq<> >
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

    static
        typename
            clause::ample::when< clause::ample::is_charseq<CharMessage_T>
                               , std::size_t >::type
    run_all() {
        println_head(CharMessage_T::value);
        std::for_each(begin(), end(), println);
        println_foot("test block complete");
        return total<as_failed>();
    }

};


} /* test */
} /* ample */
} /* clause */

#undef ample_printf_ /* remove this macro */

#endif /* CLAUSE_AMPLE_TEST_HH */
