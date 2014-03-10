/* --
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

#ifndef _ODREEX_PPMPF_COLLECTIONS_TUPLE_TYPE_HH_
#define _ODREEX_PPMPF_COLLECTIONS_TUPLE_TYPE_HH_

#ifndef _ODREEX_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH_
#error ppmpf: <odreex/ppmpf/collections/tuple/functions.hh> must precede.
#endif

/*~
 * @desc The unsafe ppmpf tuple collection constructor.
 * @pfrg ...: A sequence of comma separated C99 preprocessor tokens, with the
 *            condition that the last item (if special character sequence) is
 *            followed by the empty preprocessor token (i.e. just a comma after
 *            it, since the empty preprocessor comma  follows exactly after
 *            said comma).
 * @pexp Expands to a ppmpf typeclause with typeid 0.
 *
 */
#define PPMPF_UTUP(...) \
        ((__VA_ARGS__),0)

/*~
 * @desc The safe ppmpf tuple collection constructor.
 * @pfrg ...: A sequence of comma separated C99 preprocessor tokens, with the
 *            condition that the last item (if special character sequence) is
 *            followed by the empty preprocessor token (i.e. just a comma after
 *            it, since the empty preprocessor comma  follows exactly after
 *            said comma).
 * @pexp Expands to a ppmpf typeclause with typeid 1.
 */
#define PPMPF_STUP(...) \
        (PPMPF_IFELSE( PPMPF_TUP_EMPTY((__VA_ARGS__)) \
                     , PPMPF_UNIT \
                     , PPMPF_FLDX1V) \
         (, (())((__VA_ARGS__)), PPMPF_UTUP_GET   \
                               , PPMPF_TUP_POP    \
                               , PPMPF_UTUP_EMPTY \
                               , PPMPF_FLDX1T     \
                               , PPMPF_FLDX0D     \
                               , PPMPF_FLDX22, ),1)

#endif /* _ODREEX_PPMPF_COLLECTIONS_TUPLE_TYPE_HH_ */
