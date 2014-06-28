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

#ifndef _CLAUSE_PPMPF_KERNEL_PFLD_AUX0_HH_
#define _CLAUSE_PPMPF_KERNEL_PFLD_AUX0_HH_

#define PPMPF_PFLD00(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_PFLD10(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_PFLD20(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_PFLD30(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_PFLD40(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_PFLD50(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_PFLD60(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_PFLD70(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_PFLD80(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#define PPMPF_PFLD90(f,sl,g,p,h,i,m,j,x0,x1,x2,x3,...) \
        x3( f, x2( f, x1( f, x0(f, sl, g, p, h, i, m, j, (__VA_ARGS__)) \
                        , g, p, h, i, m, j, (__VA_ARGS__)) \
                 , g, p, h, i, m , j, (__VA_ARGS__)) \
          , g, p, h, i, m, j, __VA_ARGS__)

#endif /* _CLAUSE_PPMPF_KERNEL_PFLD_AUX0_HH_ */
