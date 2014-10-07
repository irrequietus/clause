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
#include <clause/ample/oprt/fundamentals.hh>
#include <clause/ample/base/basic_number.hh>
#include <clause/ample/charseq.hh>

/* NOTE: some default tests */
namespace clause {
namespace ample {
namespace test {

struct validating_add_natural
     : vldt_values<add<natural<5>, natural<5>>, natural<10>, true> {
     ample_vldt_("vldt_values<add<natural<5>, natural<5>>, natural<10>, true>")
};

struct validating_mul_natural
     : vldt_values<mul<natural<5>, natural<5>>, natural<25>, true> {
     ample_vldt_("vldt_values<mul<natural<5>, natural<5>>, natural<25>, true>")
};

struct validating_sub_natural
     : vldt_values<sub<natural<5>, natural<5>>, natural<0>, true> {
     ample_vldt_("vldt_values<sub<natural<5>, natural<5>>, natural<0>, true>")
};

struct validating_div_natural
     : vldt_values<div<natural<5>, natural<5>>, natural<1>, true> {
     ample_vldt_("vldt_values<div<natural<5>, natural<5>>, natural<1>, true>")
};

struct validating_mod_natural
     : vldt_values<mod<natural<6>, natural<5>>, natural<1>, true> {
     ample_vldt_("vldt_values<mod<natural<6>, natural<5>>, natural<1>, true>")
};

struct validating_next_natural
     : vldt_values<next<natural<5>>, natural<6>, true> {
     ample_vldt_("vldt_values<next<natural<5>>, natural<6>, true>")
};

struct validating_prev_natural
     : vldt_values<prev<natural<5>>, natural<4>, true> {
     ample_vldt_("vldt_values<prev<natural<5>>, natural<4>, true>")
};

struct check_all_natural
     : check< true
            , check_all< validating_add_natural
                       , validating_mul_natural
                       , validating_sub_natural
                       , validating_div_natural
                       , validating_mod_natural
                       , validating_next_natural
                       , validating_prev_natural >>
{};

} /* test */
} /* ample */
} /* clause */

int main() {
    return
        AMPLE_TEST_RUN( check_all_natural
                      , "all of the following tests should pass" );
}
