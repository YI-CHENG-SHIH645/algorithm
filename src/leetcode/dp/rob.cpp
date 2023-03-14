//
// Created by 施奕成 on 2023/3/14.
//
#include "dp.h"
using namespace std;

int rob(vector<int> &nums) {
  int n = (int)nums.size();
  int dp[n + 1];
  dp[0] = 0;
  dp[1] = nums[0];
  for (int i = 2; i < n + 1; ++i) {
    dp[i] = max(dp[i - 2] + nums[i - 1], dp[i - 1]);
  }
  return dp[n];
}
