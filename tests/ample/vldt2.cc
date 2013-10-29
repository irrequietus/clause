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

#include <odreex/ample/test.hh>

/* NOTE: some default tests */
namespace odreex {
namespace ample {
namespace test {

/* All of the tests below should fail, deliberately, when they are a pass! */

struct validating_types_true_true_not
    : vldt_types<std::true_type, std::true_type, false> {
    ample_vldt_("vldt_types<std::true_type, std::true_type, false>")
};

struct validating_types_true_false_not
    : vldt_types<std::true_type, std::false_type, true> {
    ample_vldt_("vldt_types<std::true_type, std::false_type, true>")
};

struct validating_types_false_false_not
    : vldt_types<std::false_type, std::false_type, false> {
    ample_vldt_("vldt_types<std::false_type, std::false_type, false>")
};

struct validating_types_false_true_not
    : vldt_types<std::false_type, std::true_type, true> {
    ample_vldt_("vldt_types<std::false_type, std::true_type, true>")
};

struct validating_values_true_true_not
    : vldt_values<std::true_type, std::true_type, false> {
    ample_vldt_("vldt_values<std::true_type, std::true_type>, false>")
};

struct validating_values_true_false_not
    : vldt_values<std::true_type, std::false_type, true> {
    ample_vldt_("vldt_values<std::true_type, std::false_type, true>")
};

struct validating_values_false_false_not
    : vldt_values<std::false_type, std::false_type, false> {
    ample_vldt_("vldt_values<std::false_type, std::false_type, false>")
};

struct validating_values_false_true_not
    : vldt_values<std::false_type, std::true_type, true> {
    ample_vldt_("vldt_values<std::false_type, std::true_type, true>")
};

/* validating check_all for all "fail" cases */
struct check_all_fail
    : check< false
           , check_all< validating_types_true_true_not
                      , validating_types_true_false_not
                      , validating_types_false_false_not
                      , validating_types_false_true_not
                      , validating_values_true_true_not
                      , validating_values_true_false_not
                      , validating_values_false_false_not
                      , validating_values_false_true_not >>
{};

} /* test */
} /* ample */
} /* odreex */

int main() {

    AMPLE_TEST_RUN( check_all_fail
                  , "all of the following tests are supposed to fail" );

    return {};
}

