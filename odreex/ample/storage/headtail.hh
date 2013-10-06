/* --
 * Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_AMPLE_STORAGE_HEADTAIL_HH_
#define _ODREEX_AMPLE_STORAGE_HEADTAIL_HH_

#include <odreex/ample/storage/block.hh>
#include <odreex/ample/logic/logical.hh>
#include <odreex/ample/logic/relational.hh>
#include <odreex/ample/logic/when.hh>

namespace odreex {
namespace ample {

/* ++
 * When implementing type containers, there are two major operations that have
 * to be dealt with swiftly, that is "shortening" them in front/back, head/tail
 * mode and this is what the templates contained here are aiming to do.
 * 
 * Given a storage block like StorageBlock_T and an Ample number like
 * PopNumber_T, shorten head / tail by that number of elements. In order to do
 * that, class templates like storage_pop_tail_by and storage_pop_head_by
 * resort to instantiating a storage_block class template based on the original
 * storage_block used (i.e. StorageBlock_T) with the number of types "contained"
 * corrected by a factor equal to the amount of types that were "removed" from
 * the type "container".
 * 
 * That storage_block class template is used as base type from which a "new"
 * type (storage_pop_* one) with modified oprt metahandlers to reflect the
 * size changes is the "result". This is done by introducing a "factor" size
 * next to the actual size of the type container block (storage_block).
 * Thus, oprt metahandlers exploit the very nature of the pure, non-strict and
 * untyped functional language features of C++ template metaprogramming.
 * 
 * The fun part is that the algorithm involved for popping types out of the
 * storage_block types, is pretty straightforward to read due to the way these
 * class templates work and the names choosen for the various operations.
 */

/* Pop "tail" of a storage_block type by a given number of types. */
template< typename StorageBlock_T
        , typename PopNumber_T >
struct storage_pop_tail_by
     : storage_block<storage_sequence<>, StorageBlock_T> {
private:
    /* internal calculations, must not expose! */
    struct factor_
         : when< is_equal<size_of<StorageBlock_T>, factor_of<StorageBlock_T> >
               , natural<>
               , add<factor_of<StorageBlock_T>, PopNumber_T> >::type
    {};

    struct size_
         : when< is_equal<size_of<StorageBlock_T>, factor_of<StorageBlock_T> >
               , natural<>
               , next<size_of<StorageBlock_T> > >::type
    {};

public:
    /* ample oprt metahandlers */
    struct oprt_factor_of
         : when< greater_than<size_, factor_>
               , factor_
               , natural<> >::type
    {};

    struct oprt_size_of
         : when< greater_than<size_, PopNumber_T>
               , sub<size_, PopNumber_T>
               , natural<> >::type
    {};
};

/* Pop "head" of a storage_block type by a given number of types. */
template< typename StorageBlock_T
        , typename PopNumber_T >
struct storage_pop_head_by
     : when< is_equal<PopNumber_T, natural<>>
           , StorageBlock_T
           , storage_pop_head_by< base_of<StorageBlock_T>
                                , prev<PopNumber_T> > >::type {
private:
    /* internal calculations, must not expose! */
    struct factor_
         : add<factor_of<StorageBlock_T>, prev<PopNumber_T>>
    {};

    struct size_
         : size_of<base_of<StorageBlock_T>>
    {};

public:
    /* ample oprt metahandlers */
    struct oprt_size_of
         : when< greater_than< size_, factor_ >
               , sub< size_, factor_ >
               , natural<> >::type
    {};

    struct oprt_factor_of
         : when< greater_than< size_of<base_of<StorageBlock_T> >
                             , factor_of<StorageBlock_T> >
               , factor_of<StorageBlock_T>
               , natural<> >::type
    {};

};

/*++
 * By default, we usually want to pop a single item, front or back, so these
 * are the class templates doing the job, storage_pop_head and storage_pop_tail.
 */
template<typename StorageBlock_T>
struct storage_pop_head
     : storage_pop_head_by<StorageBlock_T, natural<1> >
{};

template<typename StorageBlock_T>
struct storage_pop_tail
     : storage_pop_tail_by<StorageBlock_T, natural<1> >
{};

} /* ample */
} /* odreex */

#endif /* _ODREEX_AMPLE_STORAGE_HEADTAIL_HH_ */
