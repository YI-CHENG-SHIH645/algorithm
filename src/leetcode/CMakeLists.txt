file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/leetcode/*/*.h")
file(GLOB CPP_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/leetcode/*/*.cpp")

add_library(leetcode ${CPP_LIST} ${HEADER_LIST})

target_include_directories(leetcode
  INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(leetcode compiler_flags)
