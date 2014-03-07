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

#ifndef _ODREEX_PPMPF_KERNEL_PFLD_AUX1_HH_
#define _ODREEX_PPMPF_KERNEL_PFLD_AUX1_HH_

#include <odreex/ppmpf/kernel/cpro/limits.hh>
#include <odreex/ppmpf/kernel/pfld/aux0.hh>

#define PPMPF_PFLD01(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD00( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3A,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2A,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1A,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0A,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#define PPMPF_PFLD11(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD10( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3B,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2B,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1B,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0B,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#define PPMPF_PFLD21(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD20( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3C,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2C,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1C,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0C,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#define PPMPF_PFLD31(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD30( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3D,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2D,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1D,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0D,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#define PPMPF_PFLD41(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD40( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3E,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2E,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1E,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0E,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#define PPMPF_PFLD51(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD50( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3F,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2F,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1F,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0F,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#define PPMPF_PFLD61(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD60( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3G,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2G,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1G,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0G,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#define PPMPF_PFLD71(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD70( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3H,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2H,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1H,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0H,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#define PPMPF_PFLD81(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD80( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3H,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2H,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1H,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0H,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#define PPMPF_PFLD91(f,sl,g,p,h,i,m,j,...) \
        PPMPF_PFLD90( f,sl,g,p,h,i,m,j \
                    , PPMPF_RDMX(PPMPF_R3H,PPMPF_RDMH4()) \
                    , PPMPF_RDMX(PPMPF_R2H,PPMPF_RDMH3()) \
                    , PPMPF_RDMX(PPMPF_R1H,PPMPF_RDMH2()) \
                    , PPMPF_RDMX(PPMPF_R0H,PPMPF_RDMH1()) \
                    , __VA_ARGS__ )

#endif /* _ODREEX_PPMPF_KERNEL_PFLD_AUX1_HH_ */
