cmake_minimum_required(VERSION 2.8.12)
project(server)

include_directories(${CMAKE_SOURCE_DIR}/include)

# add boost as a dependency to the project
# if boost was not installed then this will cause CMake to crash / not finish
# TODO: make a fix for the above issue later (run the install script or print an error message).
set(BOOST_ROOT /opt/boost)
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost COMPONENTS system)

include_directories(${Boost_INCLUDE_DIR})


# set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++11") # -Wall -Werror

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")


add_subdirectory(lib)
add_subdirectory(tools)

# we may want to change the googletest release number if
# they release a new version of google test in the future.
include_directories(
  ${CMAKE_SOURCE_DIR}/external/googletest-release-1.7.0/include
)

add_subdirectory(${CMAKE_SOURCE_DIR}/external/googletest-release-1.7.0/)

# ${CMAKE_SOURCE_DIR}/external/googlemock/include/

add_subdirectory(test)

