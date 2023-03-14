//
// Created by 施奕成 on 2023/3/11.
//
#include <algorithm>
#include <vector>

#pragma once
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode *root);

int minDepth(TreeNode *root);

TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2);

std::vector<std::vector<int>> levelOrder(TreeNode *root);

std::vector<std::vector<int>> zigzagLevelOrder(TreeNode *root);

bool isValidBST(TreeNode *root);

TreeNode *sortedArrayToBST(std::vector<int> &nums);

bool hasPathSum(TreeNode *root, int targetSum);

TreeNode *buildTree(std::vector<int> &preorder, std::vector<int> &inorder);
