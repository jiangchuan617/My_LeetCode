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
CMAKE_SOURCE_DIR = "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/flags.make

CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.o: CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/flags.make
CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.o -c "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/main.cpp"

CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/main.cpp" > CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.i

CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/main.cpp" -o CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.s

# Object files for target 315__Count_of_Smaller_Numbers_After_Self
315__Count_of_Smaller_Numbers_After_Self_OBJECTS = \
"CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.o"

# External object files for target 315__Count_of_Smaller_Numbers_After_Self
315__Count_of_Smaller_Numbers_After_Self_EXTERNAL_OBJECTS =

315__Count_of_Smaller_Numbers_After_Self: CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/main.cpp.o
315__Count_of_Smaller_Numbers_After_Self: CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/build.make
315__Count_of_Smaller_Numbers_After_Self: CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 315__Count_of_Smaller_Numbers_After_Self"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/build: 315__Count_of_Smaller_Numbers_After_Self

.PHONY : CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/build

CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/cmake_clean.cmake
.PHONY : CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/clean

CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/depend:
	cd "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self" "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self" "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/cmake-build-debug" "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/cmake-build-debug" "/Users/jiangfeng/Documents/CLion/LeetCode/递归、回溯和分治/315. Count of Smaller Numbers After Self/cmake-build-debug/CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/315__Count_of_Smaller_Numbers_After_Self.dir/depend

