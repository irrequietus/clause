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

#undef  PPMPF_VXPP_S4D4
#undef  PPMPF_VXPP_S4D3
#undef  PPMPF_VXPP_S4D2
#undef  PPMPF_VXPP_S4D1
#undef  PPMPF_VXPP_S4D0
#undef  PPMPF_VXPP_I4D4
#undef  PPMPF_VXPP_I4D3
#undef  PPMPF_VXPP_I4D2
#undef  PPMPF_VXPP_I4D1
#undef  PPMPF_VXPP_I4D0
#undef  PPMPF_VXPP_T4D4
#undef  PPMPF_VXPP_T4D3
#undef  PPMPF_VXPP_T4D2
#undef  PPMPF_VXPP_T4D1
#undef  PPMPF_VXPP_T4D0

/*~ @ctip Extracting left endpoint and current item of iteration interval. */

#if   (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 0
    #define PPMPF_VXPP_S4D4 0
    #define PPMPF_VXPP_I4D4 0
#elif (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 1
    #define PPMPF_VXPP_S4D4 1
    #define PPMPF_VXPP_I4D4 1
#elif (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 2
    #define PPMPF_VXPP_S4D4 2
    #define PPMPF_VXPP_I4D4 2
#elif (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 3
    #define PPMPF_VXPP_S4D4 3
    #define PPMPF_VXPP_I4D4 3
#elif (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 4
    #define PPMPF_VXPP_S4D4 4
    #define PPMPF_VXPP_I4D4 4
#elif (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 5
    #define PPMPF_VXPP_S4D4 5
    #define PPMPF_VXPP_I4D4 5
#elif (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 6
    #define PPMPF_VXPP_S4D4 6
    #define PPMPF_VXPP_I4D4 6
#elif (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 7
    #define PPMPF_VXPP_S4D4 7
    #define PPMPF_VXPP_I4D4 7
#elif (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 8
    #define PPMPF_VXPP_S4D4 8
    #define PPMPF_VXPP_I4D4 8
#elif (PPMPF_VXPP_ENDL(4) / 10000) % 10 == 9
    #define PPMPF_VXPP_S4D4 9
    #define PPMPF_VXPP_I4D4 9
#endif

#if   (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 0
    #define PPMPF_VXPP_S4D3 0
    #define PPMPF_VXPP_I4D3 0
#elif (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 1
    #define PPMPF_VXPP_S4D3 1
    #define PPMPF_VXPP_I4D3 1
#elif (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 2
    #define PPMPF_VXPP_S4D3 2
    #define PPMPF_VXPP_I4D3 2
#elif (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 3
    #define PPMPF_VXPP_S4D3 3
    #define PPMPF_VXPP_I4D3 3
#elif (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 4
    #define PPMPF_VXPP_S4D3 4
    #define PPMPF_VXPP_I4D3 4
#elif (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 5
    #define PPMPF_VXPP_S4D3 5
    #define PPMPF_VXPP_I4D3 5
#elif (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 6
    #define PPMPF_VXPP_S4D3 6
    #define PPMPF_VXPP_I4D3 6
#elif (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 7
    #define PPMPF_VXPP_S4D3 7
    #define PPMPF_VXPP_I4D3 7
#elif (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 8
    #define PPMPF_VXPP_S4D3 8
    #define PPMPF_VXPP_I4D3 8
#elif (PPMPF_VXPP_ENDL(4) / 1000) % 10 == 9
    #define PPMPF_VXPP_S4D3 9
    #define PPMPF_VXPP_I4D3 9
#endif

#if   (PPMPF_VXPP_ENDL(4) / 100) % 10 == 0
    #define PPMPF_VXPP_S4D2 0
    #define PPMPF_VXPP_I4D2 0
#elif (PPMPF_VXPP_ENDL(4) / 100) % 10 == 1
    #define PPMPF_VXPP_S4D2 1
    #define PPMPF_VXPP_I4D2 1
#elif (PPMPF_VXPP_ENDL(4) / 100) % 10 == 2
    #define PPMPF_VXPP_S4D2 2
    #define PPMPF_VXPP_I4D2 2
#elif (PPMPF_VXPP_ENDL(4) / 100) % 10 == 3
    #define PPMPF_VXPP_S4D2 3
    #define PPMPF_VXPP_I4D2 3
#elif (PPMPF_VXPP_ENDL(4) / 100) % 10 == 4
    #define PPMPF_VXPP_S4D2 4
    #define PPMPF_VXPP_I4D2 4
#elif (PPMPF_VXPP_ENDL(4) / 100) % 10 == 5
    #define PPMPF_VXPP_S4D2 5
    #define PPMPF_VXPP_I4D2 5
#elif (PPMPF_VXPP_ENDL(4) / 100) % 10 == 6
    #define PPMPF_VXPP_S4D2 6
    #define PPMPF_VXPP_I4D2 6
#elif (PPMPF_VXPP_ENDL(4) / 100) % 10 == 7
    #define PPMPF_VXPP_S4D2 7
    #define PPMPF_VXPP_I4D2 7
#elif (PPMPF_VXPP_ENDL(4) / 100) % 10 == 8
    #define PPMPF_VXPP_S4D2 8
    #define PPMPF_VXPP_I4D2 8
#elif (PPMPF_VXPP_ENDL(4) / 100) % 10 == 9
    #define PPMPF_VXPP_S4D2 9
    #define PPMPF_VXPP_I4D2 9
#endif

#if   (PPMPF_VXPP_ENDL(4) / 10) % 10 == 0
    #define PPMPF_VXPP_S4D1 0
    #define PPMPF_VXPP_I4D1 0
#elif (PPMPF_VXPP_ENDL(4) / 10) % 10 == 1
    #define PPMPF_VXPP_S4D1 1
    #define PPMPF_VXPP_I4D1 1
#elif (PPMPF_VXPP_ENDL(4) / 10) % 10 == 2
    #define PPMPF_VXPP_S4D1 2
    #define PPMPF_VXPP_I4D1 2
#elif (PPMPF_VXPP_ENDL(4) / 10) % 10 == 3
    #define PPMPF_VXPP_S4D1 3
    #define PPMPF_VXPP_I4D1 3
#elif (PPMPF_VXPP_ENDL(4) / 10) % 10 == 4
    #define PPMPF_VXPP_S4D1 4
    #define PPMPF_VXPP_I4D1 4
#elif (PPMPF_VXPP_ENDL(4) / 10) % 10 == 5
    #define PPMPF_VXPP_S4D1 5
    #define PPMPF_VXPP_I4D1 5
#elif (PPMPF_VXPP_ENDL(4) / 10) % 10 == 6
    #define PPMPF_VXPP_S4D1 6
    #define PPMPF_VXPP_I4D1 6
#elif (PPMPF_VXPP_ENDL(4) / 10) % 10 == 7
    #define PPMPF_VXPP_S4D1 7
    #define PPMPF_VXPP_I4D1 7
#elif (PPMPF_VXPP_ENDL(4) / 10) % 10 == 8
    #define PPMPF_VXPP_S4D1 8
    #define PPMPF_VXPP_I4D1 8
#elif (PPMPF_VXPP_ENDL(4) / 10) % 10 == 9
    #define PPMPF_VXPP_S4D1 9
    #define PPMPF_VXPP_I4D1 9
#endif

#if   PPMPF_VXPP_ENDL(4) % 10 == 0
    #define PPMPF_VXPP_S4D0 0
    #define PPMPF_VXPP_I4D0 0
#elif PPMPF_VXPP_ENDL(4) % 10 == 1
    #define PPMPF_VXPP_S4D0 1
    #define PPMPF_VXPP_I4D0 1
#elif PPMPF_VXPP_ENDL(4) % 10 == 2
    #define PPMPF_VXPP_S4D0 2
    #define PPMPF_VXPP_I4D0 2
#elif PPMPF_VXPP_ENDL(4) % 10 == 3
    #define PPMPF_VXPP_S4D0 3
    #define PPMPF_VXPP_I4D0 3
#elif PPMPF_VXPP_ENDL(4) % 10 == 4
    #define PPMPF_VXPP_S4D0 4
    #define PPMPF_VXPP_I4D0 4
#elif PPMPF_VXPP_ENDL(4) % 10 == 5
    #define PPMPF_VXPP_S4D0 5
    #define PPMPF_VXPP_I4D0 5
#elif PPMPF_VXPP_ENDL(4) % 10 == 6
    #define PPMPF_VXPP_S4D0 6
    #define PPMPF_VXPP_I4D0 6
#elif PPMPF_VXPP_ENDL(4) % 10 == 7
    #define PPMPF_VXPP_S4D0 7
    #define PPMPF_VXPP_I4D0 7
#elif PPMPF_VXPP_ENDL(4) % 10 == 8
    #define PPMPF_VXPP_S4D0 8
    #define PPMPF_VXPP_I4D0 8
#elif PPMPF_VXPP_ENDL(4) % 10 == 9
    #define PPMPF_VXPP_S4D0 9
    #define PPMPF_VXPP_I4D0 9
#endif

/*~ @ctip Extracting right endpoint of the iteration interval. */

#if   (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 0
    #define PPMPF_VXPP_T4D4 0
#elif (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 1
    #define PPMPF_VXPP_T4D4 1
#elif (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 2
    #define PPMPF_VXPP_T4D4 2
#elif (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 3
    #define PPMPF_VXPP_T4D4 3
#elif (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 4
    #define PPMPF_VXPP_T4D4 4
#elif (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 5
    #define PPMPF_VXPP_T4D4 5
#elif (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 6
    #define PPMPF_VXPP_T4D4 6
#elif (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 7
    #define PPMPF_VXPP_T4D4 7
#elif (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 8
    #define PPMPF_VXPP_T4D4 8
#elif (PPMPF_VXPP_ENDR(4) / 10000) % 10 == 9
    #define PPMPF_VXPP_T4D4 9
#endif

#if   (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 0
    #define PPMPF_VXPP_T4D3 0
#elif (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 1
    #define PPMPF_VXPP_T4D3 1
#elif (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 2
    #define PPMPF_VXPP_T4D3 2
#elif (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 3
    #define PPMPF_VXPP_T4D3 3
#elif (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 4
    #define PPMPF_VXPP_T4D3 4
#elif (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 5
    #define PPMPF_VXPP_T4D3 5
#elif (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 6
    #define PPMPF_VXPP_T4D3 6
#elif (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 7
    #define PPMPF_VXPP_T4D3 7
#elif (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 8
    #define PPMPF_VXPP_T4D3 8
#elif (PPMPF_VXPP_ENDR(4) / 1000) % 10 == 9
    #define PPMPF_VXPP_T4D3 9
#endif

#if   (PPMPF_VXPP_ENDR(4) / 100) % 10 == 0
    #define PPMPF_VXPP_T4D2 0
#elif (PPMPF_VXPP_ENDR(4) / 100) % 10 == 1
    #define PPMPF_VXPP_T4D2 1
#elif (PPMPF_VXPP_ENDR(4) / 100) % 10 == 2
    #define PPMPF_VXPP_T4D2 2
#elif (PPMPF_VXPP_ENDR(4) / 100) % 10 == 3
    #define PPMPF_VXPP_T4D2 3
#elif (PPMPF_VXPP_ENDR(4) / 100) % 10 == 4
    #define PPMPF_VXPP_T4D2 4
#elif (PPMPF_VXPP_ENDR(4) / 100) % 10 == 5
    #define PPMPF_VXPP_T4D2 5
#elif (PPMPF_VXPP_ENDR(4) / 100) % 10 == 6
    #define PPMPF_VXPP_T4D2 6
#elif (PPMPF_VXPP_ENDR(4) / 100) % 10 == 7
    #define PPMPF_VXPP_T4D2 7
#elif (PPMPF_VXPP_ENDR(4) / 100) % 10 == 8
    #define PPMPF_VXPP_T4D2 8
#elif (PPMPF_VXPP_ENDR(4) / 100) % 10 == 9
    #define PPMPF_VXPP_T4D2 9
#endif

#if   (PPMPF_VXPP_ENDR(4) / 10) % 10 == 0
    #define PPMPF_VXPP_T4D1 0
#elif (PPMPF_VXPP_ENDR(4) / 10) % 10 == 1
    #define PPMPF_VXPP_T4D1 1
#elif (PPMPF_VXPP_ENDR(4) / 10) % 10 == 2
    #define PPMPF_VXPP_T4D1 2
#elif (PPMPF_VXPP_ENDR(4) / 10) % 10 == 3
    #define PPMPF_VXPP_T4D1 3
#elif (PPMPF_VXPP_ENDR(4) / 10) % 10 == 4
    #define PPMPF_VXPP_T4D1 4
#elif (PPMPF_VXPP_ENDR(4) / 10) % 10 == 5
    #define PPMPF_VXPP_T4D1 5
#elif (PPMPF_VXPP_ENDR(4) / 10) % 10 == 6
    #define PPMPF_VXPP_T4D1 6
#elif (PPMPF_VXPP_ENDR(4) / 10) % 10 == 7
    #define PPMPF_VXPP_T4D1 7
#elif (PPMPF_VXPP_ENDR(4) / 10) % 10 == 8
    #define PPMPF_VXPP_T4D1 8
#elif (PPMPF_VXPP_ENDR(4) / 10) % 10 == 9
    #define PPMPF_VXPP_T4D1 9
#endif

#if   PPMPF_VXPP_ENDR(4) % 10 == 0
    #define PPMPF_VXPP_T4D0 0
#elif PPMPF_VXPP_ENDR(4) % 10 == 1
    #define PPMPF_VXPP_T4D0 1
#elif PPMPF_VXPP_ENDR(4) % 10 == 2
    #define PPMPF_VXPP_T4D0 2
#elif PPMPF_VXPP_ENDR(4) % 10 == 3
    #define PPMPF_VXPP_T4D0 3
#elif PPMPF_VXPP_ENDR(4) % 10 == 4
    #define PPMPF_VXPP_T4D0 4
#elif PPMPF_VXPP_ENDR(4) % 10 == 5
    #define PPMPF_VXPP_T4D0 5
#elif PPMPF_VXPP_ENDR(4) % 10 == 6
    #define PPMPF_VXPP_T4D0 6
#elif PPMPF_VXPP_ENDR(4) % 10 == 7
    #define PPMPF_VXPP_T4D0 7
#elif PPMPF_VXPP_ENDR(4) % 10 == 8
    #define PPMPF_VXPP_T4D0 8
#elif PPMPF_VXPP_ENDR(4) % 10 == 9
    #define PPMPF_VXPP_T4D0 9
#endif

#undef PPMPF_VXPP_ENDR4
#undef PPMPF_VXPP_ENDL4

#define PPMPF_VXPP_ENDR4(n) \
        PPMPF_XFY( 0 \
                 , PPMPF_VXPP_T4D4 \
                 , PPMPF_VXPP_T4D3 \
                 , PPMPF_VXPP_T4D2 \
                 , PPMPF_VXPP_T4D1 \
                 , PPMPF_VXPP_T4D0 )

#define PPMPF_VXPP_ENDL4(n) \
        PPMPF_XFY( 0 \
                 , PPMPF_VXPP_S4D4 \
                 , PPMPF_VXPP_S4D3 \
                 , PPMPF_VXPP_S4D2 \
                 , PPMPF_VXPP_S4D1 \
                 , PPMPF_VXPP_S4D0 )
