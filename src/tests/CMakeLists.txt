file(GLOB UVA_CPP_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/tests/uva/*.cpp")
file(GLOB UVA_HEADER_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/tests/uva/*.h")
file(GLOB LEETCODE_CPP_LIST CONFIGURE_DEPENDS "${Algorithm_SOURCE_DIR}/src/tests/leetcode/*.cpp")

add_executable(
  tests
  ${UVA_CPP_LIST}
  ${LEETCODE_CPP_LIST}
  ${UVA_HEADER_LIST}
)

target_link_libraries(
  tests
  GTest::gtest_main
  GTest::gmock_main
  leetcode
  uva
)

include(GoogleTest)
gtest_discover_tests(tests)
