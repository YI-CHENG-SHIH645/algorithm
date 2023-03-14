//
// Created by 施奕成 on 2023/3/13.
//
#include "tree.h"
using namespace std;

void put(TreeNode **node, vector<int> &nums, int l, int r) {
  if (l >= r)
    return;
  int mid = (l + r) / 2;
  *node = new TreeNode(nums[mid]);
  put(&(*node)->left, nums, l, mid);
  put(&(*node)->right, nums, mid + 1, r);
}

TreeNode *sortedArrayToBST(vector<int> &nums) {
  int n = (int)nums.size();
  auto root = new TreeNode *;
  *root = nullptr;
  put(root, nums, 0, n);
  return *root;
}
