bin_PROGRAMS = aapt

aapt_SOURCES = \
	AaptAssets.cpp \
	Asset.cpp \
	AssetDir.cpp \
	AssetManager.cpp \
	Command.cpp \
	CrunchCache.cpp \
	FileFinder.cpp \
	Images.cpp \
	Main.cpp \
	Package.cpp \
	Resource.cpp \
	ResourceFilter.cpp \
	ResourceTable.cpp \
	ResourceTypes.cpp \
	SourcePos.cpp \
	StreamingZipInflater.cpp \
	StringPool.cpp \
	XMLNode.cpp \
	ZipEntry.cpp \
	ZipFile.cpp

aapt_CXXFLAGS = -I$(top_srcdir)/aapt/include -I$(top_srcdir)/libcutils/include  -I$(top_srcdir)/libutils/include -I$(top_srcdir)/libhost/include 
aapt_CXXFLAGS += -DHAVE_SYS_UIO_H -DHAVE_PTHREADS -DHAVE_SCHED_H -DHAVE_SYS_UIO_H -DHAVE_IOCTL -DHAVE_TM_GMTOFF -DANDROID_SMP=1  -DHAVE_ENDIAN_H -DHAVE_POSIX_FILEMAP -DHAVE_OFF64_T -Wno-format-y2k -DHAVE_ENDIAN_H -DHAVE_SCHED_H -DHAVE_EXPAT_CONFIG_H

aapt_LDADD =  \
        $(top_builddir)/libutils/libutils.la $(top_builddir)/libcutils/libcutils.la $(top_builddir)/liblog/liblog.la $(top_builddir)/libhost/libhost.la

aapt_LDADD += -lz -lpthread -lexpat -lpng 
