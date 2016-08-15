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
#include <clause/ample/base/seqrange.hh>

CLAUSE_TEST_DEFN(check_all_seqrange, "evaluating integer sequences, ranges") {

    CLAUSE_TEST_DECL(intseq1, intseq2);

    CLAUSE_TEST_TYPE( intseq1
                    , "intseq_range_t<0,10> containing 0,1,...,9"
                    , true
                    , clause::ample::intgr_range_t<0,10>
                    , clause::ample::intgr_seq<0,1,2,3,4,5,6,7,8,9> );

    CLAUSE_TEST_TYPE( intseq2
                    , "intseq_range_t<10,0> containing 9,8,...,0"
                    , true
                    , clause::ample::intgr_range_t<10,0>
                    , clause::ample::intgr_seq<9,8,7,6,5,4,3,2,1,0> );
};
