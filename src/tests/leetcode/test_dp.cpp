//
// Created by 施奕成 on 2023/2/26.
//
#include <gtest/gtest.h>
#include <dp/dp.h>

TEST(DPTest, lengthOfLIS) {
  vector<vector<int>> a = {{10, 9, 2, 5, 3, 7, 101, 18},
                           {0, 1, 0, 3, 2, 3},
                           {7, 7, 7, 7, 7, 7, 7}};
  vector<int> golden = {4, 4, 1};
  EXPECT_EQ(a.size(), golden.size());
  for(int i=0; i<a.size(); ++i) {
    EXPECT_EQ(lengthOfLIS(a[i]), golden[i]);
  }
}
