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

/*~
 * @warn This file should not be included directly in code deploying library
 *       constructs from 'clause'; it is part of preprocessor based recursive
 *       inclusions and it is limited by preprocessor-driven evaluation of
 *       constant expressions in '#if' directives. This is the reason it lacks
 *       header inclusion guards.
 */

#ifndef CLAUSE_PPMPF_VXPP_SLOTS_SLOT1_FX01_HH
    #if  PPMPF_VXPP_EVAL(1)
        #if PPMPF_VXPP_ITERATE(1)
            #define CLAUSE_PPMPF_VXPP_SLOTS_SLOT1_FX01_HH
            #include PPMPF_VXPP_ARITY11()
            #include PPMPF_VXPP_ARITY12()
            #include PPMPF_VXPP_ARITY13()
            #include PPMPF_VXPP_ARITY14()
            #include PPMPF_VXPP_ARITY15()
            #include PPMPF_VXPP_ARITY16()
            #include PPMPF_VXPP_ARITY17()
            #include PPMPF_VXPP_ARITY18()
            #include PPMPF_VXPP_ARITY19()
            #ifdef PPMPF_VXPP_SLOT1
                #include PPMPF_VXPP_SLOT1()
            #elif defined(PPMPF_VXPP_FUNC1)
PPMPF_VXPP_FUNC1()
            #endif
            #include <clause/ppmpf/vxpp/slots/next/next1.hh>
        #else
            #include PPMPF_VXPP_ARITY11()
            #include PPMPF_VXPP_ARITY12()
            #include PPMPF_VXPP_ARITY13()
            #include PPMPF_VXPP_ARITY14()
            #include PPMPF_VXPP_ARITY15()
            #include PPMPF_VXPP_ARITY16()
            #include PPMPF_VXPP_ARITY17()
            #include PPMPF_VXPP_ARITY18()
            #include PPMPF_VXPP_ARITY19()
            #ifdef PPMPF_VXPP_SLOT1
                #include PPMPF_VXPP_SLOT1()
            #elif defined(PPMPF_VXPP_FUNC1)
PPMPF_VXPP_FUNC1()
            #endif
            #include <clause/ppmpf/vxpp/slots/next/next1.hh>
            #include <clause/ppmpf/vxpp/slots/next/loop/loop1.hh>
        #endif
    #else
        #define _PPMPF_VXPP_BASE1_
    #endif
#endif
