include_directories(${ZeroMQ_INCLUDE_DIR})
include_directories(${ZeroMQ_CPP_BINDINGS})
include_directories (${CMAKE_CURRENT_SOURCE_DIR} ${LUAJIT_INCLUDE_DIR})

set(Showtime_SOURCES
    zst_node.cpp
)

set(Showtime_HEADERS
    zst_node.h
)
source_group("Source Files" FILES ${Showtime_SOURCES})
source_group("Header Files" FILES ${Showtime_HEADERS})

FIND_LIBRARY(ZMQ_LIB libzmq)

add_library(showtime ${Showtime_SOURCES} ${Showtime_HEADERS})
target_link_libraries(showtime ${ZeroMQ_LIBRARIES})

add_subdirectory(bindings)
