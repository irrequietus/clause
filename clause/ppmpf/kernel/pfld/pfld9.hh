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

#ifndef CLAUSE_PPMPF_KERNEL_PFLD9_HH
#define CLAUSE_PPMPF_KERNEL_PFLD9_HH

#include <clause/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0J0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0JZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0J1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0J2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0J3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0J4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0J5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0J6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0J7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0J8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0J9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0JA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0J9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0JB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0JA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0JC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0JB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0JD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0JC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0JE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0JD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0JF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0JE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1J0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1JZ)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1J1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J0)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1J2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J1)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1J3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J2)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1J4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J3)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1J5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J4)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1J6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J5)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1J7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J6)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1J8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J7)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1J9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J8)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1JA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1J9)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1JB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1Ja)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1JC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1JB)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1JD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1JC)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1JE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1JD)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1JF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1JE)(f,PPMPF_R0JF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)

#define PPMPF_R2J0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2JZ)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2J1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J0)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2J2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J1)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2J3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J2)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2J4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J3)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2J5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J4)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2J6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J5)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2J7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J6)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2J8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J7)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2J9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J8)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2JA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2J9)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2JB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2JA)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2JC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2JB)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2JD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2JC)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2JE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2JD)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2JF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2JE)(f,PPMPF_R1JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3J0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3JZ)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3J1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J0)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3J2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J1)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3J3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J2)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3J4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J3)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3J5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J4)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3J6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J5)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3J7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J6)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3J8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J7)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3J9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J8)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3JA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3J9)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3JB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3JA)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3JC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3JB)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3JD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3JC)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3JE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3JD)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3JF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3JE)(f,PPMPF_R2JF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* CLAUSE_PPMPF_KERNEL_PFLD9_HH */
