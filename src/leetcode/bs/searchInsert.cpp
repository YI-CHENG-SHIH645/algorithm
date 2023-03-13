//
// Created by 施奕成 on 2023/3/11.
//
#include "bs.h"
using namespace std;

int search(vector<int>& nums, int left, int right, int target) {
  if(left >= right) return left;
  if(nums[(left+right)/2] == target) return (left+right)/2;
  if(nums[(left+right)/2] > target) return search(nums, left, (left+right)/2, target);
  return search(nums, (left+right)/2+1, right, target);
}

int searchInsert(vector<int>& nums, int target) {
  int size = (int)nums.size();
  if(nums[size/2] == target) return size/2;
  if(nums[size/2] > target) return search(nums, 0, size/2, target);
  return search(nums, size/2+1, size, target);
}

