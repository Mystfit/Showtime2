cmake_minimum_required(VERSION 3.0)
project (LibShowtime)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

find_package(ZeroMQ)

find_package(SWIG REQUIRED)
include(UseSWIG)

add_subdirectory (showtime)