# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jiangfeng/Documents/CLion/LeetCode/test_02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jiangfeng/Documents/CLion/LeetCode/test_02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_02.dir/flags.make

CMakeFiles/test_02.dir/main.cpp.o: CMakeFiles/test_02.dir/flags.make
CMakeFiles/test_02.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jiangfeng/Documents/CLion/LeetCode/test_02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_02.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_02.dir/main.cpp.o -c /Users/jiangfeng/Documents/CLion/LeetCode/test_02/main.cpp

CMakeFiles/test_02.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_02.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jiangfeng/Documents/CLion/LeetCode/test_02/main.cpp > CMakeFiles/test_02.dir/main.cpp.i

CMakeFiles/test_02.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_02.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jiangfeng/Documents/CLion/LeetCode/test_02/main.cpp -o CMakeFiles/test_02.dir/main.cpp.s

# Object files for target test_02
test_02_OBJECTS = \
"CMakeFiles/test_02.dir/main.cpp.o"

# External object files for target test_02
test_02_EXTERNAL_OBJECTS =

test_02: CMakeFiles/test_02.dir/main.cpp.o
test_02: CMakeFiles/test_02.dir/build.make
test_02: CMakeFiles/test_02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jiangfeng/Documents/CLion/LeetCode/test_02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_02.dir/build: test_02

.PHONY : CMakeFiles/test_02.dir/build

CMakeFiles/test_02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_02.dir/clean

CMakeFiles/test_02.dir/depend:
	cd /Users/jiangfeng/Documents/CLion/LeetCode/test_02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jiangfeng/Documents/CLion/LeetCode/test_02 /Users/jiangfeng/Documents/CLion/LeetCode/test_02 /Users/jiangfeng/Documents/CLion/LeetCode/test_02/cmake-build-debug /Users/jiangfeng/Documents/CLion/LeetCode/test_02/cmake-build-debug /Users/jiangfeng/Documents/CLion/LeetCode/test_02/cmake-build-debug/CMakeFiles/test_02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_02.dir/depend

