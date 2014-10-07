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

#ifndef _CLAUSE_PPMPF_KERNEL_PFLD6_HH_
#define _CLAUSE_PPMPF_KERNEL_PFLD6_HH_

#include <clause/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0G0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0GZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0G1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0G2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0G3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0G4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0G5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0G6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0G7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0G8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0G9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0GA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0G9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0GB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0GA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0GC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0GB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0GD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0GC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0GE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0GD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0GF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0GE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1G0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1GZ)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1G1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G0)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1G2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G1)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1G3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G2)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1G4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G3)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1G5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G4)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1G6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G5)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1G7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G6)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1G8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G7)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1G9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G8)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1GA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1G9)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1GB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1GA)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1GC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1GB)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1GD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1GC)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1GE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1GD)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1GF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1GE)(f,PPMPF_R0GF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R2G0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2GZ)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R2G1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G0)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2G2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G1)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2G3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G2)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2G4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G3)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2G5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G4)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2G6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G5)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2G7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G6)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2G8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G7)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2G9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G8)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2GA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2G9)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2GB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2GA)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2GC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2GB)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2GD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2GC)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2GE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2GD)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2GF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2GE)(f,PPMPF_R1GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3G0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3GZ)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3G1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G0)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3G2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G1)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3G3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G2)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3G4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G3)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3G5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G4)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3G6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G5)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3G7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G6)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3G8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G7)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3G9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G8)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3GA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3G9)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3GB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3GA)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3GC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3GB)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3GD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3GC)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3GE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3GD)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3GF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3GE)(f,PPMPF_R2GF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* _CLAUSE_PPMPF_RKERNEL_PFLD6_HH_ */
