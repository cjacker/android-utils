noinst_LTLIBRARIES=libutils.la

libutils_la_CXXFLAGS = -DHAVE_SYS_UIO_H -DHAVE_PTHREADS -DHAVE_SCHED_H -DHAVE_SYS_UIO_H -DHAVE_IOCTL -DHAVE_TM_GMTOFF -DANDROID_SMP=1  -DHAVE_ENDIAN_H -DHAVE_POSIX_FILEMAP -DHAVE_OFF64_T

libutils_la_CXXFLAGS += -I$(top_srcdir)/libutils/include 
libutils_la_CXXFLAGS += -I$(top_srcdir)/libcutils/include 

libutils_la_SOURCES= \
	ZipFileRO.cpp \
	BufferedTextOutput.cpp \
	Static.cpp \
	Tokenizer.cpp \
	ZipFileCRO.cpp \
	Timers.cpp \
	FileMap.cpp \
	StringArray.cpp \
	BlobCache.cpp \
	TextOutput.cpp \
	Looper.cpp \
	Debug.cpp \
	misc.cpp \
	WorkQueue.cpp \
	CallStack.cpp \
	LinearTransform.cpp \
	String16.cpp \
	VectorImpl.cpp \
	RefBase.cpp \
	Flattenable.cpp \
	Threads.cpp \
	SystemClock.cpp \
	SharedBuffer.cpp \
	BasicHashtable.cpp \
	PropertyMap.cpp \
	StopWatch.cpp \
	ZipUtils.cpp \
	Unicode.cpp \
	String8.cpp
