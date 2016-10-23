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

#include <clause/ample/test.hh>
#include <clause/ample/base/atpp.hh>
#include <clause/ppmpf/spexp.hh>
#include <tuple>

struct a1{};
struct a2{};
struct a3{};
struct a4{};
struct a5{};
struct a6{};
struct a7{};
struct a8{};

// fixed size sfinae lock using templify + decltype combination.
template<typename... T>
auto e1(T...)
  -> decltype(templify((std::tuple) (T...){1})(), a1{});

template<typename... T>
auto e1(T...)
  -> decltype(templify((std::tuple) (T...){2})(), a2{});

template<typename... T>
auto e1(T...)
  -> decltype(templify((std::tuple) (T...){3})(), a3{});

template<typename... T>
auto e1(T...)
  -> decltype(templify((std::tuple) (T...){4})(), a4{});

// fixed size sfinae lock, declpack style
template<typename... T>
auto e2(T...)
  -> declpack((T...){1} |= a1());

template<typename... T>
auto e2(T...)
  -> declpack((T...){2} |= a2());

template<typename... T>
auto e2(T...)
  -> declpack((T...){3} |= a3());

template<typename... T>
auto e2(T...)
  -> declpack((T...){4} |= a4());


// size restraints set sfinae lock, declpack style
template<typename... T>
auto e3(T...)
  -> declpack((T...){0,5}  |= a1());

template<typename... T>
auto e3(T...)
  -> declpack((T...){5,10} |= a2());

template<typename... T>
auto e3(T...)
  -> declpack((T...){10,15} |= a3());

template<typename... T>
auto e3(T...)
  -> declpack((T...){15,20} |= a4());

// reversing a pack using individual access
template<typename... T>
auto e4(T...)
  -> templify((std::tuple) (T...){}(3,2,1,0));

// access based playing with types in the pack, templify style
template<typename... T>
auto e5(T...)
    -> templify((std::tuple) (T...){}(2,1,2,1,2,1,2,1));

// access based playing with types in the pack, declpack style
template<typename... T>
auto e6(T...)
    -> declpack(((T...){}(3,3,3)) |= clause::ample::as_template_of<std::tuple> );

// expanding to specific ranges

template<typename... T>
auto e7(T...)
  -> templify((std::tuple) (T...){} >>= {0,4});

template<typename... T>
auto e8(T...)
  -> templify((std::tuple) (T...){} >>= {4,0});

// size constrains triggering SFINAE while range-expansion used
// also for reversing the range involved. In one blow.

template<typename... T>
auto e9(T...)
  -> templify((std::tuple) (T...){7} >>= {5,2});

template<typename... T>
auto e9(T...)
  -> templify((std::tuple) (T...){8} >>= {5,7});

// using the size constraint with multiple random accesses
template<typename... T>
auto e9(T...)
  -> templify((std::tuple) (T...){4}(2,3,2,3,1));

// demonstrating one possible use of the pattern factor operator:
// when equal to the size of the pack, ALL types must be the same!
template<typename... T>
auto e10(T...)
  -> templify((std::tuple) (T...){}[sizeof...(T)] );

// pattern factor operator detecting multiples in fixed size
// packs, triggering SFINAE properly in each case.
template<typename... T>
auto e10(T...)
  -> decltype(templify((std::tuple) (T...){8}[2])(), a2() );

template<typename... T>
auto e10(T...)
  -> decltype(templify((std::tuple) (T...){9}[3])(), a3() );

auto e10(...) -> a1;

// A pack of size 6, where indices 1,2,3,4 are <1,2> == <3,4>
template<typename... T>
auto e11(T...)
  -> decltype(templify((std::tuple) (((T...){6} >>= {1,5})[2]))(), a4());

// Multiple pattern factor operators used in constraints
template<typename... T>
auto e12(T...)
  -> decltype( templify((std::tuple) (T...){}[true][sizeof...(T) > 1])()
             , a1() );

// Primitive for yielding a type from a given index using declpack
template<std::size_t N, typename... T>
auto e13(T...)
  -> declpack((T...){}[N < sizeof...(T)](N) |= clause::ample::as_template_of<>);

template<typename...>
struct F {};

template<typename...>
struct Fx {};

template<typename...>
struct Gx {};

template<typename... T>
auto e14(T...)
  -> declpack(((T...){} * clause::ample::as_template_of<F>)
              |= clause::ample::as_template_of<std::tuple>);

template<typename... T>
auto e15(T...)
  -> templify((std::tuple) ((T...){} * clause::ample::as_template_of<>));

template<typename... T>
auto e16(T...)
  -> templify((std::tuple) ((T...){} * clause::ample::as_template_of<Fx,Gx>));

template<typename... T>
auto e17(T...)
  -> templify((std::tuple) ((T...){} * clause::ample::as_template_of<Fx>
                                     * clause::ample::as_template_of<Gx> ));

template<std::size_t N>
auto e13(...) -> int;

CLAUSE_TEST_DEFN( check_all_atppops
                , "evaluating atpp pack operators") {

    /*
     * An example of deploying a ppmpf based token generator using pure
     * preprocessor to implement the necessary boilerplate for the tests.
     * It is based on the macros defined in <clause/ppmpf/spexp.hh> and
     * CLAUSE_TEST_INDX itself is defined in <clause/ample/test.hh>.
     */
    CLAUSE_TEST_INDX(atpp, (0)(0)(3)(3));

    CLAUSE_TEST_TYPE( atpp0
                    , "templify((std::tuple) (T...){1})"
                    , true
                    , decltype(e1(1))
                    , a1 );

    CLAUSE_TEST_TYPE( atpp1
                    , "templify((std::tuple) (T...){2})"
                    , true
                    , decltype(e1(1,2))
                    , a2 );

    CLAUSE_TEST_TYPE( atpp2
                    , "templify((std::tuple) (T...){3})"
                    , true
                    , decltype(e1(1,2,3))
                    , a3 );

    CLAUSE_TEST_TYPE( atpp3
                    , "templify((std::tuple) (T...){4})"
                    , true
                    , decltype(e2(1,2,3,4))
                    , a4 );

    CLAUSE_TEST_TYPE( atpp4
                    , "declpack((T...){1} |= a1())"
                    , true
                    , decltype(e2(1))
                    , a1 );

    CLAUSE_TEST_TYPE( atpp5
                    , "declpack((T...){2} |= a2())"
                    , true
                    , decltype(e2(1,2))
                    , a2 );

    CLAUSE_TEST_TYPE( atpp6
                    , "declpack((T...){3} |= a3())"
                    , true
                    , decltype(e2(1,2,3))
                    , a3 );

    CLAUSE_TEST_TYPE( atpp7
                    , "declpack((T...){4} |= a4())"
                    , true
                    , decltype(e2(1,2,3,4))
                    , a4 );

    CLAUSE_TEST_TYPE( atpp8
                    , "declpack((T...){0,5}   |= a1())"
                    , true
                    , decltype(e3(1))
                    , a1 );

    CLAUSE_TEST_TYPE( atpp9
                    , "declpack((T...){5,10}  |= a2())"
                    , true
                    , decltype(e3(1,2,3,4,5))
                    , a2 );

    CLAUSE_TEST_TYPE( atpp10
                    , "declpack((T...){10,15} |= a3())"
                    , true
                    , decltype(e3(1,2,3,4,5,6,7,8,9,10))
                    , a3 );

    CLAUSE_TEST_TYPE( atpp11
                    , "declpack((T...){15,10} |= a4())"
                    , true
                    , decltype(e3(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15))
                    , a4 );

    CLAUSE_TEST_TYPE( atpp12
                    , "declpack((T...)(3,2,1,0)"
                    , true
                    , decltype(e4(a1{},a2{},a3{},a4{}))
                    , std::tuple<a4,a3,a2,a1> );

    CLAUSE_TEST_TYPE( atpp13
                    , "templify((std::tuple) (T...){}(2,1,2,1,2,1,2,1))"
                    , true
                    , decltype(e5(a1{},a2{},a3{},a4{}))
                    , std::tuple<a3,a2,a3,a2,a3,a2,a3,a2> );

    CLAUSE_TEST_TYPE( atpp14
                    , "declpack((T...){}(3,3,3) |= clause::ample::as_template_of<std::tuple> ))"
                    , true
                    , decltype(e6(a1{},a2{},a3{},a4{}))
                    , std::tuple<a4,a4,a4> );

    CLAUSE_TEST_TYPE( atpp15
                    , "templify((std::tuple) (T...){} >>= {0,4} ))"
                    , true
                    , decltype(e7(a1{},a2{},a3{},a4{}))
                    , std::tuple<a1,a2,a3,a4> );

    CLAUSE_TEST_TYPE( atpp16
                    , "templify((std::tuple) (T...){} >>= {4,0} ))"
                    , true
                    , decltype(e8(a1{},a2{},a3{},a4{}))
                    , std::tuple<a4,a3,a2,a1> );

    CLAUSE_TEST_TYPE( atpp17
                    , "templify((std::tuple) (T...){7} >>= {5,2} ))"
                    , true
                    , decltype(e9(a1{},a2{},a3{},a4{},a5{},a6{},a7{}))
                    , std::tuple<a5,a4,a3> );

    CLAUSE_TEST_TYPE( atpp18
                    , "templify((std::tuple) (T...){8} >>= {5,7} ))"
                    , true
                    , decltype(e9(a1{},a2{},a3{},a4{},a5{},a6{},a7{},a8{}))
                    , std::tuple<a6,a7> );

    CLAUSE_TEST_TYPE( atpp19
                    , "templify((std::tuple) (T...){4}(2,3,2,3,1))"
                    , true
                    , decltype(e9(a1{},a2{},a3{},a4{}))
                    , std::tuple<a3,a4,a3,a4,a2> );

    CLAUSE_TEST_TYPE( atpp20
                    , "templify((std::tuple) (T...){}[sizeof...(T)] )"
                    , true
                    , decltype(e10(a1{},a1{},a1{}))
                    , std::tuple<a1,a1,a1> );

    CLAUSE_TEST_TYPE( atpp21
                    , "templify((std::tuple) (T...){}[sizeof...(T)] )"
                    , true
                    , decltype(e10(a1{},a1{},a1{},a1{},a1{}))
                    , std::tuple<a1,a1,a1,a1,a1> );

    CLAUSE_TEST_TYPE( atpp22
                    , "templify((std::tuple) (T...){}[sizeof...(T)] )"
                    , true
                    , decltype(e10(a1{},a1{},a1{},0,a1{},a1{}))
                    , a1 );

    CLAUSE_TEST_TYPE( atpp23
                    , "templify((std::tuple) (T...){8}[2] )"
                    , true
                    , decltype(e10(a1{},a2{},a1{},a2{},a1{},a2{},a1{},a2{}))
                    , a2 );

    CLAUSE_TEST_TYPE( atpp24
                    , "templify((std::tuple) (T...){9}[3] )"
                    , true
                    , decltype(e10( a1{}, a2{}, a3{}
                                  , a1{}, a2{}, a3{}
                                  , a1{}, a2{}, a3{} ) )
                    , a3 );

    CLAUSE_TEST_TYPE( atpp25
                    , "templify((std::tuple) (((T...){6} >>= {1,5})[2]))"
                    , true
                    , decltype(e11( a1{}, a2{}, a3{}, a2{}, a3{}, a4{} ) )
                    , a4 );

    CLAUSE_TEST_TYPE( atpp26
                    , "templify((std::tuple) (T...){}[true][sizeof...(T) > 1])"
                    , true
                    , decltype(e12( a1{}, a2{}, a3{}, a2{}, a3{}, a4{} ) )
                    , a1 );

    CLAUSE_TEST_TYPE( atpp27
                    , "declpack((T...){}[N < sizeof..(T)](N) |= as_template_of<>)"
                    , true
                    , decltype(e13<3>( a1{}, a2{}, a3{}, a4{}, a5{}, a6{} ) )
                    , a4 );

    CLAUSE_TEST_TYPE( atpp28
                    , "declpack((T...){}[N < sizeof..(T)](N) |= as_template_of<>)"
                    , true
                    , decltype(e13<30>( a1{}, a2{}, a3{}, a4{}, a5{}, a6{} ) )
                    , int );

    CLAUSE_TEST_TYPE( atpp29
                    , "declpack(((T...){} * as_template_of<F>)) |= as_template_of<std::tuple>"
                    , true
                    , decltype(e14(a1{}, a2{}, a3{}, a4{}, a5{}, a6{}))
                    , std::tuple<F<a1>,F<a2>,F<a3>,F<a4>,F<a5>,F<a6>>);

    CLAUSE_TEST_TYPE( atpp30
                    , "templify((std::tuple) ((T...){} * as_template_of<>))"
                    , true
                    , decltype(e15(a1{}, a2{}, a3{}, a4{}, a5{}, a6{}))
                    , std::tuple<a1,a2,a3,a4,a5,a6>);

    CLAUSE_TEST_TYPE( atpp31
                    , "templify((std::tuple) (((T...){} * as_template_of<Fx,Gx>))"
                    , true
                    , decltype(e16(a1{}, a2{}, a3{}, a4{}, a5{}, a6{}))
                    , std::tuple< Fx<Gx<a1>>
                                , Fx<Gx<a2>>
                                , Fx<Gx<a3>>
                                , Fx<Gx<a4>>
                                , Fx<Gx<a5>>
                                , Fx<Gx<a6>> > );

    CLAUSE_TEST_TYPE( atpp32
                    , "(T...){} * as_template_of<Fx,Gx> == (T...){} * as_template_of<Fx> * as_template_of<Gx>"
                    , true
                    , decltype(e16(a1{}, a2{}, a3{}, a4{}, a5{}, a6{}))
                    , decltype(e17(a1{}, a2{}, a3{}, a4{}, a5{}, a6{})) );

    CLAUSE_TEST_TYPE( atpp33
                    , "as_template_of<> * as_template_of<std::tuple> == as_template_of<std::tuple> * as_template_of<>"
                    , true
                    , decltype( clause::ample::as_template_of<>
                              * clause::ample::as_template_of<std::tuple> )
                    , decltype( clause::ample::as_template_of<std::tuple>
                              * clause::ample::as_template_of<> ) );

};
