//
// Created by 施奕成 on 2023/3/11.
//
#include <gtest/gtest.h>
#include <bs/bs.h>

TEST(BSTest, searchInsert) {
  std::vector<int> a = {1, 3, 5, 6};
  EXPECT_EQ(searchInsert(a, 5), 2);
  EXPECT_EQ(searchInsert(a, 2), 1);
//  EXPECT_EQ(searchInsert(a, 7), 4);
}

TEST(BSTest, findMin) {
  std::vector<int> a = {3, 4, 5, 1, 2};
  EXPECT_EQ(findMin(a), 1);
  a = {4, 5, 6, 7, 0, 1, 2};
  EXPECT_EQ(findMin(a), 0);
  a = {11, 13, 15, 17};
  EXPECT_EQ(findMin(a), 11);
}
