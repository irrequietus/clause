odreex

What this is all about
----------------------

This is primarily a C++11 metaprogramming experiment. Some things are good to
go, others are still being developed or in process of being introduced. Although
the GPLv3+ license is being used, I should eventually bring in an exception
in the spirit of the GCC linking exception. The following is the current list
of sub - components of the odreex library:

 * ppmpf (preprocessor metaprogramming framework)
 * ample (another metaprogramming library etude)
 
There are no third party library dependencies other than minimal C++11 standard
library support for using this library. However, it is very important that you
use a fully C++11 compliant compiler, like g++ 4.8.1. Kindly remember that
C++11 compliance means C99 compliance for the parts of C99 that have been
integrated into the standard, and that includes C99 standard library functions
involved where applicable.

Testing the code available
--------------------------

Tests are provided for odreex using its own testing framework, which itself is
pretty much a work in progress. New tests are added regularly and they are used
in order to ascertain proper library functionality.

If you wish to just run the tests available for odreex, simply clone the git
repository and run make as follows in your terminal:

    git clone git://github.com/irrequietus/odreex.git
    cd odreex/tests
    make test

If you wish to get ANSI coloured output for the tests, do the following
variation of the previously mentioned commands in your terminal:

    git clone git://github.com/irrequietus/odreex.git
    cd odreex/tests
    make ctest

Reporting bugs
--------------

Since there is no bugtracker at this point, please report any bugs you may find
by email and kindly remember that this is pretty much a work in progress!
