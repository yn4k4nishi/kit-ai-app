# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/build

# Include any dependencies generated for this target.
include CMakeFiles/problem_A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/problem_A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/problem_A.dir/flags.make

CMakeFiles/problem_A.dir/main.cpp.o: CMakeFiles/problem_A.dir/flags.make
CMakeFiles/problem_A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/problem_A.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/problem_A.dir/main.cpp.o -c /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/main.cpp

CMakeFiles/problem_A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/problem_A.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/main.cpp > CMakeFiles/problem_A.dir/main.cpp.i

CMakeFiles/problem_A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/problem_A.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/main.cpp -o CMakeFiles/problem_A.dir/main.cpp.s

# Object files for target problem_A
problem_A_OBJECTS = \
"CMakeFiles/problem_A.dir/main.cpp.o"

# External object files for target problem_A
problem_A_EXTERNAL_OBJECTS =

problem_A: CMakeFiles/problem_A.dir/main.cpp.o
problem_A: CMakeFiles/problem_A.dir/build.make
problem_A: CMakeFiles/problem_A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable problem_A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/problem_A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/problem_A.dir/build: problem_A

.PHONY : CMakeFiles/problem_A.dir/build

CMakeFiles/problem_A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/problem_A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/problem_A.dir/clean

CMakeFiles/problem_A.dir/depend:
	cd /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/build /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/build /home/yn4k4nishi/workspace/kit-ai-app/Lecture04/ProblemA/build/CMakeFiles/problem_A.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/problem_A.dir/depend
