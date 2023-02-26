//
// Created by 施奕成 on 2023/2/13.
//
#include <gtest/gtest.h>
#include <pq/pq.h>

TEST(PQTest, kSmallestPairs) {
  vector<vector<int>> a = {{1, 7, 11},
                           {1, 1, 2},
                           {1, 2}};
  vector<vector<int>> b = {{2, 4, 6},
                           {1, 2, 3},
                           {3}};
  vector<int> k = {3, 2, 3};
  vector<vector<vector<int>>> golden = {{{1, 6}, {1, 4}, {1, 2}},
                                        {{1, 1}, {1, 1}},
                                        {{2, 3}, {1, 3}}};
  vector<vector<int>> result;
  ASSERT_EQ(a.size(), b.size());
  ASSERT_EQ(a.size(), golden.size());
  ASSERT_EQ(a.size(), k.size());

  for(int i=0; i<a.size(); ++i) {
    result = kSmallestPairs(a[i], b[i], k[i]);
    ASSERT_EQ(result.size(), golden[i].size()) << "result vector has wrong length";
    for (int j = 0; j < result.size(); ++j) {
      EXPECT_EQ(result[j], golden[i][j]) << "Vectors x and y differ at index " << j;
    }
  }
}


TEST(PQTest, topKFrequent) {
  vector<vector<int>> a = {{1, 1, 1, 2, 2, 3},
                           {1}};
  vector<int> k = {2, 1};
  vector<vector<int>> golden = {{1, 2},
                                {1}};
  vector<int> result;
  ASSERT_EQ(a.size(), k.size());
  for(int i=0; i<a.size(); ++i) {
    result = topKFrequent(a[i], k[i]);
    EXPECT_EQ(result, golden[i]);
  }
}


TEST(PQTest, KthLargest) {
  vector<int> a{4, 5, 8, 2};
  KthLargest kthLargest(3, a);
  EXPECT_EQ(kthLargest.add(3), 4);
  EXPECT_EQ(kthLargest.add(5), 5);
  EXPECT_EQ(kthLargest.add(10), 5);
  EXPECT_EQ(kthLargest.add(9), 8);
  EXPECT_EQ(kthLargest.add(4), 8);
}
