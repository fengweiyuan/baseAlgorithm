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
include CMakeFiles/union_find_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/union_find_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/union_find_test.dir/flags.make

CMakeFiles/union_find_test.dir/union_find_test.cpp.obj: CMakeFiles/union_find_test.dir/flags.make
CMakeFiles/union_find_test.dir/union_find_test.cpp.obj: ../union_find_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\publicGithub\baseAlgorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/union_find_test.dir/union_find_test.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\union_find_test.dir\union_find_test.cpp.obj -c D:\code\publicGithub\baseAlgorithm\union_find_test.cpp

CMakeFiles/union_find_test.dir/union_find_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/union_find_test.dir/union_find_test.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\publicGithub\baseAlgorithm\union_find_test.cpp > CMakeFiles\union_find_test.dir\union_find_test.cpp.i

CMakeFiles/union_find_test.dir/union_find_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/union_find_test.dir/union_find_test.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\publicGithub\baseAlgorithm\union_find_test.cpp -o CMakeFiles\union_find_test.dir\union_find_test.cpp.s

CMakeFiles/union_find_test.dir/union_find_test.cpp.obj.requires:

.PHONY : CMakeFiles/union_find_test.dir/union_find_test.cpp.obj.requires

CMakeFiles/union_find_test.dir/union_find_test.cpp.obj.provides: CMakeFiles/union_find_test.dir/union_find_test.cpp.obj.requires
	$(MAKE) -f CMakeFiles\union_find_test.dir\build.make CMakeFiles/union_find_test.dir/union_find_test.cpp.obj.provides.build
.PHONY : CMakeFiles/union_find_test.dir/union_find_test.cpp.obj.provides

CMakeFiles/union_find_test.dir/union_find_test.cpp.obj.provides.build: CMakeFiles/union_find_test.dir/union_find_test.cpp.obj


CMakeFiles/union_find_test.dir/union_find.cpp.obj: CMakeFiles/union_find_test.dir/flags.make
CMakeFiles/union_find_test.dir/union_find.cpp.obj: ../union_find.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\publicGithub\baseAlgorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/union_find_test.dir/union_find.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\union_find_test.dir\union_find.cpp.obj -c D:\code\publicGithub\baseAlgorithm\union_find.cpp

CMakeFiles/union_find_test.dir/union_find.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/union_find_test.dir/union_find.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\publicGithub\baseAlgorithm\union_find.cpp > CMakeFiles\union_find_test.dir\union_find.cpp.i

CMakeFiles/union_find_test.dir/union_find.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/union_find_test.dir/union_find.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\publicGithub\baseAlgorithm\union_find.cpp -o CMakeFiles\union_find_test.dir\union_find.cpp.s

CMakeFiles/union_find_test.dir/union_find.cpp.obj.requires:

.PHONY : CMakeFiles/union_find_test.dir/union_find.cpp.obj.requires

CMakeFiles/union_find_test.dir/union_find.cpp.obj.provides: CMakeFiles/union_find_test.dir/union_find.cpp.obj.requires
	$(MAKE) -f CMakeFiles\union_find_test.dir\build.make CMakeFiles/union_find_test.dir/union_find.cpp.obj.provides.build
.PHONY : CMakeFiles/union_find_test.dir/union_find.cpp.obj.provides

CMakeFiles/union_find_test.dir/union_find.cpp.obj.provides.build: CMakeFiles/union_find_test.dir/union_find.cpp.obj


# Object files for target union_find_test
union_find_test_OBJECTS = \
"CMakeFiles/union_find_test.dir/union_find_test.cpp.obj" \
"CMakeFiles/union_find_test.dir/union_find.cpp.obj"

# External object files for target union_find_test
union_find_test_EXTERNAL_OBJECTS =

union_find_test.exe: CMakeFiles/union_find_test.dir/union_find_test.cpp.obj
union_find_test.exe: CMakeFiles/union_find_test.dir/union_find.cpp.obj
union_find_test.exe: CMakeFiles/union_find_test.dir/build.make
union_find_test.exe: CMakeFiles/union_find_test.dir/linklibs.rsp
union_find_test.exe: CMakeFiles/union_find_test.dir/objects1.rsp
union_find_test.exe: CMakeFiles/union_find_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\publicGithub\baseAlgorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable union_find_test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\union_find_test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/union_find_test.dir/build: union_find_test.exe

.PHONY : CMakeFiles/union_find_test.dir/build

CMakeFiles/union_find_test.dir/requires: CMakeFiles/union_find_test.dir/union_find_test.cpp.obj.requires
CMakeFiles/union_find_test.dir/requires: CMakeFiles/union_find_test.dir/union_find.cpp.obj.requires

.PHONY : CMakeFiles/union_find_test.dir/requires

CMakeFiles/union_find_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\union_find_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles/union_find_test.dir/clean

CMakeFiles/union_find_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\publicGithub\baseAlgorithm D:\code\publicGithub\baseAlgorithm D:\code\publicGithub\baseAlgorithm\cmake-build-debug D:\code\publicGithub\baseAlgorithm\cmake-build-debug D:\code\publicGithub\baseAlgorithm\cmake-build-debug\CMakeFiles\union_find_test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/union_find_test.dir/depend
