//
// Created by 施奕成 on 2023/2/26.
//
#include "ll.h"

ListNode* reverseList(ListNode* head) {
  if(head == nullptr) return head;
  ListNode *nextNode = head->next, *tmp;
  head->next = nullptr;
  while(nextNode != nullptr) {
    tmp = nextNode->next;
    nextNode->next = head;
    head = nextNode;
    nextNode = tmp;
  }
  return head;
}
