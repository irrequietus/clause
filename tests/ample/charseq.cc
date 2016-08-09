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
#include <clause/ample/charseq.hh>

/* NOTE: some default tests */
namespace clause {
namespace ample {
namespace test {

// A test for the charseq class template.

struct validating_charseq
    : vldt_types< ample_charseq("hello, world")
                , clause::ample::charseq< 'h', 'e', 'l', 'l', 'o'
                                        , ','
                                        , ' '
                                        , 'w', 'o', 'r', 'l', 'd'>, true> {
    ample_vldt_("charseq<'h','e','l','l','o',',',' ','w','o','r','l','d'>")
};

struct check_charseq
     : check< true
            , check_all<validating_charseq>>
{};

} /* test */
} /* ample */
} /* clause */

int main() {
    return
        AMPLE_TEST_RUN( check_charseq
                    , "testing clause::ample::charseq metastring" );
}
