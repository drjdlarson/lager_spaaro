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
CMAKE_SOURCE_DIR = /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild

# Utility rule file for imap-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/imap-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/imap-populate.dir/progress.make

CMakeFiles/imap-populate: CMakeFiles/imap-populate-complete

CMakeFiles/imap-populate-complete: imap-populate-prefix/src/imap-populate-stamp/imap-populate-install
CMakeFiles/imap-populate-complete: imap-populate-prefix/src/imap-populate-stamp/imap-populate-mkdir
CMakeFiles/imap-populate-complete: imap-populate-prefix/src/imap-populate-stamp/imap-populate-download
CMakeFiles/imap-populate-complete: imap-populate-prefix/src/imap-populate-stamp/imap-populate-update
CMakeFiles/imap-populate-complete: imap-populate-prefix/src/imap-populate-stamp/imap-populate-patch
CMakeFiles/imap-populate-complete: imap-populate-prefix/src/imap-populate-stamp/imap-populate-configure
CMakeFiles/imap-populate-complete: imap-populate-prefix/src/imap-populate-stamp/imap-populate-build
CMakeFiles/imap-populate-complete: imap-populate-prefix/src/imap-populate-stamp/imap-populate-install
CMakeFiles/imap-populate-complete: imap-populate-prefix/src/imap-populate-stamp/imap-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'imap-populate'"
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles/imap-populate-complete
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp/imap-populate-done

imap-populate-prefix/src/imap-populate-stamp/imap-populate-update:
.PHONY : imap-populate-prefix/src/imap-populate-stamp/imap-populate-update

imap-populate-prefix/src/imap-populate-stamp/imap-populate-build: imap-populate-prefix/src/imap-populate-stamp/imap-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'imap-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp/imap-populate-build

imap-populate-prefix/src/imap-populate-stamp/imap-populate-configure: imap-populate-prefix/tmp/imap-populate-cfgcmd.txt
imap-populate-prefix/src/imap-populate-stamp/imap-populate-configure: imap-populate-prefix/src/imap-populate-stamp/imap-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'imap-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp/imap-populate-configure

imap-populate-prefix/src/imap-populate-stamp/imap-populate-download: imap-populate-prefix/src/imap-populate-stamp/imap-populate-gitinfo.txt
imap-populate-prefix/src/imap-populate-stamp/imap-populate-download: imap-populate-prefix/src/imap-populate-stamp/imap-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'imap-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps && /usr/local/bin/cmake -P /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/tmp/imap-populate-gitclone.cmake
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp/imap-populate-download

imap-populate-prefix/src/imap-populate-stamp/imap-populate-install: imap-populate-prefix/src/imap-populate-stamp/imap-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'imap-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp/imap-populate-install

imap-populate-prefix/src/imap-populate-stamp/imap-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'imap-populate'"
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-src
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-build
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/tmp
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src
	/usr/local/bin/cmake -E make_directory /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp/imap-populate-mkdir

imap-populate-prefix/src/imap-populate-stamp/imap-populate-patch: imap-populate-prefix/src/imap-populate-stamp/imap-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'imap-populate'"
	/usr/local/bin/cmake -E echo_append
	/usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp/imap-populate-patch

imap-populate-prefix/src/imap-populate-stamp/imap-populate-update:
.PHONY : imap-populate-prefix/src/imap-populate-stamp/imap-populate-update

imap-populate-prefix/src/imap-populate-stamp/imap-populate-test: imap-populate-prefix/src/imap-populate-stamp/imap-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'imap-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-build && /usr/local/bin/cmake -E echo_append
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-build && /usr/local/bin/cmake -E touch /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/src/imap-populate-stamp/imap-populate-test

imap-populate-prefix/src/imap-populate-stamp/imap-populate-update: imap-populate-prefix/src/imap-populate-stamp/imap-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'imap-populate'"
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-src && /usr/local/bin/cmake -P /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/imap-populate-prefix/tmp/imap-populate-gitupdate.cmake

imap-populate: CMakeFiles/imap-populate
imap-populate: CMakeFiles/imap-populate-complete
imap-populate: imap-populate-prefix/src/imap-populate-stamp/imap-populate-build
imap-populate: imap-populate-prefix/src/imap-populate-stamp/imap-populate-configure
imap-populate: imap-populate-prefix/src/imap-populate-stamp/imap-populate-download
imap-populate: imap-populate-prefix/src/imap-populate-stamp/imap-populate-install
imap-populate: imap-populate-prefix/src/imap-populate-stamp/imap-populate-mkdir
imap-populate: imap-populate-prefix/src/imap-populate-stamp/imap-populate-patch
imap-populate: imap-populate-prefix/src/imap-populate-stamp/imap-populate-test
imap-populate: imap-populate-prefix/src/imap-populate-stamp/imap-populate-update
imap-populate: CMakeFiles/imap-populate.dir/build.make
.PHONY : imap-populate

# Rule to build all files generated by this target.
CMakeFiles/imap-populate.dir/build: imap-populate
.PHONY : CMakeFiles/imap-populate.dir/build

CMakeFiles/imap-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/imap-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/imap-populate.dir/clean

CMakeFiles/imap-populate.dir/depend:
	cd /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild /home/tuan/Projects/super/ua_spaaro/flight_code/malt_build/_deps/imap-subbuild/CMakeFiles/imap-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/imap-populate.dir/depend
