# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_SOURCE_DIR = /home/demi/Git/GraphicsTutorialExercises

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/demi/Git/GraphicsTutorialExercises

# Include any dependencies generated for this target.
include CMakeFiles/graphicstutorialexercises.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/graphicstutorialexercises.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/graphicstutorialexercises.dir/flags.make

CMakeFiles/graphicstutorialexercises.dir/main.cpp.o: CMakeFiles/graphicstutorialexercises.dir/flags.make
CMakeFiles/graphicstutorialexercises.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/demi/Git/GraphicsTutorialExercises/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/graphicstutorialexercises.dir/main.cpp.o"
	/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphicstutorialexercises.dir/main.cpp.o -c /home/demi/Git/GraphicsTutorialExercises/main.cpp

CMakeFiles/graphicstutorialexercises.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphicstutorialexercises.dir/main.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/demi/Git/GraphicsTutorialExercises/main.cpp > CMakeFiles/graphicstutorialexercises.dir/main.cpp.i

CMakeFiles/graphicstutorialexercises.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphicstutorialexercises.dir/main.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/demi/Git/GraphicsTutorialExercises/main.cpp -o CMakeFiles/graphicstutorialexercises.dir/main.cpp.s

# Object files for target graphicstutorialexercises
graphicstutorialexercises_OBJECTS = \
"CMakeFiles/graphicstutorialexercises.dir/main.cpp.o"

# External object files for target graphicstutorialexercises
graphicstutorialexercises_EXTERNAL_OBJECTS =

graphicstutorialexercises: CMakeFiles/graphicstutorialexercises.dir/main.cpp.o
graphicstutorialexercises: CMakeFiles/graphicstutorialexercises.dir/build.make
graphicstutorialexercises: CMakeFiles/graphicstutorialexercises.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/demi/Git/GraphicsTutorialExercises/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable graphicstutorialexercises"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/graphicstutorialexercises.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/graphicstutorialexercises.dir/build: graphicstutorialexercises

.PHONY : CMakeFiles/graphicstutorialexercises.dir/build

CMakeFiles/graphicstutorialexercises.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/graphicstutorialexercises.dir/cmake_clean.cmake
.PHONY : CMakeFiles/graphicstutorialexercises.dir/clean

CMakeFiles/graphicstutorialexercises.dir/depend:
	cd /home/demi/Git/GraphicsTutorialExercises && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/demi/Git/GraphicsTutorialExercises /home/demi/Git/GraphicsTutorialExercises /home/demi/Git/GraphicsTutorialExercises /home/demi/Git/GraphicsTutorialExercises /home/demi/Git/GraphicsTutorialExercises/CMakeFiles/graphicstutorialexercises.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/graphicstutorialexercises.dir/depend
