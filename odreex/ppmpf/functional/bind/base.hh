/* --
 * Copyright (C) 2014, George Makrydakis <irrequietus@gmail.com>
 *
 * This file is part of odreex.
 *
 * odreex is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * odreex is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * odreex. If not, see http://www.gnu.org/licenses/.
 *
 */

#ifndef _ODREEX_PPMPF_FUNCTIONAL_BIND_BASE_HH_
#define _ODREEX_PPMPF_FUNCTIONAL_BIND_BASE_HH_

#include <odreex/ppmpf/collections/tuple.hh>
#include <odreex/ppmpf/collections/sequence.hh>

#define PPMPF_BDA_(x) 1
#define PPMPF_BDB_(x) 0

#define PPMPF_BDA__1  0
#define PPMPF_BDA__2  0
#define PPMPF_BDA__3  0
#define PPMPF_BDA__4  0
#define PPMPF_BDA__5  0
#define PPMPF_BDA__6  0
#define PPMPF_BDA__7  0
#define PPMPF_BDA__8  0
#define PPMPF_BDA__9  0

#define PPMPF_BDA_1   0
#define PPMPF_BDA_2   0
#define PPMPF_BDA_3   0
#define PPMPF_BDA_4   0
#define PPMPF_BDA_5   0
#define PPMPF_BDA_6   0
#define PPMPF_BDA_7   0
#define PPMPF_BDA_8   0
#define PPMPF_BDA_9   0

#define PPMPF_BDB__1  1
#define PPMPF_BDB__2  1
#define PPMPF_BDB__3  1
#define PPMPF_BDB__4  1
#define PPMPF_BDB__5  1
#define PPMPF_BDB__6  1
#define PPMPF_BDB__7  1
#define PPMPF_BDB__8  1
#define PPMPF_BDB__9  1

#define PPMPF_BDB_1   1
#define PPMPF_BDB_2   1
#define PPMPF_BDB_3   1
#define PPMPF_BDB_4   1
#define PPMPF_BDB_5   1
#define PPMPF_BDB_6   1
#define PPMPF_BDB_7   1
#define PPMPF_BDB_8   1
#define PPMPF_BDB_9   1

#define PPMPF_BDC0(a,b) PPMPF_QTAT(0,a)
#define PPMPF_BDC1(a,b) PPMPF_QTAT(1,a)
#define PPMPF_BDC2(a,b) PPMPF_QTAT(2,a)
#define PPMPF_BDC3(a,b) PPMPF_QTAT(3,a)
#define PPMPF_BDC4(a,b) PPMPF_QTAT(4,a)
#define PPMPF_BDC5(a,b) PPMPF_QTAT(5,a)
#define PPMPF_BDC6(a,b) PPMPF_QTAT(6,a)
#define PPMPF_BDC7(a,b) PPMPF_QTAT(7,a)
#define PPMPF_BDC8(a,b) PPMPF_QTAT(8,a)
#define PPMPF_BDC9(a,b) PPMPF_QTAT(9,a)

#define PPMPF_BDR1(a,b) PPMPF_DPAR(PPMPF_QTAT(0,b))
#define PPMPF_BDR2(a,b) PPMPF_DPAR(PPMPF_QTAT(1,b))
#define PPMPF_BDR3(a,b) PPMPF_DPAR(PPMPF_QTAT(2,b))
#define PPMPF_BDR4(a,b) PPMPF_DPAR(PPMPF_QTAT(3,b))
#define PPMPF_BDR5(a,b) PPMPF_DPAR(PPMPF_QTAT(4,b))
#define PPMPF_BDR6(a,b) PPMPF_DPAR(PPMPF_QTAT(5,b))
#define PPMPF_BDR7(a,b) PPMPF_DPAR(PPMPF_QTAT(6,b))
#define PPMPF_BDR8(a,b) PPMPF_DPAR(PPMPF_QTAT(7,b))
#define PPMPF_BDR9(a,b) PPMPF_DPAR(PPMPF_QTAT(8,b))

#define PPMPF_BDJ1(a,b) PPMPF_QTAT(0,b)
#define PPMPF_BDJ2(a,b) PPMPF_QTAT(1,b)
#define PPMPF_BDJ3(a,b) PPMPF_QTAT(2,b)
#define PPMPF_BDJ4(a,b) PPMPF_QTAT(3,b)
#define PPMPF_BDJ5(a,b) PPMPF_QTAT(4,b)
#define PPMPF_BDJ6(a,b) PPMPF_QTAT(5,b)
#define PPMPF_BDJ7(a,b) PPMPF_QTAT(6,b)
#define PPMPF_BDJ8(a,b) PPMPF_QTAT(7,b)
#define PPMPF_BDJ9(a,b) PPMPF_QTAT(8,b)

#define PPMPF_BDX0()    (PPMPF_BDC0)
#define PPMPF_BDX1()    (PPMPF_BDC1)
#define PPMPF_BDX2()    (PPMPF_BDC2)
#define PPMPF_BDX3()    (PPMPF_BDC3)
#define PPMPF_BDX4()    (PPMPF_BDC4)
#define PPMPF_BDX5()    (PPMPF_BDC5)
#define PPMPF_BDX6()    (PPMPF_BDC6)
#define PPMPF_BDX7()    (PPMPF_BDC7)
#define PPMPF_BDX8()    (PPMPF_BDC8)
#define PPMPF_BDX9()    (PPMPF_BDC9)

#define PPMPF_BDX_0()   PPMPF_ENCLOSE
#define PPMPF_BDX_1()   (PPMPF_BDJ1)
#define PPMPF_BDX_2()   (PPMPF_BDJ2)
#define PPMPF_BDX_3()   (PPMPF_BDJ3)
#define PPMPF_BDX_4()   (PPMPF_BDJ4)
#define PPMPF_BDX_5()   (PPMPF_BDJ5)
#define PPMPF_BDX_6()   (PPMPF_BDJ6)
#define PPMPF_BDX_7()   (PPMPF_BDJ7)
#define PPMPF_BDX_8()   (PPMPF_BDJ8)
#define PPMPF_BDX_9()   (PPMPF_BDJ9)

#define PPMPF_BDX__0()  PPMPF_JUSX
#define PPMPF_BDX__1()  (PPMPF_BDR1)
#define PPMPF_BDX__2()  (PPMPF_BDR2)
#define PPMPF_BDX__3()  (PPMPF_BDR3)
#define PPMPF_BDX__4()  (PPMPF_BDR4)
#define PPMPF_BDX__5()  (PPMPF_BDR5)
#define PPMPF_BDX__6()  (PPMPF_BDR6)
#define PPMPF_BDX__7()  (PPMPF_BDR7)
#define PPMPF_BDX__8()  (PPMPF_BDR8)
#define PPMPF_BDX__9()  (PPMPF_BDR9)

#endif /* _ODREEX_PPMPF_FUNCTIONAL_BIND_BASE_HH_ */
