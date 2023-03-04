//
// Created by 施奕成 on 2023/3/4.
//
#include <gtest/gtest.h>
#include <connectivity/connectivity.h>
using namespace std;

TEST(ConnectivityTest, numIslands) {
  vector<vector<char>> grid = {{'1', '1', '1', '1', '0'},
                               {'1', '1', '0', '1', '0'},
                               {'1', '1', '0', '0', '0'},
                               {'0', '0', '0', '0', '0'}};
  EXPECT_EQ(numIslands(grid), 1);
  grid = {{'1', '1', '0', '0', '0'},
          {'1', '1', '0', '0', '0'},
          {'0', '0', '1', '0', '0'},
          {'0', '0', '0', '1', '1'}};
  EXPECT_EQ(numIslands(grid), 3);
}
