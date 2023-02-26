//
// Created by 施奕成 on 2023/2/25.
//
#include "ll.h"

bool hasCycle(ListNode *head) {
  // ------------ naive version ------------
  // std::set<ListNode *> nodes;
  // while(head != nullptr) {
  //     if(nodes.find(head) != nodes.end())
  //         return true;
  //     nodes.insert(head);
  //     head = head->next;
  // }
  // return false;

  ListNode *fast_p = head, *slow_p = head;
  while(fast_p != nullptr && fast_p->next != nullptr) {
    slow_p = slow_p->next;
    fast_p = fast_p->next->next;
    if(fast_p == slow_p)
      return true;
  }
  return false;
}
