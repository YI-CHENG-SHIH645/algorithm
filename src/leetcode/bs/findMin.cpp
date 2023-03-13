//
// Created by 施奕成 on 2023/3/11.
//
#include "bs.h"
using namespace std;

int find(vector<int>& nums, int i, int j) {
  if(i >= (int)nums.size()) return nums[i-1];
  int mid = (i+j)/2;
  int left = (i+mid)/2;
  int right = (mid+j)/2;
  int lv, rv;
  if(left == mid) lv = nums[left];
  else {
    if (nums[left] < nums[mid])
      lv = find(nums, i, left + 1);
    else
      lv = find(nums, left + 1, mid + 1);
  }
  if(right == mid) rv = nums[right];
  else {
    if (nums[mid] > nums[right])
      rv = find(nums, mid + 1, right + 1);
    else
      rv = find(nums, right + 1, j);
  }
  return min(lv, rv);
}

int findMin(vector<int>& nums) {
  return find(nums, 0, (int)nums.size());
}
