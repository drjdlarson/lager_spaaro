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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild

# Utility rule file for mat_v4-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/mat_v4-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mat_v4-populate.dir/progress.make

CMakeFiles/mat_v4-populate: CMakeFiles/mat_v4-populate-complete

CMakeFiles/mat_v4-populate-complete: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-install
CMakeFiles/mat_v4-populate-complete: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-mkdir
CMakeFiles/mat_v4-populate-complete: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-download
CMakeFiles/mat_v4-populate-complete: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-update
CMakeFiles/mat_v4-populate-complete: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-patch
CMakeFiles/mat_v4-populate-complete: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-configure
CMakeFiles/mat_v4-populate-complete: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-build
CMakeFiles/mat_v4-populate-complete: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-install
CMakeFiles/mat_v4-populate-complete: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'mat_v4-populate'"
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles
	/usr/local/bin/cmake -E touch /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles/mat_v4-populate-complete
	/usr/local/bin/cmake -E touch /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-done

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-update:
.PHONY : mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-update

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-build: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'mat_v4-populate'"
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-build

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-configure: mat_v4-populate-prefix/tmp/mat_v4-populate-cfgcmd.txt
mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-configure: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'mat_v4-populate'"
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-configure

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-download: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-gitinfo.txt
mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-download: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'mat_v4-populate'"
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps && /usr/local/bin/cmake -P /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/tmp/mat_v4-populate-gitclone.cmake
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps && /usr/local/bin/cmake -E touch /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-download

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-install: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'mat_v4-populate'"
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-install

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'mat_v4-populate'"
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-src
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-build
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/tmp
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp
	/usr/local/bin/cmake -E touch /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-mkdir

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-patch: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'mat_v4-populate'"
	/usr/local/bin/cmake -E echo_append
	/usr/local/bin/cmake -E touch /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-patch

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-update:
.PHONY : mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-update

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-test: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'mat_v4-populate'"
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-test

mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-update: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'mat_v4-populate'"
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-src && /usr/local/bin/cmake -P /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/mat_v4-populate-prefix/tmp/mat_v4-populate-gitupdate.cmake

mat_v4-populate: CMakeFiles/mat_v4-populate
mat_v4-populate: CMakeFiles/mat_v4-populate-complete
mat_v4-populate: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-build
mat_v4-populate: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-configure
mat_v4-populate: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-download
mat_v4-populate: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-install
mat_v4-populate: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-mkdir
mat_v4-populate: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-patch
mat_v4-populate: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-test
mat_v4-populate: mat_v4-populate-prefix/src/mat_v4-populate-stamp/mat_v4-populate-update
mat_v4-populate: CMakeFiles/mat_v4-populate.dir/build.make
.PHONY : mat_v4-populate

# Rule to build all files generated by this target.
CMakeFiles/mat_v4-populate.dir/build: mat_v4-populate
.PHONY : CMakeFiles/mat_v4-populate.dir/build

CMakeFiles/mat_v4-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mat_v4-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mat_v4-populate.dir/clean

CMakeFiles/mat_v4-populate.dir/depend:
	cd /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild /home/tuan/Projects/ua_spaaro/mat_converter/malt_build/_deps/mat_v4-subbuild/CMakeFiles/mat_v4-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mat_v4-populate.dir/depend

