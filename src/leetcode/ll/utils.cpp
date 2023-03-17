//
// Created by 施奕成 on 2023/2/14.
//
#include "ll.h"
using namespace std;

ListNode *makeLinkedList(const vector<int> &list, int pos) {
  if (list.empty()) {
    return nullptr;
  }
  auto head = new ListNode(list[0]);
  auto cur = head;
  ListNode *cyclePoint = nullptr;
  if (pos == 0)
    cyclePoint = cur;

  for (int i = 1; i < list.size(); ++i) {
    cur->next = new ListNode(list[i]);
    cur = cur->next;
    if (i == pos)
      cyclePoint = cur;
  }
  cur->next = cyclePoint;

  return head;
}

bool operator==(const ListNode &x, const ListNode &y) {
  if (&x == &y)
    return true;
  const ListNode *lhs = &x;
  const ListNode *rhs = &y;
  while (lhs && rhs) {
    if (lhs->val != rhs->val)
      return false;
    lhs = lhs->next;
    rhs = rhs->next;
  }
  if (lhs || rhs)
    return false;
  return true;
}
