//
// Created by 施奕成 on 2023/2/28.
//
#include "dp.h"

void findGtBeforeI(vector<int>& nums, vector<int>& dp, size_t i) {
  if(dp[0] < dp[1] + nums[i] || dp[0] < nums[i]) {
    if(dp[1] < 0) {
      dp[0] = dp[1] = nums[i];
    }
    else {
      dp[1] += nums[i];
      dp[0] = dp[1];
    }
  }
  else {
    if (dp[1] < 0 && (nums[i] < 0 || dp[1] < nums[i])) {
      dp[1] = nums[i];
    } else {
      dp[1] += nums[i];
    }
  }
}

int maxSubArray(vector<int>& nums) {
  size_t n = nums.size();
  vector<int> dp(2, 0);
  dp[0] = dp[1] = nums[0];
  for(size_t i=1; i<n; ++i) {
//    findGtBeforeI(nums, dp, i);
    dp[1] = max(dp[1]+nums[i], nums[i]);
    dp[0] = max(dp[0], dp[1]);
  }
  return dp[0];
}
