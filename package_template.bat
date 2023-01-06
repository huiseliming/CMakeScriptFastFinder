@echo off
cd /d %~dp0

cmake -DCMAKE_BUILD_TYPE="Release" -S ../ -B ../package_build -G "Visual Studio 16 2019" -T host=x86 -A win32
cd ../package_build
CALL "C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Auxiliary\Build\vcvars64.bat"
MSBuild.exe ALL_BUILD.vcxproj -property:Configuration=Release
cd ..
mkdir package
cd package_build/bin
tar -cvf ../../package/pkg.zip *

