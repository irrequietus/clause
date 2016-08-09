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

#ifndef CLAUSE_PPMPF_VXPP_SLOTS_SLOT8_FX08_HH
    #if  PPMPF_VXPP_EVAL(8)
        #if PPMPF_VXPP_ITERATE(8)
            #define CLAUSE_PPMPF_VXPP_SLOTS_SLOT8_FX08_HH
            #include PPMPF_VXPP_ARITY81()
            #include PPMPF_VXPP_ARITY82()
            #include PPMPF_VXPP_ARITY83()
            #include PPMPF_VXPP_ARITY84()
            #include PPMPF_VXPP_ARITY85()
            #include PPMPF_VXPP_ARITY86()
            #include PPMPF_VXPP_ARITY87()
            #include PPMPF_VXPP_ARITY88()
            #include PPMPF_VXPP_ARITY89()
            #ifdef PPMPF_VXPP_SLOT8
                #include PPMPF_VXPP_SLOT8()
            #elif defined(PPMPF_VXPP_FUNC8)
PPMPF_VXPP_FUNC8()
            #endif
            #include <clause/ppmpf/vxpp/slots/next/next8.hh>
        #else
            #include PPMPF_VXPP_ARITY81()
            #include PPMPF_VXPP_ARITY82()
            #include PPMPF_VXPP_ARITY83()
            #include PPMPF_VXPP_ARITY84()
            #include PPMPF_VXPP_ARITY85()
            #include PPMPF_VXPP_ARITY86()
            #include PPMPF_VXPP_ARITY87()
            #include PPMPF_VXPP_ARITY88()
            #include PPMPF_VXPP_ARITY89()
            #ifdef PPMPF_VXPP_SLOT8
                #include PPMPF_VXPP_SLOT8()
            #elif defined(PPMPF_VXPP_FUNC8)
PPMPF_VXPP_FUNC8()
            #endif
            #include <clause/ppmpf/vxpp/slots/next/next8.hh>
            #include <clause/ppmpf/vxpp/slots/next/loop/loop8.hh>
        #endif
    #else
        #define _PPMPF_VXPP_BASE8_
    #endif
#endif
