/*~
 * Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
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

#ifndef _CLAUSE_PPMPF_VXPP_SLOTS_SLOT2_FX02_HH_
    #if  PPMPF_VXPP_EVAL(2)
        #if PPMPF_VXPP_ITERATE(2)
            #define _CLAUSE_PPMPF_VXPP_SLOTS_SLOT2_FX02_HH_
            #include PPMPF_VXPP_ARITY21()
            #include PPMPF_VXPP_ARITY22()
            #include PPMPF_VXPP_ARITY23()
            #include PPMPF_VXPP_ARITY24()
            #include PPMPF_VXPP_ARITY25()
            #include PPMPF_VXPP_ARITY26()
            #include PPMPF_VXPP_ARITY27()
            #include PPMPF_VXPP_ARITY28()
            #include PPMPF_VXPP_ARITY29()
            #ifdef PPMPF_VXPP_SLOT2
                #include PPMPF_VXPP_SLOT2()
            #elif defined(PPMPF_VXPP_FUNC2)
PPMPF_VXPP_FUNC2()
            #endif
            #include <clause/ppmpf/vxpp/slots/next/next2.hh>
        #else
            #include PPMPF_VXPP_ARITY21()
            #include PPMPF_VXPP_ARITY22()
            #include PPMPF_VXPP_ARITY23()
            #include PPMPF_VXPP_ARITY24()
            #include PPMPF_VXPP_ARITY25()
            #include PPMPF_VXPP_ARITY26()
            #include PPMPF_VXPP_ARITY27()
            #include PPMPF_VXPP_ARITY28()
            #include PPMPF_VXPP_ARITY29()
            #ifdef PPMPF_VXPP_SLOT2
                #include PPMPF_VXPP_SLOT2()
            #elif defined(PPMPF_VXPP_FUNC2)
PPMPF_VXPP_FUNC2()
            #endif
            #include <clause/ppmpf/vxpp/slots/next/next2.hh>
            #include <clause/ppmpf/vxpp/slots/next/loop/loop2.hh>
        #endif
    #else
        #define _PPMPF_VXPP_BASE2_
    #endif
#endif
