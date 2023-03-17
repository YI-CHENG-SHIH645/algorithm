#include "pq.h"
using namespace std;

KthLargest::KthLargest(int k, vector<int> &nums) : k(k) {
  for (int n : nums) {
    add(n);
  }
}

int KthLargest::add(int val) {
  if (q.empty() || q.size() < k) {
    q.push(val);
  } else if (val > q.top()) {
    q.pop();
    q.push(val);
  }

  return q.top();
}
