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

#ifndef CLAUSE_AMPLE_STORAGE_PACK_HH
#define CLAUSE_AMPLE_STORAGE_PACK_HH

#include <clause/ample/storage/headtail.hh>
#include <clause/ample/ensure.hh>

namespace clause {
namespace ample {

/*++
 * We have implemented storage_block and operations for it in the form of class
 * templates like storage_push_back, storage_push_front, storage_pop_front,
 * storage_pop_back, storage_pop_tail_by, storage_pop_head_by. In order to
 * complete basic container operations for type containers with sequential
 * access semantics, we need to implement random access retrieval and
 * alteration. This can be done in any number of ways, but most of all it has
 * to consider the fact that at any given point pushing and popping types
 * out of either left / right "bounds" of the type container is possible.
 * 
 * Pushing and popping "types" all around efficiently and correctly requires
 * in the end having two separate storage_block class templates instantiated,
 * where head / tail operations end up taking place. The "simpler" alternative
 * would require re - iterating through all types contained every time any kind
 * of operation (including random access alteration) takes place, which would
 * greately add to compilation times and reduce flexibility by making several
 * of these operations O(n), O(n^2) or worse, despite that seems the "obvious"
 * way to do things with C++11 template variadics.
 * 
 * The solution to random access retrieval is common with the one for random
 * access alteration, provided we know which of the two blocks making up the
 * actual type container (i.e. storage_sequential - based one) contains the item
 * that interests us, therefore the search for that item is to be adjusted
 * between the elements of the "left" and "right" storage_block in the
 * storage_sequential class template.
 * 
 * All that remains then, is having a way to instantiate a storage_sequential
 * class template correctly so that everything sticks together the way it should
 * and that is what the storage_pack template is all about, "packing" the types
 * through storage_push_front, storage_push_back to the correct storage_block
 * types of which storage_sequential is comprised of.
 */

/* ++
 * A storage_sequential contains the "left" and "right" storage_block class
 * templates instantiated. This is the forward declaration that was originally
 * in <clause/ample/storage/block.hh> but was left unused.
 */
template< typename = storage_block<>   // storage_block (L)
        , typename = storage_block<> > // storage_block (R)
struct storage_sequential;

template< typename X                   // type getting "added"
        , typename Y = storage_block<> // storage_block (L)
        , typename Q = storage_block<> // storage_block (R)
        , typename Z = natural<> >     // size_of representation
struct storage_pack
{};

/* ++
 * Pattern matching features of C++ template metaprogramming doing their usual
 * magic, depending on whether we are "expanding" a storage_pack by pushing
 * to "front" or "back", thus pushing to either the "left" or the "right"
 * sub storage_block contained. The first one is for storage_push_back.
 */
template< typename Type_X
        , typename... Types_X
        , typename Type_Y
        , typename Type_Q
        , typename N >
struct storage_pack< storage_push_back<Type_X, Types_X...>
                   , Type_Y
                   , Type_Q
                   , N >
     : storage_pack< storage_push_back<Types_X...>
                   , storage_block<Type_X, Type_Y, N >
                   , Type_Q
                   , next<N> >
{};

/* ++
 * Pattern matching again, for the purpose of "expanding" a storage_block in
 * "front" - wise manner, using storage_push_front.
 */
template< typename Type_X
        , typename... Types_X
        , typename Type_Y
        , typename Type_Q
        , typename N >
struct storage_pack< storage_push_front<Type_X, Types_X...>
                   , Type_Y
                   , Type_Q
                   , N >
     : storage_pack< storage_push_front<Types_X...>
                   , Type_Y
                   , storage_block<Type_X, Type_Q, N >
                   , next<N> >
{};

/* ++
 * When there is nothing more to add, do not add anything and relay "packing"
 * to storage_sequential, which has all the oprt metahandlers necessary and is
 * the final step.
 */
template<typename Y, typename Q, typename Z>
struct storage_pack<storage_push_back<>, Y, Q, Z >
     : storage_sequential<Y, Q>
{};

template<typename Y, typename Q, typename Z>
struct storage_pack<storage_push_front<>, Y, Q, Z >
     : storage_sequential<Y, Q>
{};

/* ++
 * The actual class template containing the two storage blocks among which the
 * entire list of types is distributed.
 */
template<typename Storage_L, typename Storage_R>
struct storage_sequential {
private:
    template< typename Type_T
            , typename At_N
            , typename Index_N = add<At_N, factor_of<Type_T>> >
    struct impl_atpos
         : is_just <
                decltype(Type_T::parameter((natural<Index_N::value>())))
           >::type
    {};

    template<typename Block_T>
    struct impl_bclr
         : when< less_or_equal<size_of<Block_T>, factor_of<Block_T> >
               , storage_block<>
               , Block_T >::type
    {};

    template<typename Storage_T>
    struct impl_bsize
         : sub< size_of<Storage_T>, factor_of<Storage_T> >
    {};

    template< typename SelectedBlock_T, typename At_N, typename Type_X>
    struct impl_a2tpos : SelectedBlock_T {
        using SelectedBlock_T::parameter;
        static is_just<Type_X>
        parameter(natural<add<At_N, factor_of<SelectedBlock_T>>::value>);
    };

    template< typename At_N
            , typename Type_X
            , typename Block_L
            , typename Block_R >
    struct impl_assign_atpos
         : when< greater_or_equal< At_N, impl_bsize<Block_R> >
               , storage_sequential< impl_a2tpos< Block_L
                                                , sub< At_N 
                                                     , impl_bsize<Block_R > >
                                                , Type_X >
                                   , Block_R >
               , storage_sequential< Block_L
                                   , impl_a2tpos< Block_R
                                                , prev< sub<impl_bsize<Block_R>
                                                      , At_N > >
                                                , Type_X> > >
    {};

public:
    /* ++
     * oprt metahandlers offering this template's "interface" to the rest of
     * clause::ample algorithms. The metahandlers thus offer support for the
     * following operations, "metadeployers" of which are found in the header
     * <clause/ample/oprt/storage.hh> :
     * ------------
     * size_of
     * clear
     * push_back
     * push_front
     * pop_back
     * pop_front
     * atpos
     * assign_atpos
     * ------------
     */
    template<typename...>
    struct oprt_size_of
         : add< impl_bsize<Storage_L>, impl_bsize<Storage_R> >
    {};

    template<typename T = storage_sequential<>>
    struct oprt_clear
         : is_just<storage_sequential<>>
    {};

    template<typename Type_T>
    struct oprt_push_back
         : is_just<storage_pack< storage_push_back<Type_T>
                               , Storage_L
                               , Storage_R
                               , size_of<Storage_L> > >
    {};

    template<typename Type_T>
    struct oprt_push_front
         : is_just<storage_pack< storage_push_front<Type_T>
                               , Storage_L
                               , Storage_R
                               , size_of<Storage_R> > >
    {};
    
    template<typename...>
    struct oprt_pop_back
         : when< is_empty<Storage_L>
               , storage_sequential< impl_bclr<Storage_L>
                                   , storage_pop_tail<Storage_R>>
               , storage_sequential< storage_pop_head<Storage_L>
                                   , Storage_R> >
    {};
    
    template<typename...>
    struct oprt_pop_front
         : when< is_empty<Storage_R>
               , storage_sequential< storage_pop_tail<Storage_L>
                                   , impl_bclr<Storage_R> >
               , storage_sequential< Storage_L
                                   , storage_pop_head<Storage_R> > >
    {};
    
    template<typename At_N>
    struct oprt_atpos
         : where< oprt_size_of<>
                , where< greater_or_equal<At_N, impl_bsize<Storage_R>>
                       , impl_atpos< Storage_L
                                   , sub<At_N, impl_bsize<Storage_R>>>
                       , impl_atpos< Storage_R
                                   , prev<sub<impl_bsize<Storage_R>, At_N>>>>
                , failure</*~ ~*/>>
    {};

    template<typename At_N, typename Type_X>
    struct oprt_assign_atpos
         : where< greater_than<oprt_size_of<>, At_N>
                , impl_assign_atpos<At_N, Type_X, Storage_L, Storage_R>
                , failure<>>
    {};

};

} /* ample */
} /* clause */

#endif /* CLAUSE_AMPLE_STORAGE_HH */
