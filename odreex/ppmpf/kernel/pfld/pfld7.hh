/*
 * Copyright (C) 2013,2014 George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_PPMPF_KERNEL_PFLD7_HH_
#define _ODREEX_PPMPF_KERNEL_PFLD7_HH_

#include <odreex/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0H0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0HZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0H1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0H2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0H3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0H4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0H5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0H6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0H7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0H8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0H9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0HA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0H9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0HB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0HA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0HC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0HB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0HD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0HC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0HE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0HD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0HF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0HE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1H0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1HZ)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1H1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H0)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1H2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H1)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1H3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H2)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1H4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H3)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1H5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H4)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1H6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H5)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1H7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H6)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1H8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H7)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1H9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H8)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1HA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1H9)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1HB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1HA)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1HC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1HB)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1HD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1HC)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1HE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1HD)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1HF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1HE)(f,PPMPF_R0HF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)

#define PPMPF_R2H0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2HZ)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2H1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H0)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2H2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H1)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2H3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H2)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2H4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H3)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2H5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H4)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2H6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H5)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2H7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H6)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2H8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H7)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2H9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H8)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2HA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2H9)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2HB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2HA)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2HC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2HB)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2HD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2HC)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2HE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2HD)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2HF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2HE)(f,PPMPF_R1HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3H0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3HZ)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3H1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H0)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3H2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H1)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3H3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H2)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3H4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H3)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3H5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H4)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3H6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H5)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3H7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H6)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3H8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H7)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3H9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H8)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3HA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3H9)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3HB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3HA)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3HC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3HB)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3HD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3HC)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3HE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3HD)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3HF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3HE)(f,PPMPF_R2HF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* _ODREEX_PPMPF_KERNEL_PFLD7_HH_ */
