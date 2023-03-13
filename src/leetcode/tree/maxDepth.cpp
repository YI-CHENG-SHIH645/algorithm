//
// Created by 施奕成 on 2023/3/11.
//
#include "tree.h"
using namespace std;

int maxDepth(TreeNode* root) {
  if(root == nullptr) return 0;
  return max(maxDepth(root->left)+1, maxDepth(root->right)+1);
}
