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
 *       constructs from 'clause'; it is part of a high level meta-macro
 *       construct where multiple #if directives control its actual inclusion.
 */

#undef  PPMPF_VXPP_S0F84
#undef  PPMPF_VXPP_S0F83
#undef  PPMPF_VXPP_S0F82
#undef  PPMPF_VXPP_S0F81
#undef  PPMPF_VXPP_S0F80

#if   (_PPMPF_FARG08() / 10000) % 10 == 0
    #define PPMPF_VXPP_S0F84 0
#elif (_PPMPF_FARG08() / 10000) % 10 == 1
    #define PPMPF_VXPP_S0F84 1
#elif (_PPMPF_FARG08() / 10000) % 10 == 2
    #define PPMPF_VXPP_S0F84 2
#elif (_PPMPF_FARG08() / 10000) % 10 == 3
    #define PPMPF_VXPP_S0F84 3
#elif (_PPMPF_FARG08() / 10000) % 10 == 4
    #define PPMPF_VXPP_S0F84 4
#elif (_PPMPF_FARG08() / 10000) % 10 == 5
    #define PPMPF_VXPP_S0F84 5
#elif (_PPMPF_FARG08() / 10000) % 10 == 6
    #define PPMPF_VXPP_S0F84 6
#elif (_PPMPF_FARG08() / 10000) % 10 == 7
    #define PPMPF_VXPP_S0F84 7
#elif (_PPMPF_FARG08() / 10000) % 10 == 8
    #define PPMPF_VXPP_S0F84 8
#elif (_PPMPF_FARG08() / 10000) % 10 == 9
    #define PPMPF_VXPP_S0F84 9
#endif

#if   (_PPMPF_FARG08() / 1000) % 10 == 0
    #define PPMPF_VXPP_S0F83 0
#elif (_PPMPF_FARG08() / 1000) % 10 == 1
    #define PPMPF_VXPP_S0F83 1
#elif (_PPMPF_FARG08() / 1000) % 10 == 2
    #define PPMPF_VXPP_S0F83 2
#elif (_PPMPF_FARG08() / 1000) % 10 == 3
    #define PPMPF_VXPP_S0F83 3
#elif (_PPMPF_FARG08() / 1000) % 10 == 4
    #define PPMPF_VXPP_S0F83 4
#elif (_PPMPF_FARG08() / 1000) % 10 == 5
    #define PPMPF_VXPP_S0F83 5
#elif (_PPMPF_FARG08() / 1000) % 10 == 6
    #define PPMPF_VXPP_S0F83 6
#elif (_PPMPF_FARG08() / 1000) % 10 == 7
    #define PPMPF_VXPP_S0F83 7
#elif (_PPMPF_FARG08() / 1000) % 10 == 8
    #define PPMPF_VXPP_S0F83 8
#elif (_PPMPF_FARG08() / 1000) % 10 == 9
    #define PPMPF_VXPP_S0F83 9
#endif

#if   (_PPMPF_FARG08() / 100) % 10 == 0
    #define PPMPF_VXPP_S0F82 0
#elif (_PPMPF_FARG08() / 100) % 10 == 1
    #define PPMPF_VXPP_S0F82 1
#elif (_PPMPF_FARG08() / 100) % 10 == 2
    #define PPMPF_VXPP_S0F82 2
#elif (_PPMPF_FARG08() / 100) % 10 == 3
    #define PPMPF_VXPP_S0F82 3
#elif (_PPMPF_FARG08() / 100) % 10 == 4
    #define PPMPF_VXPP_S0F82 4
#elif (_PPMPF_FARG08() / 100) % 10 == 5
    #define PPMPF_VXPP_S0F82 5
#elif (_PPMPF_FARG08() / 100) % 10 == 6
    #define PPMPF_VXPP_S0F82 6
#elif (_PPMPF_FARG08() / 100) % 10 == 7
    #define PPMPF_VXPP_S0F82 7
#elif (_PPMPF_FARG08() / 100) % 10 == 8
    #define PPMPF_VXPP_S0F82 8
#elif (_PPMPF_FARG08() / 100) % 10 == 9
    #define PPMPF_VXPP_S0F82 9
#endif

#if   (_PPMPF_FARG08() / 10) % 10 == 0
    #define PPMPF_VXPP_S0F81 0
#elif (_PPMPF_FARG08() / 10) % 10 == 1
    #define PPMPF_VXPP_S0F81 1
#elif (_PPMPF_FARG08() / 10) % 10 == 2
    #define PPMPF_VXPP_S0F81 2
#elif (_PPMPF_FARG08() / 10) % 10 == 3
    #define PPMPF_VXPP_S0F81 3
#elif (_PPMPF_FARG08() / 10) % 10 == 4
    #define PPMPF_VXPP_S0F81 4
#elif (_PPMPF_FARG08() / 10) % 10 == 5
    #define PPMPF_VXPP_S0F81 5
#elif (_PPMPF_FARG08() / 10) % 10 == 6
    #define PPMPF_VXPP_S0F81 6
#elif (_PPMPF_FARG08() / 10) % 10 == 7
    #define PPMPF_VXPP_S0F81 7
#elif (_PPMPF_FARG08() / 10) % 10 == 8
    #define PPMPF_VXPP_S0F81 8
#elif (_PPMPF_FARG08() / 10) % 10 == 9
    #define PPMPF_VXPP_S0F81 9
#endif

#if   _PPMPF_FARG08() % 10 == 0
    #define PPMPF_VXPP_S0F80 0
#elif _PPMPF_FARG08() % 10 == 1
    #define PPMPF_VXPP_S0F80 1
#elif _PPMPF_FARG08() % 10 == 2
    #define PPMPF_VXPP_S0F80 2
#elif _PPMPF_FARG08() % 10 == 3
    #define PPMPF_VXPP_S0F80 3
#elif _PPMPF_FARG08() % 10 == 4
    #define PPMPF_VXPP_S0F80 4
#elif _PPMPF_FARG08() % 10 == 5
    #define PPMPF_VXPP_S0F80 5
#elif _PPMPF_FARG08() % 10 == 6
    #define PPMPF_VXPP_S0F80 6
#elif _PPMPF_FARG08() % 10 == 7
    #define PPMPF_VXPP_S0F80 7
#elif _PPMPF_FARG08() % 10 == 8
    #define PPMPF_VXPP_S0F80 8
#elif _PPMPF_FARG08() % 10 == 9
    #define PPMPF_VXPP_S0F80 9
#endif
