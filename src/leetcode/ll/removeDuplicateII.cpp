//
// Created by 施奕成 on 2023/2/26.
//
#include "ll.h"

ListNode *RemoveDuplicateII(ListNode *head) {
  if(head == nullptr) return head;
  ListNode *current_prev2 = nullptr;
  ListNode *current_prev = head;
  ListNode *current = head->next;
  bool flag;
  while(current != nullptr) {
    flag = current_prev->val == current->val;
    while(current != nullptr && current_prev->val == current->val) {
      current = current->next;
    }

    if(flag) {
      if (current_prev2 == nullptr) {
        head = current;
      } else {
        current_prev2->next = current;
      }
    } else {
      current_prev2 = current_prev;
    }
    current_prev = current;
    if(current != nullptr)
      current = current->next;
  }
  return head;
}
