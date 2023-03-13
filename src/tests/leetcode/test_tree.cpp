//
// Created by 施奕成 on 2023/3/13.
//
#include <gtest/gtest.h>
#include <tree/tree.h>

TEST(TreeTest, sortedArrayToBST) {
  std::vector<int> a{1, 2, 3, 4, 5};
  TreeNode *ans = sortedArrayToBST(a);
  EXPECT_TRUE(isValidBST(ans));
}
