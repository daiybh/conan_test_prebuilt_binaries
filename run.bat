@echo off

set BASEDIR=%~dp0
PUSHD %BASEDIR%
cd %~dp0\myhellolib

RMDIR /Q /S build
conan build . -s build_type=Debug

if %ERRORLEVEL% NEQ 0 (
  echo "ERROR: Building package failed"
  exit /b %ERRORLEVEL%
)

rem copy myhellolib/include/myhellolib.h to Prebuild_binaries/vendor_hello_library/macos/armv8/include


copy %~dp0\myhellolib\include\myhellolib.h %~dp0\prebuilt_binaries\vendor_hello_library\Windows\x86_64\include\myhellolib.h
copy %~dp0\myhellolib\build\Debug\myhellolib.lib %~dp0\prebuilt_binaries\vendor_hello_library\Windows\x86_64\myhellolib.lib


cd %~dp0\prebuilt_binaries

conan export-pkg . -s os="Windows" -s arch="x86_64"

if %ERRORLEVEL% NEQ 0 (
  echo "ERROR: Exporting package failed"
  exit /b %ERRORLEVEL%
)

cd %~dp0\testApp

RMDIR /Q /S build
conan build . --output-folder=build --build=missing  -s build_type=Debug

if %ERRORLEVEL% NEQ 0 (
  echo "ERROR: Building package failed"
  exit /b %ERRORLEVEL%
)

popd

echo "Finish"