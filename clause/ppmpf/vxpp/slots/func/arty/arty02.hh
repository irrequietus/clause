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

#undef  PPMPF_VXPP_S0F14
#undef  PPMPF_VXPP_S0F13
#undef  PPMPF_VXPP_S0F12
#undef  PPMPF_VXPP_S0F11
#undef  PPMPF_VXPP_S0F10

#if   (_PPMPF_FARG01() / 10000) % 10 == 0
    #define PPMPF_VXPP_S0F14 0
#elif (_PPMPF_FARG01() / 10000) % 10 == 1
    #define PPMPF_VXPP_S0F14 1
#elif (_PPMPF_FARG01() / 10000) % 10 == 2
    #define PPMPF_VXPP_S0F14 2
#elif (_PPMPF_FARG01() / 10000) % 10 == 3
    #define PPMPF_VXPP_S0F14 3
#elif (_PPMPF_FARG01() / 10000) % 10 == 4
    #define PPMPF_VXPP_S0F14 4
#elif (_PPMPF_FARG01() / 10000) % 10 == 5
    #define PPMPF_VXPP_S0F14 5
#elif (_PPMPF_FARG01() / 10000) % 10 == 6
    #define PPMPF_VXPP_S0F14 6
#elif (_PPMPF_FARG01() / 10000) % 10 == 7
    #define PPMPF_VXPP_S0F14 7
#elif (_PPMPF_FARG01() / 10000) % 10 == 8
    #define PPMPF_VXPP_S0F14 8
#elif (_PPMPF_FARG01() / 10000) % 10 == 9
    #define PPMPF_VXPP_S0F14 9
#endif

#if   (_PPMPF_FARG01() / 1000) % 10 == 0
    #define PPMPF_VXPP_S0F13 0
#elif (_PPMPF_FARG01() / 1000) % 10 == 1
    #define PPMPF_VXPP_S0F13 1
#elif (_PPMPF_FARG01() / 1000) % 10 == 2
    #define PPMPF_VXPP_S0F13 2
#elif (_PPMPF_FARG01() / 1000) % 10 == 3
    #define PPMPF_VXPP_S0F13 3
#elif (_PPMPF_FARG01() / 1000) % 10 == 4
    #define PPMPF_VXPP_S0F13 4
#elif (_PPMPF_FARG01() / 1000) % 10 == 5
    #define PPMPF_VXPP_S0F13 5
#elif (_PPMPF_FARG01() / 1000) % 10 == 6
    #define PPMPF_VXPP_S0F13 6
#elif (_PPMPF_FARG01() / 1000) % 10 == 7
    #define PPMPF_VXPP_S0F13 7
#elif (_PPMPF_FARG01() / 1000) % 10 == 8
    #define PPMPF_VXPP_S0F13 8
#elif (_PPMPF_FARG01() / 1000) % 10 == 9
    #define PPMPF_VXPP_S0F13 9
#endif

#if   (_PPMPF_FARG01() / 100) % 10 == 0
    #define PPMPF_VXPP_S0F12 0
#elif (_PPMPF_FARG01() / 100) % 10 == 1
    #define PPMPF_VXPP_S0F12 1
#elif (_PPMPF_FARG01() / 100) % 10 == 2
    #define PPMPF_VXPP_S0F12 2
#elif (_PPMPF_FARG01() / 100) % 10 == 3
    #define PPMPF_VXPP_S0F12 3
#elif (_PPMPF_FARG01() / 100) % 10 == 4
    #define PPMPF_VXPP_S0F12 4
#elif (_PPMPF_FARG01() / 100) % 10 == 5
    #define PPMPF_VXPP_S0F12 5
#elif (_PPMPF_FARG01() / 100) % 10 == 6
    #define PPMPF_VXPP_S0F12 6
#elif (_PPMPF_FARG01() / 100) % 10 == 7
    #define PPMPF_VXPP_S0F12 7
#elif (_PPMPF_FARG01() / 100) % 10 == 8
    #define PPMPF_VXPP_S0F12 8
#elif (_PPMPF_FARG01() / 100) % 10 == 9
    #define PPMPF_VXPP_S0F12 9
#endif

#if   (_PPMPF_FARG01() / 10) % 10 == 0
    #define PPMPF_VXPP_S0F11 0
#elif (_PPMPF_FARG01() / 10) % 10 == 1
    #define PPMPF_VXPP_S0F11 1
#elif (_PPMPF_FARG01() / 10) % 10 == 2
    #define PPMPF_VXPP_S0F11 2
#elif (_PPMPF_FARG01() / 10) % 10 == 3
    #define PPMPF_VXPP_S0F11 3
#elif (_PPMPF_FARG01() / 10) % 10 == 4
    #define PPMPF_VXPP_S0F11 4
#elif (_PPMPF_FARG01() / 10) % 10 == 5
    #define PPMPF_VXPP_S0F11 5
#elif (_PPMPF_FARG01() / 10) % 10 == 6
    #define PPMPF_VXPP_S0F11 6
#elif (_PPMPF_FARG01() / 10) % 10 == 7
    #define PPMPF_VXPP_S0F11 7
#elif (_PPMPF_FARG01() / 10) % 10 == 8
    #define PPMPF_VXPP_S0F11 8
#elif (_PPMPF_FARG01() / 10) % 10 == 9
    #define PPMPF_VXPP_S0F11 9
#endif

#if   _PPMPF_FARG01() % 10 == 0
    #define PPMPF_VXPP_S0F10 0
#elif _PPMPF_FARG01() % 10 == 1
    #define PPMPF_VXPP_S0F10 1
#elif _PPMPF_FARG01() % 10 == 2
    #define PPMPF_VXPP_S0F10 2
#elif _PPMPF_FARG01() % 10 == 3
    #define PPMPF_VXPP_S0F10 3
#elif _PPMPF_FARG01() % 10 == 4
    #define PPMPF_VXPP_S0F10 4
#elif _PPMPF_FARG01() % 10 == 5
    #define PPMPF_VXPP_S0F10 5
#elif _PPMPF_FARG01() % 10 == 6
    #define PPMPF_VXPP_S0F10 6
#elif _PPMPF_FARG01() % 10 == 7
    #define PPMPF_VXPP_S0F10 7
#elif _PPMPF_FARG01() % 10 == 8
    #define PPMPF_VXPP_S0F10 8
#elif _PPMPF_FARG01() % 10 == 9
    #define PPMPF_VXPP_S0F10 9
#endif
