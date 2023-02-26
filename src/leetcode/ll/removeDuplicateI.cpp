//
// Created by 施奕成 on 2023/2/25.
//
#include "ll.h"

ListNode *RemoveDuplicateI(ListNode *head) {
  ListNode *current_prev = head;
  ListNode *current = head->next;
  while(current != nullptr) {
    while(current != nullptr && current_prev->val == current->val) {
      current = current->next;
    }
    current_prev->next = current;
    current_prev = current;
    if(current != nullptr)
      current = current->next;
  }
  return head;
}
