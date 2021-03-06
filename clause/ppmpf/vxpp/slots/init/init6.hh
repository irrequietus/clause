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

#undef  PPMPF_VXPP_S6D4
#undef  PPMPF_VXPP_S6D3
#undef  PPMPF_VXPP_S6D2
#undef  PPMPF_VXPP_S6D1
#undef  PPMPF_VXPP_S6D0
#undef  PPMPF_VXPP_I6D4
#undef  PPMPF_VXPP_I6D3
#undef  PPMPF_VXPP_I6D2
#undef  PPMPF_VXPP_I6D1
#undef  PPMPF_VXPP_I6D0
#undef  PPMPF_VXPP_T6D4
#undef  PPMPF_VXPP_T6D3
#undef  PPMPF_VXPP_T6D2
#undef  PPMPF_VXPP_T6D1
#undef  PPMPF_VXPP_T6D0

/*~ @ctip Extracting left endpoint and current item of iteration interval. */

#if   (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 0
    #define PPMPF_VXPP_S6D4 0
    #define PPMPF_VXPP_I6D4 0
#elif (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 1
    #define PPMPF_VXPP_S6D4 1
    #define PPMPF_VXPP_I6D4 1
#elif (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 2
    #define PPMPF_VXPP_S6D4 2
    #define PPMPF_VXPP_I6D4 2
#elif (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 3
    #define PPMPF_VXPP_S6D4 3
    #define PPMPF_VXPP_I6D4 3
#elif (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 4
    #define PPMPF_VXPP_S6D4 4
    #define PPMPF_VXPP_I6D4 4
#elif (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 5
    #define PPMPF_VXPP_S6D4 5
    #define PPMPF_VXPP_I6D4 5
#elif (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 6
    #define PPMPF_VXPP_S6D4 6
    #define PPMPF_VXPP_I6D4 6
#elif (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 7
    #define PPMPF_VXPP_S6D4 7
    #define PPMPF_VXPP_I6D4 7
#elif (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 8
    #define PPMPF_VXPP_S6D4 8
    #define PPMPF_VXPP_I6D4 8
#elif (PPMPF_VXPP_ENDL(6) / 10000) % 10 == 9
    #define PPMPF_VXPP_S6D4 9
    #define PPMPF_VXPP_I6D4 9
#endif

#if   (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 0
    #define PPMPF_VXPP_S6D3 0
    #define PPMPF_VXPP_I6D3 0
#elif (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 1
    #define PPMPF_VXPP_S6D3 1
    #define PPMPF_VXPP_I6D3 1
#elif (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 2
    #define PPMPF_VXPP_S6D3 2
    #define PPMPF_VXPP_I6D3 2
#elif (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 3
    #define PPMPF_VXPP_S6D3 3
    #define PPMPF_VXPP_I6D3 3
#elif (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 4
    #define PPMPF_VXPP_S6D3 4
    #define PPMPF_VXPP_I6D3 4
#elif (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 5
    #define PPMPF_VXPP_S6D3 5
    #define PPMPF_VXPP_I6D3 5
#elif (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 6
    #define PPMPF_VXPP_S6D3 6
    #define PPMPF_VXPP_I6D3 6
#elif (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 7
    #define PPMPF_VXPP_S6D3 7
    #define PPMPF_VXPP_I6D3 7
#elif (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 8
    #define PPMPF_VXPP_S6D3 8
    #define PPMPF_VXPP_I6D3 8
#elif (PPMPF_VXPP_ENDL(6) / 1000) % 10 == 9
    #define PPMPF_VXPP_S6D3 9
    #define PPMPF_VXPP_I6D3 9
#endif

#if   (PPMPF_VXPP_ENDL(6) / 100) % 10 == 0
    #define PPMPF_VXPP_S6D2 0
    #define PPMPF_VXPP_I6D2 0
#elif (PPMPF_VXPP_ENDL(6) / 100) % 10 == 1
    #define PPMPF_VXPP_S6D2 1
    #define PPMPF_VXPP_I6D2 1
#elif (PPMPF_VXPP_ENDL(6) / 100) % 10 == 2
    #define PPMPF_VXPP_S6D2 2
    #define PPMPF_VXPP_I6D2 2
#elif (PPMPF_VXPP_ENDL(6) / 100) % 10 == 3
    #define PPMPF_VXPP_S6D2 3
    #define PPMPF_VXPP_I6D2 3
#elif (PPMPF_VXPP_ENDL(6) / 100) % 10 == 4
    #define PPMPF_VXPP_S6D2 4
    #define PPMPF_VXPP_I6D2 4
#elif (PPMPF_VXPP_ENDL(6) / 100) % 10 == 5
    #define PPMPF_VXPP_S6D2 5
    #define PPMPF_VXPP_I6D2 5
#elif (PPMPF_VXPP_ENDL(6) / 100) % 10 == 6
    #define PPMPF_VXPP_S6D2 6
    #define PPMPF_VXPP_I6D2 6
#elif (PPMPF_VXPP_ENDL(6) / 100) % 10 == 7
    #define PPMPF_VXPP_S6D2 7
    #define PPMPF_VXPP_I6D2 7
#elif (PPMPF_VXPP_ENDL(6) / 100) % 10 == 8
    #define PPMPF_VXPP_S6D2 8
    #define PPMPF_VXPP_I6D2 8
#elif (PPMPF_VXPP_ENDL(6) / 100) % 10 == 9
    #define PPMPF_VXPP_S6D2 9
    #define PPMPF_VXPP_I6D2 9
#endif

#if   (PPMPF_VXPP_ENDL(6) / 10) % 10 == 0
    #define PPMPF_VXPP_S6D1 0
    #define PPMPF_VXPP_I6D1 0
#elif (PPMPF_VXPP_ENDL(6) / 10) % 10 == 1
    #define PPMPF_VXPP_S6D1 1
    #define PPMPF_VXPP_I6D1 1
#elif (PPMPF_VXPP_ENDL(6) / 10) % 10 == 2
    #define PPMPF_VXPP_S6D1 2
    #define PPMPF_VXPP_I6D1 2
#elif (PPMPF_VXPP_ENDL(6) / 10) % 10 == 3
    #define PPMPF_VXPP_S6D1 3
    #define PPMPF_VXPP_I6D1 3
#elif (PPMPF_VXPP_ENDL(6) / 10) % 10 == 4
    #define PPMPF_VXPP_S6D1 4
    #define PPMPF_VXPP_I6D1 4
#elif (PPMPF_VXPP_ENDL(6) / 10) % 10 == 5
    #define PPMPF_VXPP_S6D1 5
    #define PPMPF_VXPP_I6D1 5
#elif (PPMPF_VXPP_ENDL(6) / 10) % 10 == 6
    #define PPMPF_VXPP_S6D1 6
    #define PPMPF_VXPP_I6D1 6
#elif (PPMPF_VXPP_ENDL(6) / 10) % 10 == 7
    #define PPMPF_VXPP_S6D1 7
    #define PPMPF_VXPP_I6D1 7
#elif (PPMPF_VXPP_ENDL(6) / 10) % 10 == 8
    #define PPMPF_VXPP_S6D1 8
    #define PPMPF_VXPP_I6D1 8
#elif (PPMPF_VXPP_ENDL(6) / 10) % 10 == 9
    #define PPMPF_VXPP_S6D1 9
    #define PPMPF_VXPP_I6D1 9
#endif

#if   PPMPF_VXPP_ENDL(6) % 10 == 0
    #define PPMPF_VXPP_S6D0 0
    #define PPMPF_VXPP_I6D0 0
#elif PPMPF_VXPP_ENDL(6) % 10 == 1
    #define PPMPF_VXPP_S6D0 1
    #define PPMPF_VXPP_I6D0 1
#elif PPMPF_VXPP_ENDL(6) % 10 == 2
    #define PPMPF_VXPP_S6D0 2
    #define PPMPF_VXPP_I6D0 2
#elif PPMPF_VXPP_ENDL(6) % 10 == 3
    #define PPMPF_VXPP_S6D0 3
    #define PPMPF_VXPP_I6D0 3
#elif PPMPF_VXPP_ENDL(6) % 10 == 4
    #define PPMPF_VXPP_S6D0 4
    #define PPMPF_VXPP_I6D0 4
#elif PPMPF_VXPP_ENDL(6) % 10 == 5
    #define PPMPF_VXPP_S6D0 5
    #define PPMPF_VXPP_I6D0 5
#elif PPMPF_VXPP_ENDL(6) % 10 == 6
    #define PPMPF_VXPP_S6D0 6
    #define PPMPF_VXPP_I6D0 6
#elif PPMPF_VXPP_ENDL(6) % 10 == 7
    #define PPMPF_VXPP_S6D0 7
    #define PPMPF_VXPP_I6D0 7
#elif PPMPF_VXPP_ENDL(6) % 10 == 8
    #define PPMPF_VXPP_S6D0 8
    #define PPMPF_VXPP_I6D0 8
#elif PPMPF_VXPP_ENDL(6) % 10 == 9
    #define PPMPF_VXPP_S6D0 9
    #define PPMPF_VXPP_I6D0 9
#endif

/*~ @ctip Extracting right endpoint of the iteration interval. */

#if   (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 0
    #define PPMPF_VXPP_T6D4 0
#elif (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 1
    #define PPMPF_VXPP_T6D4 1
#elif (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 2
    #define PPMPF_VXPP_T6D4 2
#elif (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 3
    #define PPMPF_VXPP_T6D4 3
#elif (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 4
    #define PPMPF_VXPP_T6D4 4
#elif (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 5
    #define PPMPF_VXPP_T6D4 5
#elif (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 6
    #define PPMPF_VXPP_T6D4 6
#elif (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 7
    #define PPMPF_VXPP_T6D4 7
#elif (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 8
    #define PPMPF_VXPP_T6D4 8
#elif (PPMPF_VXPP_ENDR(6) / 10000) % 10 == 9
    #define PPMPF_VXPP_T6D4 9
#endif

#if   (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 0
    #define PPMPF_VXPP_T6D3 0
#elif (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 1
    #define PPMPF_VXPP_T6D3 1
#elif (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 2
    #define PPMPF_VXPP_T6D3 2
#elif (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 3
    #define PPMPF_VXPP_T6D3 3
#elif (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 4
    #define PPMPF_VXPP_T6D3 4
#elif (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 5
    #define PPMPF_VXPP_T6D3 5
#elif (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 6
    #define PPMPF_VXPP_T6D3 6
#elif (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 7
    #define PPMPF_VXPP_T6D3 7
#elif (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 8
    #define PPMPF_VXPP_T6D3 8
#elif (PPMPF_VXPP_ENDR(6) / 1000) % 10 == 9
    #define PPMPF_VXPP_T6D3 9
#endif

#if   (PPMPF_VXPP_ENDR(6) / 100) % 10 == 0
    #define PPMPF_VXPP_T6D2 0
#elif (PPMPF_VXPP_ENDR(6) / 100) % 10 == 1
    #define PPMPF_VXPP_T6D2 1
#elif (PPMPF_VXPP_ENDR(6) / 100) % 10 == 2
    #define PPMPF_VXPP_T6D2 2
#elif (PPMPF_VXPP_ENDR(6) / 100) % 10 == 3
    #define PPMPF_VXPP_T6D2 3
#elif (PPMPF_VXPP_ENDR(6) / 100) % 10 == 4
    #define PPMPF_VXPP_T6D2 4
#elif (PPMPF_VXPP_ENDR(6) / 100) % 10 == 5
    #define PPMPF_VXPP_T6D2 5
#elif (PPMPF_VXPP_ENDR(6) / 100) % 10 == 6
    #define PPMPF_VXPP_T6D2 6
#elif (PPMPF_VXPP_ENDR(6) / 100) % 10 == 7
    #define PPMPF_VXPP_T6D2 7
#elif (PPMPF_VXPP_ENDR(6) / 100) % 10 == 8
    #define PPMPF_VXPP_T6D2 8
#elif (PPMPF_VXPP_ENDR(6) / 100) % 10 == 9
    #define PPMPF_VXPP_T6D2 9
#endif

#if   (PPMPF_VXPP_ENDR(6) / 10) % 10 == 0
    #define PPMPF_VXPP_T6D1 0
#elif (PPMPF_VXPP_ENDR(6) / 10) % 10 == 1
    #define PPMPF_VXPP_T6D1 1
#elif (PPMPF_VXPP_ENDR(6) / 10) % 10 == 2
    #define PPMPF_VXPP_T6D1 2
#elif (PPMPF_VXPP_ENDR(6) / 10) % 10 == 3
    #define PPMPF_VXPP_T6D1 3
#elif (PPMPF_VXPP_ENDR(6) / 10) % 10 == 4
    #define PPMPF_VXPP_T6D1 4
#elif (PPMPF_VXPP_ENDR(6) / 10) % 10 == 5
    #define PPMPF_VXPP_T6D1 5
#elif (PPMPF_VXPP_ENDR(6) / 10) % 10 == 6
    #define PPMPF_VXPP_T6D1 6
#elif (PPMPF_VXPP_ENDR(6) / 10) % 10 == 7
    #define PPMPF_VXPP_T6D1 7
#elif (PPMPF_VXPP_ENDR(6) / 10) % 10 == 8
    #define PPMPF_VXPP_T6D1 8
#elif (PPMPF_VXPP_ENDR(6) / 10) % 10 == 9
    #define PPMPF_VXPP_T6D1 9
#endif

#if   PPMPF_VXPP_ENDR(6) % 10 == 0
    #define PPMPF_VXPP_T6D0 0
#elif PPMPF_VXPP_ENDR(6) % 10 == 1
    #define PPMPF_VXPP_T6D0 1
#elif PPMPF_VXPP_ENDR(6) % 10 == 2
    #define PPMPF_VXPP_T6D0 2
#elif PPMPF_VXPP_ENDR(6) % 10 == 3
    #define PPMPF_VXPP_T6D0 3
#elif PPMPF_VXPP_ENDR(6) % 10 == 4
    #define PPMPF_VXPP_T6D0 4
#elif PPMPF_VXPP_ENDR(6) % 10 == 5
    #define PPMPF_VXPP_T6D0 5
#elif PPMPF_VXPP_ENDR(6) % 10 == 6
    #define PPMPF_VXPP_T6D0 6
#elif PPMPF_VXPP_ENDR(6) % 10 == 7
    #define PPMPF_VXPP_T6D0 7
#elif PPMPF_VXPP_ENDR(6) % 10 == 8
    #define PPMPF_VXPP_T6D0 8
#elif PPMPF_VXPP_ENDR(6) % 10 == 9
    #define PPMPF_VXPP_T6D0 9
#endif

#undef PPMPF_VXPP_ENDR6
#undef PPMPF_VXPP_ENDL6

#define PPMPF_VXPP_ENDR6(n) \
        PPMPF_XFY( 0 \
                 , PPMPF_VXPP_T6D4 \
                 , PPMPF_VXPP_T6D3 \
                 , PPMPF_VXPP_T6D2 \
                 , PPMPF_VXPP_T6D1 \
                 , PPMPF_VXPP_T6D0 )

#define PPMPF_VXPP_ENDL6(n) \
        PPMPF_XFY( 0 \
                 , PPMPF_VXPP_S6D4 \
                 , PPMPF_VXPP_S6D3 \
                 , PPMPF_VXPP_S6D2 \
                 , PPMPF_VXPP_S6D1 \
                 , PPMPF_VXPP_S6D0 )
