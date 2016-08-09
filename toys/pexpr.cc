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

#include <clause/parse/expr.hh>
#include <clause/parse/prsr.hh>
#include <clause/parse/text.hh>
#include <string>
#include <cstdio>

using namespace clause::parse;

// Just a toy program showing how the combinators work.

int main() {
    
    std::string s1("+1231239420423");
    std::string s2("1.2234892341523498e+323");
    std::string s3("-1.2234892341523498");
    std::string s4("-1234235s23423552"); // must not match
    
    auto p1 = make_parser(s1.begin(), s2.end());
    if(keep<as_integer>::deploy(p1))
    { printf("matching\n"); p1.show(); }
    
    auto p2 = make_parser(s2.begin(), s2.end());
    if(keep<as_double>::deploy(p2))
    { printf("matching\n"); p2.show(); }
    
    auto p3 = make_parser(s3.begin(), s3.end());
    if(keep<as_double>::deploy(p3))
    { printf("matching\n"); p3.show(); }
    
    auto p4 = make_parser(s4.begin(), s4.end());
    if(keep<as_double>::deploy(p4)) {
        printf("matching\n"); p4.show();
    } else {
        printf("did not match\n");
    }
    
    return {};
};
