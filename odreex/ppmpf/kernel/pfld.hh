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

#ifndef _ODREEX_PPMPF_KERNEL_PFLD_HH_
#define _ODREEX_PPMPF_KERNEL_PFLD_HH_

/*~
 * @info The problem with recursive expansion constructs emulating recursive
 *       invocation of macros is that they can often collide in deeply nested
 *       structures and multiple invocations in an expression tree. This is one
 *       of the reasons at least two different recursive expansion constructs
 *       for folding (i.e. PPMPF_3GF, PPMPF_3XF at the top layer of the 65K
 *       iteration depth construct).
 * 
 *       The introduction of the 2nd generation recursive expansion depth -
 *       optimized construct (G and X variants) was a minor but substantial
 *       improvement over the original one. A series of nine (9) similar
 *       constructs are now introduced in the `PPMPF_PFLD` family. These will
 *       be differentially used in different high order function emulations
 *       used in the algorithms throughout the ppmpf framework. The tenth
 *       construct (pfld0) is reserved for exclusive use by the binder macro
 *       emulator.
 * 
 *       Complessively, these constitute the 3rd generation recursive expansion
 *       construct, allowing more isolation between the macros deploying it.
 *       Another benefit is that they are paving the way for more efficient
 *       refactorings affecting total expansion time, asides already present
 *       depth related optimizations.
 */


#include <odreex/ppmpf/kernel/pfld/aux1.hh>
#include <odreex/ppmpf/kernel/pfld/pfld0.hh>
#include <odreex/ppmpf/kernel/pfld/pfld1.hh>
#include <odreex/ppmpf/kernel/pfld/pfld2.hh>
#include <odreex/ppmpf/kernel/pfld/pfld3.hh>
#include <odreex/ppmpf/kernel/pfld/pfld4.hh>
#include <odreex/ppmpf/kernel/pfld/pfld5.hh>
#include <odreex/ppmpf/kernel/pfld/pfld6.hh>
#include <odreex/ppmpf/kernel/pfld/pfld7.hh>
#include <odreex/ppmpf/kernel/pfld/pfld8.hh>
#include <odreex/ppmpf/kernel/pfld/pfld9.hh>

#define PPMPF_PFLD0(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD01(f,sl,g,p,h,i,m,j,__VA_ARGS__)))
#define PPMPF_PFLD1(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD11(f,sl,g,p,h,i,m,j,__VA_ARGS__)))
#define PPMPF_PFLD2(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD21(f,sl,g,p,h,i,m,j,__VA_ARGS__)))
#define PPMPF_PFLD3(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD31(f,sl,g,p,h,i,m,j,__VA_ARGS__)))
#define PPMPF_PFLD4(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD41(f,sl,g,p,h,i,m,j,__VA_ARGS__)))
#define PPMPF_PFLD5(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD51(f,sl,g,p,h,i,m,j,__VA_ARGS__)))
#define PPMPF_PFLD6(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD61(f,sl,g,p,h,i,m,j,__VA_ARGS__)))
#define PPMPF_PFLD7(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD71(f,sl,g,p,h,i,m,j,__VA_ARGS__)))
#define PPMPF_PFLD8(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD81(f,sl,g,p,h,i,m,j,__VA_ARGS__)))
#define PPMPF_PFLD9(f,sl,g,p,h,i,m,j,...) \
        PPMPF_DREF(PPMPF_SEQ_GET(PPMPF_PFLD91(f,sl,g,p,h,i,m,j,__VA_ARGS__)))

#endif /* _ODREEX_PPMPF_KERNEL_PFLD_HH_ */
