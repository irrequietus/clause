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

#ifndef _CLAUSE_PPMPF_KERNEL_PFLD1_HH_
#define _CLAUSE_PPMPF_KERNEL_PFLD1_HH_

#include <clause/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0B0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0BZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0B1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0B2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0B3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0B4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0B5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0B6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0B7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0B8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0B9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0BA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0B9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0BB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0BA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0BC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0BB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0BD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0BC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0BE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0BD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0BF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0BE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1B0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1BZ)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1B1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B0)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1B2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B1)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1B3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B2)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1B4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B3)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1B5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B4)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1B6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B5)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1B7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B6)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1B8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B7)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1B9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B8)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1BA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1B9)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1BB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1BA)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1BC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1BB)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1BD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1BC)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1BE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1BD)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1BF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1BE)(f,PPMPF_R0BF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)

#define PPMPF_R2B0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2BZ)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2B1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B0)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2B2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B1)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2B3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B2)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2B4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B3)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2B5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B4)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2B6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B5)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2B7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B6)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2B8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B7)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2B9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B8)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2BA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2B9)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2BB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2BA)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2BC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2BB)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2BD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2BC)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2BE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2BD)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2BF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2BE)(f,PPMPF_R1BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3B0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3BZ)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3B1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B0)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3B2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B1)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3B3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B2)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3B4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B3)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3B5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B4)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3B6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B5)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3B7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B6)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3B8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B7)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3B9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B8)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3BA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3B9)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3BB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3BA)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3BC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3BB)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3BD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3BC)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3BE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3BD)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3BF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3BE)(f,PPMPF_R2BF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* _CLAUSE_PPMPF_KERNEL_PFLD1_HH_ */
