file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/uva/*/*.h")
file(GLOB CPP_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/uva/*/*.cpp")
add_library(uva ${CPP_LIST} ${HEADER_LIST})
target_include_directories(uva
  INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(uva PRIVATE Boost::boost)
target_compile_features(uva PUBLIC cxx_std_11)
