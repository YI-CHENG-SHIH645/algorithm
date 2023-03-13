//
// Created by 施奕成 on 2023/3/11.
//
#include "tree.h"
using namespace std;

int minDepth(TreeNode* root) {
  if(root == nullptr) return 0;
  if(root->left != nullptr && root->right != nullptr)
    return min(minDepth(root->left)+1, minDepth(root->right)+1);
  else if(root->left != nullptr && root->right == nullptr)
    return minDepth(root->left)+1;
  else if(root->left == nullptr && root->right != nullptr)
    return minDepth(root->right)+1;
  return 1;
}
