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


CXX_TMSG=printf \
	"\x1b[34;01m[*]\x1b[0m:\x1b[36;01m building: \x1b[39;01m%s\x1b[0m\n"

CXX_FAST=printf \
	"\x1b[39;01m[!]\x1b[0m:\x1b[36;01m just: \x1b[39;01m%s\x1b[0m\n"

CXX_TEST=$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I . -Wall -Werror -Wextra -pedantic

CXX_TEST_FLAGS=printf \
	"\x1b[34;01m[+]\x1b[0m:\x1b[36;01m cxxflags: \x1b[39;01m%s\x1b[0m\n"


CPP_TEST_FLAGS=printf \
	"\x1b[34;01m[+]\x1b[0m:\x1b[36;01m cxxflags: \x1b[39;01m%s\x1b[0m\n"


.PHONY: tests test clean clean-local just \
	$(filter ample%.cc ppmpf%.cc, $(MAKECMDGOALS))

%.o: %.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I . $<

dist-hook:
	rm -f $(distdir)/tests/ample/*.test
	rm -f $(distdir)/tests/ppmpf/*.test

tests:
	@$(CXX_TEST_FLAGS) "$(CXXFLAGS) -I . -Wall -Werror -Wextra -pedantic"
	@$(CPP_TEST_FLAGS) "$(CPPFLAGS)"
	@$(foreach x, \
	    $(sort $(foreach f, \
	        $(dir tests/*/*), \
		$(wildcard $(f)*.cc))), \
		$(CXX_TMSG) "$(patsubst tests/%.cc,%.test,$(x))"; \
		$(CXX_TEST) "$(x)" -o "$(patsubst %.cc,%.test,$(x))" || exit 1;)

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
	@$(foreach s, \
		$(filter-out $@, $(MAKECMDGOALS)), \
		$(CXX_FAST) "test case : tests/$(s)"; \
		$(CXX_FAST) "compiler  : $(CXX)"; \
		$(CXX_FAST) "flags used: $(CXXFLAGS) $(CPPFLAGS)"; \
		$(CXX_TEST) tests/$(s) \
				-o $(patsubst %.cc,tests/%.test,$(s));)
