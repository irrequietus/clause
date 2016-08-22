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

CLAUSE_TEST_DEFN( check_all_atpp
                , "evaluating atpp pack annotation") {

    using test_ = clause::ample::atpp< int, char, long>;

    CLAUSE_TEST_DECL( atpp1, atpp2, atpp3, atpp4, atpp5, atpp6, atpp7, atpp8
                    , atpp9, atpp10, atpp11, atpp12, atpp13, atpp14, atpp15
                    , atpp16, atpp17, atpp18 );

    CLAUSE_TEST_TYPE( atpp1
                    , "atpp<X...>::repeat<N>"
                    , true
                    , test_::repeat<3>
                    , clause::ample::atpp< int,char,long
                                         , int,char,long
                                         , int,char,long >);
    CLAUSE_TEST_TYPE( atpp2
                    , "atpp<X...>::pattern_of<N>"
                    , true
                    , test_::repeat<3>::pattern_of<3>
                    , clause::ample::boolean<true>);

    CLAUSE_TEST_TYPE( atpp3
                    , "atpp<X...>::expand<N,M>"
                    , true
                    , test_::repeat<3>::expand<1,4>
                    , clause::ample::atpp<char,long,int>);

    CLAUSE_TEST_TYPE( atpp4
                    , "atpp<X...>::generate<N,M,K>"
                    , true
                    , test_::repeat<3>::generate<1,4,10>
                    , clause::ample::atpp<char,long,int>::repeat<10>);

    CLAUSE_TEST_TYPE( atpp5
                    , "atpp<X...>::pattern_is<Y...>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::pattern_is<char,long,int>
                    , clause::ample::boolean<true>);

    CLAUSE_TEST_TYPE( atpp6
                    , "atpp<X...>::atpos_is<N,T>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::atpos_is<3,char>
                    , clause::ample::boolean<true>);

    CLAUSE_TEST_TYPE( atpp7
                    , "atpp<X...>::atpos<N>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::atpos<0>
                    , char );

    CLAUSE_TEST_TYPE( atpp8
                    , "atpp<X...>::insert<N,T>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::insert<11,double>
                                        ::atpos<11>
                    , double );

    CLAUSE_TEST_TYPE( atpp9
                    , "atpp<X...>::insert<N,T...>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::insert<11,double,float,short>
                                        ::expand<11,14>
                    , clause::ample::atpp<double,float,short> );

    CLAUSE_TEST_TYPE( atpp10
                    , "atpp<X...>::replace<N,T...> (1)"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::replace<11,double,float,short>
                                        ::expand<11,14>
                    , clause::ample::atpp<double,float,short> );

    CLAUSE_TEST_TYPE( atpp11
                    , "atpp<X...>::replace<N,T...> (2)"
                    , true
                    , test_::repeat<3>::replace<5,double,float,short>
                    , clause::ample::atpp< int,char,long
                                         , int,char,double
                                         , float,short,long > );
    CLAUSE_TEST_TYPE( atpp12
                    , "atpp<X...>::remove<N>"
                    , true
                    , test_::remove<1>
                    , clause::ample::atpp<int,long> );

    CLAUSE_TEST_TYPE( atpp13
                    , "atpp<X...>::remove<N,M>"
                    , true
                    , test_::repeat<10>::remove<4,29>
                    , clause::ample::atpp<int,char,long,int,long> );

    CLAUSE_TEST_TYPE( atpp14
                    , "atpp<X...>::contains<T> (1)"
                    , true
                    , clause::ample::atpp<int>::repeat<100>::contains<double>
                    , clause::ample::natural<0> );

    CLAUSE_TEST_TYPE( atpp15
                    , "atpp<X...>::contains<T> (2)"
                    , true
                    , clause::ample::atpp<int>::repeat<100>::contains<int>
                    , clause::ample::natural<100> );

    CLAUSE_TEST_TYPE( atpp16
                    , "atpp<X...>::indices_of<T> (1)"
                    , true
                    , clause::ample::atpp<int>
                            ::repeat<100>
                                ::replace<30,double,double,double>
                                    ::indices_of<double>
                    , clause::ample::intgr_seq<30,31,32> );

    CLAUSE_TEST_TYPE( atpp17
                    , "atpp<X...>::indices_of<T> (2)"
                    , true
                    , clause::ample::atpp<int>
                            ::repeat<100>
                                ::replace<50,double,float,long,short>
                                    ::indices_of<long>
                    , clause::ample::intgr_seq<52> );

    CLAUSE_TEST_TYPE( atpp18
                    , "atpp<X...>::indices_of<T> (3)"
                    , true
                    , clause::ample::atpp<int>
                            ::repeat<100>
                                ::replace<50,double,float,long>
                                    ::indices_of<short>
                    , clause::ample::intgr_seq<> );
};
