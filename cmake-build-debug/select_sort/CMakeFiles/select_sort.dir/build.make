# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\code\publicGithub\baseAlgorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\publicGithub\baseAlgorithm\cmake-build-debug

# Include any dependencies generated for this target.
include select_sort/CMakeFiles/select_sort.dir/depend.make

# Include the progress variables for this target.
include select_sort/CMakeFiles/select_sort.dir/progress.make

# Include the compile flags for this target's objects.
include select_sort/CMakeFiles/select_sort.dir/flags.make

select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj: select_sort/CMakeFiles/select_sort.dir/flags.make
select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj: ../select_sort/select_sort_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\publicGithub\baseAlgorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj"
	cd /d D:\code\publicGithub\baseAlgorithm\cmake-build-debug\select_sort && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\select_sort.dir\select_sort_test.cpp.obj -c D:\code\publicGithub\baseAlgorithm\select_sort\select_sort_test.cpp

select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/select_sort.dir/select_sort_test.cpp.i"
	cd /d D:\code\publicGithub\baseAlgorithm\cmake-build-debug\select_sort && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\publicGithub\baseAlgorithm\select_sort\select_sort_test.cpp > CMakeFiles\select_sort.dir\select_sort_test.cpp.i

select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/select_sort.dir/select_sort_test.cpp.s"
	cd /d D:\code\publicGithub\baseAlgorithm\cmake-build-debug\select_sort && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\publicGithub\baseAlgorithm\select_sort\select_sort_test.cpp -o CMakeFiles\select_sort.dir\select_sort_test.cpp.s

select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj.requires:

.PHONY : select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj.requires

select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj.provides: select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj.requires
	$(MAKE) -f select_sort\CMakeFiles\select_sort.dir\build.make select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj.provides.build
.PHONY : select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj.provides

select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj.provides.build: select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj


# Object files for target select_sort
select_sort_OBJECTS = \
"CMakeFiles/select_sort.dir/select_sort_test.cpp.obj"

# External object files for target select_sort
select_sort_EXTERNAL_OBJECTS =

select_sort/libselect_sort.a: select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj
select_sort/libselect_sort.a: select_sort/CMakeFiles/select_sort.dir/build.make
select_sort/libselect_sort.a: select_sort/CMakeFiles/select_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\publicGithub\baseAlgorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libselect_sort.a"
	cd /d D:\code\publicGithub\baseAlgorithm\cmake-build-debug\select_sort && $(CMAKE_COMMAND) -P CMakeFiles\select_sort.dir\cmake_clean_target.cmake
	cd /d D:\code\publicGithub\baseAlgorithm\cmake-build-debug\select_sort && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\select_sort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
select_sort/CMakeFiles/select_sort.dir/build: select_sort/libselect_sort.a

.PHONY : select_sort/CMakeFiles/select_sort.dir/build

select_sort/CMakeFiles/select_sort.dir/requires: select_sort/CMakeFiles/select_sort.dir/select_sort_test.cpp.obj.requires

.PHONY : select_sort/CMakeFiles/select_sort.dir/requires

select_sort/CMakeFiles/select_sort.dir/clean:
	cd /d D:\code\publicGithub\baseAlgorithm\cmake-build-debug\select_sort && $(CMAKE_COMMAND) -P CMakeFiles\select_sort.dir\cmake_clean.cmake
.PHONY : select_sort/CMakeFiles/select_sort.dir/clean

select_sort/CMakeFiles/select_sort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\publicGithub\baseAlgorithm D:\code\publicGithub\baseAlgorithm\select_sort D:\code\publicGithub\baseAlgorithm\cmake-build-debug D:\code\publicGithub\baseAlgorithm\cmake-build-debug\select_sort D:\code\publicGithub\baseAlgorithm\cmake-build-debug\select_sort\CMakeFiles\select_sort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : select_sort/CMakeFiles/select_sort.dir/depend
