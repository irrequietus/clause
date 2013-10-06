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

#ifndef _ODREEX_TESTS_AMPLE_HH_
#define _ODREEX_TESTS_AMPLE_HH_

#include <odreex/ample/test.hh>
#include <odreex/ample/vector.hh>

namespace odreex {
namespace ample {
namespace test {

/* validation preamble */

struct validating_vector_0
    : vldt_types<typename size_of<vector<>>::type, natural<>, true> {
    ample_vldt_("size_of<vector<>>")
};

struct validating_vector_1
    : vldt_types< typename size_of<vector<int>>::type
                , natural<1>
                , true > {
    ample_vldt_("size_of<vector<int>>")
};

struct validating_vector_2
    : vldt_types< typename size_of<vector<int,long>>::type
                , natural<2>
                , true > {
    ample_vldt_("size_of<vector<int,long>>")
};

struct validating_vector_3
    : vldt_types< typename size_of<pop_front<vector<int,long>>>::type
                , natural<1>
                , true> {
    ample_vldt_("size_of<pop_front<vector<int,long>>>")
};

struct validating_vector_4
    : vldt_types< typename size_of<pop_back<vector<int,long>>>::type
                , natural<1>
                , true> {
    ample_vldt_("size_of<pop_back<vector<int,long>>>")
};

struct validating_vector_5
    : vldt_types< typename atpos< vector<int,long>
                                , natural<> >::type
                , int
                , true> {
    ample_vldt_("atpos<vector<int,long>, natural<>>")
};

struct validating_vector_6
    : vldt_types< typename atpos< vector<int,long>
                                , natural<1> >::type
                , long
                , true> {
    ample_vldt_("atpos<vector<int,long>, natural<1>>")
};

struct validating_vector_7
    : vldt_types< typename atpos< pop_front<vector<int,long>>
                                , natural<0> >::type
                , long
                , true> {
    ample_vldt_("atpos<pop_front<vector<int,long>>, natural<0>>")
};

struct validating_vector_8
    : vldt_types< typename atpos< push_front<vector<int,long>,char>
                                , natural<0> >::type
                , char
                , true> {
    ample_vldt_("atpos<push_front<vector<int,long>,char>, natural<0>>")
};

struct validating_vector_9
    : vldt_types< typename atpos< push_back<vector<int,long>,char>
                                , natural<2> >::type
                , char
                , true> {
    ample_vldt_("atpos<push_back<vector<int,long>,char>, natural<2>>")
};

struct validating_vector_10
    : vldt_types< atpos< assign_atpos< vector<int,long,char>
                                     , float
                                     , natural<1>>
                       , natural<1>>::type
                , float
                , true> {
    ample_vldt_(
      "atpos<assign_atpos<vector<int,long,char>,float,natural<1>>,natural<1>>"
    )
};

struct validating_vector_11
    : vldt_types< typename size_of<clear<vector<int,long,float> > >::type
                , natural<>
                , true> {
    ample_vldt_(
      "clear<vector<int,long,float>"
    )
};


/* tests for odreex::ample::vector */
struct check_ample_vector
     : check< true
            , check_all< validating_vector_0
                       , validating_vector_1
                       , validating_vector_2
                       , validating_vector_3
                       , validating_vector_4
                       , validating_vector_5
                       , validating_vector_6
                       , validating_vector_7
                       , validating_vector_8
                       , validating_vector_9
                       , validating_vector_10
                       , validating_vector_11 >>
{};

} /* test */
} /* ample */
} /* odreex */

#endif /* _ODREEX_TESTS_AMPLE_HH_ */