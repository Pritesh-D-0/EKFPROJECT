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
CMAKE_SOURCE_DIR = /home/ameya/EKFPROJECT/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ameya/EKFPROJECT/build

# Utility rule file for course_project_gencpp.

# Include the progress variables for this target.
include CourseProject/CMakeFiles/course_project_gencpp.dir/progress.make

course_project_gencpp: CourseProject/CMakeFiles/course_project_gencpp.dir/build.make

.PHONY : course_project_gencpp

# Rule to build all files generated by this target.
CourseProject/CMakeFiles/course_project_gencpp.dir/build: course_project_gencpp

.PHONY : CourseProject/CMakeFiles/course_project_gencpp.dir/build

CourseProject/CMakeFiles/course_project_gencpp.dir/clean:
	cd /home/ameya/EKFPROJECT/build/CourseProject && $(CMAKE_COMMAND) -P CMakeFiles/course_project_gencpp.dir/cmake_clean.cmake
.PHONY : CourseProject/CMakeFiles/course_project_gencpp.dir/clean

CourseProject/CMakeFiles/course_project_gencpp.dir/depend:
	cd /home/ameya/EKFPROJECT/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ameya/EKFPROJECT/src /home/ameya/EKFPROJECT/src/CourseProject /home/ameya/EKFPROJECT/build /home/ameya/EKFPROJECT/build/CourseProject /home/ameya/EKFPROJECT/build/CourseProject/CMakeFiles/course_project_gencpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CourseProject/CMakeFiles/course_project_gencpp.dir/depend

