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
CMAKE_SOURCE_DIR = /home/leklo/ProgObiekt/zad5_2-Leklo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leklo/ProgObiekt/zad5_2-Leklo/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/unit_tests.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/unit_tests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/unit_tests.dir/flags.make

tests/CMakeFiles/unit_tests.dir/main.cpp.o: tests/CMakeFiles/unit_tests.dir/flags.make
tests/CMakeFiles/unit_tests.dir/main.cpp.o: ../tests/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/unit_tests.dir/main.cpp.o"
	cd /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unit_tests.dir/main.cpp.o -c /home/leklo/ProgObiekt/zad5_2-Leklo/tests/main.cpp

tests/CMakeFiles/unit_tests.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit_tests.dir/main.cpp.i"
	cd /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leklo/ProgObiekt/zad5_2-Leklo/tests/main.cpp > CMakeFiles/unit_tests.dir/main.cpp.i

tests/CMakeFiles/unit_tests.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit_tests.dir/main.cpp.s"
	cd /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leklo/ProgObiekt/zad5_2-Leklo/tests/main.cpp -o CMakeFiles/unit_tests.dir/main.cpp.s

tests/CMakeFiles/unit_tests.dir/dummy.cpp.o: tests/CMakeFiles/unit_tests.dir/flags.make
tests/CMakeFiles/unit_tests.dir/dummy.cpp.o: ../tests/dummy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/unit_tests.dir/dummy.cpp.o"
	cd /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unit_tests.dir/dummy.cpp.o -c /home/leklo/ProgObiekt/zad5_2-Leklo/tests/dummy.cpp

tests/CMakeFiles/unit_tests.dir/dummy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit_tests.dir/dummy.cpp.i"
	cd /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leklo/ProgObiekt/zad5_2-Leklo/tests/dummy.cpp > CMakeFiles/unit_tests.dir/dummy.cpp.i

tests/CMakeFiles/unit_tests.dir/dummy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit_tests.dir/dummy.cpp.s"
	cd /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leklo/ProgObiekt/zad5_2-Leklo/tests/dummy.cpp -o CMakeFiles/unit_tests.dir/dummy.cpp.s

# Object files for target unit_tests
unit_tests_OBJECTS = \
"CMakeFiles/unit_tests.dir/main.cpp.o" \
"CMakeFiles/unit_tests.dir/dummy.cpp.o"

# External object files for target unit_tests
unit_tests_EXTERNAL_OBJECTS = \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/example.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/lacze_do_gnuplota.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/BLOCK.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/DRONE.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/PRISM.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/Macierz3x3.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/PLANE.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/PLATEAU.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/STAGE.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/Wektor3D.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/HILL.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/RIDGE.cpp.o" \
"/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles/program.dir/src/CUBOID.cpp.o"

unit_tests: tests/CMakeFiles/unit_tests.dir/main.cpp.o
unit_tests: tests/CMakeFiles/unit_tests.dir/dummy.cpp.o
unit_tests: CMakeFiles/program.dir/src/example.cpp.o
unit_tests: CMakeFiles/program.dir/src/lacze_do_gnuplota.cpp.o
unit_tests: CMakeFiles/program.dir/src/BLOCK.cpp.o
unit_tests: CMakeFiles/program.dir/src/DRONE.cpp.o
unit_tests: CMakeFiles/program.dir/src/PRISM.cpp.o
unit_tests: CMakeFiles/program.dir/src/Macierz3x3.cpp.o
unit_tests: CMakeFiles/program.dir/src/PLANE.cpp.o
unit_tests: CMakeFiles/program.dir/src/PLATEAU.cpp.o
unit_tests: CMakeFiles/program.dir/src/STAGE.cpp.o
unit_tests: CMakeFiles/program.dir/src/Wektor3D.cpp.o
unit_tests: CMakeFiles/program.dir/src/HILL.cpp.o
unit_tests: CMakeFiles/program.dir/src/RIDGE.cpp.o
unit_tests: CMakeFiles/program.dir/src/CUBOID.cpp.o
unit_tests: tests/CMakeFiles/unit_tests.dir/build.make
unit_tests: tests/CMakeFiles/unit_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/leklo/ProgObiekt/zad5_2-Leklo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../unit_tests"
	cd /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unit_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/unit_tests.dir/build: unit_tests

.PHONY : tests/CMakeFiles/unit_tests.dir/build

tests/CMakeFiles/unit_tests.dir/clean:
	cd /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/unit_tests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/unit_tests.dir/clean

tests/CMakeFiles/unit_tests.dir/depend:
	cd /home/leklo/ProgObiekt/zad5_2-Leklo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leklo/ProgObiekt/zad5_2-Leklo /home/leklo/ProgObiekt/zad5_2-Leklo/tests /home/leklo/ProgObiekt/zad5_2-Leklo/build /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests /home/leklo/ProgObiekt/zad5_2-Leklo/build/tests/CMakeFiles/unit_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/unit_tests.dir/depend

