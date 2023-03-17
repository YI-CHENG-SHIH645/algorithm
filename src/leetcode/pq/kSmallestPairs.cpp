#include "pq.h"
using namespace std;

struct Pair {
  vector<int> v;
  int sum;

  explicit Pair(vector<int> v) : v(v), sum(v[0] + v[1]) {}

  bool operator<(const Pair &other) const { return sum < other.sum; }
};

bool cmp(const Pair &p1, const Pair &p2) { return p1.sum < p2.sum; }

vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2,
                                   int k) {

  priority_queue<Pair, vector<Pair>, decltype(&cmp)> q(cmp);

  for (int &i : nums1) {
    for (int &j : nums2) {
      if (q.size() < k) {
        q.push(Pair({i, j}));
      } else {
        if (i + j < q.top().sum) {
          q.pop();
          q.push(Pair({i, j}));
        } else {
          break;
        }
      }
    }
  }

  vector<vector<int>> pairs;
  while (!q.empty()) {
    pairs.push_back(q.top().v);
    q.pop();
  }
  return pairs;
}
