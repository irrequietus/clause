/*~
 * Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
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
#include <clause/ample/charseq.hh>
#include <clause/ample/ensure.hh>
#include <clause/ppmpf/algorithms/map.hh>

namespace clause {
namespace ample {
namespace test {

// The
#define CLAUSE_OPRTS_() \
          add, sub, mul ,div, mod, size_of, base_of, factor_of, push_back     \
        , push_front, pop_back, pop_front, clear, is_empty, leq, geq, neq     \
        , equal, less, greater, head_of, tail_of, null_of, join, atpos        \
        , assign_atpos, insert_at, split_at, circular_shiftl, circular_shiftr \
        , shiftl, shiftr, prev, next, apply

#define CLAUSE_ENSURE_PAIRS(x) \
        PPMPF_CAT(ensure1_,x),PPMPF_CAT(ensure2_,x)
        
#define PPMPF_VXPP_SET0(a) \
    ()(template<typename...> struct PPMPF_CAT(oprt_,a) {};)\
      (CLAUSE_OPRTS_())
      
#define PPMPF_VXPP_SET1(a) \
    ()(struct PPMPF_CAT(ensure1_,a) : vldt_types< \
          typename clause::ample::ensure<test1>::template PPMPF_CAT(oprt_,a)<>\
        , typename test1::template PPMPF_CAT(oprt_,a)<> > { \
        ample_vldt_(PPMPF_QUOTE(ensure for ::template PPMPF_CAT(oprt_,a) 1)) \
    };)(CLAUSE_OPRTS_())
    
#define PPMPF_VXPP_SET2(a) \
    ()(struct PPMPF_CAT(ensure2_,a) : vldt_types< \
          typename clause::ample::ensure<test2>::template PPMPF_CAT(oprt_,a)<>\
        , typename clause::ample::failure<test2> > { \
        ample_vldt_(PPMPF_QUOTE(ensure for ::template PPMPF_CAT(oprt_,a) 2)) \
    };)(CLAUSE_OPRTS_())
    
struct test1 {
    /* Generate the necessary code for all tokens in CLAUSE_OPRTS_() */
    #include PPMPF_VXPP_FMAPOF(0)
};

struct test2 {
    /* This must be empty in order to check the sfinae behavior of 'ensure' */
};
    /* Generate all the code necessary for the tests! */
    #define PPMPF_VXPP_SETS() (1,2)
    #include PPMPF_VXPP_FMAPSETS()

struct check_ensure
     : check< true      /* Code generation through PPMPF_MAP below: */
            , check_all<PPMPF_EXCISE(PPMPF_MAP( (CLAUSE_ENSURE_PAIRS,(__0)(_1))
                                              , PPMPF_UTUP(CLAUSE_OPRTS_())))>>
{};

} /* test */
} /* ample */
} /* clause */

int main() {
    return
        AMPLE_TEST_RUN( check_ensure
                      , "testing clause::ample::ensure template" );
}
