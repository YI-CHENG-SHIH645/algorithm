//
// Created by 施奕成 on 2023/3/4.
//

#pragma once
#include <vector>

template<class T>
class UF {
public:
    explicit UF(const std::vector<std::vector<T>>& grid) {
      int m = (int)grid.size(), n = (int)grid[0].size();
      count = 0;
      for(int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
          parent.push_back(i * n + j);
          if(grid[i][j] != (T)0) {
            ++count;
          }
        }
      }
      mn = (int)parent.size();
      if(count > 0) max_comp_size = 1;
      component_sz = std::vector<int>(mn, 1);
    }

    void uni(int i, int j) {
      while(i != parent[i]) i = parent[i];
      while(j != parent[j]) j = parent[j];
      if(i == j) return;
      if(component_sz[i] >= component_sz[j]) {
        parent[j] = i;
        component_sz[i] += component_sz[j];
        max_comp_size = std::max(max_comp_size, component_sz[i]);
      } else {
        parent[i] = j;
        component_sz[j] += component_sz[i];
        max_comp_size = std::max(max_comp_size, component_sz[j]);
      }
      --count;
    }

    int get_count() const {
      return count;
    }

    int get_max_comp_size() const {
      return max_comp_size;
    }

private:
    std::vector<int> parent;
    std::vector<int> component_sz;
    int max_comp_size;
    int mn;
    int count;
};

int numIslands(std::vector<std::vector<char>>&);

int maxAreaOfIsland(std::vector<std::vector<int>>&);

