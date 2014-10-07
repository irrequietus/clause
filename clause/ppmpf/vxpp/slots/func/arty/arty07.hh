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

#undef  PPMPF_VXPP_S0F64
#undef  PPMPF_VXPP_S0F63
#undef  PPMPF_VXPP_S0F62
#undef  PPMPF_VXPP_S0F61
#undef  PPMPF_VXPP_S0F60

#if   (_PPMPF_FARG06() / 10000) % 10 == 0
    #define PPMPF_VXPP_S0F64 0
#elif (_PPMPF_FARG06() / 10000) % 10 == 1
    #define PPMPF_VXPP_S0F64 1
#elif (_PPMPF_FARG06() / 10000) % 10 == 2
    #define PPMPF_VXPP_S0F64 2
#elif (_PPMPF_FARG06() / 10000) % 10 == 3
    #define PPMPF_VXPP_S0F64 3
#elif (_PPMPF_FARG06() / 10000) % 10 == 4
    #define PPMPF_VXPP_S0F64 4
#elif (_PPMPF_FARG06() / 10000) % 10 == 5
    #define PPMPF_VXPP_S0F64 5
#elif (_PPMPF_FARG06() / 10000) % 10 == 6
    #define PPMPF_VXPP_S0F64 6
#elif (_PPMPF_FARG06() / 10000) % 10 == 7
    #define PPMPF_VXPP_S0F64 7
#elif (_PPMPF_FARG06() / 10000) % 10 == 8
    #define PPMPF_VXPP_S0F64 8
#elif (_PPMPF_FARG06() / 10000) % 10 == 9
    #define PPMPF_VXPP_S0F64 9
#endif

#if   (_PPMPF_FARG06() / 1000) % 10 == 0
    #define PPMPF_VXPP_S0F63 0
#elif (_PPMPF_FARG06() / 1000) % 10 == 1
    #define PPMPF_VXPP_S0F63 1
#elif (_PPMPF_FARG06() / 1000) % 10 == 2
    #define PPMPF_VXPP_S0F63 2
#elif (_PPMPF_FARG06() / 1000) % 10 == 3
    #define PPMPF_VXPP_S0F63 3
#elif (_PPMPF_FARG06() / 1000) % 10 == 4
    #define PPMPF_VXPP_S0F63 4
#elif (_PPMPF_FARG06() / 1000) % 10 == 5
    #define PPMPF_VXPP_S0F63 5
#elif (_PPMPF_FARG06() / 1000) % 10 == 6
    #define PPMPF_VXPP_S0F63 6
#elif (_PPMPF_FARG06() / 1000) % 10 == 7
    #define PPMPF_VXPP_S0F63 7
#elif (_PPMPF_FARG06() / 1000) % 10 == 8
    #define PPMPF_VXPP_S0F63 8
#elif (_PPMPF_FARG06() / 1000) % 10 == 9
    #define PPMPF_VXPP_S0F63 9
#endif

#if   (_PPMPF_FARG06() / 100) % 10 == 0
    #define PPMPF_VXPP_S0F62 0
#elif (_PPMPF_FARG06() / 100) % 10 == 1
    #define PPMPF_VXPP_S0F62 1
#elif (_PPMPF_FARG06() / 100) % 10 == 2
    #define PPMPF_VXPP_S0F62 2
#elif (_PPMPF_FARG06() / 100) % 10 == 3
    #define PPMPF_VXPP_S0F62 3
#elif (_PPMPF_FARG06() / 100) % 10 == 4
    #define PPMPF_VXPP_S0F62 4
#elif (_PPMPF_FARG06() / 100) % 10 == 5
    #define PPMPF_VXPP_S0F62 5
#elif (_PPMPF_FARG06() / 100) % 10 == 6
    #define PPMPF_VXPP_S0F62 6
#elif (_PPMPF_FARG06() / 100) % 10 == 7
    #define PPMPF_VXPP_S0F62 7
#elif (_PPMPF_FARG06() / 100) % 10 == 8
    #define PPMPF_VXPP_S0F62 8
#elif (_PPMPF_FARG06() / 100) % 10 == 9
    #define PPMPF_VXPP_S0F62 9
#endif

#if   (_PPMPF_FARG06() / 10) % 10 == 0
    #define PPMPF_VXPP_S0F61 0
#elif (_PPMPF_FARG06() / 10) % 10 == 1
    #define PPMPF_VXPP_S0F61 1
#elif (_PPMPF_FARG06() / 10) % 10 == 2
    #define PPMPF_VXPP_S0F61 2
#elif (_PPMPF_FARG06() / 10) % 10 == 3
    #define PPMPF_VXPP_S0F61 3
#elif (_PPMPF_FARG06() / 10) % 10 == 4
    #define PPMPF_VXPP_S0F61 4
#elif (_PPMPF_FARG06() / 10) % 10 == 5
    #define PPMPF_VXPP_S0F61 5
#elif (_PPMPF_FARG06() / 10) % 10 == 6
    #define PPMPF_VXPP_S0F61 6
#elif (_PPMPF_FARG06() / 10) % 10 == 7
    #define PPMPF_VXPP_S0F61 7
#elif (_PPMPF_FARG06() / 10) % 10 == 8
    #define PPMPF_VXPP_S0F61 8
#elif (_PPMPF_FARG06() / 10) % 10 == 9
    #define PPMPF_VXPP_S0F61 9
#endif

#if   _PPMPF_FARG06() % 10 == 0
    #define PPMPF_VXPP_S0F60 0
#elif _PPMPF_FARG06() % 10 == 1
    #define PPMPF_VXPP_S0F60 1
#elif _PPMPF_FARG06() % 10 == 2
    #define PPMPF_VXPP_S0F60 2
#elif _PPMPF_FARG06() % 10 == 3
    #define PPMPF_VXPP_S0F60 3
#elif _PPMPF_FARG06() % 10 == 4
    #define PPMPF_VXPP_S0F60 4
#elif _PPMPF_FARG06() % 10 == 5
    #define PPMPF_VXPP_S0F60 5
#elif _PPMPF_FARG06() % 10 == 6
    #define PPMPF_VXPP_S0F60 6
#elif _PPMPF_FARG06() % 10 == 7
    #define PPMPF_VXPP_S0F60 7
#elif _PPMPF_FARG06() % 10 == 8
    #define PPMPF_VXPP_S0F60 8
#elif _PPMPF_FARG06() % 10 == 9
    #define PPMPF_VXPP_S0F60 9
#endif
