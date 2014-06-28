/*~
 * Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
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

/* NOTE: some default tests */
namespace clause {
namespace ample {
namespace test {

struct validating_types_true_true
    : vldt_types<std::true_type, std::true_type, true> {
    ample_vldt_("vldt_types<std::true_type, std::true_type, true>")
};

struct validating_types_true_false
    : vldt_types<std::true_type, std::false_type, false> {
    ample_vldt_("vldt_types<std::true_type, std::false_type, false>")
};

struct validating_types_false_false
    : vldt_types<std::false_type, std::false_type, true> {
    ample_vldt_("vldt_types<std::false_type, std::false_type, true>")
};

struct validating_types_false_true
    : vldt_types<std::false_type, std::true_type, false> {
    ample_vldt_("vldt_types<std::false_type, std::true_type, false>")
};

struct validating_values_true_true
    : vldt_values<std::true_type, std::true_type, true> {
    ample_vldt_("vldt_values<std::true_type, std::true_type>, true>")
};

struct validating_values_true_false
    : vldt_values<std::true_type, std::false_type, false> {
    ample_vldt_("vldt_values<std::true_type, std::false_type, false>")
};

struct validating_values_false_false
    : vldt_values<std::false_type, std::false_type, true> {
    ample_vldt_("vldt_values<std::false_type, std::false_type, true>")
};

struct validating_values_false_true
    : vldt_values<std::false_type, std::true_type, false> {
    ample_vldt_("vldt_values<std::false_type, std::true_type, false>")
};

/* validating check_all for all "pass" cases */
struct check_all_pass
    : check< true
           , check_all< validating_types_true_true
                      , validating_types_true_false
                      , validating_types_false_false
                      , validating_types_false_true
                      , validating_values_true_true
                      , validating_values_true_false
                      , validating_values_false_false
                      , validating_values_false_true >>
{};

} /* test */
} /* ample */
} /* clause */

int main() {
    return
        AMPLE_TEST_RUN( check_all_pass
                    , "all of the following tests are supposed to pass" );
}

