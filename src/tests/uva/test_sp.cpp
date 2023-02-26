//
// Created by 施奕成 on 2023/2/26.
//
#include <gtest/gtest.h>
#include <sp/sp.h>
#include "common.h"

TEST(SPTest, longest_paths) {
  map<string, string> m{{"2  1  1 2  0 0  0",
                         "The longest path from 1 has length 1, finishing at 2."},
                        {"5  3  1 2  3 5  3 1  2 4  4 5  0 0  0",
                         "The longest path from 3 has length 4, finishing at 5."},
                        {"5  5  5 1  5 2  5 3  5 4  4 1  4 2  0 0  0",
                         "The longest path from 5 has length 2, finishing at 1."}};
  test_func(longest_paths, m);
}
