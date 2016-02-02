cmake_minimum_required(VERSION 2.8)
project(server)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(BOOST_ROOT /opt/boost)
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost COMPONENTS system)

include_directories(${Boost_INCLUDE_DIR})

# set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++14") # -Wall -Werror

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")


add_subdirectory(lib)
add_subdirectory(tools)

include_directories(
  ${CMAKE_SOURCE_DIR}/external/googletest/include/
  ${CMAKE_SOURCE_DIR}/googlemock/include/
)

add_subdirectory(test)

