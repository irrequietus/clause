/* --
 * Copyright (C) 2014, George Makrydakis <irrequietus@gmail.com>
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

#ifndef _ODREEX_PPMPF_ZIP_HH_
#define _ODREEX_PPMPF_ZIP_HH_

#include <odreex/ppmpf/algorithms/fold.hh>
#include <odreex/ppmpf/algorithms/zipaux.hh>

/*
 * NOTE: The full implementation of the zip and zipWith high order functions at
 * the preprocessor level. Currently for ppmpf tuples, supporting zipping up to
 * nine (9) different tuples together. This works with safe tuples.
 * 
 */

#define PPMPF_TUP_ZIP(a,b) \
        PPMPF_FLDX0G( PPMPF_FLDX0T \
                    , (())((a,b)) \
                    , PPMPF_ZIPT_GET \
                    , PPMPF_ZIPT_POP \
                    , PPMPF_ZIPT_EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP3(a,b,c) \
        PPMPF_FLDX0G( PPMPF_FLDX0U \
                    , (())((a,b,c)) \
                    , PPMPF_ZIPT_3GET \
                    , PPMPF_ZIPT_3POP \
                    , PPMPF_ZIPT_3EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP4(a,b,c,d) \
        PPMPF_FLDX0G( PPMPF_FLDX0V \
                    , (())((a,b,c,d)) \
                    , PPMPF_ZIPT_4GET \
                    , PPMPF_ZIPT_4POP \
                    , PPMPF_ZIPT_4EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP5(a,b,c,d,e) \
        PPMPF_FLDX0G( PPMPF_FLDX0W \
                    , (())((a,b,c,d,e)) \
                    , PPMPF_ZIPT_5GET \
                    , PPMPF_ZIPT_5POP \
                    , PPMPF_ZIPT_5EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP6(a,b,c,d,e,f) \
        PPMPF_FLDX0G( PPMPF_FLDX0X \
                    , (())((a,b,c,d,e,f)) \
                    , PPMPF_ZIPT_6GET \
                    , PPMPF_ZIPT_6POP \
                    , PPMPF_ZIPT_6EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP7(a,b,c,d,e,f,g) \
        PPMPF_FLDX0G( PPMPF_FLDX0Y \
                    , (())((a,b,c,d,e,f,g)) \
                    , PPMPF_ZIPT_7GET \
                    , PPMPF_ZIPT_7POP \
                    , PPMPF_ZIPT_7EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP8(a,b,c,d,e,f,g,h) \
        PPMPF_FLDX0G( PPMPF_FLDX0Z \
                    , (())((a,b,c,d,e,f,g,h)) \
                    , PPMPF_ZIPT_8GET \
                    , PPMPF_ZIPT_8POP \
                    , PPMPF_ZIPT_8EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP9(a,b,c,d,e,f,g,h,i) \
        PPMPF_FLDX0G( PPMPF_FLDX10 \
                    , (())((a,b,c,d,e,f,g,h,i)) \
                    , PPMPF_ZIPT_9GET \
                    , PPMPF_ZIPT_9POP \
                    , PPMPF_ZIPT_9EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH(f,a,b) \
        PPMPF_FLDX0G( f \
                    , (())((a,b)) \
                    , PPMPF_ZIPT_GET \
                    , PPMPF_ZIPT_POP \
                    , PPMPF_ZIPT_EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH3(f,a,b,c) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c)) \
                    , PPMPF_ZIPT_3GET \
                    , PPMPF_ZIPT_3POP \
                    , PPMPF_ZIPT_3EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH4(f,a,b,c,d) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d)) \
                    , PPMPF_ZIPT_4GET \
                    , PPMPF_ZIPT_4POP \
                    , PPMPF_ZIPT_4EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH5(f,a,b,c,d,e) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e)) \
                    , PPMPF_ZIPT_5GET \
                    , PPMPF_ZIPT_5POP \
                    , PPMPF_ZIPT_5EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH6(f,a,b,c,d,e,g) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e,g)) \
                    , PPMPF_ZIPT_6GET \
                    , PPMPF_ZIPT_6POP \
                    , PPMPF_ZIPT_6EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH7(f,a,b,c,d,e,g,h) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e,g,h)) \
                    , PPMPF_ZIPT_7GET \
                    , PPMPF_ZIPT_7POP \
                    , PPMPF_ZIPT_7EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH8(f,a,b,c,d,e,g,h,i) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e,g,h,i)) \
                    , PPMPF_ZIPT_8GET \
                    , PPMPF_ZIPT_8POP \
                    , PPMPF_ZIPT_8EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH9(f,a,b,c,d,e,g,h,i,j) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e,g,h,i,j)) \
                    , PPMPF_ZIPT_9GET \
                    , PPMPF_ZIPT_9POP \
                    , PPMPF_ZIPT_9EMPTY \
                    , PPMPF_ZIPT_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

/* Prototype for PPMPF_SEQ_ZIP */
#define PPMPF_SEQ_ZIP(a,b) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( PPMPF_FLDX1K \
                        , (())((a,b)) \
                        , PPMPF_ZIPS_GET \
                        , PPMPF_ZIPS_POP \
                        , PPMPF_ZIPS_EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIP3(a,b,c) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( PPMPF_FLDX1L \
                        , (())((a,b,c)) \
                        , PPMPF_ZIPS_3GET \
                        , PPMPF_ZIPS_3POP \
                        , PPMPF_ZIPS_3EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIP4(a,b,c,d) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( PPMPF_FLDX1M \
                        , (())((a,b,c,d)) \
                        , PPMPF_ZIPS_4GET \
                        , PPMPF_ZIPS_4POP \
                        , PPMPF_ZIPS_4EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIP5(a,b,c,d,e) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( PPMPF_FLDX1N \
                        , (())((a,b,c,d,e)) \
                        , PPMPF_ZIPS_5GET \
                        , PPMPF_ZIPS_5POP \
                        , PPMPF_ZIPS_5EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIP6(a,b,c,d,e,f) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( PPMPF_FLDX1O \
                        , (())((a,b,c,d,e,f)) \
                        , PPMPF_ZIPS_6GET \
                        , PPMPF_ZIPS_6POP \
                        , PPMPF_ZIPS_6EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIP7(a,b,c,d,e,f,g) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( PPMPF_FLDX1P \
                        , (())((a,b,c,d,e,f,g)) \
                        , PPMPF_ZIPS_7GET \
                        , PPMPF_ZIPS_7POP \
                        , PPMPF_ZIPS_7EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIP8(a,b,c,d,e,f,g,h) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( PPMPF_FLDX1Q \
                        , (())((a,b,c,d,e,f,g,h)) \
                        , PPMPF_ZIPS_8GET \
                        , PPMPF_ZIPS_8POP \
                        , PPMPF_ZIPS_8EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIP9(a,b,c,d,e,f,g,h,i) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( PPMPF_FLDX1R \
                        , (())((a,b,c,d,e,f,g,h,i)) \
                        , PPMPF_ZIPS_9GET \
                        , PPMPF_ZIPS_9POP \
                        , PPMPF_ZIPS_9EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIPWITH(f,a,b) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( f \
                        , (())((a,b)) \
                        , PPMPF_ZIPS_GET \
                        , PPMPF_ZIPS_POP \
                        , PPMPF_ZIPS_EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIPWITH3(f,a,b,c) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( f \
                        , (())((a,b,c)) \
                        , PPMPF_ZIPS_3GET \
                        , PPMPF_ZIPS_3POP \
                        , PPMPF_ZIPS_3EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIPWITH4(f,a,b,c,d) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( f \
                        , (())((a,b,c,d)) \
                        , PPMPF_ZIPS_4GET \
                        , PPMPF_ZIPS_4POP \
                        , PPMPF_ZIPS_4EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIPWITH5(f,a,b,c,d,e) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( f \
                        , (())((a,b,c,d,e)) \
                        , PPMPF_ZIPS_5GET \
                        , PPMPF_ZIPS_5POP \
                        , PPMPF_ZIPS_5EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIPWITH6(f,a,b,c,d,e,g) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( f \
                        , (())((a,b,c,d,e,g)) \
                        , PPMPF_ZIPS_6GET \
                        , PPMPF_ZIPS_6POP \
                        , PPMPF_ZIPS_6EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIPWITH7(f,a,b,c,d,e,g,h) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( f \
                        , (())((a,b,c,d,e,g,h)) \
                        , PPMPF_ZIPS_7GET \
                        , PPMPF_ZIPS_7POP \
                        , PPMPF_ZIPS_7EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIPWITH8(f,a,b,c,d,e,g,h,i) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( f \
                        , (())((a,b,c,d,e,g,h,i)) \
                        , PPMPF_ZIPS_8GET \
                        , PPMPF_ZIPS_8POP \
                        , PPMPF_ZIPS_8EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#define PPMPF_SEQ_ZIPWITH9(f,a,b,c,d,e,g,h,i,j) \
        PPMPF_SEQ_POP( \
            PPMPF_FLDX0G( f \
                        , (())((a,b,c,d,e,g,h,i,j)) \
                        , PPMPF_ZIPS_9GET \
                        , PPMPF_ZIPS_9POP \
                        , PPMPF_ZIPS_9EMPTY \
                        , PPMPF_ZIPS_APPLY \
                        , PPMPF_FLDX0L \
                        , PPMPF_FLDX1S, ))

#endif /* _ODREEX_PPMPF_ZIP_HH_ */
