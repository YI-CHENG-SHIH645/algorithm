//
// Created by 施奕成 on 2023/3/13.
//
#include "tree.h"
#include <climits>
using namespace std;

bool checkValid(TreeNode* root, long l, long u) {
    return (root->val > l && (!root->left || root->left->val < root->val && checkValid(root->left, l, root->val))) &&
           (root->val < u && (!root->right || root->val < root->right->val && checkValid(root->right, root->val, u)));
}

bool isValidBST(TreeNode* root) {
  // -2^31 <= val <= 2^31-1
//  return (!root->left || root->left->val < root->val && isValidBST(root->left)) &&
//         (!root->right || root->val < root->right->val && isValidBST(root->right));
  return checkValid(root, LONG_MIN, LONG_MAX);
}
