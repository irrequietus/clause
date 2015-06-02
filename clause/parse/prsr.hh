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

#ifndef _CLAUSE_PARSER_PRSR_HH_
#define _CLAUSE_PARSER_PRSR_HH_

#include <string>
#include <cstdio>
#include <vector>
#include <clause/cmmn.hh>

namespace clause {
namespace parse {

/*~
 * @warn Do not use this in production, it is only a crutch for developing the
 *       actual parsing library for the time being.
 * @desc A mix between a C++ iterator and the additional member functions we
 *       are building our parser combinator components around. It is exactly
 *       what its name implies: a toy, but a useful one for building the rest
 *       of the components we need. Actually, the behavior is closer to that
 *       of a 'range'.
 * @tprm String_T: A string type; for the time being defaults to std::string
 */
template<typename String_T = std::string>
struct toyparser {
private:
    of_iterator<String_T> m_x, m_y;
    std::vector<String_T> m_data;
public:
    typedef of_iterator<String_T> iterator;
    
    toyparser(of_iterator<String_T> a, of_iterator<String_T> b)
        : m_x(a), m_y(b), m_data()
    {}
    
    of_iterator<String_T>& getl()
    { return m_x; }
    
    of_iterator<String_T>& getr()
    { return m_x; }
    
    of_iterator<String_T> const & getl() const
    { return m_y; }
    
    of_iterator<String_T> const & getr() const
    { return m_y; }
    
    toyparser& setl(of_iterator<String_T> x)
    { m_x = x; return *this; }
    
    toyparser& setr(of_iterator<String_T> x)
    { m_y = x; return *this; }
    
    operator bool() const
    { return m_x != m_y; }
    
    toyparser & operator++()
    { ++m_x; return *this; }
    
    toyparser & operator--()
    { --m_x; return *this; }
    
    auto operator*() -> decltype(*(of_iterator<String_T>()))
    { return *m_x; }
    
    void push(of_iterator<String_T> x) {
        if(x != m_x)
        { m_data.emplace_back(String_T(x,m_x)); }
    }
    
    void show() {
        for(auto && z : m_data)
            printf("---> %s\n", z.c_str());
    }
};

} /* parse */
} /* clause */

#endif /* _CLAUSE_PARSER_PRSR_HH_ */
