//
// Created by 施奕成 on 2023/3/11.
//
#include "tree.h"
using namespace std;

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//  if(root1 == nullptr && root2 == nullptr) return nullptr;
//  else if(root1 != nullptr && root2 != nullptr)
//    root1->val += root2->val;
//  else if(root1 == nullptr) return root2;
//  else return root1;
//
//  if(root1->left != nullptr && root2->left != nullptr)
//    root1->left = mergeTrees(root1->left, root2->left);
//  else if(root1->left == nullptr && root2->left != nullptr)
//    root1->left = root2->left;
//
//  if(root1->right != nullptr && root2->right != nullptr)
//    root1->right = mergeTrees(root1->right, root2->right);
//  else if(root1->right == nullptr && root2->right != nullptr)
//    root1->right = root2->right;
//
//  return root1;
  if(root1 && root2) {
    root1->val += root2->val;
    // the following if statements speeds up A LOT !!!
    if(root2->left) root1->left = mergeTrees(root1->left, root2->left);
    if(root2->right) root1->right = mergeTrees(root1->right, root2->right);
  }
  else {
    return root1 ? root1 : root2;
  }
  return root1;
}
