//
// Created by 施奕成 on 2023/2/12.
//
#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k);

vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k);

class KthLargest {
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
public:
    KthLargest(int k, vector<int>& nums);
    int add(int val);
};
