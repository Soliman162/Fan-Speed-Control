# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/soliman/AVR/ATmega32/AVR_COTS/Test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/soliman/AVR/ATmega32/AVR_COTS/Test/build

# Utility rule file for remove.

# Include any custom commands dependencies for this target.
include CMakeFiles/remove.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/remove.dir/progress.make

CMakeFiles/remove:
	rm -rf /home/soliman/AVR/ATmega32/AVR_COTS/Test/build/*

remove: CMakeFiles/remove
remove: CMakeFiles/remove.dir/build.make
.PHONY : remove

# Rule to build all files generated by this target.
CMakeFiles/remove.dir/build: remove
.PHONY : CMakeFiles/remove.dir/build

CMakeFiles/remove.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/remove.dir/cmake_clean.cmake
.PHONY : CMakeFiles/remove.dir/clean

CMakeFiles/remove.dir/depend:
	cd /home/soliman/AVR/ATmega32/AVR_COTS/Test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/soliman/AVR/ATmega32/AVR_COTS/Test /home/soliman/AVR/ATmega32/AVR_COTS/Test /home/soliman/AVR/ATmega32/AVR_COTS/Test/build /home/soliman/AVR/ATmega32/AVR_COTS/Test/build /home/soliman/AVR/ATmega32/AVR_COTS/Test/build/CMakeFiles/remove.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/remove.dir/depend

