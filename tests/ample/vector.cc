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
#include <clause/ample/vector.hh>

namespace clause {
namespace ample {
namespace test {

/* validation preamble */

struct validating_vector_0
    : vldt_types<size_of<vector<>>, natural<>, true> {
    ample_vldt_("size_of<vector<>>")
};

struct validating_vector_1
    : vldt_types< size_of<vector<int>>
                , natural<1>
                , true > {
    ample_vldt_("size_of<vector<int>>")
};

struct validating_vector_2
    : vldt_types< size_of<vector<int,long>>
                , natural<2>
                , true > {
    ample_vldt_("size_of<vector<int,long>>")
};

struct validating_vector_3
    : vldt_types< size_of<pop_front<vector<int,long>>>
                , natural<1>
                , true> {
    ample_vldt_("size_of<pop_front<vector<int,long>>>")
};

struct validating_vector_4
    : vldt_types< size_of<pop_back<vector<int,long>>>
                , natural<1>
                , true> {
    ample_vldt_("size_of<pop_back<vector<int,long>>>")
};

struct validating_vector_5
    : vldt_types< atpos< vector<int,long>, natural<> >
                , int
                , true> {
    ample_vldt_("atpos<vector<int,long>, natural<>>")
};

struct validating_vector_6
    : vldt_types< atpos< vector<int,long>, natural<1> >
                , long
                , true> {
    ample_vldt_("atpos<vector<int,long>, natural<1>>")
};

struct validating_vector_7
    : vldt_types< atpos< pop_front<vector<int,long>>, natural<0> >
                , long
                , true> {
    ample_vldt_("atpos<pop_front<vector<int,long>>, natural<0>>")
};

struct validating_vector_8
    : vldt_types< atpos< push_front<vector<int,long>,char>, natural<0> >
                , char
                , true> {
    ample_vldt_("atpos<push_front<vector<int,long>,char>, natural<0>>")
};

struct validating_vector_9
    : vldt_types< atpos< push_back<vector<int,long>,char>, natural<2> >
                , char
                , true> {
    ample_vldt_("atpos<push_back<vector<int,long>,char>, natural<2>>")
};

struct validating_vector_10
    : vldt_types< atpos< assign_atpos< vector<int,long,char>
                                     , float
                                     , natural<1>>
                       , natural<1>>
                , float
                , true> {
    ample_vldt_(
      "atpos<assign_atpos<vector<int,long,char>,float,natural<1>>,natural<1>>"
    )
};

struct validating_vector_11
    : vldt_types< size_of<clear<vector<int,long,float> > >
                , natural<>
                , true> {
    ample_vldt_(
      "clear<vector<int,long,float>>"
    )
};


/* tests for clause::ample::vector */
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
} /* clause */

int main() {
    return
        AMPLE_TEST_RUN( check_ample_vector
                    , "testing clause::ample::vector" );
}
