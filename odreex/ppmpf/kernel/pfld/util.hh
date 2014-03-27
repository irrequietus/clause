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

#ifndef _ODREEX_PPMPF_KERNEL_PFLD_UTIL_HH_
#define _ODREEX_PPMPF_KERNEL_PFLD_UTIL_HH_

/*~
 * @mark `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld1.hh
 * @pfrg f:
 * @pfrg sl:
 * @pfrg g:
 * @pfrg p:
 * @pfrg h:
 * @pfrg i:
 * @pfrg m:
 * @pfrg j:
 */
#define PPMPF_R0AZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1AZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2AZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3AZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @mark `PPMPF_R0BZ`
 * @inhr `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld1.hh
 * 
 */
#define PPMPF_R0BZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1BZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2BZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3BZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @mark `PPMPF_R0CZ`
 * @inhr `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld2.hh
 */
#define PPMPF_R0CZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1CZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2CZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3CZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @mark `PPMPF_R0DZ`
 * @inhr `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld3.hh
 */
#define PPMPF_R0DZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1DZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2DZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3DZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @mark `PPMPF_R0EZ`
 * @inhr `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld4.hh
 */
#define PPMPF_R0EZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1EZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2EZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3EZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @mark `PPMPF_R0FZ`
 * @inhr `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld5.hh
 */
#define PPMPF_R0FZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1FZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2FZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3FZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @mark `PPMPF_R0GZ`
 * @inhr `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld6.hh
 */
#define PPMPF_R0GZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1GZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2GZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3GZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @mark `PPMPF_R0HZ`
 * @inhr `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld7.hh
 */
#define PPMPF_R0HZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1HZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2HZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3HZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @mark `PPMPF_R0IZ`
 * @inhr `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld8.hh
 */
#define PPMPF_R0IZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1IZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2IZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3IZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @mark `PPMPF_R0JZ`
 * @inhr `PPMPF_R0AZ`
 * @desc Recursive expansion termination clause for pfld9.hh
 */
#define PPMPF_R0JZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R1JZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R2JZ(f,sl,g,p,h,i,m,j,...) sl
#define PPMPF_R3JZ(f,sl,g,p,h,i,m,j,...) sl

/*~
 * @info A collection of utilities that are alternatives to `PPMPF_JUST`,
 *       `PPMPF_DREF` and `PPMPF_SEQ_GET` function macros, but are meant for
 *       use by the recursive emulators alone.
 * 
 */
#define PPMPF_XPJ(...) __VA_ARGS__
#define PPMPF_XPR_(...) PPMPF_XPJ __VA_ARGS__
#define PPMPF_XPR(x)    PPMPF_XPR_(x)

#endif /* _ODREEX_PPMPF_KERNEL_PFLD_UTIL_HH_ */
