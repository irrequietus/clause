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

#undef  PPMPF_VXPP_S1F14
#undef  PPMPF_VXPP_S1F13
#undef  PPMPF_VXPP_S1F12
#undef  PPMPF_VXPP_S1F11
#undef  PPMPF_VXPP_S1F10

#if   (_PPMPF_FARG11() / 10000) % 10 == 0
    #define PPMPF_VXPP_S1F14 0
#elif (_PPMPF_FARG11() / 10000) % 10 == 1
    #define PPMPF_VXPP_S1F14 1
#elif (_PPMPF_FARG11() / 10000) % 10 == 2
    #define PPMPF_VXPP_S1F14 2
#elif (_PPMPF_FARG11() / 10000) % 10 == 3
    #define PPMPF_VXPP_S1F14 3
#elif (_PPMPF_FARG11() / 10000) % 10 == 4
    #define PPMPF_VXPP_S1F14 4
#elif (_PPMPF_FARG11() / 10000) % 10 == 5
    #define PPMPF_VXPP_S1F14 5
#elif (_PPMPF_FARG11() / 10000) % 10 == 6
    #define PPMPF_VXPP_S1F14 6
#elif (_PPMPF_FARG11() / 10000) % 10 == 7
    #define PPMPF_VXPP_S1F14 7
#elif (_PPMPF_FARG11() / 10000) % 10 == 8
    #define PPMPF_VXPP_S1F14 8
#elif (_PPMPF_FARG11() / 10000) % 10 == 9
    #define PPMPF_VXPP_S1F14 9
#endif

#if   (_PPMPF_FARG11() / 1000) % 10 == 0
    #define PPMPF_VXPP_S1F13 0
#elif (_PPMPF_FARG11() / 1000) % 10 == 1
    #define PPMPF_VXPP_S1F13 1
#elif (_PPMPF_FARG11() / 1000) % 10 == 2
    #define PPMPF_VXPP_S1F13 2
#elif (_PPMPF_FARG11() / 1000) % 10 == 3
    #define PPMPF_VXPP_S1F13 3
#elif (_PPMPF_FARG11() / 1000) % 10 == 4
    #define PPMPF_VXPP_S1F13 4
#elif (_PPMPF_FARG11() / 1000) % 10 == 5
    #define PPMPF_VXPP_S1F13 5
#elif (_PPMPF_FARG11() / 1000) % 10 == 6
    #define PPMPF_VXPP_S1F13 6
#elif (_PPMPF_FARG11() / 1000) % 10 == 7
    #define PPMPF_VXPP_S1F13 7
#elif (_PPMPF_FARG11() / 1000) % 10 == 8
    #define PPMPF_VXPP_S1F13 8
#elif (_PPMPF_FARG11() / 1000) % 10 == 9
    #define PPMPF_VXPP_S1F13 9
#endif

#if   (_PPMPF_FARG11() / 100) % 10 == 0
    #define PPMPF_VXPP_S1F12 0
#elif (_PPMPF_FARG11() / 100) % 10 == 1
    #define PPMPF_VXPP_S1F12 1
#elif (_PPMPF_FARG11() / 100) % 10 == 2
    #define PPMPF_VXPP_S1F12 2
#elif (_PPMPF_FARG11() / 100) % 10 == 3
    #define PPMPF_VXPP_S1F12 3
#elif (_PPMPF_FARG11() / 100) % 10 == 4
    #define PPMPF_VXPP_S1F12 4
#elif (_PPMPF_FARG11() / 100) % 10 == 5
    #define PPMPF_VXPP_S1F12 5
#elif (_PPMPF_FARG11() / 100) % 10 == 6
    #define PPMPF_VXPP_S1F12 6
#elif (_PPMPF_FARG11() / 100) % 10 == 7
    #define PPMPF_VXPP_S1F12 7
#elif (_PPMPF_FARG11() / 100) % 10 == 8
    #define PPMPF_VXPP_S1F12 8
#elif (_PPMPF_FARG11() / 100) % 10 == 9
    #define PPMPF_VXPP_S1F12 9
#endif

#if   (_PPMPF_FARG11() / 10) % 10 == 0
    #define PPMPF_VXPP_S1F11 0
#elif (_PPMPF_FARG11() / 10) % 10 == 1
    #define PPMPF_VXPP_S1F11 1
#elif (_PPMPF_FARG11() / 10) % 10 == 2
    #define PPMPF_VXPP_S1F11 2
#elif (_PPMPF_FARG11() / 10) % 10 == 3
    #define PPMPF_VXPP_S1F11 3
#elif (_PPMPF_FARG11() / 10) % 10 == 4
    #define PPMPF_VXPP_S1F11 4
#elif (_PPMPF_FARG11() / 10) % 10 == 5
    #define PPMPF_VXPP_S1F11 5
#elif (_PPMPF_FARG11() / 10) % 10 == 6
    #define PPMPF_VXPP_S1F11 6
#elif (_PPMPF_FARG11() / 10) % 10 == 7
    #define PPMPF_VXPP_S1F11 7
#elif (_PPMPF_FARG11() / 10) % 10 == 8
    #define PPMPF_VXPP_S1F11 8
#elif (_PPMPF_FARG11() / 10) % 10 == 9
    #define PPMPF_VXPP_S1F11 9
#endif

#if   _PPMPF_FARG11() % 10 == 0
    #define PPMPF_VXPP_S1F10 0
#elif _PPMPF_FARG11() % 10 == 1
    #define PPMPF_VXPP_S1F10 1
#elif _PPMPF_FARG11() % 10 == 2
    #define PPMPF_VXPP_S1F10 2
#elif _PPMPF_FARG11() % 10 == 3
    #define PPMPF_VXPP_S1F10 3
#elif _PPMPF_FARG11() % 10 == 4
    #define PPMPF_VXPP_S1F10 4
#elif _PPMPF_FARG11() % 10 == 5
    #define PPMPF_VXPP_S1F10 5
#elif _PPMPF_FARG11() % 10 == 6
    #define PPMPF_VXPP_S1F10 6
#elif _PPMPF_FARG11() % 10 == 7
    #define PPMPF_VXPP_S1F10 7
#elif _PPMPF_FARG11() % 10 == 8
    #define PPMPF_VXPP_S1F10 8
#elif _PPMPF_FARG11() % 10 == 9
    #define PPMPF_VXPP_S1F10 9
#endif
