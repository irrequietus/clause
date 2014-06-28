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

#ifndef _CLAUSE_PPMPF_KERNEL_PFLD5_HH_
#define _CLAUSE_PPMPF_KERNEL_PFLD5_HH_

#include <clause/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0F0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0FZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0F1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0F2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0F3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0F4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0F5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0F6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0F7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0F8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0F9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0FA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0F9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0FB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0FA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0FC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0FB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0FD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0FC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0FE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0FD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0FF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0FE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1F0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1FZ)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1F1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F0)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1F2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F1)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1F3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F2)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1F4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F3)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1F5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F4)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1F6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F5)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1F7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F6)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1F8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F7)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1F9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F8)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1FA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1F9)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1FB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1FA)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1FC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1FB)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1FD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1FC)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1FE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1FD)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1FF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1FE)(f,PPMPF_R0FF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)

#define PPMPF_R2F0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2FZ)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2F1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F0)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2F2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F1)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2F3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F2)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2F4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F3)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2F5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F4)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2F6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F5)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2F7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F6)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2F8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F7)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2F9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F8)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2FA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2F9)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2FB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2FA)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2FC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2FB)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2FD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2FC)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2FE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2FD)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2FF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2FE)(f,PPMPF_R1FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3F0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3FZ)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3F1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F0)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3F2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F1)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3F3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F2)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3F4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F3)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3F5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F4)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3F6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F5)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3F7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F6)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3F8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F7)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3F9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F8)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3FA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3F9)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3FB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3FA)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3FC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3FB)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3FD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3FC)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3FE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3FD)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3FF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3FE)(f,PPMPF_R2FF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* _CLAUSE_PPMPF_KERNEL_PFLD5_HH_ */
