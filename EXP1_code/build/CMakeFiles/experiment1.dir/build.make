# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/build

# Include any dependencies generated for this target.
include CMakeFiles/experiment1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/experiment1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/experiment1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/experiment1.dir/flags.make

CMakeFiles/experiment1.dir/main.cpp.o: CMakeFiles/experiment1.dir/flags.make
CMakeFiles/experiment1.dir/main.cpp.o: ../main.cpp
CMakeFiles/experiment1.dir/main.cpp.o: CMakeFiles/experiment1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/experiment1.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/experiment1.dir/main.cpp.o -MF CMakeFiles/experiment1.dir/main.cpp.o.d -o CMakeFiles/experiment1.dir/main.cpp.o -c /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/main.cpp

CMakeFiles/experiment1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/experiment1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/main.cpp > CMakeFiles/experiment1.dir/main.cpp.i

CMakeFiles/experiment1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/experiment1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/main.cpp -o CMakeFiles/experiment1.dir/main.cpp.s

# Object files for target experiment1
experiment1_OBJECTS = \
"CMakeFiles/experiment1.dir/main.cpp.o"

# External object files for target experiment1
experiment1_EXTERNAL_OBJECTS =

experiment1: CMakeFiles/experiment1.dir/main.cpp.o
experiment1: CMakeFiles/experiment1.dir/build.make
experiment1: CMakeFiles/experiment1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable experiment1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/experiment1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/experiment1.dir/build: experiment1
.PHONY : CMakeFiles/experiment1.dir/build

CMakeFiles/experiment1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/experiment1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/experiment1.dir/clean

CMakeFiles/experiment1.dir/depend:
	cd /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/build /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/build /media/lphnb/OS/Users/lph/Desktop/课程/算法设计与分析/实验1/EXP1_code/build/CMakeFiles/experiment1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/experiment1.dir/depend
