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
 *       constructs from 'clause'; it is part of a high level meta-macro
 *       construct where multiple #if directives control its actual inclusion.
 */

#undef  PPMPF_VXPP_S6F44
#undef  PPMPF_VXPP_S6F43
#undef  PPMPF_VXPP_S6F42
#undef  PPMPF_VXPP_S6F41
#undef  PPMPF_VXPP_S6F40

#if   (_PPMPF_FARG64() / 10000) % 10 == 0
    #define PPMPF_VXPP_S6F44 0
#elif (_PPMPF_FARG64() / 10000) % 10 == 1
    #define PPMPF_VXPP_S6F44 1
#elif (_PPMPF_FARG64() / 10000) % 10 == 2
    #define PPMPF_VXPP_S6F44 2
#elif (_PPMPF_FARG64() / 10000) % 10 == 3
    #define PPMPF_VXPP_S6F44 3
#elif (_PPMPF_FARG64() / 10000) % 10 == 4
    #define PPMPF_VXPP_S6F44 4
#elif (_PPMPF_FARG64() / 10000) % 10 == 5
    #define PPMPF_VXPP_S6F44 5
#elif (_PPMPF_FARG64() / 10000) % 10 == 6
    #define PPMPF_VXPP_S6F44 6
#elif (_PPMPF_FARG64() / 10000) % 10 == 7
    #define PPMPF_VXPP_S6F44 7
#elif (_PPMPF_FARG64() / 10000) % 10 == 8
    #define PPMPF_VXPP_S6F44 8
#elif (_PPMPF_FARG64() / 10000) % 10 == 9
    #define PPMPF_VXPP_S6F44 9
#endif

#if   (_PPMPF_FARG64() / 1000) % 10 == 0
    #define PPMPF_VXPP_S6F43 0
#elif (_PPMPF_FARG64() / 1000) % 10 == 1
    #define PPMPF_VXPP_S6F43 1
#elif (_PPMPF_FARG64() / 1000) % 10 == 2
    #define PPMPF_VXPP_S6F43 2
#elif (_PPMPF_FARG64() / 1000) % 10 == 3
    #define PPMPF_VXPP_S6F43 3
#elif (_PPMPF_FARG64() / 1000) % 10 == 4
    #define PPMPF_VXPP_S6F43 4
#elif (_PPMPF_FARG64() / 1000) % 10 == 5
    #define PPMPF_VXPP_S6F43 5
#elif (_PPMPF_FARG64() / 1000) % 10 == 6
    #define PPMPF_VXPP_S6F43 6
#elif (_PPMPF_FARG64() / 1000) % 10 == 7
    #define PPMPF_VXPP_S6F43 7
#elif (_PPMPF_FARG64() / 1000) % 10 == 8
    #define PPMPF_VXPP_S6F43 8
#elif (_PPMPF_FARG64() / 1000) % 10 == 9
    #define PPMPF_VXPP_S6F43 9
#endif

#if   (_PPMPF_FARG64() / 100) % 10 == 0
    #define PPMPF_VXPP_S6F42 0
#elif (_PPMPF_FARG64() / 100) % 10 == 1
    #define PPMPF_VXPP_S6F42 1
#elif (_PPMPF_FARG64() / 100) % 10 == 2
    #define PPMPF_VXPP_S6F42 2
#elif (_PPMPF_FARG64() / 100) % 10 == 3
    #define PPMPF_VXPP_S6F42 3
#elif (_PPMPF_FARG64() / 100) % 10 == 4
    #define PPMPF_VXPP_S6F42 4
#elif (_PPMPF_FARG64() / 100) % 10 == 5
    #define PPMPF_VXPP_S6F42 5
#elif (_PPMPF_FARG64() / 100) % 10 == 6
    #define PPMPF_VXPP_S6F42 6
#elif (_PPMPF_FARG64() / 100) % 10 == 7
    #define PPMPF_VXPP_S6F42 7
#elif (_PPMPF_FARG64() / 100) % 10 == 8
    #define PPMPF_VXPP_S6F42 8
#elif (_PPMPF_FARG64() / 100) % 10 == 9
    #define PPMPF_VXPP_S6F42 9
#endif

#if   (_PPMPF_FARG64() / 10) % 10 == 0
    #define PPMPF_VXPP_S6F41 0
#elif (_PPMPF_FARG64() / 10) % 10 == 1
    #define PPMPF_VXPP_S6F41 1
#elif (_PPMPF_FARG64() / 10) % 10 == 2
    #define PPMPF_VXPP_S6F41 2
#elif (_PPMPF_FARG64() / 10) % 10 == 3
    #define PPMPF_VXPP_S6F41 3
#elif (_PPMPF_FARG64() / 10) % 10 == 4
    #define PPMPF_VXPP_S6F41 4
#elif (_PPMPF_FARG64() / 10) % 10 == 5
    #define PPMPF_VXPP_S6F41 5
#elif (_PPMPF_FARG64() / 10) % 10 == 6
    #define PPMPF_VXPP_S6F41 6
#elif (_PPMPF_FARG64() / 10) % 10 == 7
    #define PPMPF_VXPP_S6F41 7
#elif (_PPMPF_FARG64() / 10) % 10 == 8
    #define PPMPF_VXPP_S6F41 8
#elif (_PPMPF_FARG64() / 10) % 10 == 9
    #define PPMPF_VXPP_S6F41 9
#endif

#if   _PPMPF_FARG64() % 10 == 0
    #define PPMPF_VXPP_S6F40 0
#elif _PPMPF_FARG64() % 10 == 1
    #define PPMPF_VXPP_S6F40 1
#elif _PPMPF_FARG64() % 10 == 2
    #define PPMPF_VXPP_S6F40 2
#elif _PPMPF_FARG64() % 10 == 3
    #define PPMPF_VXPP_S6F40 3
#elif _PPMPF_FARG64() % 10 == 4
    #define PPMPF_VXPP_S6F40 4
#elif _PPMPF_FARG64() % 10 == 5
    #define PPMPF_VXPP_S6F40 5
#elif _PPMPF_FARG64() % 10 == 6
    #define PPMPF_VXPP_S6F40 6
#elif _PPMPF_FARG64() % 10 == 7
    #define PPMPF_VXPP_S6F40 7
#elif _PPMPF_FARG64() % 10 == 8
    #define PPMPF_VXPP_S6F40 8
#elif _PPMPF_FARG64() % 10 == 9
    #define PPMPF_VXPP_S6F40 9
#endif
