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

#ifndef _CLAUSE_AMPLE_OPRT_STORAGE_HH_
#define _CLAUSE_AMPLE_OPRT_STORAGE_HH_

#include <clause/ample/oprt/fundamentals.hh>
#include <clause/ample/ensure.hh>
/*++
 * Several oprt metafunction handlers that are to be used on ample - based
 * collections.
 */

namespace clause {
namespace ample {
/*~
 * @desc Add another type to the back of a collection.
 * @tprm Collection_T: A collection of types.
 * @tprm Type_T      : A specific type.
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T, typename Type_T>
using push_back
    = typename ensure<Collection_T>
        ::template oprt_push_back<Type_T>::type;

/*~
 * @desc Add another type to the front of a collection.
 * @tprm Collection_T: A collection of types.
 * @tprm Type_T      : A specific type.
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T, typename Type_T>
using push_front
    = typename ensure<Collection_T>
        ::template oprt_push_front<Type_T>::type;

/*~
 * @desc Remove a type from the back of a collection.
 * @tprm Collection_T: A collection of types.
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T>
using pop_back
    = typename ensure<Collection_T>
        ::template oprt_pop_back<>::type;

/*~
 * @desc Remove a type from the front of a collection.
 * @tprm Collection_T: A collection of types.
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T>
using pop_front
    = typename ensure<Collection_T>
        ::template oprt_pop_front<>::type;

/*~
 * @desc Access a type at a given index within a collection.
 * @tprm Collection_T: A collection of types.
 * @tprm Number_N    : A type representing an index, contained in its ::value
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T, typename Number_N>
using atpos
    = typename ensure<Collection_T>
        ::template oprt_atpos<Number_N>::type;

/*~
 * @desc Alter a type at a given index within a collection.
 * @tprm Collection_T: A collection of types.
 * @tprm Type_T      : A specific type.
 * @tprm Number_N    : A type representing an index, contained in its ::value
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T, typename Type_T, typename Number_N>
using assign_atpos
    = typename ensure<Collection_T>
        ::template oprt_assign_atpos<Number_N, Type_T>::type;

/*~
 * @desc Get the first type at the front of a collection.
 * @tprm Collection_T: A collection of types.
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T>
using head_of
    = atpos<Collection_T, natural<>>;

/*~
 * @desc Get the resulting collection after the first type at its front has been
 *       removed.
 * @tprm Collection_T: A collection of types.
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T>
using tail_of
    = pop_front<Collection_T>;

/*~
 * @desc Get the last type in a collection.
 * @tprm Collection_T: A collection of types.
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T>
using back_of
    = atpos<Collection_T, prev<size_of<Collection_T>>>;

/*~
 * @desc Get the first type in a collection.
 * @tprm Collection_T: A collection of types.
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T>
using front_of
    = atpos<Collection_T, natural<>>;

/*~
 * @desc Clear a collection, remove all types from it.
 * @tprm Collection_T: A collection of types.
 * @inst Depends on the contained oprt metahandler; if the latter does not exist
 *       the result is guaranteed to be failure<Collection_T>.
 */
template<typename Collection_T>
using clear
    = typename ensure<Collection_T>::template oprt_clear<>::type;

} /* ample */
} /* clause */

#endif /* _CLAUSE_AMPLE_OPRT_STORAGE_HH_ */
