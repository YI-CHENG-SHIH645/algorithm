//
// Created by 施奕成 on 2023/2/26.
//
#include <gtest/gtest.h>
#include <dp/dp.h>

TEST(DPTest, lengthOfLIS) {
  vector<vector<int>> a = {{10, 9, 2, 5, 3, 7, 101, 18},
                           {0, 1, 0, 3, 2, 3},
                           {7, 7, 7, 7, 7, 7, 7},
                           {4, 10, 4, 3, 8, 9}};
  vector<int> golden = {4, 4, 1, 3};
  EXPECT_EQ(a.size(), golden.size());
  for(int i=0; i<a.size(); ++i) {
    EXPECT_EQ(lengthOfLIS(a[i]), golden[i]);
  }
}

TEST(DPTest, maxSubArray) {
  vector<vector<int>> a = {{-2, 1, -3, 4, -1, 2, 1, -5, 4},
                           {1},
                           {5, 4, -1, 7, 8},
                           {-2, -1},
                           {8, -19, 5, -4, 20}};
  vector<int> golden = {6, 1, 23, -1, 21};
  EXPECT_EQ(a.size(), golden.size());
  for(int i=0; i<a.size(); ++i) {
    EXPECT_EQ(maxSubArray(a[i]), golden[i]);
  }
}
