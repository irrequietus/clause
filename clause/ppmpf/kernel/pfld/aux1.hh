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

#ifndef CLAUSE_PPMPF_KERNEL_PFLD_AUX1_HH
#define CLAUSE_PPMPF_KERNEL_PFLD_AUX1_HH

#include <clause/ppmpf/kernel/cpro/limits.hh>
#include <clause/ppmpf/kernel/pfld/aux0.hh>

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

#endif /* CLAUSE_PPMPF_KERNEL_PFLD_AUX1_HH */
