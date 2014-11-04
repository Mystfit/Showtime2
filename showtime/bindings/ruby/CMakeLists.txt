set(ruby_interfaces
    rb_showtime.i
)

SET_SOURCE_FILES_PROPERTIES(${ruby_interfaces} PROPERTIES CPLUSPLUS ON)

FIND_PACKAGE(Ruby 1.9)
INCLUDE_DIRECTORIES(${RUBY_INCLUDE_DIRS})
include (${SWIG_USE_FILE})

SWIG_ADD_MODULE(showtime_rb ruby ${ruby_interfaces} ../../${Showtime_SOURCES})
SWIG_LINK_LIBRARIES(showtime_rb ${ZeroMQ_LIBRARIES} ${RUBY_LIBRARY})

