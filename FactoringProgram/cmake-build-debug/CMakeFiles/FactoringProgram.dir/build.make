# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FactoringProgram.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FactoringProgram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FactoringProgram.dir/flags.make

CMakeFiles/FactoringProgram.dir/main.cpp.obj: CMakeFiles/FactoringProgram.dir/flags.make
CMakeFiles/FactoringProgram.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FactoringProgram.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\FactoringProgram.dir\main.cpp.obj -c C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram\main.cpp

CMakeFiles/FactoringProgram.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FactoringProgram.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram\main.cpp > CMakeFiles\FactoringProgram.dir\main.cpp.i

CMakeFiles/FactoringProgram.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FactoringProgram.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram\main.cpp -o CMakeFiles\FactoringProgram.dir\main.cpp.s

# Object files for target FactoringProgram
FactoringProgram_OBJECTS = \
"CMakeFiles/FactoringProgram.dir/main.cpp.obj"

# External object files for target FactoringProgram
FactoringProgram_EXTERNAL_OBJECTS =

FactoringProgram.exe: CMakeFiles/FactoringProgram.dir/main.cpp.obj
FactoringProgram.exe: CMakeFiles/FactoringProgram.dir/build.make
FactoringProgram.exe: CMakeFiles/FactoringProgram.dir/linklibs.rsp
FactoringProgram.exe: CMakeFiles/FactoringProgram.dir/objects1.rsp
FactoringProgram.exe: CMakeFiles/FactoringProgram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FactoringProgram.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FactoringProgram.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FactoringProgram.dir/build: FactoringProgram.exe

.PHONY : CMakeFiles/FactoringProgram.dir/build

CMakeFiles/FactoringProgram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FactoringProgram.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FactoringProgram.dir/clean

CMakeFiles/FactoringProgram.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram\cmake-build-debug C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram\cmake-build-debug C:\Users\sarth\SchoolStuff\CLionProjects\FactoringProgram\cmake-build-debug\CMakeFiles\FactoringProgram.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FactoringProgram.dir/depend

