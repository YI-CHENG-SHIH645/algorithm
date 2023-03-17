//
// Created by 施奕成 on 2023/2/12.
//
#pragma once
#include <algorithm>
#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

std::vector<int> topKFrequent(std::vector<int> &nums, int k);

std::vector<std::vector<int>> kSmallestPairs(std::vector<int> &nums1,
                                             std::vector<int> &nums2, int k);

class KthLargest {
  int k;
  std::priority_queue<int, std::vector<int>, std::greater<int>> q;

public:
  KthLargest(int k, std::vector<int> &nums);
  int add(int val);
};
