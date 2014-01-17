## libodreex:
## Copyright (C) 2013,2014 George Makrydakis <irrequietus@gmail.com>
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
TESTFLAGS = -Wall -Werror -Wextra -pedantic

define println
    $(if $(filter $(CPPFLAGS),-DUSE_ANSI_COLORS),
        @printf "\x1b[34;01m[*]\x1b[0m:\x1b[36;01m %s: \x1b[39;01m%s\x1b[0m\n"\
            $1 $2,
        @printf "[*] %s: %s\n" $1 $2)
endef

define testrun
    $1 2>>errors.log || exit 1;
endef

define testrun_time
     { time -f "\"[$(patsubst tests/%.test,%.test,$1)]\",%e,%U,%S,%M" $1; } \
	2>>errors.log || exit 1;
endef

define compile_test
    { $(CXX) $(CXXFLAGS) $(CPPFLAGS) -I . $(TESTFLAGS) \
      $1 -o $(patsubst %.cc,%.test,$1); } 2>>errors.log || exit 1
endef

define compile_test_time
    { time -f "\"[$(patsubst tests/%.cc,%.cc,$1)]\",\"$(CXX)\",%e,%U,%S,%M" \
      $(CXX) $(CXXFLAGS) $(CPPFLAGS) -I . $(TESTFLAGS) \
      $1 -o $(patsubst %.cc,%.test,$1); } 2>>errors.log || exit 1
endef

.PHONY: tests test clean clean-local just jtim ctim tctime \
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
		$(call println,building,"$(patsubst %.cc,%.test,$(x))");\
		$(call compile_test, $(x)))

tctime:
	@$(foreach x, \
	    $(sort $(foreach f, \
	        $(dir tests/*/*), \
		$(wildcard $(f)*.cc))), \
		$(call println,building,"$(patsubst %.cc,%.test,$(x))");\
		$(call compile_test_time,$(x)))

test: tests
	@$(foreach x, \
	$(sort $(foreach f, \
	$(dir tests/*/*), \
	$(wildcard $(f)*.test))), \
	$(call testrun, $(x) ))

clean-local:
	rm -f tests/ample/*.test
	rm -f tests/ppmpf/*.test
	rm -rf libodreex*.tar.*

$(filter ample%.cc ppmpf%.cc, $(MAKECMDGOALS)):
	@$(if $(wildcard tests/$*.test), \
		@:, \
		$(error deploy only after a make just target) )

just:
	@$(call println, "compiler", "$(CXX)")
	@$(call println, "cxxflags", "$(CXXFLAGS) $(TESTFLAGS)")
	@$(call println, "cppflags", "$(CPPFLAGS)")
	@$(foreach s, \
		$(filter-out $@, $(MAKECMDGOALS)), \
		$(call println,"makejust",$(s)); \
		$(call compile_test,tests/$(s)); \
		$(call testrun_time, \
			$(patsubst %.cc,%.test,tests/$(s))))

jtim:
	@$(call println, "compiler", "$(CXX)")
	@$(call println, "cxxflags", "$(CXXFLAGS) $(TESTFLAGS)")
	@$(call println, "cppflags", "$(CPPFLAGS)")
	@$(foreach s, \
		$(filter-out $@, $(MAKECMDGOALS)), \
		$(call println,"makejtim",$(s)); \
		$(call compile_test_time,tests/$(s)); \
		$(call testrun_time, \
			$(patsubst %.cc,%.test,tests/$(s))))

ctim:
	@$(call println, "compiler", "$(CXX)")
	@$(call println, "cxxflags", "$(CXXFLAGS) $(TESTFLAGS)")
	@$(call println, "cppflags", "$(CPPFLAGS)")
	@$(foreach s, \
		$(filter-out $@, $(MAKECMDGOALS)), \
		$(call println,"makectim",$(s)); \
		$(call compile_test_time,tests/$(s)))
