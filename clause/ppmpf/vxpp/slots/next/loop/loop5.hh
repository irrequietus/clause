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

#ifndef _CLAUSE_PPMPF_VXPP_SLOTS_SLOT5_FX05_HH_
    #if  PPMPF_VXPP_EVAL(5)
        #if PPMPF_VXPP_ITERATE(5)
            #define _CLAUSE_PPMPF_VXPP_SLOTS_SLOT5_FX05_HH_
            #include PPMPF_VXPP_ARITY51()
            #include PPMPF_VXPP_ARITY52()
            #include PPMPF_VXPP_ARITY53()
            #include PPMPF_VXPP_ARITY54()
            #include PPMPF_VXPP_ARITY55()
            #include PPMPF_VXPP_ARITY56()
            #include PPMPF_VXPP_ARITY57()
            #include PPMPF_VXPP_ARITY58()
            #include PPMPF_VXPP_ARITY59()
            #ifdef PPMPF_VXPP_SLOT5
                #include PPMPF_VXPP_SLOT5()
            #elif defined(PPMPF_VXPP_FUNC5)
PPMPF_VXPP_FUNC5()
            #endif
            #include <clause/ppmpf/vxpp/slots/next/next5.hh>
        #else
            #include PPMPF_VXPP_ARITY51()
            #include PPMPF_VXPP_ARITY52()
            #include PPMPF_VXPP_ARITY53()
            #include PPMPF_VXPP_ARITY54()
            #include PPMPF_VXPP_ARITY55()
            #include PPMPF_VXPP_ARITY56()
            #include PPMPF_VXPP_ARITY57()
            #include PPMPF_VXPP_ARITY58()
            #include PPMPF_VXPP_ARITY59()
            #ifdef PPMPF_VXPP_SLOT5
                #include PPMPF_VXPP_SLOT5()
            #elif defined(PPMPF_VXPP_FUNC5)
PPMPF_VXPP_FUNC5()
            #endif
            #include <clause/ppmpf/vxpp/slots/next/next5.hh>
            #include <clause/ppmpf/vxpp/slots/next/loop/loop5.hh>
        #endif
    #else
        #define _PPMPF_VXPP_BASE5_
    #endif
#endif
