//
// Created by 施奕成 on 2023/2/26.
//
#include "dp.h"

int lengthOfLIS(vector<int>& nums) {
  // [10, 9, 2, 5, 3, 7, 101, 18]

  // [1,  1, 1, 2, 2, 3,   4,  4]
  // [0,  1, 1, 2, 2, 3,   4,  4]
  // [0,  0, 1, 2, 2, 3,   4,  4]
  // [0,  0, 0, 1, 1, 2,   3,  3]
  // [0,  0, 0, 0, 1, 2,   3,  3]
  // [0,  0, 0, 0, 0, 1,   2,  2]
  // [0,  0, 0, 0, 0, 0,   1,  1]
  // [0,  0, 0, 0, 0, 0,   0,  1]

  size_t n = nums.size();
  int dp[n][n];
  memset(dp, 0, sizeof(dp));
  for(size_t i=0; i<n; ++i) {
    dp[i][i] = 1;
    if(i+1 < n && nums[i] < nums[i+1]) {
      dp[i][i+1] = 2;
    }
  }
  for(size_t wl=2; wl<n; ++wl) {
    for(size_t sp=0; (sp+wl)<n; ++sp) {
      for(size_t bp=sp+1; bp<(sp+wl); ++bp) {
        if(nums[bp-1] < nums[bp+1]) {
          dp[sp][sp + wl] = dp[sp][bp] + dp[bp][sp + wl] - 1;
          break;
        }
        else {
          dp[sp][sp + wl] = max(dp[sp][bp], dp[bp][sp + wl]);
        }
      }
    }
  }

  return dp[0][n-1];
}
