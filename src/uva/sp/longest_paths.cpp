// UVA 10000
// Created by 施奕成 on 2022/7/30.
//
#include "sp.h"

// correct answer but TLE
//void dfs(vector<int> * graph, int s,
//         int & cur, int & cur_max, int & smallest_last_p) {
//  if(graph[s].empty()) {
//    if(cur > cur_max) {
//      cur_max = cur;
//      smallest_last_p = s;
//    } else if(cur == cur_max && smallest_last_p > s) {
//      smallest_last_p = s;
//    }
//  }
//  int tmp;
//  for(int i=0; i<graph[s].size(); ++i) {
//    tmp = cur;
//    dfs(graph, graph[s].at(i), ++cur, cur_max, smallest_last_p);
//    cur = tmp;
//  }
//}

pair<int, int> spfa(vector<int> * graph, int s, int n) {
  int dis[n+1], cur;
  for(int i=1; i<n+1; ++i) dis[i] = INT_MIN;
  queue<int> q;
  q.push(s); dis[s] = 0;
  while(!q.empty()) {
    cur = q.front(); q.pop();
    for(const auto & adj_node : graph[cur]) {
      if(dis[cur] + 1 > dis[adj_node]) {
        dis[adj_node] = dis[cur] + 1;
        q.push(adj_node);
      }
    }
  }
  int max = INT_MIN, argmax;
  for(int i=1; i<n+1; ++i)
    if(dis[i] > max) {
      max = dis[i];
      argmax = i;
    }
  return make_pair(max, argmax);
}

void longest_paths() {
  int n, s, p1, p2, kase = 0;
  while(cin >> n && n) {
    vector<int> graph[n+1];
    cin >> s;
    while(cin >> p1 >> p2 && p1) {
      graph[p1].push_back(p2);
    }
//        int cur, cur_max, smallest_last_p;
//        cur = cur_max = 0; smallest_last_p = s;
//        dfs(graph, s, cur, cur_max, smallest_last_p);
    auto res = spfa(graph, s, n);
    cout << "Case " << ++kase << ": The longest path from " << s <<
         " has length " << res.first << ", finishing at " << res.second << "." << endl << endl;
  }
}
