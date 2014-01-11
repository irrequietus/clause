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
                    , PPMPF_ZIPAUX_GET \
                    , PPMPF_ZIPAUX_POP \
                    , PPMPF_ZIPAUX_EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP3(a,b,c) \
        PPMPF_FLDX0G( PPMPF_FLDX0U \
                    , (())((a,b,c)) \
                    , PPMPF_ZIPAUX_3GET \
                    , PPMPF_ZIPAUX_3POP \
                    , PPMPF_ZIPAUX_3EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP4(a,b,c,d) \
        PPMPF_FLDX0G( PPMPF_FLDX0V \
                    , (())((a,b,c,d)) \
                    , PPMPF_ZIPAUX_4GET \
                    , PPMPF_ZIPAUX_4POP \
                    , PPMPF_ZIPAUX_4EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP5(a,b,c,d,e) \
        PPMPF_FLDX0G( PPMPF_FLDX0W \
                    , (())((a,b,c,d,e)) \
                    , PPMPF_ZIPAUX_5GET \
                    , PPMPF_ZIPAUX_5POP \
                    , PPMPF_ZIPAUX_5EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP6(a,b,c,d,e,f) \
        PPMPF_FLDX0G( PPMPF_FLDX0X \
                    , (())((a,b,c,d,e,f)) \
                    , PPMPF_ZIPAUX_6GET \
                    , PPMPF_ZIPAUX_6POP \
                    , PPMPF_ZIPAUX_6EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP7(a,b,c,d,e,f,g) \
        PPMPF_FLDX0G( PPMPF_FLDX0X \
                    , (())((a,b,c,d,e,f,g)) \
                    , PPMPF_ZIPAUX_7GET \
                    , PPMPF_ZIPAUX_7POP \
                    , PPMPF_ZIPAUX_7EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP8(a,b,c,d,e,f,g,h) \
        PPMPF_FLDX0G( PPMPF_FLDX0Y \
                    , (())((a,b,c,d,e,f,g,h)) \
                    , PPMPF_ZIPAUX_8GET \
                    , PPMPF_ZIPAUX_8POP \
                    , PPMPF_ZIPAUX_8EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIP9(a,b,c,d,e,f,g,h,i) \
        PPMPF_FLDX0G( PPMPF_FLDX0Z \
                    , (())((a,b,c,d,e,f,g,h,i)) \
                    , PPMPF_ZIPAUX_9GET \
                    , PPMPF_ZIPAUX_9POP \
                    , PPMPF_ZIPAUX_9EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH(f,a,b) \
        PPMPF_FLDX0G( f \
                    , (())((a,b)) \
                    , PPMPF_ZIPAUX_GET \
                    , PPMPF_ZIPAUX_POP \
                    , PPMPF_ZIPAUX_EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH3(f,a,b,c) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c)) \
                    , PPMPF_ZIPAUX_3GET \
                    , PPMPF_ZIPAUX_3POP \
                    , PPMPF_ZIPAUX_3EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH4(f,a,b,c,d) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d)) \
                    , PPMPF_ZIPAUX_4GET \
                    , PPMPF_ZIPAUX_4POP \
                    , PPMPF_ZIPAUX_4EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH5(f,a,b,c,d,e) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e)) \
                    , PPMPF_ZIPAUX_5GET \
                    , PPMPF_ZIPAUX_5POP \
                    , PPMPF_ZIPAUX_5EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH6(f,a,b,c,d,e,g) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e,g)) \
                    , PPMPF_ZIPAUX_6GET \
                    , PPMPF_ZIPAUX_6POP \
                    , PPMPF_ZIPAUX_6EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH7(f,a,b,c,d,e,g,h) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e,g,h)) \
                    , PPMPF_ZIPAUX_7GET \
                    , PPMPF_ZIPAUX_7POP \
                    , PPMPF_ZIPAUX_7EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH8(f,a,b,c,d,e,g,h,i) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e,g,h,i)) \
                    , PPMPF_ZIPAUX_8GET \
                    , PPMPF_ZIPAUX_8POP \
                    , PPMPF_ZIPAUX_8EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

#define PPMPF_TUP_ZIPWITH9(f,a,b,c,d,e,g,h,i,j) \
        PPMPF_FLDX0G( f \
                    , (())((a,b,c,d,e,g,h,i,j)) \
                    , PPMPF_ZIPAUX_9GET \
                    , PPMPF_ZIPAUX_9POP \
                    , PPMPF_ZIPAUX_9EMPTY \
                    , PPMPF_ZIPAUX_APPLY \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0H, )

        
#endif /* _ODREEX_PPMPF_ZIP_HH_ */
