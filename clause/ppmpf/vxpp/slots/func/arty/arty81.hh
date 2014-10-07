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

#undef  PPMPF_VXPP_S8F04
#undef  PPMPF_VXPP_S8F03
#undef  PPMPF_VXPP_S8F02
#undef  PPMPF_VXPP_S8F01
#undef  PPMPF_VXPP_S8F00

#if   (_PPMPF_FARG80() / 10000) % 10 == 0
    #define PPMPF_VXPP_S8F04 0
#elif (_PPMPF_FARG80() / 10000) % 10 == 1
    #define PPMPF_VXPP_S8F04 1
#elif (_PPMPF_FARG80() / 10000) % 10 == 2
    #define PPMPF_VXPP_S8F04 2
#elif (_PPMPF_FARG80() / 10000) % 10 == 3
    #define PPMPF_VXPP_S8F04 3
#elif (_PPMPF_FARG80() / 10000) % 10 == 4
    #define PPMPF_VXPP_S8F04 4
#elif (_PPMPF_FARG80() / 10000) % 10 == 5
    #define PPMPF_VXPP_S8F04 5
#elif (_PPMPF_FARG80() / 10000) % 10 == 6
    #define PPMPF_VXPP_S8F04 6
#elif (_PPMPF_FARG80() / 10000) % 10 == 7
    #define PPMPF_VXPP_S8F04 7
#elif (_PPMPF_FARG80() / 10000) % 10 == 8
    #define PPMPF_VXPP_S8F04 8
#elif (_PPMPF_FARG80() / 10000) % 10 == 9
    #define PPMPF_VXPP_S8F04 9
#endif

#if   (_PPMPF_FARG80() / 1000) % 10 == 0
    #define PPMPF_VXPP_S8F03 0
#elif (_PPMPF_FARG80() / 1000) % 10 == 1
    #define PPMPF_VXPP_S8F03 1
#elif (_PPMPF_FARG80() / 1000) % 10 == 2
    #define PPMPF_VXPP_S8F03 2
#elif (_PPMPF_FARG80() / 1000) % 10 == 3
    #define PPMPF_VXPP_S8F03 3
#elif (_PPMPF_FARG80() / 1000) % 10 == 4
    #define PPMPF_VXPP_S8F03 4
#elif (_PPMPF_FARG80() / 1000) % 10 == 5
    #define PPMPF_VXPP_S8F03 5
#elif (_PPMPF_FARG80() / 1000) % 10 == 6
    #define PPMPF_VXPP_S8F03 6
#elif (_PPMPF_FARG80() / 1000) % 10 == 7
    #define PPMPF_VXPP_S8F03 7
#elif (_PPMPF_FARG80() / 1000) % 10 == 8
    #define PPMPF_VXPP_S8F03 8
#elif (_PPMPF_FARG80() / 1000) % 10 == 9
    #define PPMPF_VXPP_S8F03 9
#endif

#if   (_PPMPF_FARG80() / 100) % 10 == 0
    #define PPMPF_VXPP_S8F02 0
#elif (_PPMPF_FARG80() / 100) % 10 == 1
    #define PPMPF_VXPP_S8F02 1
#elif (_PPMPF_FARG80() / 100) % 10 == 2
    #define PPMPF_VXPP_S8F02 2
#elif (_PPMPF_FARG80() / 100) % 10 == 3
    #define PPMPF_VXPP_S8F02 3
#elif (_PPMPF_FARG80() / 100) % 10 == 4
    #define PPMPF_VXPP_S8F02 4
#elif (_PPMPF_FARG80() / 100) % 10 == 5
    #define PPMPF_VXPP_S8F02 5
#elif (_PPMPF_FARG80() / 100) % 10 == 6
    #define PPMPF_VXPP_S8F02 6
#elif (_PPMPF_FARG80() / 100) % 10 == 7
    #define PPMPF_VXPP_S8F02 7
#elif (_PPMPF_FARG80() / 100) % 10 == 8
    #define PPMPF_VXPP_S8F02 8
#elif (_PPMPF_FARG80() / 100) % 10 == 9
    #define PPMPF_VXPP_S8F02 9
#endif

#if   (_PPMPF_FARG80() / 10) % 10 == 0
    #define PPMPF_VXPP_S8F01 0
#elif (_PPMPF_FARG80() / 10) % 10 == 1
    #define PPMPF_VXPP_S8F01 1
#elif (_PPMPF_FARG80() / 10) % 10 == 2
    #define PPMPF_VXPP_S8F01 2
#elif (_PPMPF_FARG80() / 10) % 10 == 3
    #define PPMPF_VXPP_S8F01 3
#elif (_PPMPF_FARG80() / 10) % 10 == 4
    #define PPMPF_VXPP_S8F01 4
#elif (_PPMPF_FARG80() / 10) % 10 == 5
    #define PPMPF_VXPP_S8F01 5
#elif (_PPMPF_FARG80() / 10) % 10 == 6
    #define PPMPF_VXPP_S8F01 6
#elif (_PPMPF_FARG80() / 10) % 10 == 7
    #define PPMPF_VXPP_S8F01 7
#elif (_PPMPF_FARG80() / 10) % 10 == 8
    #define PPMPF_VXPP_S8F01 8
#elif (_PPMPF_FARG80() / 10) % 10 == 9
    #define PPMPF_VXPP_S8F01 9
#endif

#if   _PPMPF_FARG80() % 10 == 0
    #define PPMPF_VXPP_S8F00 0
#elif _PPMPF_FARG80() % 10 == 1
    #define PPMPF_VXPP_S8F00 1
#elif _PPMPF_FARG80() % 10 == 2
    #define PPMPF_VXPP_S8F00 2
#elif _PPMPF_FARG80() % 10 == 3
    #define PPMPF_VXPP_S8F00 3
#elif _PPMPF_FARG80() % 10 == 4
    #define PPMPF_VXPP_S8F00 4
#elif _PPMPF_FARG80() % 10 == 5
    #define PPMPF_VXPP_S8F00 5
#elif _PPMPF_FARG80() % 10 == 6
    #define PPMPF_VXPP_S8F00 6
#elif _PPMPF_FARG80() % 10 == 7
    #define PPMPF_VXPP_S8F00 7
#elif _PPMPF_FARG80() % 10 == 8
    #define PPMPF_VXPP_S8F00 8
#elif _PPMPF_FARG80() % 10 == 9
    #define PPMPF_VXPP_S8F00 9
#endif
