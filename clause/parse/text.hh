/*~
 * Copyright (C) 2013, 2014, 2015 George Makrydakis <george@irrequietus.eu>
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

#ifndef _CLAUSE_PARSE_TEXT_HH_
#define _CLAUSE_PARSE_TEXT_HH_

#include <clause/parse/expr.hh>

namespace clause {
namespace parse {

/*~
 * @todo These are likely to change and become character type-free, but it
 *       will do for now.
 * @text These implementations are more of a study over how logical disjunctions
 *       and conjunctions work with the various operations to yield a specific
 *       parsing match.
 */

struct digit19
     : char_interval_of<'1','9'>
{};

struct digit
     : char_interval_of<'0','9'>
{};

struct space
     : star<char_set_of<' ', '\n', '\v', '\r', '\t', '\f'>>
{};

struct as_integer
     : conj<optn<char_set_of<'+','-'>>,digit19,star<digit>>
{};

struct as_double
     : conj< conj<optn<char_set_of<'+','-'>>,star<digit>>
           , char_sequence_of<'.'>
           , conj<digit19,star<digit>>
           , optn<conj<char_set_of<'E','e'>,char_set_of<'+','-'>,star<digit>>>>
{};

} /* parse */
} /* clause */

#endif /* _CLAUSE_PARSE_TEXT_HH_ */
