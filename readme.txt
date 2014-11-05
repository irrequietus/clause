clause

What this is all about
----------------------

'clause' is a C++ metaprogramming library licensed under the Mozilla Public
License 2.0. The following is the current list of its sublibrary components.

 * ppmpf (preprocessor metaprogramming framework)
 * ample (another metaprogramming library etude)
 
There are no third party library dependencies other than very minimal C++11
standard library support (to almost none) for using this library. However, it
is very important that you use a fully C++11 compliant compiler. Sections
of the library are written for C++14 and C++1z (post C++14) may be present and
are enabled through --enable-cxx14 / --enable-cxx1z during build configuration
and properly marked within the source code, but are not necessary for the use
of the library.

Testing the code available
--------------------------

Tests are provided for clause using its own testing framework, which itself is
pretty much a work in progress. New tests are added regularly and they are used
in order to ascertain proper library functionality.

If you wish to just run the tests available for clause, simply clone the git
repository and run make as follows in your terminal:

    git clone git://github.com/irrequietus/clause.git
    cd clause
    ./autogen.sh
    ./configure
    make test

If you wish to get ANSI coloured output for the tests, do the following
variation of the previously mentioned commands in your terminal:

    git clone git://github.com/irrequietus/clause.git
    cd clause
    ./autogen.sh
    ./configure --enable-ansi-colors
    make test

It is now possible to use --with-compiler=<compiler path here> to specify
a particular compiler path to be used during make targets. The 'make test'
command adds a '-DUSE_TEST_EXPANSION' to the flags using during tests, allowing
for test macro expansion to occur only during tests.

In order to run compile and run a single test within the subdirectories for
ample and / or ppmpf, after properly configuring the package as above run
something like the example below, properly substituting "testname1" and
"testname2":

    make just ample/testname1.cc
    make just ppmpf/testname2.cc

This will result in just compiling and running the test you are interested in.

Reporting bugs and other issues
-------------------------------

Please report any issues over at https://github.com/irrequietus/clause/issues,
mailing list at https://launchpad.net/~clause-developers


