//
// Created by 施奕成 on 2023/3/4.
//
#include "connectivity.h"
using namespace std;

class UF {
public:
  explicit UF(const vector<vector<char>>& grid) {
    int m = (int)grid.size(), n = (int)grid[0].size();
    count = 0;
    for(int i=0; i<m; ++i) {
      for (int j=0; j<n; ++j) {
        parent.push_back(i * n + j);
        if(grid[i][j] - '0') {
          ++count;
        }
      }
    }
    mn = (int)parent.size();
  }

  void quick_union(int i, int j) {
    if(parent[i] == parent[j]) return;
    int iid = parent[i];
    for(int z=0; z<mn; ++z) {
      if(parent[z] == iid) {
        parent[z] = parent[j];
      }
    }
    --count;
  }

  int get_count() const {
    return count;
  }

private:
  vector<int> parent;
  int mn;
  int count;
};

int numIslands(vector<vector<char>>& grid) {
  int m = (int)grid.size(), n = (int)grid[0].size();
  UF uf(grid);
  for(int i=0; i<m; ++i) {
    for(int j=0; j<n; ++j) {
      if(grid[i][j] - '0') {
        grid[i][j] = '0';  // I didn't take this into account
        if(i-1 >= 0 && grid[i-1][j] - '0') uf.quick_union(i*n+j, (i-1)*n+j);
        if(j+1 < n && grid[i][j+1] - '0') uf.quick_union(i*n+j, i*n+j+1);
        if(i+1 < m && grid[i+1][j] - '0') uf.quick_union(i*n+j, (i+1)*n+j);
        if(j-1 >= 0 && grid[i][j-1] - '0') uf.quick_union(i*n+j, i*n+j-1);
      }
    }
  }
  return uf.get_count();
}
