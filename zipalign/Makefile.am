bin_PROGRAMS = zipalign

zipalign_SOURCES = \
	ZipAlign.cpp  \
	ZipEntry.cpp  \
	ZipFile.cpp

zipalign_CXXFLAGS = -I$(top_srcdir)/libcutils/include  -I$(top_srcdir)/libutils/include -I$(top_srcdir)/libhost/include
zipalign_CXXFLAGS += -DHAVE_SYS_UIO_H -DHAVE_PTHREADS -DHAVE_SCHED_H -DHAVE_SYS_UIO_H -DHAVE_IOCTL -DHAVE_TM_GMTOFF -DANDROID_SMP=1  -DHAVE_ENDIAN_H -DHAVE_POSIX_FILEMAP -DHAVE_OFF64_T -Wno-format-y2k -DHAVE_ENDIAN_H -DHAVE_SCHED_H -DHAVE_EXPAT_CONFIG_H

zipalign_LDADD =  \
        $(top_builddir)/libutils/libutils.la $(top_builddir)/libcutils/libcutils.la $(top_builddir)/liblog/liblog.la

zipalign_LDADD += -lz -lpthread 
