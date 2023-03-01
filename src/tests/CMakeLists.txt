file(GLOB LEETCODE_CPP_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/tests/leetcode/*.cpp")
file(GLOB UVA_CPP_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/tests/uva/*.cpp")
file(GLOB UVA_HEADER_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/tests/uva/*.h")

add_executable(
  tests
  ${LEETCODE_CPP_LIST}
  ${UVA_CPP_LIST}
  ${UVA_HEADER_LIST}
)

target_link_libraries(
  tests
  GTest::gtest_main
  GTest::gmock_main
  leetcode
  uva
)
