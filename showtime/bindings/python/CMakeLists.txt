set(python_interfaces
    py_showtime.i
)

SET_SOURCE_FILES_PROPERTIES(${python_interfaces} PROPERTIES CPLUSPLUS ON)

FIND_PACKAGE(PythonLibs)
INCLUDE_DIRECTORIES(${PYTHON_INCLUDE_PATH})
include (${SWIG_USE_FILE})

SWIG_ADD_MODULE(showtime_py python ${python_interfaces} ../../${Showtime_SOURCES})
SWIG_LINK_LIBRARIES(showtime_py ${ZeroMQ_LIBRARIES} ${PYTHON_LIBRARIES})