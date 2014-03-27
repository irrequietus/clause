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

#ifndef _ODREEX_PPMPF_KERNEL_PFLD2_HH_
#define _ODREEX_PPMPF_KERNEL_PFLD2_HH_

#include <odreex/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0C0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0CZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0C1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0C2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0C3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0C4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0C5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0C6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0C7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0C8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0C9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0CA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0C9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0CB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0CA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0CC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0CB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0CD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0CC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0CE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0CD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0CF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0CE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1C0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1CZ)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1C1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C0)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1C2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C1)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1C3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C2)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1C4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C3)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1C5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C4)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1C6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C5)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1C7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C6)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1C8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C7)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1C9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C8)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1CA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1C9)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1CB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1CA)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1CC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1CB)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1CD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1CC)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1CE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1CD)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1CF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1CE)(f,PPMPF_R0CF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)

#define PPMPF_R2C0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2CZ)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2C1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C0)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2C2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C1)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2C3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C2)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2C4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C3)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2C5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C4)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2C6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C5)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2C7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C6)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2C8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C7)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2C9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C8)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2CA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2C9)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2CB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2CA)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2CC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2CB)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2CD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2CC)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2CE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2CD)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2CF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2CE)(f,PPMPF_R1CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3C0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3CZ)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3C1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C0)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3C2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C1)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3C3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C2)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3C4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C3)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3C5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C4)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3C6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C5)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3C7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C6)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3C8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C7)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3C9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C8)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3CA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3C9)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3CB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3CA)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3CC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3CB)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3CD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3CC)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3CE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3CD)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3CF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3CE)(f,PPMPF_R2CF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* _ODREEX_PPMPF_KERNEL_PFLD2_HH_ */
