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

#ifndef _CLAUSE_PPMPF_KERNEL_PFLD_HH_
#define _CLAUSE_PPMPF_KERNEL_PFLD_HH_

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


#include <clause/ppmpf/kernel/pfld/aux1.hh>
#include <clause/ppmpf/kernel/pfld/pfld0.hh>
#include <clause/ppmpf/kernel/pfld/pfld1.hh>
#include <clause/ppmpf/kernel/pfld/pfld2.hh>
#include <clause/ppmpf/kernel/pfld/pfld3.hh>
#include <clause/ppmpf/kernel/pfld/pfld4.hh>
#include <clause/ppmpf/kernel/pfld/pfld5.hh>
#include <clause/ppmpf/kernel/pfld/pfld6.hh>
#include <clause/ppmpf/kernel/pfld/pfld7.hh>
#include <clause/ppmpf/kernel/pfld/pfld8.hh>
#include <clause/ppmpf/kernel/pfld/pfld9.hh>

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

#endif /* _CLAUSE_PPMPF_KERNEL_PFLD_HH_ */
