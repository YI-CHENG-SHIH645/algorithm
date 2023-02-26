//
// Created by 施奕成 on 2023/2/13.
//
#include "ll.h"

ListNode *detectCycle(ListNode *head) {
  ListNode *fast_p = head, *slow_p = head;
  bool hasCycle = false;
  while(fast_p != nullptr && fast_p->next != nullptr) {
    slow_p = slow_p->next;
    fast_p = fast_p->next->next;
    if(fast_p == slow_p) {
      hasCycle = true;
      break;
    }
  }
  if(!hasCycle) {
    return nullptr;
  }
  slow_p = head;
  while(slow_p != fast_p) {
    slow_p = slow_p->next;
    fast_p = fast_p->next;
  }
  return slow_p;
}
