# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\peder\Documents\Development\c++\dat105\lab2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\lab2.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\lab2.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\lab2.dir\flags.make

CMakeFiles\lab2.dir\main.cpp.obj: CMakeFiles\lab2.dir\flags.make
CMakeFiles\lab2.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab2.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lab2.dir\main.cpp.obj /FdCMakeFiles\lab2.dir\ /FS -c C:\Users\peder\Documents\Development\c++\dat105\lab2\main.cpp
<<

CMakeFiles\lab2.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe > CMakeFiles\lab2.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\peder\Documents\Development\c++\dat105\lab2\main.cpp
<<

CMakeFiles\lab2.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lab2.dir\main.cpp.s /c C:\Users\peder\Documents\Development\c++\dat105\lab2\main.cpp
<<

CMakeFiles\lab2.dir\main.cpp.obj.requires:

.PHONY : CMakeFiles\lab2.dir\main.cpp.obj.requires

CMakeFiles\lab2.dir\main.cpp.obj.provides: CMakeFiles\lab2.dir\main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\lab2.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\lab2.dir\main.cpp.obj.provides.build
.PHONY : CMakeFiles\lab2.dir\main.cpp.obj.provides

CMakeFiles\lab2.dir\main.cpp.obj.provides.build: CMakeFiles\lab2.dir\main.cpp.obj


CMakeFiles\lab2.dir\Spiller.cpp.obj: CMakeFiles\lab2.dir\flags.make
CMakeFiles\lab2.dir\Spiller.cpp.obj: ..\Spiller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab2.dir/Spiller.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lab2.dir\Spiller.cpp.obj /FdCMakeFiles\lab2.dir\ /FS -c C:\Users\peder\Documents\Development\c++\dat105\lab2\Spiller.cpp
<<

CMakeFiles\lab2.dir\Spiller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Spiller.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe > CMakeFiles\lab2.dir\Spiller.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\peder\Documents\Development\c++\dat105\lab2\Spiller.cpp
<<

CMakeFiles\lab2.dir\Spiller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Spiller.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lab2.dir\Spiller.cpp.s /c C:\Users\peder\Documents\Development\c++\dat105\lab2\Spiller.cpp
<<

CMakeFiles\lab2.dir\Spiller.cpp.obj.requires:

.PHONY : CMakeFiles\lab2.dir\Spiller.cpp.obj.requires

CMakeFiles\lab2.dir\Spiller.cpp.obj.provides: CMakeFiles\lab2.dir\Spiller.cpp.obj.requires
	$(MAKE) -f CMakeFiles\lab2.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\lab2.dir\Spiller.cpp.obj.provides.build
.PHONY : CMakeFiles\lab2.dir\Spiller.cpp.obj.provides

CMakeFiles\lab2.dir\Spiller.cpp.obj.provides.build: CMakeFiles\lab2.dir\Spiller.cpp.obj


CMakeFiles\lab2.dir\Konto.cpp.obj: CMakeFiles\lab2.dir\flags.make
CMakeFiles\lab2.dir\Konto.cpp.obj: ..\Konto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab2.dir/Konto.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lab2.dir\Konto.cpp.obj /FdCMakeFiles\lab2.dir\ /FS -c C:\Users\peder\Documents\Development\c++\dat105\lab2\Konto.cpp
<<

CMakeFiles\lab2.dir\Konto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Konto.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe > CMakeFiles\lab2.dir\Konto.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\peder\Documents\Development\c++\dat105\lab2\Konto.cpp
<<

CMakeFiles\lab2.dir\Konto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Konto.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lab2.dir\Konto.cpp.s /c C:\Users\peder\Documents\Development\c++\dat105\lab2\Konto.cpp
<<

CMakeFiles\lab2.dir\Konto.cpp.obj.requires:

.PHONY : CMakeFiles\lab2.dir\Konto.cpp.obj.requires

CMakeFiles\lab2.dir\Konto.cpp.obj.provides: CMakeFiles\lab2.dir\Konto.cpp.obj.requires
	$(MAKE) -f CMakeFiles\lab2.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\lab2.dir\Konto.cpp.obj.provides.build
.PHONY : CMakeFiles\lab2.dir\Konto.cpp.obj.provides

CMakeFiles\lab2.dir\Konto.cpp.obj.provides.build: CMakeFiles\lab2.dir\Konto.cpp.obj


CMakeFiles\lab2.dir\Transaksjon.cpp.obj: CMakeFiles\lab2.dir\flags.make
CMakeFiles\lab2.dir\Transaksjon.cpp.obj: ..\Transaksjon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab2.dir/Transaksjon.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lab2.dir\Transaksjon.cpp.obj /FdCMakeFiles\lab2.dir\ /FS -c C:\Users\peder\Documents\Development\c++\dat105\lab2\Transaksjon.cpp
<<

CMakeFiles\lab2.dir\Transaksjon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Transaksjon.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe > CMakeFiles\lab2.dir\Transaksjon.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\peder\Documents\Development\c++\dat105\lab2\Transaksjon.cpp
<<

CMakeFiles\lab2.dir\Transaksjon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Transaksjon.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lab2.dir\Transaksjon.cpp.s /c C:\Users\peder\Documents\Development\c++\dat105\lab2\Transaksjon.cpp
<<

CMakeFiles\lab2.dir\Transaksjon.cpp.obj.requires:

.PHONY : CMakeFiles\lab2.dir\Transaksjon.cpp.obj.requires

CMakeFiles\lab2.dir\Transaksjon.cpp.obj.provides: CMakeFiles\lab2.dir\Transaksjon.cpp.obj.requires
	$(MAKE) -f CMakeFiles\lab2.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\lab2.dir\Transaksjon.cpp.obj.provides.build
.PHONY : CMakeFiles\lab2.dir\Transaksjon.cpp.obj.provides

CMakeFiles\lab2.dir\Transaksjon.cpp.obj.provides.build: CMakeFiles\lab2.dir\Transaksjon.cpp.obj


# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles\lab2.dir\main.cpp.obj" \
"CMakeFiles\lab2.dir\Spiller.cpp.obj" \
"CMakeFiles\lab2.dir\Konto.cpp.obj" \
"CMakeFiles\lab2.dir\Transaksjon.cpp.obj"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

lab2.exe: CMakeFiles\lab2.dir\main.cpp.obj
lab2.exe: CMakeFiles\lab2.dir\Spiller.cpp.obj
lab2.exe: CMakeFiles\lab2.dir\Konto.cpp.obj
lab2.exe: CMakeFiles\lab2.dir\Transaksjon.cpp.obj
lab2.exe: CMakeFiles\lab2.dir\build.make
lab2.exe: CMakeFiles\lab2.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable lab2.exe"
	"C:\Program Files\JetBrains\CLion 2017.3.1\bin\cmake\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\lab2.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1412~1.258\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\lab2.dir\objects1.rsp @<<
 /out:lab2.exe /implib:lab2.lib /pdb:C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug\lab2.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\lab2.dir\build: lab2.exe

.PHONY : CMakeFiles\lab2.dir\build

CMakeFiles\lab2.dir\requires: CMakeFiles\lab2.dir\main.cpp.obj.requires
CMakeFiles\lab2.dir\requires: CMakeFiles\lab2.dir\Spiller.cpp.obj.requires
CMakeFiles\lab2.dir\requires: CMakeFiles\lab2.dir\Konto.cpp.obj.requires
CMakeFiles\lab2.dir\requires: CMakeFiles\lab2.dir\Transaksjon.cpp.obj.requires

.PHONY : CMakeFiles\lab2.dir\requires

CMakeFiles\lab2.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab2.dir\cmake_clean.cmake
.PHONY : CMakeFiles\lab2.dir\clean

CMakeFiles\lab2.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\peder\Documents\Development\c++\dat105\lab2 C:\Users\peder\Documents\Development\c++\dat105\lab2 C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug C:\Users\peder\Documents\Development\c++\dat105\lab2\cmake-build-debug\CMakeFiles\lab2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\lab2.dir\depend

