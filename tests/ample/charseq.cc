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
#include <odreex/ample/charseq.hh>

/* NOTE: some default tests */
namespace odreex {
namespace ample {
namespace test {

// A test for the charseq class template.

struct validating_charseq
    : vldt_types< ample_charseq("hello, world")
                , odreex::ample::charseq< 'h', 'e', 'l', 'l', 'o'
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
} /* odreex */

int main() {
    return
        AMPLE_TEST_RUN( check_charseq
                    , "testing odreex::ample::charseq metastring" );
}
