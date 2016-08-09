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

#ifndef CLAUSE_AMPLE_DOT_HH
#define CLAUSE_AMPLE_DOT_HH

#include <clause/ample/vector.hh>
#include <clause/ample/fold.hh>

namespace clause {
namespace ample {

/*~
 * @desc Composition for single parameter accepting template template parameters
 *       acting as "functions" to be applied upon a parameter. It is optimized
 *       for 1 to 4 template-type parameters, then a foldr is applied in the
 *       most general case.
 * @tprm F: a pack of template template parameters requiring a single argument.
 * @inst If A,B,C are the parameters and X is the parameter to be passed through
 *       the oprt_apply metahandler contained, A<B<C<X>>> is the result.
 * 
 */
template<template<typename> class ... Fx>
struct dot {
private:
    template<template<typename> class F>
    struct wrap__ {};
    
    using vec__ = vector<wrap__<Fx>...>;
    
    struct dot__ {
        template<typename A, typename B>
        struct apply_
        { typedef char type; };
        
        template<typename A, template<typename> class F>
        struct apply_<wrap__<F>,is_just<A>>
        { typedef is_just<F<A>> type; };
        
        template<typename A, typename B>
        struct oprt_apply
        { typedef typename apply_<A,B>::type type; };
    };
    
    template< typename X
            , template<typename> class A >
    static A<X>
    deduce(wrap__<A>);
    
    template< typename X
            , template<typename> class A
            , template<typename> class B >
    static A<B<X>>
    deduce(wrap__<A>,wrap__<B>);
    
    template< typename X
            , template<typename> class A
            , template<typename> class B
            , template<typename> class C >
    static A<B<C<X>>>
    deduce(wrap__<A>,wrap__<B>,wrap__<C>);

    template< typename X
            , template<typename> class A
            , template<typename> class B
            , template<typename> class C
            , template<typename> class D >
    static A<B<C<D<X>>>>
    deduce(wrap__<A>,wrap__<B>,wrap__<C>,wrap__<D>);
    
    template<typename X, template<typename> class... Fz>
    static typename foldr<dot__,is_just<X>, vec__>::type
    deduce(wrap__<Fz>...);
    
public:
    template<typename X>
    struct oprt_apply
    { typedef decltype(deduce<X,Fx...>(wrap__<Fx>()...)) type; };
};

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_DOT_HH */
