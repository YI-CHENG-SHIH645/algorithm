//
// Created by 施奕成 on 2023/2/24.
//
#include "common.h"
#include <../uva/dp/dp.h>
#include <gtest/gtest.h>

TEST(DPTest, cutting_sticks) {
  map<string, string> m{{"100 3 25 50 75 0", "is 200"},
                        {"10 4 4 5 7 8 0", "is 22"}};
  test_func(cutting_sticks, m);
}
