/* --
 * Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_PPMPF_FUNCTIONAL_RDFN_HH_
#define _ODREEX_PPMPF_FUNCTIONAL_RDFN_HH_

#include <odreex/ppmpf/ppfk.hh>

#define PPMPF_RDFN_1(p,f,b,c) \
        PPMPF_APPLY(p,f,PPMPF_DREF(b),)

#define PPMPF_RDFN_2(p,f,b,c) \
        PPMPF_APPLY(p,f,PPMPF_DREF(c),)

#define PPMPF_RFDN_3(p,...) \
        PPMPF_APPLY(p,__VA_ARGS__)

#define PPMPF_RDFN(p,f,b1,b2) \
        PPMPF_IFELSE( PPMPF_ISPRN(f) \
                    , PPMPF_RDFN_1 \
                    , PPMPF_RDFN_2 )(p,f,b1,b2)

#endif /* _ODREEX_PPMPF_FUNCTIONAL_RDFN_HH_ */
