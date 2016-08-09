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

#undef  PPMPF_VXPP_S2F54
#undef  PPMPF_VXPP_S2F53
#undef  PPMPF_VXPP_S2F52
#undef  PPMPF_VXPP_S2F51
#undef  PPMPF_VXPP_S2F50

#if   (_PPMPF_FARG25() / 10000) % 10 == 0
    #define PPMPF_VXPP_S2F54 0
#elif (_PPMPF_FARG25() / 10000) % 10 == 1
    #define PPMPF_VXPP_S2F54 1
#elif (_PPMPF_FARG25() / 10000) % 10 == 2
    #define PPMPF_VXPP_S2F54 2
#elif (_PPMPF_FARG25() / 10000) % 10 == 3
    #define PPMPF_VXPP_S2F54 3
#elif (_PPMPF_FARG25() / 10000) % 10 == 4
    #define PPMPF_VXPP_S2F54 4
#elif (_PPMPF_FARG25() / 10000) % 10 == 5
    #define PPMPF_VXPP_S2F54 5
#elif (_PPMPF_FARG25() / 10000) % 10 == 6
    #define PPMPF_VXPP_S2F54 6
#elif (_PPMPF_FARG25() / 10000) % 10 == 7
    #define PPMPF_VXPP_S2F54 7
#elif (_PPMPF_FARG25() / 10000) % 10 == 8
    #define PPMPF_VXPP_S2F54 8
#elif (_PPMPF_FARG25() / 10000) % 10 == 9
    #define PPMPF_VXPP_S2F54 9
#endif

#if   (_PPMPF_FARG25() / 1000) % 10 == 0
    #define PPMPF_VXPP_S2F53 0
#elif (_PPMPF_FARG25() / 1000) % 10 == 1
    #define PPMPF_VXPP_S2F53 1
#elif (_PPMPF_FARG25() / 1000) % 10 == 2
    #define PPMPF_VXPP_S2F53 2
#elif (_PPMPF_FARG25() / 1000) % 10 == 3
    #define PPMPF_VXPP_S2F53 3
#elif (_PPMPF_FARG25() / 1000) % 10 == 4
    #define PPMPF_VXPP_S2F53 4
#elif (_PPMPF_FARG25() / 1000) % 10 == 5
    #define PPMPF_VXPP_S2F53 5
#elif (_PPMPF_FARG25() / 1000) % 10 == 6
    #define PPMPF_VXPP_S2F53 6
#elif (_PPMPF_FARG25() / 1000) % 10 == 7
    #define PPMPF_VXPP_S2F53 7
#elif (_PPMPF_FARG25() / 1000) % 10 == 8
    #define PPMPF_VXPP_S2F53 8
#elif (_PPMPF_FARG25() / 1000) % 10 == 9
    #define PPMPF_VXPP_S2F53 9
#endif

#if   (_PPMPF_FARG25() / 100) % 10 == 0
    #define PPMPF_VXPP_S2F52 0
#elif (_PPMPF_FARG25() / 100) % 10 == 1
    #define PPMPF_VXPP_S2F52 1
#elif (_PPMPF_FARG25() / 100) % 10 == 2
    #define PPMPF_VXPP_S2F52 2
#elif (_PPMPF_FARG25() / 100) % 10 == 3
    #define PPMPF_VXPP_S2F52 3
#elif (_PPMPF_FARG25() / 100) % 10 == 4
    #define PPMPF_VXPP_S2F52 4
#elif (_PPMPF_FARG25() / 100) % 10 == 5
    #define PPMPF_VXPP_S2F52 5
#elif (_PPMPF_FARG25() / 100) % 10 == 6
    #define PPMPF_VXPP_S2F52 6
#elif (_PPMPF_FARG25() / 100) % 10 == 7
    #define PPMPF_VXPP_S2F52 7
#elif (_PPMPF_FARG25() / 100) % 10 == 8
    #define PPMPF_VXPP_S2F52 8
#elif (_PPMPF_FARG25() / 100) % 10 == 9
    #define PPMPF_VXPP_S2F52 9
#endif

#if   (_PPMPF_FARG25() / 10) % 10 == 0
    #define PPMPF_VXPP_S2F51 0
#elif (_PPMPF_FARG25() / 10) % 10 == 1
    #define PPMPF_VXPP_S2F51 1
#elif (_PPMPF_FARG25() / 10) % 10 == 2
    #define PPMPF_VXPP_S2F51 2
#elif (_PPMPF_FARG25() / 10) % 10 == 3
    #define PPMPF_VXPP_S2F51 3
#elif (_PPMPF_FARG25() / 10) % 10 == 4
    #define PPMPF_VXPP_S2F51 4
#elif (_PPMPF_FARG25() / 10) % 10 == 5
    #define PPMPF_VXPP_S2F51 5
#elif (_PPMPF_FARG25() / 10) % 10 == 6
    #define PPMPF_VXPP_S2F51 6
#elif (_PPMPF_FARG25() / 10) % 10 == 7
    #define PPMPF_VXPP_S2F51 7
#elif (_PPMPF_FARG25() / 10) % 10 == 8
    #define PPMPF_VXPP_S2F51 8
#elif (_PPMPF_FARG25() / 10) % 10 == 9
    #define PPMPF_VXPP_S2F51 9
#endif

#if   _PPMPF_FARG25() % 10 == 0
    #define PPMPF_VXPP_S2F50 0
#elif _PPMPF_FARG25() % 10 == 1
    #define PPMPF_VXPP_S2F50 1
#elif _PPMPF_FARG25() % 10 == 2
    #define PPMPF_VXPP_S2F50 2
#elif _PPMPF_FARG25() % 10 == 3
    #define PPMPF_VXPP_S2F50 3
#elif _PPMPF_FARG25() % 10 == 4
    #define PPMPF_VXPP_S2F50 4
#elif _PPMPF_FARG25() % 10 == 5
    #define PPMPF_VXPP_S2F50 5
#elif _PPMPF_FARG25() % 10 == 6
    #define PPMPF_VXPP_S2F50 6
#elif _PPMPF_FARG25() % 10 == 7
    #define PPMPF_VXPP_S2F50 7
#elif _PPMPF_FARG25() % 10 == 8
    #define PPMPF_VXPP_S2F50 8
#elif _PPMPF_FARG25() % 10 == 9
    #define PPMPF_VXPP_S2F50 9
#endif
