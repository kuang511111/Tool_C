#!/usr/bin/sh
Inc=`pwd`/include
Lib=`pwd`/lib
Src=`pwd`/src
Rul=`pwd`/rules
Bin=`pwd`/bin

export Inc
export Lib
export Src
export Rul
export Bin
if [ $1 == "clean" ];then
make -f build_all.mk clean
else
make -f build_all.mk all
fi
