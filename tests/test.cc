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

/* NOTE: A test file for the first constructs in ample, namely ample/test.hh as
 * the one bearing the fundamental constructs for testing itself.
 */

#include "test.hh"
#include "ample.hh"

using namespace odreex::ample::test;

int main() {
    check<true,check_all<>>::deploy("this is an empty (pass) test");
    check<false,check_all<>>::deploy("this is an empty (fail) test");
    check_all_pass::deploy();
    check_all_natural::deploy();
    check_all_fail::deploy("all of the following tests are supposed to fail");
    check_charseq::deploy("testing odreex::ample::charseq metastring");
    check_ample_vector::deploy("testing odreex::ample::vector");
    return {};
}
