//
// Created by 施奕成 on 2023/2/26.
//
#include "dp.h"

void findLISAtI(vector<int>& nums, vector<int>& lis_ends_at_i, size_t i) {
  int ans = 0;
  for(size_t j=0; j<i; ++j) {
    if(nums[j] < nums[i]) {
      if(lis_ends_at_i[j] == -1)
        findLISAtI(nums, lis_ends_at_i, j);
      ans = max(ans, lis_ends_at_i[j]);
    }
  }
  lis_ends_at_i[i] = ans+1;
}

int lengthOfLIS(vector<int>& nums) {
  // [4, 10, 4, 3, 8, 9]
  size_t sz = nums.size();
  int ans = 0;
  if(sz == 0) return ans;
  vector<int> lis_ends_at_i(sz, -1);
  lis_ends_at_i[0] = 1;
  for(size_t i=0; i<sz; ++i) {
    findLISAtI(nums, lis_ends_at_i, i);
    ans = max(ans, lis_ends_at_i[i]);
  }
  return ans;
}
