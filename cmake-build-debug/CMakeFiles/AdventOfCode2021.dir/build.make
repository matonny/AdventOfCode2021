# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mateusz/Documents/C++/AdventOfCode2021

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AdventOfCode2021.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/AdventOfCode2021.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AdventOfCode2021.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AdventOfCode2021.dir/flags.make

CMakeFiles/AdventOfCode2021.dir/main.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/main.cpp.o: ../main.cpp
CMakeFiles/AdventOfCode2021.dir/main.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AdventOfCode2021.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/main.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/main.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/main.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/main.cpp

CMakeFiles/AdventOfCode2021.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/main.cpp > CMakeFiles/AdventOfCode2021.dir/main.cpp.i

CMakeFiles/AdventOfCode2021.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/main.cpp -o CMakeFiles/AdventOfCode2021.dir/main.cpp.s

CMakeFiles/AdventOfCode2021.dir/Reader.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/Reader.cpp.o: ../Reader.cpp
CMakeFiles/AdventOfCode2021.dir/Reader.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AdventOfCode2021.dir/Reader.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/Reader.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/Reader.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/Reader.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/Reader.cpp

CMakeFiles/AdventOfCode2021.dir/Reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/Reader.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/Reader.cpp > CMakeFiles/AdventOfCode2021.dir/Reader.cpp.i

CMakeFiles/AdventOfCode2021.dir/Reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/Reader.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/Reader.cpp -o CMakeFiles/AdventOfCode2021.dir/Reader.cpp.s

CMakeFiles/AdventOfCode2021.dir/D1.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D1.cpp.o: ../D1.cpp
CMakeFiles/AdventOfCode2021.dir/D1.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D1.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D1.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D1.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D1.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D1.cpp

CMakeFiles/AdventOfCode2021.dir/D1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D1.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D1.cpp > CMakeFiles/AdventOfCode2021.dir/D1.cpp.i

CMakeFiles/AdventOfCode2021.dir/D1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D1.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D1.cpp -o CMakeFiles/AdventOfCode2021.dir/D1.cpp.s

CMakeFiles/AdventOfCode2021.dir/D2.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D2.cpp.o: ../D2.cpp
CMakeFiles/AdventOfCode2021.dir/D2.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D2.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D2.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D2.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D2.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D2.cpp

CMakeFiles/AdventOfCode2021.dir/D2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D2.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D2.cpp > CMakeFiles/AdventOfCode2021.dir/D2.cpp.i

CMakeFiles/AdventOfCode2021.dir/D2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D2.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D2.cpp -o CMakeFiles/AdventOfCode2021.dir/D2.cpp.s

CMakeFiles/AdventOfCode2021.dir/D3.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D3.cpp.o: ../D3.cpp
CMakeFiles/AdventOfCode2021.dir/D3.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D3.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D3.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D3.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D3.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D3.cpp

CMakeFiles/AdventOfCode2021.dir/D3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D3.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D3.cpp > CMakeFiles/AdventOfCode2021.dir/D3.cpp.i

CMakeFiles/AdventOfCode2021.dir/D3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D3.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D3.cpp -o CMakeFiles/AdventOfCode2021.dir/D3.cpp.s

CMakeFiles/AdventOfCode2021.dir/D4.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D4.cpp.o: ../D4.cpp
CMakeFiles/AdventOfCode2021.dir/D4.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D4.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D4.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D4.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D4.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D4.cpp

CMakeFiles/AdventOfCode2021.dir/D4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D4.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D4.cpp > CMakeFiles/AdventOfCode2021.dir/D4.cpp.i

CMakeFiles/AdventOfCode2021.dir/D4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D4.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D4.cpp -o CMakeFiles/AdventOfCode2021.dir/D4.cpp.s

CMakeFiles/AdventOfCode2021.dir/D5.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D5.cpp.o: ../D5.cpp
CMakeFiles/AdventOfCode2021.dir/D5.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D5.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D5.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D5.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D5.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D5.cpp

CMakeFiles/AdventOfCode2021.dir/D5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D5.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D5.cpp > CMakeFiles/AdventOfCode2021.dir/D5.cpp.i

CMakeFiles/AdventOfCode2021.dir/D5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D5.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D5.cpp -o CMakeFiles/AdventOfCode2021.dir/D5.cpp.s

CMakeFiles/AdventOfCode2021.dir/D6.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D6.cpp.o: ../D6.cpp
CMakeFiles/AdventOfCode2021.dir/D6.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D6.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D6.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D6.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D6.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D6.cpp

CMakeFiles/AdventOfCode2021.dir/D6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D6.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D6.cpp > CMakeFiles/AdventOfCode2021.dir/D6.cpp.i

CMakeFiles/AdventOfCode2021.dir/D6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D6.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D6.cpp -o CMakeFiles/AdventOfCode2021.dir/D6.cpp.s

CMakeFiles/AdventOfCode2021.dir/D7.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D7.cpp.o: ../D7.cpp
CMakeFiles/AdventOfCode2021.dir/D7.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D7.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D7.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D7.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D7.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D7.cpp

CMakeFiles/AdventOfCode2021.dir/D7.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D7.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D7.cpp > CMakeFiles/AdventOfCode2021.dir/D7.cpp.i

CMakeFiles/AdventOfCode2021.dir/D7.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D7.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D7.cpp -o CMakeFiles/AdventOfCode2021.dir/D7.cpp.s

CMakeFiles/AdventOfCode2021.dir/D8.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D8.cpp.o: ../D8.cpp
CMakeFiles/AdventOfCode2021.dir/D8.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D8.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D8.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D8.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D8.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D8.cpp

CMakeFiles/AdventOfCode2021.dir/D8.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D8.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D8.cpp > CMakeFiles/AdventOfCode2021.dir/D8.cpp.i

CMakeFiles/AdventOfCode2021.dir/D8.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D8.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D8.cpp -o CMakeFiles/AdventOfCode2021.dir/D8.cpp.s

CMakeFiles/AdventOfCode2021.dir/D9.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D9.cpp.o: ../D9.cpp
CMakeFiles/AdventOfCode2021.dir/D9.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D9.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D9.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D9.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D9.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D9.cpp

CMakeFiles/AdventOfCode2021.dir/D9.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D9.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D9.cpp > CMakeFiles/AdventOfCode2021.dir/D9.cpp.i

CMakeFiles/AdventOfCode2021.dir/D9.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D9.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D9.cpp -o CMakeFiles/AdventOfCode2021.dir/D9.cpp.s

CMakeFiles/AdventOfCode2021.dir/D10.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D10.cpp.o: ../D10.cpp
CMakeFiles/AdventOfCode2021.dir/D10.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D10.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D10.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D10.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D10.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D10.cpp

CMakeFiles/AdventOfCode2021.dir/D10.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D10.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D10.cpp > CMakeFiles/AdventOfCode2021.dir/D10.cpp.i

CMakeFiles/AdventOfCode2021.dir/D10.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D10.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D10.cpp -o CMakeFiles/AdventOfCode2021.dir/D10.cpp.s

CMakeFiles/AdventOfCode2021.dir/D11.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D11.cpp.o: ../D11.cpp
CMakeFiles/AdventOfCode2021.dir/D11.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D11.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D11.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D11.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D11.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D11.cpp

CMakeFiles/AdventOfCode2021.dir/D11.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D11.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D11.cpp > CMakeFiles/AdventOfCode2021.dir/D11.cpp.i

CMakeFiles/AdventOfCode2021.dir/D11.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D11.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D11.cpp -o CMakeFiles/AdventOfCode2021.dir/D11.cpp.s

CMakeFiles/AdventOfCode2021.dir/D12.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D12.cpp.o: ../D12.cpp
CMakeFiles/AdventOfCode2021.dir/D12.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D12.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D12.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D12.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D12.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D12.cpp

CMakeFiles/AdventOfCode2021.dir/D12.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D12.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D12.cpp > CMakeFiles/AdventOfCode2021.dir/D12.cpp.i

CMakeFiles/AdventOfCode2021.dir/D12.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D12.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D12.cpp -o CMakeFiles/AdventOfCode2021.dir/D12.cpp.s

CMakeFiles/AdventOfCode2021.dir/D13.cpp.o: CMakeFiles/AdventOfCode2021.dir/flags.make
CMakeFiles/AdventOfCode2021.dir/D13.cpp.o: ../D13.cpp
CMakeFiles/AdventOfCode2021.dir/D13.cpp.o: CMakeFiles/AdventOfCode2021.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/AdventOfCode2021.dir/D13.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AdventOfCode2021.dir/D13.cpp.o -MF CMakeFiles/AdventOfCode2021.dir/D13.cpp.o.d -o CMakeFiles/AdventOfCode2021.dir/D13.cpp.o -c /Users/mateusz/Documents/C++/AdventOfCode2021/D13.cpp

CMakeFiles/AdventOfCode2021.dir/D13.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdventOfCode2021.dir/D13.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Documents/C++/AdventOfCode2021/D13.cpp > CMakeFiles/AdventOfCode2021.dir/D13.cpp.i

CMakeFiles/AdventOfCode2021.dir/D13.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdventOfCode2021.dir/D13.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Documents/C++/AdventOfCode2021/D13.cpp -o CMakeFiles/AdventOfCode2021.dir/D13.cpp.s

# Object files for target AdventOfCode2021
AdventOfCode2021_OBJECTS = \
"CMakeFiles/AdventOfCode2021.dir/main.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/Reader.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D1.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D2.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D3.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D4.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D5.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D6.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D7.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D8.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D9.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D10.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D11.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D12.cpp.o" \
"CMakeFiles/AdventOfCode2021.dir/D13.cpp.o"

# External object files for target AdventOfCode2021
AdventOfCode2021_EXTERNAL_OBJECTS =

AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/main.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/Reader.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D1.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D2.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D3.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D4.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D5.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D6.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D7.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D8.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D9.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D10.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D11.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D12.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/D13.cpp.o
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/build.make
AdventOfCode2021: CMakeFiles/AdventOfCode2021.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable AdventOfCode2021"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AdventOfCode2021.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AdventOfCode2021.dir/build: AdventOfCode2021
.PHONY : CMakeFiles/AdventOfCode2021.dir/build

CMakeFiles/AdventOfCode2021.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AdventOfCode2021.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AdventOfCode2021.dir/clean

CMakeFiles/AdventOfCode2021.dir/depend:
	cd /Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mateusz/Documents/C++/AdventOfCode2021 /Users/mateusz/Documents/C++/AdventOfCode2021 /Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug /Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug /Users/mateusz/Documents/C++/AdventOfCode2021/cmake-build-debug/CMakeFiles/AdventOfCode2021.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AdventOfCode2021.dir/depend

