#include "pq.h"

bool cmp(const pair<int, int>& p1, const pair<int, int >& p2) {
    return p1.second < p2.second;
}

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    for(int n : nums) {
        m[n] += 1;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(&cmp)> q(cmp);
    
    for(auto p : m) {
        q.push(p);
    }

    vector<int> v;
    for(int i=0; i<k; ++i) {
        v.push_back(q.top().first);
        q.pop();
    }

    return v;
}
