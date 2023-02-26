//
// Created by 施奕成 on 2023/2/13.
//
#include <gtest/gtest.h>
#include <ll/ll.h>

TEST(LLTEST, hasCycle) {
  ASSERT_TRUE(hasCycle(makeLinkedList({3, 2, 0, -4}, 1)));
  ASSERT_TRUE(hasCycle(makeLinkedList({1, 2}, 0)));
  ASSERT_FALSE(hasCycle(makeLinkedList({1, 2, 3, 4}, -1)));
}

TEST(LLTest, detectCycle) {
  EXPECT_EQ(detectCycle(makeLinkedList({3, 2, 0, -4}, 1))->val, 2);
  EXPECT_EQ(detectCycle(makeLinkedList({1, 2}, 0))->val, 1);
  EXPECT_EQ(detectCycle(makeLinkedList({1}, -1)), nullptr);
}

TEST(LLTest, RemoveDuplicateI) {
  EXPECT_EQ(*RemoveDuplicateI(makeLinkedList({1, 1, 2}, -1)),
            *makeLinkedList({1, 2}, -1));
  EXPECT_EQ(*RemoveDuplicateI(makeLinkedList({1, 1, 2, 3, 3}, -1)),
            *makeLinkedList({1, 2, 3}, -1));
}

TEST(LLTest, RemoveDuplicateII) {
  EXPECT_EQ(*RemoveDuplicateII(makeLinkedList({1, 2, 3, 3, 4, 4, 5}, -1)),
            *makeLinkedList({1, 2, 5}, -1));
  EXPECT_EQ(*RemoveDuplicateII(makeLinkedList({1, 1, 1, 2, 3}, -1)),
            *makeLinkedList({2, 3}, -1));
}

TEST(LLTest, addTwoNumbers) {
  EXPECT_EQ(*addTwoNumbers(makeLinkedList({2, 4, 3}, -1),
                                makeLinkedList({5, 6, 4}, -1)),
            *makeLinkedList({7, 0, 8}, -1));
  EXPECT_EQ(*addTwoNumbers(makeLinkedList({0}, -1),
                                makeLinkedList({0}, -1)),
            *makeLinkedList({0}, -1));
  EXPECT_EQ(*addTwoNumbers(makeLinkedList({9, 9, 9, 9, 9, 9, 9}, -1),
                                makeLinkedList({9, 9, 9, 9}, -1)),
            *makeLinkedList({8, 9, 9, 9, 0, 0, 0, 1}, -1));
}

TEST(LLTest, reverseList) {
  EXPECT_EQ(*reverseList(makeLinkedList({1, 2, 3, 4, 5}, -1)),
            *makeLinkedList({5, 4, 3, 2, 1}, -1));
  EXPECT_EQ(*reverseList(makeLinkedList({1, 2}, -1)),
            *makeLinkedList({2, 1}, -1));
}
