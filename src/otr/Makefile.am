moduledir = $(libdir)/irssi/modules
module_LTLIBRARIES = libotr_core.la

AM_CPPFLAGS = \
	-I$(top_srcdir)/src \
	-I$(top_srcdir)/src/core/ \
	-I$(top_srcdir)/src/irc/core/ \
	-I$(top_srcdir)/src/fe-common/core/ \
	$(GLIB_CFLAGS) \
	$(LIBOTR_CFLAGS) \
	$(LIBGCRYPT_CFLAGS)

libotr_core_la_LDFLAGS = -module -avoid-version
libotr_core_la_LIBADD = $(LIBOTR_LIBS) $(LIBGCRYPT_LIBS)

libotr_core_la_SOURCES = \
	cmd.c \
	key.c \
	module.c \
	otr-formats.c \
	otr-ops.c \
	otr.c \
	utils.c

noinst_HEADERS = \
	cmd.h  \
	irssi-otr.h \
	key.h \
	module.h \
	otr-formats.h \
	otr.h \
	utils.h
