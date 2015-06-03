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

#ifndef _CLAUSE_PARSE_EXPR_HH_
#define _CLAUSE_PARSE_EXPR_HH_

#include <clause/ample/base/basic_number.hh>
#include <clause/cmmn.hh>
#include <clause/parse/stor.hh>
#include <clause/parse/util.hh>

/*~
 * @text The entire purpose of this header is to use the building blocks of the
 *       library and provide a parsing expression grammar based approach for
 *       creating parsers. There are already several ways to do that using
 *       template metaprogramming in many libraries; the differences right
 *       now are implementational as well as operational, but the theory
 *       behind all of such efforts is described through parser combinators.
 *       Essentially, we are dealing with recursive descent through the template
 *       instantiations, resulting in easy to compose unary functions, usable
 *       with absolute guarantees during runtime.
 *
 *       The fundamental building blocks upon which these templates operate
 *       are `clause::parse::basic_sequence, clause::parser::basic_set and
 *       `clause::parse::basic_interval.
 */

namespace clause {
namespace parse {

/*~
 * @desc Perform a logical conjunction over an ordered sequence of parsing
 *       expressions, resetting the parser to its original position if such
 *       expressions are not evaluated as valid over the parsed content.
 * @tprm Exprs_T: Ordered sequence of parsing expressions.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 */
template<typename... Exprs_T>
struct conj
     : recursively_conjunctive<conj>
     , deployable_as<conj<Exprs_T...>>
{};

/*~
 * @desc Perform a logical disjunction over an ordered sequence of parsing
 *       expressions, resetting the parser to its original position if such
 *       expressions are not evaluated as valid over the parsed content.
 * @tprm Exprs_T: Ordered sequence of parsing expressions.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 */
template<typename... Exprs_T>
struct disj
     : recursively_disjunctive<disj>
     , deployable_as<disj<Exprs_T...>>
{};

/*~
 * @desc A Kleene star operator implemented as a C++ template.
 * @tprm Expr_T: An type parameter representing the operand upon which the star
 *       operator will perform its operation. It has to provide an unary
 *       `deploy metahandler of bool(IterableParser_T&) signature.
 * @mtdf deploy <- IterableParser_T: A parser instance respecting the semantics
 *       of clause::parse.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 * @todo constraint checking alla clause::ample.
 */
template<typename Expr_T>
struct star {
    template<typename IterableParser_T>
    static inline bool deploy(IterableParser_T & x) {
        return x
            ? [&](){ for(;Expr_T::template deploy(x);) {}; return true; }()
            : true;
    }
};

/*~
 * @desc A Kleene plus operator implemented as a C++ template.
 * @tprm Expr_T: A type parameter representing the operand upon which the plus
 *       operator will perform its operation. It has to provide an unary
 *       `deploy metahandler of bool(IterableParser_T&) signature.
 * @mtdf deploy <- IterableParser_T: A parser instance respecting the semantics
 *       of clause::parse.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 * @todo constraint checking alla clause::ample.
 */
template<typename Expr_T>
struct plus {
    template<typename IterableParser_T>
    static inline bool deploy(IterableParser_T & x) {
        return Expr_T::template deploy(x)
            ? star<Expr_T>::template deploy(x)
            : false;
    }
};

/*~
 * @desc An option operator matching zero or one occurences of any symbol that
 *       is in its scope.
 * @tprm Expr_T: Expression to match as a type parameter.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 * @todo constraint checking alla clause::ample.
 */
template<typename Expr_T>
struct optn {
    template<typename IterableParser_T>
    static inline bool deploy(IterableParser_T & x) {
        return x
            ? [&]() { Expr_T::template deploy(x); return true; }()
            : true;
    }
};

/*~
 * @desc Checks if a given expression has been matched, without advancing after
 *       it has matched said expression; true if matched, false otherwise.
 * @tprm Expr_T
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 * @todo constraint checking alla clause::ample.
 */
template<typename Expr_T>
struct only {
    template<typename IterableParser_T>
    static inline bool deploy(IterableParser_T & x) {
        of_iterator<IterableParser_T> tmp(x.getl());
        return Expr_T::template deploy(x)
            ? [&](){ x.setl(tmp); return true; }()
            : false;
    }
};

/*~
 * @desc Checks if a given expression is not matched, without advancing after
 *       it has matched said expression; true if not matched, false otherwise.
 * @tprm Expr_T
 * @note Essentially, the complementary of `only.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 * @todo constraint checking alla clause::ample.
 */
template<typename Expr_T>
struct bnot {
    template<typename IterableParser_T>
    static inline bool deploy(IterableParser_T & x) {
        of_iterator<IterableParser_T> tmp(x.getl());
        return Expr_T::template deploy(x)
            ? [&](){ x.setl(tmp); return false; }()
            : true;
    }
};

/*~
 * @desc Check that a given expression is repeated a specific amount of times.
 * @tprm Expr_T : expression type containing an appropriate static member
 *                function template (deploy).
 * @tprm Times_N: The number of times it has to be repeated as type parameter.
 * @note If the expression is repeated the specified number of times, returns
 *       true, otherwise it is always false. In that case, it resets the parsing
 *       iterator to the initial position.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 */
template<typename Expr_T, typename Times_N>
struct many {
    template<typename IterableParser_T>
    static inline bool deploy(IterableParser_T & x) {
        of_iterator<IterableParser_T> tmp(x.getl());
        for(std::size_t n(0); Expr_T::template deploy(x); ++n) {
            if (n == Times_N::value)
                return true;
        }
        x.setl(tmp);
        return false;
    }
};

/*~
 * @desc An operator consuming characters until either a match is successful or
 *       the end is met; it will return false only if the end is met.
 * @tprm Expr_T: An expression as a type parameter upon which the operator is
 *       applied.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 * @todo constraint checking alla clause::ample.
 */
template<typename Expr_T>
struct past {
    template<typename IterableParser_T>
    static inline bool deploy(IterableParser_T & x) {
        for( of_iterator<IterableParser_T> tmp(x.getl())
           ; !Expr_T::template deploy(x)
           ; ++x )
        { if(!x) { x.setl(tmp); return false; } }
        return true;
    }
};

/*~
 * @desc A type specifying termination of the iteration range of the parser
 *       instance itself, as we have specified it.
 * @mtdf Will return true if the end is met.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 */
struct stop {
    template<typename IterableParser_T>
    static inline bool deploy(IterableParser_T & x) {
        return !x;
    }
};

/*~
 * @desc Proceeds until a given expression is met, but in contrast to the `past
 *       variant, it will stop at the beginning of the last expression that is
 *       enclosed within its operand expression.
 * @tprm Expr_T : An expression as a type parameter.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 */
template<typename Expr_T>
struct till
     : past<only<Expr_T>> 
{};

/*~
 * @desc Left and right enclosure, separated by delimiter.
 * @tprm Left_T : Expression limiting the left boundary as a type parameter.
 * @tprm Expr_T : Nested expression specified as a type parameter.
 * @tprm Delim_T: Expression specifying the delimiter as a type parameter.
 * @tprm Right_T: Expression limiting the right boundary as a type parameter.
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 */
template< typename Left_T
        , typename Expr_T
        , typename Delim_T
        , typename Right_T >
struct enclsep_by
     : conj< Left_T
           , conj<Expr_T, star<conj<Delim_T, Expr_T>>>
           , Right_T >
{};

/*~
 * @desc Split an expression by a delimiter.
 * @tprm Expr_T
 * @tprm Delim_T
 * @note This one provides an unary `deploy metahandler that requires a parser
 *       instance compliant to the semantics of clause::parse (`toyparser like
 *       interface for now).
 */
template<typename Expr_T, typename Delim_T>
struct split_by
     : conj<Expr_T, star<conj<Delim_T, Expr_T> > >
{};

/*
 * @desc Store the result of the expression parsed.
 * @tprm Expr_T: An expression implemented as a type parameter.
 * @note This is another utilify function, which will change.
 * @todo Store properly within a tree data structure.
 */
template<typename Expr_T>
struct keep {
    template<typename Parsing_T>
    static inline bool deploy(Parsing_T & x) {
        clause::of_iterator<Parsing_T> z(x.getl());
        return Expr_T::template deploy(x)
            ? [&](){ x.push(z); return true; }()
            : false;
    };
};

} /* parse */
} /* clause */

#endif /* _CLAUSE_PARSE_EXPR_HH_ */
