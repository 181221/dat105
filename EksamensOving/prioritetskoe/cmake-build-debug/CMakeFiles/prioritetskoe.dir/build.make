# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/pederyo/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.4674.29/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/pederyo/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.4674.29/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/prioritetskoe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prioritetskoe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prioritetskoe.dir/flags.make

CMakeFiles/prioritetskoe.dir/main.cpp.o: CMakeFiles/prioritetskoe.dir/flags.make
CMakeFiles/prioritetskoe.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prioritetskoe.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prioritetskoe.dir/main.cpp.o -c /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/main.cpp

CMakeFiles/prioritetskoe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prioritetskoe.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/main.cpp > CMakeFiles/prioritetskoe.dir/main.cpp.i

CMakeFiles/prioritetskoe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prioritetskoe.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/main.cpp -o CMakeFiles/prioritetskoe.dir/main.cpp.s

CMakeFiles/prioritetskoe.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/prioritetskoe.dir/main.cpp.o.requires

CMakeFiles/prioritetskoe.dir/main.cpp.o.provides: CMakeFiles/prioritetskoe.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/prioritetskoe.dir/build.make CMakeFiles/prioritetskoe.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/prioritetskoe.dir/main.cpp.o.provides

CMakeFiles/prioritetskoe.dir/main.cpp.o.provides.build: CMakeFiles/prioritetskoe.dir/main.cpp.o


# Object files for target prioritetskoe
prioritetskoe_OBJECTS = \
"CMakeFiles/prioritetskoe.dir/main.cpp.o"

# External object files for target prioritetskoe
prioritetskoe_EXTERNAL_OBJECTS =

prioritetskoe: CMakeFiles/prioritetskoe.dir/main.cpp.o
prioritetskoe: CMakeFiles/prioritetskoe.dir/build.make
prioritetskoe: CMakeFiles/prioritetskoe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable prioritetskoe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prioritetskoe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prioritetskoe.dir/build: prioritetskoe

.PHONY : CMakeFiles/prioritetskoe.dir/build

CMakeFiles/prioritetskoe.dir/requires: CMakeFiles/prioritetskoe.dir/main.cpp.o.requires

.PHONY : CMakeFiles/prioritetskoe.dir/requires

CMakeFiles/prioritetskoe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prioritetskoe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prioritetskoe.dir/clean

CMakeFiles/prioritetskoe.dir/depend:
	cd /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/cmake-build-debug /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/cmake-build-debug /home/pederyo/Development/c++/dat105/EksamensOving/prioritetskoe/cmake-build-debug/CMakeFiles/prioritetskoe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prioritetskoe.dir/depend
