# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.20.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.20.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/federicocorso/tpa/homework1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/federicocorso/tpa/homework1/build

# Include any dependencies generated for this target.
include CMakeFiles/mainEntry.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mainEntry.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mainEntry.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mainEntry.dir/flags.make

CMakeFiles/mainEntry.dir/main.cpp.o: CMakeFiles/mainEntry.dir/flags.make
CMakeFiles/mainEntry.dir/main.cpp.o: ../main.cpp
CMakeFiles/mainEntry.dir/main.cpp.o: CMakeFiles/mainEntry.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/federicocorso/tpa/homework1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mainEntry.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mainEntry.dir/main.cpp.o -MF CMakeFiles/mainEntry.dir/main.cpp.o.d -o CMakeFiles/mainEntry.dir/main.cpp.o -c /Users/federicocorso/tpa/homework1/main.cpp

CMakeFiles/mainEntry.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainEntry.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/federicocorso/tpa/homework1/main.cpp > CMakeFiles/mainEntry.dir/main.cpp.i

CMakeFiles/mainEntry.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainEntry.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/federicocorso/tpa/homework1/main.cpp -o CMakeFiles/mainEntry.dir/main.cpp.s

CMakeFiles/mainEntry.dir/src/fc_scara.cpp.o: CMakeFiles/mainEntry.dir/flags.make
CMakeFiles/mainEntry.dir/src/fc_scara.cpp.o: ../src/fc_scara.cpp
CMakeFiles/mainEntry.dir/src/fc_scara.cpp.o: CMakeFiles/mainEntry.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/federicocorso/tpa/homework1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mainEntry.dir/src/fc_scara.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mainEntry.dir/src/fc_scara.cpp.o -MF CMakeFiles/mainEntry.dir/src/fc_scara.cpp.o.d -o CMakeFiles/mainEntry.dir/src/fc_scara.cpp.o -c /Users/federicocorso/tpa/homework1/src/fc_scara.cpp

CMakeFiles/mainEntry.dir/src/fc_scara.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainEntry.dir/src/fc_scara.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/federicocorso/tpa/homework1/src/fc_scara.cpp > CMakeFiles/mainEntry.dir/src/fc_scara.cpp.i

CMakeFiles/mainEntry.dir/src/fc_scara.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainEntry.dir/src/fc_scara.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/federicocorso/tpa/homework1/src/fc_scara.cpp -o CMakeFiles/mainEntry.dir/src/fc_scara.cpp.s

CMakeFiles/mainEntry.dir/src/fc_svg.cpp.o: CMakeFiles/mainEntry.dir/flags.make
CMakeFiles/mainEntry.dir/src/fc_svg.cpp.o: ../src/fc_svg.cpp
CMakeFiles/mainEntry.dir/src/fc_svg.cpp.o: CMakeFiles/mainEntry.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/federicocorso/tpa/homework1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mainEntry.dir/src/fc_svg.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mainEntry.dir/src/fc_svg.cpp.o -MF CMakeFiles/mainEntry.dir/src/fc_svg.cpp.o.d -o CMakeFiles/mainEntry.dir/src/fc_svg.cpp.o -c /Users/federicocorso/tpa/homework1/src/fc_svg.cpp

CMakeFiles/mainEntry.dir/src/fc_svg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainEntry.dir/src/fc_svg.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/federicocorso/tpa/homework1/src/fc_svg.cpp > CMakeFiles/mainEntry.dir/src/fc_svg.cpp.i

CMakeFiles/mainEntry.dir/src/fc_svg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainEntry.dir/src/fc_svg.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/federicocorso/tpa/homework1/src/fc_svg.cpp -o CMakeFiles/mainEntry.dir/src/fc_svg.cpp.s

# Object files for target mainEntry
mainEntry_OBJECTS = \
"CMakeFiles/mainEntry.dir/main.cpp.o" \
"CMakeFiles/mainEntry.dir/src/fc_scara.cpp.o" \
"CMakeFiles/mainEntry.dir/src/fc_svg.cpp.o"

# External object files for target mainEntry
mainEntry_EXTERNAL_OBJECTS =

mainEntry: CMakeFiles/mainEntry.dir/main.cpp.o
mainEntry: CMakeFiles/mainEntry.dir/src/fc_scara.cpp.o
mainEntry: CMakeFiles/mainEntry.dir/src/fc_svg.cpp.o
mainEntry: CMakeFiles/mainEntry.dir/build.make
mainEntry: CMakeFiles/mainEntry.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/federicocorso/tpa/homework1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable mainEntry"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mainEntry.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mainEntry.dir/build: mainEntry
.PHONY : CMakeFiles/mainEntry.dir/build

CMakeFiles/mainEntry.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mainEntry.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mainEntry.dir/clean

CMakeFiles/mainEntry.dir/depend:
	cd /Users/federicocorso/tpa/homework1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/federicocorso/tpa/homework1 /Users/federicocorso/tpa/homework1 /Users/federicocorso/tpa/homework1/build /Users/federicocorso/tpa/homework1/build /Users/federicocorso/tpa/homework1/build/CMakeFiles/mainEntry.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mainEntry.dir/depend

