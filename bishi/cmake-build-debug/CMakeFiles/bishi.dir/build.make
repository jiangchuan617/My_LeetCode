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
CMAKE_SOURCE_DIR = /Users/jiangfeng/Documents/CLion/LeetCode/bishi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jiangfeng/Documents/CLion/LeetCode/bishi/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bishi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bishi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bishi.dir/flags.make

CMakeFiles/bishi.dir/main.cpp.o: CMakeFiles/bishi.dir/flags.make
CMakeFiles/bishi.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jiangfeng/Documents/CLion/LeetCode/bishi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bishi.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bishi.dir/main.cpp.o -c /Users/jiangfeng/Documents/CLion/LeetCode/bishi/main.cpp

CMakeFiles/bishi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bishi.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jiangfeng/Documents/CLion/LeetCode/bishi/main.cpp > CMakeFiles/bishi.dir/main.cpp.i

CMakeFiles/bishi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bishi.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jiangfeng/Documents/CLion/LeetCode/bishi/main.cpp -o CMakeFiles/bishi.dir/main.cpp.s

# Object files for target bishi
bishi_OBJECTS = \
"CMakeFiles/bishi.dir/main.cpp.o"

# External object files for target bishi
bishi_EXTERNAL_OBJECTS =

bishi: CMakeFiles/bishi.dir/main.cpp.o
bishi: CMakeFiles/bishi.dir/build.make
bishi: CMakeFiles/bishi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jiangfeng/Documents/CLion/LeetCode/bishi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bishi"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bishi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bishi.dir/build: bishi

.PHONY : CMakeFiles/bishi.dir/build

CMakeFiles/bishi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bishi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bishi.dir/clean

CMakeFiles/bishi.dir/depend:
	cd /Users/jiangfeng/Documents/CLion/LeetCode/bishi/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jiangfeng/Documents/CLion/LeetCode/bishi /Users/jiangfeng/Documents/CLion/LeetCode/bishi /Users/jiangfeng/Documents/CLion/LeetCode/bishi/cmake-build-debug /Users/jiangfeng/Documents/CLion/LeetCode/bishi/cmake-build-debug /Users/jiangfeng/Documents/CLion/LeetCode/bishi/cmake-build-debug/CMakeFiles/bishi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bishi.dir/depend
