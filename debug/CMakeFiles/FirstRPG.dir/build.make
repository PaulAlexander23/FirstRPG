# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/paul/Repositories/FirstRPG

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/paul/Repositories/FirstRPG/debug

# Include any dependencies generated for this target.
include CMakeFiles/FirstRPG.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FirstRPG.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FirstRPG.dir/flags.make

CMakeFiles/FirstRPG.dir/src/main.cpp.o: CMakeFiles/FirstRPG.dir/flags.make
CMakeFiles/FirstRPG.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paul/Repositories/FirstRPG/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FirstRPG.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FirstRPG.dir/src/main.cpp.o -c /home/paul/Repositories/FirstRPG/src/main.cpp

CMakeFiles/FirstRPG.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FirstRPG.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/paul/Repositories/FirstRPG/src/main.cpp > CMakeFiles/FirstRPG.dir/src/main.cpp.i

CMakeFiles/FirstRPG.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FirstRPG.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/paul/Repositories/FirstRPG/src/main.cpp -o CMakeFiles/FirstRPG.dir/src/main.cpp.s

CMakeFiles/FirstRPG.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/FirstRPG.dir/src/main.cpp.o.requires

CMakeFiles/FirstRPG.dir/src/main.cpp.o.provides: CMakeFiles/FirstRPG.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/FirstRPG.dir/build.make CMakeFiles/FirstRPG.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/FirstRPG.dir/src/main.cpp.o.provides

CMakeFiles/FirstRPG.dir/src/main.cpp.o.provides.build: CMakeFiles/FirstRPG.dir/src/main.cpp.o


CMakeFiles/FirstRPG.dir/src/graphics.cpp.o: CMakeFiles/FirstRPG.dir/flags.make
CMakeFiles/FirstRPG.dir/src/graphics.cpp.o: ../src/graphics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paul/Repositories/FirstRPG/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FirstRPG.dir/src/graphics.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FirstRPG.dir/src/graphics.cpp.o -c /home/paul/Repositories/FirstRPG/src/graphics.cpp

CMakeFiles/FirstRPG.dir/src/graphics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FirstRPG.dir/src/graphics.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/paul/Repositories/FirstRPG/src/graphics.cpp > CMakeFiles/FirstRPG.dir/src/graphics.cpp.i

CMakeFiles/FirstRPG.dir/src/graphics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FirstRPG.dir/src/graphics.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/paul/Repositories/FirstRPG/src/graphics.cpp -o CMakeFiles/FirstRPG.dir/src/graphics.cpp.s

CMakeFiles/FirstRPG.dir/src/graphics.cpp.o.requires:

.PHONY : CMakeFiles/FirstRPG.dir/src/graphics.cpp.o.requires

CMakeFiles/FirstRPG.dir/src/graphics.cpp.o.provides: CMakeFiles/FirstRPG.dir/src/graphics.cpp.o.requires
	$(MAKE) -f CMakeFiles/FirstRPG.dir/build.make CMakeFiles/FirstRPG.dir/src/graphics.cpp.o.provides.build
.PHONY : CMakeFiles/FirstRPG.dir/src/graphics.cpp.o.provides

CMakeFiles/FirstRPG.dir/src/graphics.cpp.o.provides.build: CMakeFiles/FirstRPG.dir/src/graphics.cpp.o


CMakeFiles/FirstRPG.dir/src/mouse.cpp.o: CMakeFiles/FirstRPG.dir/flags.make
CMakeFiles/FirstRPG.dir/src/mouse.cpp.o: ../src/mouse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paul/Repositories/FirstRPG/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FirstRPG.dir/src/mouse.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FirstRPG.dir/src/mouse.cpp.o -c /home/paul/Repositories/FirstRPG/src/mouse.cpp

CMakeFiles/FirstRPG.dir/src/mouse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FirstRPG.dir/src/mouse.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/paul/Repositories/FirstRPG/src/mouse.cpp > CMakeFiles/FirstRPG.dir/src/mouse.cpp.i

CMakeFiles/FirstRPG.dir/src/mouse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FirstRPG.dir/src/mouse.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/paul/Repositories/FirstRPG/src/mouse.cpp -o CMakeFiles/FirstRPG.dir/src/mouse.cpp.s

CMakeFiles/FirstRPG.dir/src/mouse.cpp.o.requires:

.PHONY : CMakeFiles/FirstRPG.dir/src/mouse.cpp.o.requires

CMakeFiles/FirstRPG.dir/src/mouse.cpp.o.provides: CMakeFiles/FirstRPG.dir/src/mouse.cpp.o.requires
	$(MAKE) -f CMakeFiles/FirstRPG.dir/build.make CMakeFiles/FirstRPG.dir/src/mouse.cpp.o.provides.build
.PHONY : CMakeFiles/FirstRPG.dir/src/mouse.cpp.o.provides

CMakeFiles/FirstRPG.dir/src/mouse.cpp.o.provides.build: CMakeFiles/FirstRPG.dir/src/mouse.cpp.o


CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o: CMakeFiles/FirstRPG.dir/flags.make
CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o: ../src/keyboard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paul/Repositories/FirstRPG/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o -c /home/paul/Repositories/FirstRPG/src/keyboard.cpp

CMakeFiles/FirstRPG.dir/src/keyboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FirstRPG.dir/src/keyboard.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/paul/Repositories/FirstRPG/src/keyboard.cpp > CMakeFiles/FirstRPG.dir/src/keyboard.cpp.i

CMakeFiles/FirstRPG.dir/src/keyboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FirstRPG.dir/src/keyboard.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/paul/Repositories/FirstRPG/src/keyboard.cpp -o CMakeFiles/FirstRPG.dir/src/keyboard.cpp.s

CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o.requires:

.PHONY : CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o.requires

CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o.provides: CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o.requires
	$(MAKE) -f CMakeFiles/FirstRPG.dir/build.make CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o.provides.build
.PHONY : CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o.provides

CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o.provides.build: CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o


# Object files for target FirstRPG
FirstRPG_OBJECTS = \
"CMakeFiles/FirstRPG.dir/src/main.cpp.o" \
"CMakeFiles/FirstRPG.dir/src/graphics.cpp.o" \
"CMakeFiles/FirstRPG.dir/src/mouse.cpp.o" \
"CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o"

# External object files for target FirstRPG
FirstRPG_EXTERNAL_OBJECTS =

FirstRPG: CMakeFiles/FirstRPG.dir/src/main.cpp.o
FirstRPG: CMakeFiles/FirstRPG.dir/src/graphics.cpp.o
FirstRPG: CMakeFiles/FirstRPG.dir/src/mouse.cpp.o
FirstRPG: CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o
FirstRPG: CMakeFiles/FirstRPG.dir/build.make
FirstRPG: CMakeFiles/FirstRPG.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/paul/Repositories/FirstRPG/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable FirstRPG"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FirstRPG.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FirstRPG.dir/build: FirstRPG

.PHONY : CMakeFiles/FirstRPG.dir/build

CMakeFiles/FirstRPG.dir/requires: CMakeFiles/FirstRPG.dir/src/main.cpp.o.requires
CMakeFiles/FirstRPG.dir/requires: CMakeFiles/FirstRPG.dir/src/graphics.cpp.o.requires
CMakeFiles/FirstRPG.dir/requires: CMakeFiles/FirstRPG.dir/src/mouse.cpp.o.requires
CMakeFiles/FirstRPG.dir/requires: CMakeFiles/FirstRPG.dir/src/keyboard.cpp.o.requires

.PHONY : CMakeFiles/FirstRPG.dir/requires

CMakeFiles/FirstRPG.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FirstRPG.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FirstRPG.dir/clean

CMakeFiles/FirstRPG.dir/depend:
	cd /home/paul/Repositories/FirstRPG/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/paul/Repositories/FirstRPG /home/paul/Repositories/FirstRPG /home/paul/Repositories/FirstRPG/debug /home/paul/Repositories/FirstRPG/debug /home/paul/Repositories/FirstRPG/debug/CMakeFiles/FirstRPG.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FirstRPG.dir/depend
