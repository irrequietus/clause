## libodreex:
## Copyright (C) 2013 George Makrydakis <irrequietus@gmail.com>
##
## This file is part of odreex.
##
## odreex is free software; you can redistribute it and/or modify it under the
## terms of the GNU General Public License as published by the Free Software
## Foundation, either version 3 of the License, or (at your option) any later
## version.
##
## odreex is distributed in the hope that it will be useful, but WITHOUT ANY
## WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
## FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
## details.
##
## You should have received a copy of the GNU General Public License along with
## odreex. If not, see http://www.gnu.org/licenses.

distdir = $(PACKAGE).$(VERSION)-$(shell git rev-parse HEAD)
AUTOMAKE_OPTIONS = subdir-objects
AM_LDFLAGS = -L/usr/local/lib -L/usr/lib
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS} -I m4

include $(top_srcdir)/fsources.mk
include $(top_srcdir)/fheaders.mk

lib_LTLIBRARIES = libodreex-@ODREEX_API_VERSION@.la
libodreex_@ODREEX_API_VERSION@_la_LDFLAGS = -version-info $(ODREEX_SO_VERSION)
odreex_includedir = $(includedir)/odreex-$(ODREEX_API_VERSION)
odreex_libincludedir = $(libdir)/odreex-$(ODREEX_API_VERSION)/include
nodist_odreex_libinclude_HEADERS = odreexconfig.h
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = odreex-$(ODREEX_API_VERSION).pc
dist_noinst_SCRIPTS = autogen.sh
EXTRA_DIST = patch appkit tests

define println_building
    printf "\x1b[34;01m[*]\x1b[0m:\x1b[36;01m building: \x1b[39;01m%s\x1b[0m\n"\
           $1
endef

define make_just
    printf "\x1b[34;01m[*]\x1b[0m:\x1b[36;01m makejust: \x1b[39;01m%s\x1b[0m\n"\
           $1

    $(foreach, x, \
        "test case : tests/$1" \
        "compiler  : $(CXX)" \
        "flags used: $(CXXFLAGS) $(CPPFLAGS)", \
        $(call println_fast,$(x)))

    $(CXX) $(CXXFLAGS) $(CPPFLAGS) \
        -I . -Wall -Werror -Wextra -pedantic tests/$1 \
        -o $(patsubst %.cc,tests/%.test,$1);
endef

define println_cxxflags
    printf "\x1b[34;01m[*]\x1b[0m:\x1b[36;01m cxxflags: \x1b[39;01m%s\x1b[0m\n"\
           $1
endef

define println_cppflags
    printf "\x1b[34;01m[*]\x1b[0m:\x1b[36;01m cppflags: \x1b[39;01m%s\x1b[0m\n"\
           $1
endef

define println_compiler
    printf "\x1b[34;01m[*]\x1b[0m:\x1b[36;01m compiler: \x1b[39;01m%s\x1b[0m\n"\
           $(CXX)
endef

define compile_test
    $(CXX) $(CXXFLAGS) $(CPPFLAGS) -I . -Wall -Werror -Wextra -pedantic \
    $1 -o $2 || exit 1;
endef

.PHONY: tests test clean clean-local just \
	$(filter ample%.cc ppmpf%.cc, $(MAKECMDGOALS))

%.o: %.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I . $<

dist-hook:
	rm -f $(distdir)/tests/ample/*.test
	rm -f $(distdir)/tests/ppmpf/*.test

tests:
	@$(foreach x, \
	    $(sort $(foreach f, \
	        $(dir tests/*/*), \
		$(wildcard $(f)*.cc))), \
		$(call println_building,"$(patsubst tests/%.cc,%.test,$(x))");\
		$(call compile_test,"$(x)","$(patsubst %.cc,%.test,$(x))"))

test: tests
	@$(foreach x, \
	    $(sort $(foreach f, \
	        $(dir tests/*/*), \
		$(wildcard $(f)*.cc))), \
		$(patsubst %.cc,./%.test,$(x)) || exit 1; )

clean-local:
	rm -f tests/ample/*.test
	rm -f tests/ppmpf/*.test
	rm -rf libodreex*.tar.*

$(filter ample%.cc ppmpf%.cc, $(MAKECMDGOALS)):
	@$(if $(wildcard tests/$*.test), \
		tests/$*.test, \
		$(error Deployable only after "make just $*.cc") )
	@:
	
just:
	@$(call println_compiler)
	@$(call println_cxxflags,"$(CXXFLAGS) -Wall -Werror -Wextra -pedantic")
	@$(call println_cppflags,"$(CPPFLAGS)")
	@$(foreach s, \
		$(filter-out $@, $(MAKECMDGOALS)), \
		$(call make_just,$(s)))
