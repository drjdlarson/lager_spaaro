# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.21.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(mavlink-populate NONE)



include(ExternalProject)
ExternalProject_Add(mavlink-populate
                     "UPDATE_DISCONNECTED" "False"
                    SOURCE_DIR          "/home/tuan/Projects/mavlink"
                    BINARY_DIR          "/home/tuan/Projects/super/ua_spaaro/flight_code/super_build/_deps/mavlink-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)


