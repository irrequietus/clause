/**
 * Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
 * 
 * This file is part of odreex.
 * odreex is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * odreex is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with odreex. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef _ODREEX_AMPLE_TEST_TEST_HH_
#define _ODREEX_AMPLE_TEST_TEST_HH_

#include <odreex/ample/test.hh>
#include <odreex/ample/oprt/fundamentals.hh>
#include <odreex/ample/base/basic_number.hh>

/* NOTE: some default tests */
namespace odreex {
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

/* Some oprt_* tests temporarily added in the master ample/test/test.hh */
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
} /* odreex */

#endif /* _ODREEX_AMPLE_TEST_TEST_HH_ */
