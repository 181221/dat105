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
CMAKE_SOURCE_DIR = /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Dobbeltkjedetliste.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Dobbeltkjedetliste.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dobbeltkjedetliste.dir/flags.make

CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o: CMakeFiles/Dobbeltkjedetliste.dir/flags.make
CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o -c /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/main.cpp

CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/main.cpp > CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.i

CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/main.cpp -o CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.s

CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o.requires

CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o.provides: CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dobbeltkjedetliste.dir/build.make CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o.provides

CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o.provides.build: CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o


# Object files for target Dobbeltkjedetliste
Dobbeltkjedetliste_OBJECTS = \
"CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o"

# External object files for target Dobbeltkjedetliste
Dobbeltkjedetliste_EXTERNAL_OBJECTS =

Dobbeltkjedetliste: CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o
Dobbeltkjedetliste: CMakeFiles/Dobbeltkjedetliste.dir/build.make
Dobbeltkjedetliste: CMakeFiles/Dobbeltkjedetliste.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Dobbeltkjedetliste"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dobbeltkjedetliste.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dobbeltkjedetliste.dir/build: Dobbeltkjedetliste

.PHONY : CMakeFiles/Dobbeltkjedetliste.dir/build

CMakeFiles/Dobbeltkjedetliste.dir/requires: CMakeFiles/Dobbeltkjedetliste.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Dobbeltkjedetliste.dir/requires

CMakeFiles/Dobbeltkjedetliste.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dobbeltkjedetliste.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dobbeltkjedetliste.dir/clean

CMakeFiles/Dobbeltkjedetliste.dir/depend:
	cd /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/cmake-build-debug /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/cmake-build-debug /home/pederyo/Development/c++/dat105/lab3/Dobbeltkjedetliste/cmake-build-debug/CMakeFiles/Dobbeltkjedetliste.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dobbeltkjedetliste.dir/depend
