# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Program Files\JetBrains\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files\JetBrains\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Embedded Course\Embedded-Diploma"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Embedded Course\Embedded-Diploma\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Assignment1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment1.dir/flags.make

CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.obj: CMakeFiles/Assignment1.dir/flags.make
CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.obj: D:/Embedded\ Course/Embedded-Diploma/C\ Programming/C\ Basics/Assignment1.c
CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.obj: CMakeFiles/Assignment1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Embedded Course\Embedded-Diploma\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.obj"
	E:\PROGRA~2\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.obj -MF CMakeFiles\Assignment1.dir\C_Programming\C_Basics\Assignment1.c.obj.d -o CMakeFiles\Assignment1.dir\C_Programming\C_Basics\Assignment1.c.obj -c "D:\Embedded Course\Embedded-Diploma\C Programming\C Basics\Assignment1.c"

CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.i"
	E:\PROGRA~2\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Embedded Course\Embedded-Diploma\C Programming\C Basics\Assignment1.c" > CMakeFiles\Assignment1.dir\C_Programming\C_Basics\Assignment1.c.i

CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.s"
	E:\PROGRA~2\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Embedded Course\Embedded-Diploma\C Programming\C Basics\Assignment1.c" -o CMakeFiles\Assignment1.dir\C_Programming\C_Basics\Assignment1.c.s

# Object files for target Assignment1
Assignment1_OBJECTS = \
"CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.obj"

# External object files for target Assignment1
Assignment1_EXTERNAL_OBJECTS =

Assignment1.exe: CMakeFiles/Assignment1.dir/C_Programming/C_Basics/Assignment1.c.obj
Assignment1.exe: CMakeFiles/Assignment1.dir/build.make
Assignment1.exe: CMakeFiles/Assignment1.dir/linkLibs.rsp
Assignment1.exe: CMakeFiles/Assignment1.dir/objects1.rsp
Assignment1.exe: CMakeFiles/Assignment1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Embedded Course\Embedded-Diploma\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Assignment1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Assignment1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment1.dir/build: Assignment1.exe
.PHONY : CMakeFiles/Assignment1.dir/build

CMakeFiles/Assignment1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assignment1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Assignment1.dir/clean

CMakeFiles/Assignment1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Embedded Course\Embedded-Diploma" "D:\Embedded Course\Embedded-Diploma" "D:\Embedded Course\Embedded-Diploma\cmake-build-debug" "D:\Embedded Course\Embedded-Diploma\cmake-build-debug" "D:\Embedded Course\Embedded-Diploma\cmake-build-debug\CMakeFiles\Assignment1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment1.dir/depend
