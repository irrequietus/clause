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

#ifndef _ODREEX_PPMPF_KERNEL_PFLD_AUX0_HH_
#define _ODREEX_PPMPF_KERNEL_PFLD_AUX0_HH_

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

#endif /* _ODREEX_PPMPF_KERNEL_PFLD_AUX0_HH_ */
