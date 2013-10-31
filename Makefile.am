## libodreex:
## Copyright (C) 2013 George Makrydakis <irrequietus@gmail.com>
##
## This is the Makefile.am for the odreex libraries, it is a work in progress
## since pretty much the entire library set is a work in progress!
##

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
	
CXX_TEST=$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I . -Wall -Werror -Wextra -pedantic

CXX_TEST_FLAGS=printf \
	"\x1b[34;01m[+]\x1b[0m:\x1b[36;01m cxxflags: \x1b[39;01m%s\x1b[0m\n"
	
CPP_TEST_FLAGS=printf \
	"\x1b[34;01m[+]\x1b[0m:\x1b[36;01m cxxflags: \x1b[39;01m%s\x1b[0m\n"
	
.PHONY: tests test clean clean-local flags

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
	@rm -f tests/ample/*.test
	@rm -f tests/ppmpf/*.test
