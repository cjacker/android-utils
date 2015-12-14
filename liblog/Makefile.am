noinst_LTLIBRARIES=liblog.la

liblog_la_CFLAGS = -DHAVE_SYS_UIO_H 
liblog_la_CFLAGS += -I$(top_srcdir)/libcutils/include

liblog_la_SOURCES= \
	event_tag_map.c  \
	fake_log_device.c  \
	logd_write.c  \
	logprint.c
