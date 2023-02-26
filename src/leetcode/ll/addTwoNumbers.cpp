//
// Created by 施奕成 on 2023/2/26.
//
#include "ll.h"

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
  int c = 0, v;
  ListNode * head = l1, *head2;
  while(l1 != nullptr && l2 != nullptr) {
    v = l1->val + l2->val + c;
    l1->val = v%10;
    c = v/10;
    if(l1->next == nullptr)
      head2 = l1;
    l1 = l1->next;
    l2 = l2->next;
  }
  while(l1 != nullptr) {
    v = l1->val + c;
    l1->val = v%10;
    c = v/10;
    if(l1->next == nullptr)
      break;
    l1 = l1->next;
  }
  if(l2 != nullptr) {
    head2->next = l2;
  }
  while(l2 != nullptr) {
    v = l2->val + c;
    l2->val = v%10;
    c = v/10;
    if(l2->next == nullptr)
      break;
    l2 = l2->next;
  }

  if(c) {
    if(l1 != nullptr) {
      l1->next = new ListNode(c);
    } else if(l2 != nullptr) {
      l2->next = new ListNode(c);
    } else {
      head2->next = new ListNode(c);
    }
  }
  return head;
}
