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
CMAKE_SOURCE_DIR = /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild

# Utility rule file for circle_buf-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/circle_buf-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/circle_buf-populate.dir/progress.make

CMakeFiles/circle_buf-populate: CMakeFiles/circle_buf-populate-complete

CMakeFiles/circle_buf-populate-complete: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-install
CMakeFiles/circle_buf-populate-complete: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-mkdir
CMakeFiles/circle_buf-populate-complete: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-download
CMakeFiles/circle_buf-populate-complete: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-update
CMakeFiles/circle_buf-populate-complete: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-patch
CMakeFiles/circle_buf-populate-complete: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-configure
CMakeFiles/circle_buf-populate-complete: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-build
CMakeFiles/circle_buf-populate-complete: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-install
CMakeFiles/circle_buf-populate-complete: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'circle_buf-populate'"
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles/circle_buf-populate-complete
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-done

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-update:
.PHONY : circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-update

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-build: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'circle_buf-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-build

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-configure: circle_buf-populate-prefix/tmp/circle_buf-populate-cfgcmd.txt
circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-configure: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'circle_buf-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-configure

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-download: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-gitinfo.txt
circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-download: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'circle_buf-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps && /usr/local/bin/cmake -P /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/tmp/circle_buf-populate-gitclone.cmake
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-download

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-install: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'circle_buf-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-install

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'circle_buf-populate'"
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-src
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-build
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/tmp
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-mkdir

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-patch: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'circle_buf-populate'"
	/usr/local/bin/cmake -E echo_append
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-patch

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-update:
.PHONY : circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-update

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-test: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'circle_buf-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-test

circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-update: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'circle_buf-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-src && /usr/local/bin/cmake -P /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/circle_buf-populate-prefix/tmp/circle_buf-populate-gitupdate.cmake

circle_buf-populate: CMakeFiles/circle_buf-populate
circle_buf-populate: CMakeFiles/circle_buf-populate-complete
circle_buf-populate: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-build
circle_buf-populate: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-configure
circle_buf-populate: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-download
circle_buf-populate: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-install
circle_buf-populate: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-mkdir
circle_buf-populate: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-patch
circle_buf-populate: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-test
circle_buf-populate: circle_buf-populate-prefix/src/circle_buf-populate-stamp/circle_buf-populate-update
circle_buf-populate: CMakeFiles/circle_buf-populate.dir/build.make
.PHONY : circle_buf-populate

# Rule to build all files generated by this target.
CMakeFiles/circle_buf-populate.dir/build: circle_buf-populate
.PHONY : CMakeFiles/circle_buf-populate.dir/build

CMakeFiles/circle_buf-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/circle_buf-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/circle_buf-populate.dir/clean

CMakeFiles/circle_buf-populate.dir/depend:
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/circle_buf-subbuild/CMakeFiles/circle_buf-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/circle_buf-populate.dir/depend
