noinst_LTLIBRARIES=libcutils.la

libcutils_la_CFLAGS = -DHAVE_SYS_UIO_H -DHAVE_PTHREADS -DHAVE_SCHED_H -DHAVE_SYS_UIO_H -DHAVE_IOCTL -DHAVE_TM_GMTOFF -DANDROID_SMP=1 

libcutils_la_CFLAGS += -I$(top_srcdir)/libcutils/include  -I$(top_srcdir)/libcutils

libcutils_la_SOURCES= \
	partition_utils.c \
	socket_local_server.c \
	ashmem-host.c \
	memory.c \
	cpu_info.c \
	process_name.c \
	socket_network_client.c \
	socket_inaddr_any_server.c \
	qsort_r_compat.c \
	qtaguid.c \
	config_utils.c \
	hashmap.c \
	threads.c \
	socket_local_client.c \
	sched_policy.c \
	str_parms.c \
	open_memstream.c \
	socket_loopback_client.c \
	array.c \
	native_handle.c \
	selector.c \
	sockets.c \
	socket_loopback_server.c \
	strdup16to8.c \
	atomic.c \
	load_file.c \
	strdup8to16.c \
	uio.c \
	buffer.c \
	properties.c \
	record_stream.c \
	klog.c \
	list.c \
	iosched_policy.c \
	zygote.c \
	abort_socket.c 

noinst_HEADERS =	\
	buffer.h  \
	loghack.h  \
	socket_local.h  
