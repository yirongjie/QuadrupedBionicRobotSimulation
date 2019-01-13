@echo off
set MATLAB=D:\MATLAB~1
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\MATLAB2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=CPGNetWork_mex
set MEX_NAME=CPGNetWork_mex
set MEX_EXT=.mexw64
call "D:\MATLAB~1\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for CPGNetWork > CPGNetWork_mex.mki
echo COMPILER=%COMPILER%>> CPGNetWork_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> CPGNetWork_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> CPGNetWork_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> CPGNetWork_mex.mki
echo LINKER=%LINKER%>> CPGNetWork_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> CPGNetWork_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> CPGNetWork_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> CPGNetWork_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> CPGNetWork_mex.mki
echo BORLAND=%BORLAND%>> CPGNetWork_mex.mki
echo OMPFLAGS= >> CPGNetWork_mex.mki
echo OMPLINKFLAGS= >> CPGNetWork_mex.mki
echo EMC_COMPILER=lcc64>> CPGNetWork_mex.mki
echo EMC_CONFIG=optim>> CPGNetWork_mex.mki
"D:\MATLAB2016a\bin\win64\gmake" -B -f CPGNetWork_mex.mk
