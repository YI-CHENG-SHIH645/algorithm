//
// Created by 施奕成 on 2023/3/11.
//
#include "tree.h"
#include <queue>
using namespace std;

vector<vector<int>> levelOrder(TreeNode* root) {
  if(!root) return vector<vector<int>>(0);
  vector<vector<int>> res;
  queue<pair<TreeNode *, int>> q;
  q.push(make_pair(root, 0));
  while(!q.empty()) {
    TreeNode *node = q.front().first;
    int level = q.front().second;
    if((int)res.size() <= level) res.emplace_back(vector<int>(0));
    res[level].push_back(node->val);
    if(node->left) q.push(make_pair(node->left, level+1));
    if(node->right) q.push(make_pair(node->right, level+1));
    q.pop();
  }
  return res;
}
