option(USE_PYTHON "Build python bindings" OFF)
option(USE_RUBY "Build ruby bindings" OFF)


if(USE_RUBY)
	add_subdirectory(ruby)
endif(USE_RUBY)

if(USE_PYTHON)
	add_subdirectory(python)
endif(USE_PYTHON)
