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

#undef  PPMPF_VXPP_S8F34
#undef  PPMPF_VXPP_S8F33
#undef  PPMPF_VXPP_S8F32
#undef  PPMPF_VXPP_S8F31
#undef  PPMPF_VXPP_S8F30

#if   (_PPMPF_FARG83() / 10000) % 10 == 0
    #define PPMPF_VXPP_S8F34 0
#elif (_PPMPF_FARG83() / 10000) % 10 == 1
    #define PPMPF_VXPP_S8F34 1
#elif (_PPMPF_FARG83() / 10000) % 10 == 2
    #define PPMPF_VXPP_S8F34 2
#elif (_PPMPF_FARG83() / 10000) % 10 == 3
    #define PPMPF_VXPP_S8F34 3
#elif (_PPMPF_FARG83() / 10000) % 10 == 4
    #define PPMPF_VXPP_S8F34 4
#elif (_PPMPF_FARG83() / 10000) % 10 == 5
    #define PPMPF_VXPP_S8F34 5
#elif (_PPMPF_FARG83() / 10000) % 10 == 6
    #define PPMPF_VXPP_S8F34 6
#elif (_PPMPF_FARG83() / 10000) % 10 == 7
    #define PPMPF_VXPP_S8F34 7
#elif (_PPMPF_FARG83() / 10000) % 10 == 8
    #define PPMPF_VXPP_S8F34 8
#elif (_PPMPF_FARG83() / 10000) % 10 == 9
    #define PPMPF_VXPP_S8F34 9
#endif

#if   (_PPMPF_FARG83() / 1000) % 10 == 0
    #define PPMPF_VXPP_S8F33 0
#elif (_PPMPF_FARG83() / 1000) % 10 == 1
    #define PPMPF_VXPP_S8F33 1
#elif (_PPMPF_FARG83() / 1000) % 10 == 2
    #define PPMPF_VXPP_S8F33 2
#elif (_PPMPF_FARG83() / 1000) % 10 == 3
    #define PPMPF_VXPP_S8F33 3
#elif (_PPMPF_FARG83() / 1000) % 10 == 4
    #define PPMPF_VXPP_S8F33 4
#elif (_PPMPF_FARG83() / 1000) % 10 == 5
    #define PPMPF_VXPP_S8F33 5
#elif (_PPMPF_FARG83() / 1000) % 10 == 6
    #define PPMPF_VXPP_S8F33 6
#elif (_PPMPF_FARG83() / 1000) % 10 == 7
    #define PPMPF_VXPP_S8F33 7
#elif (_PPMPF_FARG83() / 1000) % 10 == 8
    #define PPMPF_VXPP_S8F33 8
#elif (_PPMPF_FARG83() / 1000) % 10 == 9
    #define PPMPF_VXPP_S8F33 9
#endif

#if   (_PPMPF_FARG83() / 100) % 10 == 0
    #define PPMPF_VXPP_S8F32 0
#elif (_PPMPF_FARG83() / 100) % 10 == 1
    #define PPMPF_VXPP_S8F32 1
#elif (_PPMPF_FARG83() / 100) % 10 == 2
    #define PPMPF_VXPP_S8F32 2
#elif (_PPMPF_FARG83() / 100) % 10 == 3
    #define PPMPF_VXPP_S8F32 3
#elif (_PPMPF_FARG83() / 100) % 10 == 4
    #define PPMPF_VXPP_S8F32 4
#elif (_PPMPF_FARG83() / 100) % 10 == 5
    #define PPMPF_VXPP_S8F32 5
#elif (_PPMPF_FARG83() / 100) % 10 == 6
    #define PPMPF_VXPP_S8F32 6
#elif (_PPMPF_FARG83() / 100) % 10 == 7
    #define PPMPF_VXPP_S8F32 7
#elif (_PPMPF_FARG83() / 100) % 10 == 8
    #define PPMPF_VXPP_S8F32 8
#elif (_PPMPF_FARG83() / 100) % 10 == 9
    #define PPMPF_VXPP_S8F32 9
#endif

#if   (_PPMPF_FARG83() / 10) % 10 == 0
    #define PPMPF_VXPP_S8F31 0
#elif (_PPMPF_FARG83() / 10) % 10 == 1
    #define PPMPF_VXPP_S8F31 1
#elif (_PPMPF_FARG83() / 10) % 10 == 2
    #define PPMPF_VXPP_S8F31 2
#elif (_PPMPF_FARG83() / 10) % 10 == 3
    #define PPMPF_VXPP_S8F31 3
#elif (_PPMPF_FARG83() / 10) % 10 == 4
    #define PPMPF_VXPP_S8F31 4
#elif (_PPMPF_FARG83() / 10) % 10 == 5
    #define PPMPF_VXPP_S8F31 5
#elif (_PPMPF_FARG83() / 10) % 10 == 6
    #define PPMPF_VXPP_S8F31 6
#elif (_PPMPF_FARG83() / 10) % 10 == 7
    #define PPMPF_VXPP_S8F31 7
#elif (_PPMPF_FARG83() / 10) % 10 == 8
    #define PPMPF_VXPP_S8F31 8
#elif (_PPMPF_FARG83() / 10) % 10 == 9
    #define PPMPF_VXPP_S8F31 9
#endif

#if   _PPMPF_FARG83() % 10 == 0
    #define PPMPF_VXPP_S8F30 0
#elif _PPMPF_FARG83() % 10 == 1
    #define PPMPF_VXPP_S8F30 1
#elif _PPMPF_FARG83() % 10 == 2
    #define PPMPF_VXPP_S8F30 2
#elif _PPMPF_FARG83() % 10 == 3
    #define PPMPF_VXPP_S8F30 3
#elif _PPMPF_FARG83() % 10 == 4
    #define PPMPF_VXPP_S8F30 4
#elif _PPMPF_FARG83() % 10 == 5
    #define PPMPF_VXPP_S8F30 5
#elif _PPMPF_FARG83() % 10 == 6
    #define PPMPF_VXPP_S8F30 6
#elif _PPMPF_FARG83() % 10 == 7
    #define PPMPF_VXPP_S8F30 7
#elif _PPMPF_FARG83() % 10 == 8
    #define PPMPF_VXPP_S8F30 8
#elif _PPMPF_FARG83() % 10 == 9
    #define PPMPF_VXPP_S8F30 9
#endif
