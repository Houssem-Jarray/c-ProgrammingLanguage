# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/275/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/275/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/houssem/CLionProjects/CodeForces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/houssem/CLionProjects/CodeForces/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CodeForces.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CodeForces.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CodeForces.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CodeForces.dir/flags.make

CMakeFiles/CodeForces.dir/enumClass/main.cpp.o: CMakeFiles/CodeForces.dir/flags.make
CMakeFiles/CodeForces.dir/enumClass/main.cpp.o: /home/houssem/CLionProjects/CodeForces/enumClass/main.cpp
CMakeFiles/CodeForces.dir/enumClass/main.cpp.o: CMakeFiles/CodeForces.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/houssem/CLionProjects/CodeForces/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CodeForces.dir/enumClass/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CodeForces.dir/enumClass/main.cpp.o -MF CMakeFiles/CodeForces.dir/enumClass/main.cpp.o.d -o CMakeFiles/CodeForces.dir/enumClass/main.cpp.o -c /home/houssem/CLionProjects/CodeForces/enumClass/main.cpp

CMakeFiles/CodeForces.dir/enumClass/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CodeForces.dir/enumClass/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/houssem/CLionProjects/CodeForces/enumClass/main.cpp > CMakeFiles/CodeForces.dir/enumClass/main.cpp.i

CMakeFiles/CodeForces.dir/enumClass/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CodeForces.dir/enumClass/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/houssem/CLionProjects/CodeForces/enumClass/main.cpp -o CMakeFiles/CodeForces.dir/enumClass/main.cpp.s

# Object files for target CodeForces
CodeForces_OBJECTS = \
"CMakeFiles/CodeForces.dir/enumClass/main.cpp.o"

# External object files for target CodeForces
CodeForces_EXTERNAL_OBJECTS =

CodeForces: CMakeFiles/CodeForces.dir/enumClass/main.cpp.o
CodeForces: CMakeFiles/CodeForces.dir/build.make
CodeForces: CMakeFiles/CodeForces.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/houssem/CLionProjects/CodeForces/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CodeForces"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CodeForces.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CodeForces.dir/build: CodeForces
.PHONY : CMakeFiles/CodeForces.dir/build

CMakeFiles/CodeForces.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CodeForces.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CodeForces.dir/clean

CMakeFiles/CodeForces.dir/depend:
	cd /home/houssem/CLionProjects/CodeForces/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/houssem/CLionProjects/CodeForces /home/houssem/CLionProjects/CodeForces /home/houssem/CLionProjects/CodeForces/cmake-build-debug /home/houssem/CLionProjects/CodeForces/cmake-build-debug /home/houssem/CLionProjects/CodeForces/cmake-build-debug/CMakeFiles/CodeForces.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CodeForces.dir/depend

