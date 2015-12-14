#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT(android-utils, 4.1.2, [cjacker@gmail.com])

AM_INIT_AUTOMAKE([1.10 no-define no-dist-gzip dist-bzip2 tar-ustar])
AC_CONFIG_MACRO_DIR([m4])
AM_MAINTAINER_MODE

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AM_PROG_CC_C_O
AM_PROG_LEX
AC_PROG_YACC
# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stddef.h stdint.h stdlib.h])

LT_PREREQ([2.2.6])
LT_INIT(disable-shared)

# Checks for typedefs, structures, and compiler characteristics.
#AC_CHECK_HEADER_STDBOOL
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_CHOWN
AC_FUNC_FORK
AC_CHECK_FUNCS([memset strdup strrchr strtoul])
#AC_CHECK_LIB([z],[crc32],[
#         ZLIB_LIBS=-lz
#         ])
#AC_SUBST(ZLIB_LIBS)
#
#AC_CHECK_LIB([png],[png_create_read_struct],[
#         PNG_LIBS=-lpng
#         ])
#AC_SUBST(PNG_LIBS)
#
#AC_CHECK_LIB([m],[pow],[
#         M_LIBS=-lm
#         ])
#AC_SUBST(M_LIBS)


AC_OUTPUT([
	   Makefile
	   libcutils/Makefile
	   libzipfile/Makefile
	   libmincrypt/Makefile
       adb/Makefile
	   libhost/Makefile
       acp/Makefile
	   liblog/Makefile
	   libutils/Makefile
       zipalign/Makefile
       aapt/Makefile
       aidl/Makefile
])
