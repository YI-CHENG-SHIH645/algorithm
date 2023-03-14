//
// Created by 施奕成 on 2023/3/13.
//
#include "tree.h"
using namespace std;

bool checkPathSum(TreeNode *node, int targetSum, int curSum) {
  if (curSum == targetSum && !node->left && !node->right)
    return true;
  return (node->left &&
          checkPathSum(node->left, targetSum, node->left->val + curSum)) ||
         (node->right &&
          checkPathSum(node->right, targetSum, node->right->val + curSum));
}

bool hasPathSum(TreeNode *root, int targetSum) {
  return root && checkPathSum(root, targetSum, root->val);
}
