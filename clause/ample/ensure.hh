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

#ifndef _CLAUSE_AMPLE_BASE_ENSURE_HH_
#define _CLAUSE_AMPLE_BASE_ENSURE_HH_

#include <clause/ppmpf/vxpp.hh>

namespace clause {
namespace ample {

/*~
 * @desc The fundamental 'parametric error' variadic class template. This is
 *       going to be used as the common pathway to which all kinds of errors
 *       that are algorithmically detectable during recursive instantiations
 *       are to actually instantiate to.
 * @parm Types_T: A series of parameters that are reserved for the time being.
 * @inst type: a member type declaration of its own instantiation.
 */
template<typename... Types_T>
struct failure final
{ using type = failure<Types_T...>; };

/*~
 * @desc A class template ensuring that when an inexistant oprt metahandler is
 *       deployed, instantiation results to 'failure<...>'. This template can
 *       be used a a sfinae-driven proxy for 'Ensured_T' when a nested template
 *       class is required to be instantiated from it, but 'Ensured_T' does
 *       not provide it. When the requested oprt_* template exists, it is
 *       instantiated normally. This behaviour makes it possible to control
 *       the instantiation stack in case of an error, while also allowins us
 *       full control of the error reporting mechanism during instantiations.
 *       This is due to pattern matching against 'failure<...>' becoming
 *       possible. All clause::ample algorithms are to be deploying this kind
 *       of instantiation by the 'ensure' class template proxy. This template
 *       is also making extensive use of ppmpf preprocessor driven code
 *       generation for sequences of identifiers, each of them to be used
 *       for generating distinct class, function templates and related aliases
 *       whether in this header or in its respective test suite. See the file
 *       tests/ample/ensure.cc in the tests folder.
 * 
 * @parm Ensured_T: The type containing the oprt metahandler class template we
 *                  are interested in using.
 * @note This class template is marked as 'final' because no other classes
 *       should ever derive from it.
 * @inst Depends on the oprt metahandler; if it does not exist, defaults to
 *       instantiating 'failure<Ensured_T>'.
 */
template<typename Ensured_T>
struct ensure final {

    /* The default must always be a 'failure<Ensured_T>'. */
    static failure<Ensured_T> deduce(...);
    
    /* The list of oprt_* related  */
    #define CLAUSE_ENSURE_OPRTS_() \
            add, sub, mul ,div, mod, size_of, base_of, factor_of, push_back \
          , push_front, pop_back, pop_front, clear, is_empty, leq, geq, neq \
          , equal, less, greater, head_of, tail_of, null_of, join, atpos    \
          , assign_atpos, insert_at, split_at, circular_shiftl              \
          , circular_shiftr, shiftl, shiftr
    
    /* The series of static member function template overloads necessary for
     * implementing the detection of an oprt metafunction within the definition
     * body of a type like Ensured_T. We are using the ppmpf component for
     * the code generation with the inline macro definition syntax.
     */
    #define PPMPF_VXPP_SET0(a) \
      ()( using oprt_##a##_ = char[PPMPF_CAT(1,PPMPF_VXPP_DN_ITEM(0))]; \
          template<typename X, typename... Y> \
          static typename X::template oprt_##a<Y...> \
          deduce(failure<X,Y...>, oprt_##a##_*); ) \
        ( CLAUSE_ENSURE_OPRTS_() )
    
    /* The series of template aliases we are using for ensuring that a given
     * type like Ensured_T does indeed have the oprt metafunction we are trying
     * to invoke through a metahandler. We are using the ppmpf component for
     * the code generation with the inline macro definition syntax.
     */
    #define PPMPF_VXPP_SET1(a) \
      ()( template<typename... X> \
          using oprt_##a \
              = decltype( deduce(failure<Ensured_T,X...>() \
                        , (oprt_##a##_*)(nullptr))); ) \
        ( CLAUSE_ENSURE_OPRTS_() )
    
    #define PPMPF_VXPP_SETS() (0,1)
    #include PPMPF_VXPP_FMAPSETS()
    #undef CLAUSE_ENSURE_OPRTS_
};

} /* ample */
} /* clause */

#endif /* _CLAUSE_AMPLE_BASE_ENSURE_HH_ */
