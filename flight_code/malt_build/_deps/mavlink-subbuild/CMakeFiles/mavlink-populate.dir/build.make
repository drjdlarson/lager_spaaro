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
CMAKE_SOURCE_DIR = /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild

# Utility rule file for mavlink-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/mavlink-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mavlink-populate.dir/progress.make

CMakeFiles/mavlink-populate: CMakeFiles/mavlink-populate-complete

CMakeFiles/mavlink-populate-complete: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-install
CMakeFiles/mavlink-populate-complete: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-mkdir
CMakeFiles/mavlink-populate-complete: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-download
CMakeFiles/mavlink-populate-complete: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-update
CMakeFiles/mavlink-populate-complete: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-patch
CMakeFiles/mavlink-populate-complete: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-configure
CMakeFiles/mavlink-populate-complete: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-build
CMakeFiles/mavlink-populate-complete: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-install
CMakeFiles/mavlink-populate-complete: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'mavlink-populate'"
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles/mavlink-populate-complete
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-done

mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-build: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'mavlink-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-build

mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-configure: mavlink-populate-prefix/tmp/mavlink-populate-cfgcmd.txt
mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-configure: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'mavlink-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-configure

mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-download: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "No download step for 'mavlink-populate'"
	/usr/local/bin/cmake -E echo_append
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-download

mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-install: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'mavlink-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-install

mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'mavlink-populate'"
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/mavlink
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-build
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/tmp
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-mkdir

mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-patch: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'mavlink-populate'"
	/usr/local/bin/cmake -E echo_append
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-patch

mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-test: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'mavlink-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-test

mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-update: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "No update step for 'mavlink-populate'"
	/usr/local/bin/cmake -E echo_append
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-update

mavlink-populate: CMakeFiles/mavlink-populate
mavlink-populate: CMakeFiles/mavlink-populate-complete
mavlink-populate: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-build
mavlink-populate: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-configure
mavlink-populate: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-download
mavlink-populate: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-install
mavlink-populate: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-mkdir
mavlink-populate: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-patch
mavlink-populate: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-test
mavlink-populate: mavlink-populate-prefix/src/mavlink-populate-stamp/mavlink-populate-update
mavlink-populate: CMakeFiles/mavlink-populate.dir/build.make
.PHONY : mavlink-populate

# Rule to build all files generated by this target.
CMakeFiles/mavlink-populate.dir/build: mavlink-populate
.PHONY : CMakeFiles/mavlink-populate.dir/build

CMakeFiles/mavlink-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mavlink-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mavlink-populate.dir/clean

CMakeFiles/mavlink-populate.dir/depend:
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/mavlink-subbuild/CMakeFiles/mavlink-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mavlink-populate.dir/depend
