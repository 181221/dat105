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
CMAKE_SOURCE_DIR = /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fr0316.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fr0316.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fr0316.dir/flags.make

CMakeFiles/fr0316.dir/main.cpp.o: CMakeFiles/fr0316.dir/flags.make
CMakeFiles/fr0316.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fr0316.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fr0316.dir/main.cpp.o -c /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/main.cpp

CMakeFiles/fr0316.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fr0316.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/main.cpp > CMakeFiles/fr0316.dir/main.cpp.i

CMakeFiles/fr0316.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fr0316.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/main.cpp -o CMakeFiles/fr0316.dir/main.cpp.s

CMakeFiles/fr0316.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/fr0316.dir/main.cpp.o.requires

CMakeFiles/fr0316.dir/main.cpp.o.provides: CMakeFiles/fr0316.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/fr0316.dir/build.make CMakeFiles/fr0316.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/fr0316.dir/main.cpp.o.provides

CMakeFiles/fr0316.dir/main.cpp.o.provides.build: CMakeFiles/fr0316.dir/main.cpp.o


# Object files for target fr0316
fr0316_OBJECTS = \
"CMakeFiles/fr0316.dir/main.cpp.o"

# External object files for target fr0316
fr0316_EXTERNAL_OBJECTS =

fr0316: CMakeFiles/fr0316.dir/main.cpp.o
fr0316: CMakeFiles/fr0316.dir/build.make
fr0316: CMakeFiles/fr0316.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable fr0316"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fr0316.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fr0316.dir/build: fr0316

.PHONY : CMakeFiles/fr0316.dir/build

CMakeFiles/fr0316.dir/requires: CMakeFiles/fr0316.dir/main.cpp.o.requires

.PHONY : CMakeFiles/fr0316.dir/requires

CMakeFiles/fr0316.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fr0316.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fr0316.dir/clean

CMakeFiles/fr0316.dir/depend:
	cd /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316 /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316 /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/cmake-build-debug /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/cmake-build-debug /home/pederyo/Development/c++/dat105/algoritmer_grafer/fr0316/cmake-build-debug/CMakeFiles/fr0316.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fr0316.dir/depend
