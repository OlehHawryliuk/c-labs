# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/oleh/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/oleh/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/oleh/CLionProjects/c-labs/Lab1/Task11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oleh/CLionProjects/c-labs/Lab1/Task11/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab1.Task11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab1.Task11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab1.Task11.dir/flags.make

CMakeFiles/Lab1.Task11.dir/main.c.o: CMakeFiles/Lab1.Task11.dir/flags.make
CMakeFiles/Lab1.Task11.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oleh/CLionProjects/c-labs/Lab1/Task11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab1.Task11.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab1.Task11.dir/main.c.o   -c /home/oleh/CLionProjects/c-labs/Lab1/Task11/main.c

CMakeFiles/Lab1.Task11.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab1.Task11.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/oleh/CLionProjects/c-labs/Lab1/Task11/main.c > CMakeFiles/Lab1.Task11.dir/main.c.i

CMakeFiles/Lab1.Task11.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab1.Task11.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/oleh/CLionProjects/c-labs/Lab1/Task11/main.c -o CMakeFiles/Lab1.Task11.dir/main.c.s

# Object files for target Lab1.Task11
Lab1_Task11_OBJECTS = \
"CMakeFiles/Lab1.Task11.dir/main.c.o"

# External object files for target Lab1.Task11
Lab1_Task11_EXTERNAL_OBJECTS =

Lab1.Task11: CMakeFiles/Lab1.Task11.dir/main.c.o
Lab1.Task11: CMakeFiles/Lab1.Task11.dir/build.make
Lab1.Task11: CMakeFiles/Lab1.Task11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/oleh/CLionProjects/c-labs/Lab1/Task11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Lab1.Task11"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab1.Task11.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab1.Task11.dir/build: Lab1.Task11

.PHONY : CMakeFiles/Lab1.Task11.dir/build

CMakeFiles/Lab1.Task11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab1.Task11.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab1.Task11.dir/clean

CMakeFiles/Lab1.Task11.dir/depend:
	cd /home/oleh/CLionProjects/c-labs/Lab1/Task11/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oleh/CLionProjects/c-labs/Lab1/Task11 /home/oleh/CLionProjects/c-labs/Lab1/Task11 /home/oleh/CLionProjects/c-labs/Lab1/Task11/cmake-build-debug /home/oleh/CLionProjects/c-labs/Lab1/Task11/cmake-build-debug /home/oleh/CLionProjects/c-labs/Lab1/Task11/cmake-build-debug/CMakeFiles/Lab1.Task11.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab1.Task11.dir/depend

