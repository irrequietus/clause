## libclause:
##
## Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
## 
## This file is part of 'clause', a highly generic C++ meta-programming library,
## subject to the terms and conditions of the Mozilla Public License v 2.0. If
## a copy of the MPLv2 license text was not distributed with this file, you can
## obtain it at: http://mozilla.org/MPL/2.0/.
## 
## The 'clause' library is an experimental library in active development with
## a source code repository at: https://github.com/irrequietus/clause.git and
## issue tracker at https://github.com/irrequietus/clause/issues.
## 
##

distdir = $(PACKAGE).$(VERSION)-$(shell git rev-parse HEAD)
AUTOMAKE_OPTIONS = subdir-objects
AM_LDFLAGS = -L/usr/local/lib -L/usr/lib
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS} -I m4

include $(top_srcdir)/fsources.mk
include $(top_srcdir)/fheaders.mk

lib_LTLIBRARIES = libclause-@CLAUSE_API_VERSION@.la
libclause_@CLAUSE_API_VERSION@_la_LDFLAGS = -version-info $(CLAUSE_SO_VERSION)
clause_includedir = $(includedir)/clause-$(CLAUSE_API_VERSION)
clause_libincludedir = $(libdir)/clause-$(CLAUSE_API_VERSION)/include
nodist_clause_libinclude_HEADERS = clauseconfig.h
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = clause-$(CLAUSE_API_VERSION).pc
dist_noinst_SCRIPTS = autogen.sh
EXTRA_DIST = patch tests
TESTFLAGS = -Wall -Werror -Wextra -pedantic \
	-fconstexpr-depth=1024 \
	-ftemplate-depth=1024


define println
    $(if $(filter $(CPPFLAGS),-DUSE_ANSI_COLORS),
        @printf "\x1b[34;01m[*]\x1b[0m:\x1b[36;01m %s: \x1b[39;01m%s\x1b[0m\n"\
            $1 $2,
        @printf "[*] %s: %s\n" $1 $2)
endef

define testrun
     { time -f "\"[$(patsubst tests/%.test,%.test,$1)]\",%e,%U,%S,%M" $1; } \
	2>>errors.log || exit 1;
endef

define compile_test
    { time -f "\"[$(patsubst tests/%.cc,%.cc,$1)]\",\"$(CXX)\",%e,%U,%S,%M" \
      $(CXX) $(CXXFLAGS) $(CPPFLAGS) -DUSE_TEST_EXPANSION -I . $(TESTFLAGS) \
      $1 -o $(patsubst %.cc,%.test,$1); } 2>>errors.log || exit 1
endef

.PHONY: test clean check clean-local just ctst cmpl \
	$(filter ample%.cc ppmpf%.cc, $(MAKECMDGOALS))

%.o: %.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I . $<

dist-hook:
	rm -f $(distdir)/tests/ample/*.test
	rm -f $(distdir)/tests/ppmpf/*.test

ctst:
	@$(call println, "compiler", "$(CXX)")
	@$(call println, "cxxflags", "$(CXXFLAGS) $(TESTFLAGS)")
	@$(call println, "cppflags", "$(CPPFLAGS) -DUSE_TEST_EXPANSION")
	@$(foreach x, \
	    $(sort $(foreach f, \
	        $(dir tests/*/*), \
		$(wildcard $(f)*.cc))), \
		$(call println,building,"$(patsubst %.cc,%.test,$(x))");\
		$(call compile_test,$(x)))

test: ctst
	@$(foreach x, \
		$(sort $(foreach f, $(dir tests/*/*),$(wildcard $(f)*.cc))),\
		$(call testrun, $(patsubst %.cc,%.test,$(x)) ))

check: test

clean-local:
	rm -f tests/ample/*.test
	rm -f tests/ppmpf/*.test
	rm -rf libclause*.tar.*

$(filter ample%.cc ppmpf%.cc, $(MAKECMDGOALS)):
	@$(if $(wildcard tests/$*.test), \
		@:, \
		$(error deploy only after a make just target) )

just:
	@$(call println, "compiler", "$(CXX)")
	@$(call println, "cxxflags", "$(CXXFLAGS) $(TESTFLAGS)")
	@$(call println, "cppflags", "$(CPPFLAGS) -DUSE_TEST_EXPANSION")
	@$(foreach s, \
		$(filter-out $@, $(MAKECMDGOALS)), \
		$(call println,"makejust",$(s)); \
		$(call compile_test,tests/$(s)); )
	@$(foreach s, \
		$(filter-out $@, $(MAKECMDGOALS)), \
		$(call testrun, \
			$(patsubst %.cc,%.test,tests/$(s))))
cmpl:
	@$(call println, "compiler", "$(CXX)")
	@$(call println, "cxxflags", "$(CXXFLAGS) $(TESTFLAGS)")
	@$(call println, "cppflags", "$(CPPFLAGS) -DUSE_TEST_EXPANSION")
	@$(foreach s, \
		$(filter-out $@, $(MAKECMDGOALS)), \
		$(call println,"makecmpl",$(s)); \
		$(call compile_test,tests/$(s)))
