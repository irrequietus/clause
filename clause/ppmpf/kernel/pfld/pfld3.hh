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

#ifndef _CLAUSE_PPMPF_KERNEL_PFLD3_HH_
#define _CLAUSE_PPMPF_KERNEL_PFLD3_HH_

#include <clause/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0D0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0DZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0D1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0D2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0D3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0D4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0D5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0D6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0D7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0D8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0D9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0DA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0D9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0DB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0DA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0DC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0DB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0DD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0DC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0DE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0DD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0DF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0DE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1D0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1DZ)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1D1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D0)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1D2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D1)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1D3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D2)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1D4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D3)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1D5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D4)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1D6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D5)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1D7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D6)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1D8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D7)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1D9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D8)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1DA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1D9)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1DB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1DA)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1DC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1DB)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1DD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1DC)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1DE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1DD)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1DF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1DE)(f,PPMPF_R0DF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)

#define PPMPF_R2D0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2DZ)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2D1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D0)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2D2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D1)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2D3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D2)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2D4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D3)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2D5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D4)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2D6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D5)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2D7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D6)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2D8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D7)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2D9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D8)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2DA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2D9)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2DB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2DA)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2DC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2DB)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2DD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2DC)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2DE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2DD)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2DF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2DE)(f,PPMPF_R1DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3D0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3DZ)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3D1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D0)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3D2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D1)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3D3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D2)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3D4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D3)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3D5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D4)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3D6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D5)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3D7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D6)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3D8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D7)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3D9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D8)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3DA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3D9)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3DB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3DA)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3DC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3DB)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3DD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3DC)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3DE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3DD)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3DF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3DE)(f,PPMPF_R2DF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* _CLAUSE_PPMPF_KERNEL_PFLD3_HH_ */
