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
CMAKE_SOURCE_DIR = /home/pederyo/Development/c++/dat105/EksamensOving/mutex

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pederyo/Development/c++/dat105/EksamensOving/mutex/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mutex.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mutex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mutex.dir/flags.make

CMakeFiles/mutex.dir/main.cpp.o: CMakeFiles/mutex.dir/flags.make
CMakeFiles/mutex.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pederyo/Development/c++/dat105/EksamensOving/mutex/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mutex.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mutex.dir/main.cpp.o -c /home/pederyo/Development/c++/dat105/EksamensOving/mutex/main.cpp

CMakeFiles/mutex.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mutex.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pederyo/Development/c++/dat105/EksamensOving/mutex/main.cpp > CMakeFiles/mutex.dir/main.cpp.i

CMakeFiles/mutex.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mutex.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pederyo/Development/c++/dat105/EksamensOving/mutex/main.cpp -o CMakeFiles/mutex.dir/main.cpp.s

CMakeFiles/mutex.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/mutex.dir/main.cpp.o.requires

CMakeFiles/mutex.dir/main.cpp.o.provides: CMakeFiles/mutex.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/mutex.dir/build.make CMakeFiles/mutex.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/mutex.dir/main.cpp.o.provides

CMakeFiles/mutex.dir/main.cpp.o.provides.build: CMakeFiles/mutex.dir/main.cpp.o


# Object files for target mutex
mutex_OBJECTS = \
"CMakeFiles/mutex.dir/main.cpp.o"

# External object files for target mutex
mutex_EXTERNAL_OBJECTS =

mutex: CMakeFiles/mutex.dir/main.cpp.o
mutex: CMakeFiles/mutex.dir/build.make
mutex: CMakeFiles/mutex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pederyo/Development/c++/dat105/EksamensOving/mutex/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mutex"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mutex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mutex.dir/build: mutex

.PHONY : CMakeFiles/mutex.dir/build

CMakeFiles/mutex.dir/requires: CMakeFiles/mutex.dir/main.cpp.o.requires

.PHONY : CMakeFiles/mutex.dir/requires

CMakeFiles/mutex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mutex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mutex.dir/clean

CMakeFiles/mutex.dir/depend:
	cd /home/pederyo/Development/c++/dat105/EksamensOving/mutex/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pederyo/Development/c++/dat105/EksamensOving/mutex /home/pederyo/Development/c++/dat105/EksamensOving/mutex /home/pederyo/Development/c++/dat105/EksamensOving/mutex/cmake-build-debug /home/pederyo/Development/c++/dat105/EksamensOving/mutex/cmake-build-debug /home/pederyo/Development/c++/dat105/EksamensOving/mutex/cmake-build-debug/CMakeFiles/mutex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mutex.dir/depend

