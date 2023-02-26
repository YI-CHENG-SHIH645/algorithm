//
// Created by 施奕成 on 2023/2/26.
//
#include <gtest/gtest.h>
#include <stack/stack.h>

TEST(StackTest, isValidParentheses) {
  EXPECT_TRUE(isValid("()"));
  EXPECT_TRUE(isValid("()[]{}"));
  EXPECT_FALSE(isValid("(]"));
}
