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

lib_LTLIBRARIES = libodreex-@ODREEX_API_VERSION@.la

include $(top_srcdir)/fsources.mk

libodreex_@ODREEX_API_VERSION@_la_LDFLAGS = -version-info $(ODREEX_SO_VERSION)

odreex_includedir = $(includedir)/odreex-$(ODREEX_API_VERSION)

include $(top_srcdir)/fheaders.mk

odreex_libincludedir = $(libdir)/odreex-$(ODREEX_API_VERSION)/include
nodist_odreex_libinclude_HEADERS = odreexconfig.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = odreex-$(ODREEX_API_VERSION).pc

dist_noinst_SCRIPTS = autogen.sh
EXTRA_DIST = patch appkit tests

dist-hook:
	rm -f $(distdir)/tests/ample/*.test
	rm -f $(distdir)/tests/ppmpf/*.test
