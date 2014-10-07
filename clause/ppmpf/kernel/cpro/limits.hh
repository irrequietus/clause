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

#ifndef _CLAUSE_PPMPF_KERNEL_CPRO_LIMITS_HH_
#define _CLAUSE_PPMPF_KERNEL_CPRO_LIMITS_HH_

/* 
 * NOTE: PPMPF_RDMAX is the default maximum to which the folding construct is
 *       defined to recursively expand to, while it defines PPMPF_RDMH* macros
 *       at the same time. PPMPF_RDMAX is undefined, then defined again as a
 *       function macro that upon invocation returns a ppmpf 4-sequence of the
 *       hexadecimal representation of the recursion depth. Numbers 10 - 15
 *       are used as the symbols A - F due to the eventuality of any of those
 *       having being used as quick and dirty macros that eagerly expand in
 *       end user code.
 */

#ifdef  PPMPF_RDMAX
#if     PPMPF_RDMAX > 65535
#warning  Requesting a PPMPF_RDMAX beyond 65536 is not supported.
#warning  Maximum depth failing back to 65535
#define PPMPF_RDMH4() 15
#define PPMPF_RDMH3() 15
#define PPMPF_RDMH2() 15
#define PPMPF_RDMH1() 15
#undef  PPMPF_RDMAX
#define PPMPF_RDMAX() \
        (PPMPF_RDMH4())(PPMPF_RDMH3())(PPMPF_RDMH2())(PPMPF_RDMH1())
#elif   PPMPF_RDMAX == 65535
#define PPMPF_RDMH4() 15
#define PPMPF_RDMH3() 15
#define PPMPF_RDMH2() 15
#define PPMPF_RDMH1() 15
#undef  PPMPF_RDMAX
#define PPMPF_RDMAX() \
        (PPMPF_RDMH4())(PPMPF_RDMH3())(PPMPF_RDMH2())(PPMPF_RDMH1())
#else
#if (PPMPF_RDMAX / 4096) % 16 == 0
#define PPMPF_RDMH4() 0
#elif   (PPMPF_RDMAX / 4096) % 16 == 1
#define PPMPF_RDMH4() 1
#elif   (PPMPF_RDMAX / 4096) % 16 == 2
#define PPMPF_RDMH4() 2
#elif   (PPMPF_RDMAX / 4096) % 16 == 3
#define PPMPF_RDMH4() 3
#elif   (PPMPF_RDMAX / 4096) % 16 == 4
#define PPMPF_RDMH4() 4
#elif   (PPMPF_RDMAX / 4096) % 16 == 5
#define PPMPF_RDMH4() 5
#elif   (PPMPF_RDMAX / 4096) % 16 == 6
#define PPMPF_RDMH4() 6
#elif   (PPMPF_RDMAX / 4096) % 16 == 7
#define PPMPF_RDMH4() 7
#elif   (PPMPF_RDMAX / 4096) % 16 == 8
#define PPMPF_RDMH4() 8
#elif   (PPMPF_RDMAX / 4096) % 16 == 9
#define PPMPF_RDMH4() 9
#elif   (PPMPF_RDMAX / 4096) % 16 == 10
#define PPMPF_RDMH4() 10
#elif   (PPMPF_RDMAX / 4096) % 16 == 11
#define PPMPF_RDMH4() 11
#elif   (PPMPF_RDMAX / 4096) % 16 == 12
#define PPMPF_RDMH4() 12
#elif   (PPMPF_RDMAX / 4096) % 16 == 13
#define PPMPF_RDMH4() 13
#elif   (PPMPF_RDMAX / 4096) % 16 == 14
#define PPMPF_RDMH4() 14
#elif   (PPMPF_RDMAX / 4096) % 16 == 15
#define PPMPF_RDMH4() 15
#endif
#if     (PPMPF_RDMAX / 256) % 16 == 0
#define PPMPF_RDMH3() 0
#elif   (PPMPF_RDMAX / 256) % 16 == 1
#define PPMPF_RDMH3() 1
#elif   (PPMPF_RDMAX / 256) % 16 == 2
#define PPMPF_RDMH3() 2
#elif   (PPMPF_RDMAX / 256) % 16 == 3
#define PPMPF_RDMH3() 3
#elif   (PPMPF_RDMAX / 256) % 16 == 4
#define PPMPF_RDMH3() 4
#elif   (PPMPF_RDMAX / 256) % 16 == 5
#define PPMPF_RDMH3() 5
#elif   (PPMPF_RDMAX / 256) % 16 == 6
#define PPMPF_RDMH3() 6
#elif   (PPMPF_RDMAX / 256) % 16 == 7
#define PPMPF_RDMH3() 7
#elif   (PPMPF_RDMAX / 256) % 16 == 8
#define PPMPF_RDMH3() 8
#elif   (PPMPF_RDMAX / 256) % 16 == 9
#define PPMPF_RDMH3() 9
#elif   (PPMPF_RDMAX / 256) % 16 == 10
#define PPMPF_RDMH3() 10
#elif   (PPMPF_RDMAX / 256) % 16 == 11
#define PPMPF_RDMH3() 11
#elif   (PPMPF_RDMAX / 256) % 16 == 12
#define PPMPF_RDMH3() 12
#elif   (PPMPF_RDMAX / 256) % 16 == 13
#define PPMPF_RDMH3() 13
#elif   (PPMPF_RDMAX / 256) % 16 == 14
#define PPMPF_RDMH3() 14
#elif   (PPMPF_RDMAX / 256) % 16 == 15
#define PPMPF_RDMH3() 15
#endif
#if     (PPMPF_RDMAX / 16) % 16 == 0
#define PPMPF_RDMH2() 0
#elif   (PPMPF_RDMAX / 16) % 16 == 1
#define PPMPF_RDMH2() 1
#elif   (PPMPF_RDMAX / 16) % 16 == 2
#define PPMPF_RDMH2() 2
#elif   (PPMPF_RDMAX / 16) % 16 == 3
#define PPMPF_RDMH2() 3
#elif   (PPMPF_RDMAX / 16) % 16 == 4
#define PPMPF_RDMH2() 4
#elif   (PPMPF_RDMAX / 16) % 16 == 5
#define PPMPF_RDMH2() 5
#elif   (PPMPF_RDMAX / 16) % 16 == 6
#define PPMPF_RDMH2() 6
#elif   (PPMPF_RDMAX / 16) % 16 == 7
#define PPMPF_RDMH2() 7
#elif   (PPMPF_RDMAX / 16) % 16 == 8
#define PPMPF_RDMH2() 8
#elif   (PPMPF_RDMAX / 16) % 16 == 9
#define PPMPF_RDMH2() 9
#elif   (PPMPF_RDMAX / 16) % 16 == 10
#define PPMPF_RDMH2() 10
#elif   (PPMPF_RDMAX / 16) % 16 == 11
#define PPMPF_RDMH2() 11
#elif   (PPMPF_RDMAX / 16) % 16 == 12
#define PPMPF_RDMH2() 12
#elif   (PPMPF_RDMAX / 16) % 16 == 13
#define PPMPF_RDMH2() 13
#elif   (PPMPF_RDMAX / 16) % 16 == 14
#define PPMPF_RDMH2() 14
#elif   (PPMPF_RDMAX / 16) % 16 == 15
#define PPMPF_RDMH2() 15
#endif
#if     PPMPF_RDMAX % 16 == 0
#define PPMPF_RDMH1() 0
#elif   PPMPF_RDMAX % 16 == 1
#define PPMPF_RDMH1() 1
#elif   PPMPF_RDMAX % 16 == 2
#define PPMPF_RDMH1() 2
#elif   PPMPF_RDMAX % 16 == 3
#define PPMPF_RDMH1() 3
#elif   PPMPF_RDMAX % 16 == 4
#define PPMPF_RDMH1() 4
#elif   PPMPF_RDMAX % 16 == 5
#define PPMPF_RDMH1() 5
#elif   PPMPF_RDMAX % 16 == 6
#define PPMPF_RDMH1() 6
#elif   PPMPF_RDMAX % 16 == 7
#define PPMPF_RDMH1() 7
#elif   PPMPF_RDMAX % 16 == 8
#define PPMPF_RDMH1() 8
#elif   PPMPF_RDMAX % 16 == 9
#define PPMPF_RDMH1() 9
#elif   PPMPF_RDMAX % 16 == 10
#define PPMPF_RDMH1() 10
#elif   PPMPF_RDMAX % 16 == 11
#define PPMPF_RDMH1() 11
#elif   PPMPF_RDMAX % 16 == 12
#define PPMPF_RDMH1() 12
#elif   PPMPF_RDMAX % 16 == 13
#define PPMPF_RDMH1() 13
#elif   PPMPF_RDMAX % 16 == 14
#define PPMPF_RDMH1() 14
#elif   PPMPF_RDMAX % 16 == 15
#define PPMPF_RDMH1() 15
#endif
#undef  PPMPF_RDMAX
#define PPMPF_RDMAX() \
        (PPMPF_RDMH4())(PPMPF_RDMH3())(PPMPF_RDMH2())(PPMPF_RDMH1())
#endif
#else
#define PPMPF_RDMH4() 15
#define PPMPF_RDMH3() 15
#define PPMPF_RDMH2() 15
#define PPMPF_RDMH1() 15
#define PPMPF_RDMAX() \
        (PPMPF_RDMH4())(PPMPF_RDMH3())(PPMPF_RDMH2())(PPMPF_RDMH1())
#endif

#define PPMPF_RDMX0(...) __VA_ARGS__##0
#define PPMPF_RDMX1(...) __VA_ARGS__##1
#define PPMPF_RDMX2(...) __VA_ARGS__##2
#define PPMPF_RDMX3(...) __VA_ARGS__##3
#define PPMPF_RDMX4(...) __VA_ARGS__##4
#define PPMPF_RDMX5(...) __VA_ARGS__##5
#define PPMPF_RDMX6(...) __VA_ARGS__##6
#define PPMPF_RDMX7(...) __VA_ARGS__##7
#define PPMPF_RDMX8(...) __VA_ARGS__##8
#define PPMPF_RDMX9(...) __VA_ARGS__##9
#define PPMPF_RDMX10(...) __VA_ARGS__##A
#define PPMPF_RDMX11(...) __VA_ARGS__##B
#define PPMPF_RDMX12(...) __VA_ARGS__##C
#define PPMPF_RDMX13(...) __VA_ARGS__##D
#define PPMPF_RDMX14(...) __VA_ARGS__##E
#define PPMPF_RDMX15(...) __VA_ARGS__##F

#define PPMPF_RDMX(x,n) \
        PPMPF_RDMX_(n,x)
#define PPMPF_RDMX__(x,n) \
        PPMPF_RDMX##n(x)
#define PPMPF_RDMX_(x,n) \
        PPMPF_RDMX__(n,x)


#endif /* _CLAUSE_PPMPF_KERNEL_CPRO_LIMITS_HH_ */
