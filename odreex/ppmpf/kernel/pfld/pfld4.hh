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

#ifndef _ODREEX_PPMPF_KERNEL_PFLD4_HH_
#define _ODREEX_PPMPF_KERNEL_PFLD4_HH_

#include <odreex/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0E0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0EZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0E1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0E2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0E3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0E4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0E5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0E6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0E7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0E8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0E9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0EA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0E9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0EB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0EA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0EC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0EB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0ED(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0EC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0EE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0ED)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0EF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0EE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1E0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1EZ)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1E1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E0)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1E2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E1)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1E3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E2)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1E4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E3)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1E5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E4)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1E6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E5)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1E7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E6)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1E8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E7)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1E9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E8)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1EA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1E9)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1EB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1EA)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1EC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1EB)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1ED(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1EC)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1EE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1ED)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1EF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1EE)(f,PPMPF_R0EF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)

#define PPMPF_R2E0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2EZ)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2E1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E0)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2E2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E1)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2E3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E2)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2E4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E3)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2E5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E4)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2E6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E5)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2E7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E6)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2E8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E7)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2E9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E8)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2EA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2E9)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2EB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2EA)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2EC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2EB)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2ED(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2EC)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2EE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2ED)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2EF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2EE)(f,PPMPF_R1EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3E0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3EZ)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3E1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E0)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3E2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E1)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3E3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E2)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3E4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E3)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3E5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E4)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3E6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E5)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3E7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E6)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3E8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E7)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3E9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E8)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3EA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3E9)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3EB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3EA)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3EC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3EB)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3ED(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3EC)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3EE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3ED)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3EF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3EE)(f,PPMPF_R2EF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* _ODREAX_PPMPF_KERNEL_PFLD4_HH_ */
