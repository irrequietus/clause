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
 *       constructs from 'clause'; it is part of a high level meta-macro
 *       construct where multiple #if directives control its actual inclusion.
 */

#undef  PPMPF_VXPP_S1F54
#undef  PPMPF_VXPP_S1F53
#undef  PPMPF_VXPP_S1F52
#undef  PPMPF_VXPP_S1F51
#undef  PPMPF_VXPP_S1F50

#if   (_PPMPF_FARG15() / 10000) % 10 == 0
    #define PPMPF_VXPP_S1F54 0
#elif (_PPMPF_FARG15() / 10000) % 10 == 1
    #define PPMPF_VXPP_S1F54 1
#elif (_PPMPF_FARG15() / 10000) % 10 == 2
    #define PPMPF_VXPP_S1F54 2
#elif (_PPMPF_FARG15() / 10000) % 10 == 3
    #define PPMPF_VXPP_S1F54 3
#elif (_PPMPF_FARG15() / 10000) % 10 == 4
    #define PPMPF_VXPP_S1F54 4
#elif (_PPMPF_FARG15() / 10000) % 10 == 5
    #define PPMPF_VXPP_S1F54 5
#elif (_PPMPF_FARG15() / 10000) % 10 == 6
    #define PPMPF_VXPP_S1F54 6
#elif (_PPMPF_FARG15() / 10000) % 10 == 7
    #define PPMPF_VXPP_S1F54 7
#elif (_PPMPF_FARG15() / 10000) % 10 == 8
    #define PPMPF_VXPP_S1F54 8
#elif (_PPMPF_FARG15() / 10000) % 10 == 9
    #define PPMPF_VXPP_S1F54 9
#endif

#if   (_PPMPF_FARG15() / 1000) % 10 == 0
    #define PPMPF_VXPP_S1F53 0
#elif (_PPMPF_FARG15() / 1000) % 10 == 1
    #define PPMPF_VXPP_S1F53 1
#elif (_PPMPF_FARG15() / 1000) % 10 == 2
    #define PPMPF_VXPP_S1F53 2
#elif (_PPMPF_FARG15() / 1000) % 10 == 3
    #define PPMPF_VXPP_S1F53 3
#elif (_PPMPF_FARG15() / 1000) % 10 == 4
    #define PPMPF_VXPP_S1F53 4
#elif (_PPMPF_FARG15() / 1000) % 10 == 5
    #define PPMPF_VXPP_S1F53 5
#elif (_PPMPF_FARG15() / 1000) % 10 == 6
    #define PPMPF_VXPP_S1F53 6
#elif (_PPMPF_FARG15() / 1000) % 10 == 7
    #define PPMPF_VXPP_S1F53 7
#elif (_PPMPF_FARG15() / 1000) % 10 == 8
    #define PPMPF_VXPP_S1F53 8
#elif (_PPMPF_FARG15() / 1000) % 10 == 9
    #define PPMPF_VXPP_S1F53 9
#endif

#if   (_PPMPF_FARG15() / 100) % 10 == 0
    #define PPMPF_VXPP_S1F52 0
#elif (_PPMPF_FARG15() / 100) % 10 == 1
    #define PPMPF_VXPP_S1F52 1
#elif (_PPMPF_FARG15() / 100) % 10 == 2
    #define PPMPF_VXPP_S1F52 2
#elif (_PPMPF_FARG15() / 100) % 10 == 3
    #define PPMPF_VXPP_S1F52 3
#elif (_PPMPF_FARG15() / 100) % 10 == 4
    #define PPMPF_VXPP_S1F52 4
#elif (_PPMPF_FARG15() / 100) % 10 == 5
    #define PPMPF_VXPP_S1F52 5
#elif (_PPMPF_FARG15() / 100) % 10 == 6
    #define PPMPF_VXPP_S1F52 6
#elif (_PPMPF_FARG15() / 100) % 10 == 7
    #define PPMPF_VXPP_S1F52 7
#elif (_PPMPF_FARG15() / 100) % 10 == 8
    #define PPMPF_VXPP_S1F52 8
#elif (_PPMPF_FARG15() / 100) % 10 == 9
    #define PPMPF_VXPP_S1F52 9
#endif

#if   (_PPMPF_FARG15() / 10) % 10 == 0
    #define PPMPF_VXPP_S1F51 0
#elif (_PPMPF_FARG15() / 10) % 10 == 1
    #define PPMPF_VXPP_S1F51 1
#elif (_PPMPF_FARG15() / 10) % 10 == 2
    #define PPMPF_VXPP_S1F51 2
#elif (_PPMPF_FARG15() / 10) % 10 == 3
    #define PPMPF_VXPP_S1F51 3
#elif (_PPMPF_FARG15() / 10) % 10 == 4
    #define PPMPF_VXPP_S1F51 4
#elif (_PPMPF_FARG15() / 10) % 10 == 5
    #define PPMPF_VXPP_S1F51 5
#elif (_PPMPF_FARG15() / 10) % 10 == 6
    #define PPMPF_VXPP_S1F51 6
#elif (_PPMPF_FARG15() / 10) % 10 == 7
    #define PPMPF_VXPP_S1F51 7
#elif (_PPMPF_FARG15() / 10) % 10 == 8
    #define PPMPF_VXPP_S1F51 8
#elif (_PPMPF_FARG15() / 10) % 10 == 9
    #define PPMPF_VXPP_S1F51 9
#endif

#if   _PPMPF_FARG15() % 10 == 0
    #define PPMPF_VXPP_S1F50 0
#elif _PPMPF_FARG15() % 10 == 1
    #define PPMPF_VXPP_S1F50 1
#elif _PPMPF_FARG15() % 10 == 2
    #define PPMPF_VXPP_S1F50 2
#elif _PPMPF_FARG15() % 10 == 3
    #define PPMPF_VXPP_S1F50 3
#elif _PPMPF_FARG15() % 10 == 4
    #define PPMPF_VXPP_S1F50 4
#elif _PPMPF_FARG15() % 10 == 5
    #define PPMPF_VXPP_S1F50 5
#elif _PPMPF_FARG15() % 10 == 6
    #define PPMPF_VXPP_S1F50 6
#elif _PPMPF_FARG15() % 10 == 7
    #define PPMPF_VXPP_S1F50 7
#elif _PPMPF_FARG15() % 10 == 8
    #define PPMPF_VXPP_S1F50 8
#elif _PPMPF_FARG15() % 10 == 9
    #define PPMPF_VXPP_S1F50 9
#endif
