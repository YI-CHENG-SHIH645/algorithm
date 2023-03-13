//
// Created by 施奕成 on 2023/3/13.
//
#include "tree.h"
#include <stack>
using namespace std;


std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root) {
  if(!root) return vector<vector<int>>(0);
  vector<vector<int>> res;
  stack<TreeNode *> s1, s2;
  int lv = 0;
  s1.push(root);
  while(!s1.empty()) {
    TreeNode* node = s1.top();
    s1.pop();
    if(res.size() <= lv) res.emplace_back(vector<int>(0));
    res[lv].push_back(node->val);

    if(lv % 2 == 0) {
      if(node->left) s2.push(node->left);
      if(node->right) s2.push(node->right);
    }
    else {
      if(node->right) s2.push(node->right);
      if(node->left) s2.push(node->left);
    }

    if(s1.empty()) {
      swap(s1, s2);
      ++lv;
    }
  }
  return res;
}
