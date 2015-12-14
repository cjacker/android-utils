bin_PROGRAMS = adb 

adb_SOURCES = \
	adb.c   \
	adb_client.c    \
	adb_auth_host.c    \
	commandline.c   \
	console.c       \
	fdevent.c       \
	file_sync_client.c      \
	file_sync_service.c     \
	framebuffer_service.c   \
	get_my_path_linux.c     \
	jdwp_service.c  \
	log_service.c   \
	remount_service.c       \
	services.c      \
	sockets.c       \
	transport.c     \
	transport_local.c       \
	transport_usb.c \
	usb_linux.c     \
	usb_vendors.c   \
	utils.c
 

adb_CFLAGS = -I$(top_srcdir)/libcutils/include  -I$(top_srcdir)/libzipfile/include -I$(top_srcdir)/libmincrypt/include
adb_CFLAGS += -DADB_HOST=1 -D_XOPEN_SOURCE -D_GNU_SOURCE -DHAVE_FORKEXEC
adb_CFLAGS += -DHAVE_SYS_UIO_H -DHAVE_PTHREADS -DHAVE_SCHED_H -DHAVE_SYS_UIO_H -DHAVE_IOCTL -DHAVE_TM_GMTOFF -DANDROID_SMP=1
adb_LDADD =  \
        $(top_builddir)/libcutils/libcutils.la $(top_builddir)/libzipfile/libzipfile.la $(top_builddir)/libmincrypt/libmincrypt.la

adb_LDADD += -lz -lpthread -lssl -lcrypto
