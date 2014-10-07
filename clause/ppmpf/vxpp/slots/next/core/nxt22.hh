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

/*~
 * @warn This file should not be included directly in code deploying library
 *       constructs from 'clause'; it is part of preprocessor based recursive
 *       inclusions and it is limited by preprocessor-driven evaluation of
 *       constant expressions in '#if' directives. This is the reason it lacks
 *       header inclusion guards.
 */

#if defined(PPMPF_VXPP_I2D2)
    #if PPMPF_VXPP_I2D2 == 0
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 1
    #elif PPMPF_VXPP_I2D2 == 1
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 2
    #elif PPMPF_VXPP_I2D2 == 2
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 3
    #elif PPMPF_VXPP_I2D2 == 3
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 4
    #elif PPMPF_VXPP_I2D2 == 4
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 5
    #elif PPMPF_VXPP_I2D2 == 5
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 6
    #elif PPMPF_VXPP_I2D2 == 6
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 7
    #elif PPMPF_VXPP_I2D2 == 7
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 8
    #elif PPMPF_VXPP_I2D2 == 8
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 9
    #elif PPMPF_VXPP_I2D2 == 9
        #undef PPMPF_VXPP_I2D2
        #define PPMPF_VXPP_I2D2 0
        #define PPMPF_VXPP_I2CARRY
    #endif
#else
    #error "unexpected preprocessor error on PPMPF_VXPP_I2D2"
#endif
