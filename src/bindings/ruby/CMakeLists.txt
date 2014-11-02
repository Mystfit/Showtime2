#Swig bindings
#-------------

set(ruby_interfaces
    zst_node.i
)

SET_SOURCE_FILES_PROPERTIES(${ruby_interfaces} PROPERTIES CPLUSPLUS ON)

FIND_PACKAGE(Ruby)
INCLUDE_DIRECTORIES(${RUBY_INCLUDE_PATH})
include (${SWIG_USE_FILE})

SWIG_ADD_MODULE(showtime ruby ${ruby_interfaces} ../../${Showtime_SOURCES})
#add_definitions(-D_XKEYCHECK_H)
#SWIG_LINK_LIBRARIES(showtime ${ZeroMQ_LIBRARIES} ruby)