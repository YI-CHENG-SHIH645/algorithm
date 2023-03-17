//
// Created by 施奕成 on 2023/2/13.
//

#pragma once
#include <algorithm>
#include <vector>

struct ListNode {
  int val;
  ListNode *next;
  explicit ListNode(int x) : val(x), next(nullptr) {}
};

bool operator==(const ListNode &x, const ListNode &y);

ListNode *makeLinkedList(const std::vector<int> &, int);

bool hasCycle(ListNode *);

ListNode *detectCycle(ListNode *);

ListNode *RemoveDuplicateI(ListNode *);

ListNode *RemoveDuplicateII(ListNode *);

ListNode *addTwoNumbers(ListNode *, ListNode *);

ListNode *reverseList(ListNode *);
