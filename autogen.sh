#!/bin/sh
libtoolize -c -i
aclocal
autoconf
automake -a -c
