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

struct a1{};
struct a2{};
struct a3{};
struct a4{};

template<typename...>
struct someclass{};

// fixed size sfinae lock using templify + decltype combination.
template<typename... T>
auto e1(T...)
  -> decltype(templify((someclass) (T...){1})(), a1{});

template<typename... T>
auto e1(T...)
  -> decltype(templify((someclass) (T...){2})(), a2{});

template<typename... T>
auto e1(T...)
  -> decltype(templify((someclass) (T...){3})(), a3{});

template<typename... T>
auto e1(T...)
  -> decltype(templify((someclass) (T...){4})(), a4{});

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

CLAUSE_TEST_DEFN( check_all_atppops
                , "evaluating atpp pack operators") {

    /*
     * An example of deploying a ppmpf based token generator using pure
     * preprocessor to implement the necessary boilerplate for the tests.
     * It is based on the macros defined in <clause/ppmpf/spexp.hh> and
     * CLAUSE_TEST_INDX itself is defined in <clause/ample/test.hh>.
     */
    CLAUSE_TEST_INDX(atpp, (0)(0)(1)(1));

    CLAUSE_TEST_TYPE( atpp0
                    , "templify((someclass) (T...){1})"
                    , true
                    , decltype(e1(1))
                    , a1 );

    CLAUSE_TEST_TYPE( atpp1
                    , "templify((someclass) (T...){2})"
                    , true
                    , decltype(e1(1,2))
                    , a2 );

    CLAUSE_TEST_TYPE( atpp2
                    , "templify((someclass) (T...){3})"
                    , true
                    , decltype(e1(1,2,3))
                    , a3 );

    CLAUSE_TEST_TYPE( atpp3
                    , "templify((someclass) (T...){4})"
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

};
