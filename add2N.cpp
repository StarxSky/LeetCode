#include "ListNode.h"
#include <iostream>

ListNode<int> *addTwoNumbers(ListNode<int> *l1, ListNode<int> *l2) {
  ListNode<int> *dummyHead = new ListNode<int>(0);
  ListNode<int> *tail = dummyHead;
  int carry = 0;

  while (l1 != nullptr || l2 != nullptr || carry != 0) {
    int digit1 = (l1 != nullptr) ? l1->val : 0;
    int digit2 = (l2 != nullptr) ? l2->val : 0;

    int sum = digit1 + digit2 + carry;
    int digit = sum % 10;
    carry = sum / 10;

    ListNode<int> *newNode = new ListNode<int>(digit);
    tail->next = newNode;
    tail = tail->next;

    l1 = (l1 != nullptr) ? l1->next : nullptr;
    l2 = (l2 != nullptr) ? l2->next : nullptr;
  }

  ListNode<int> *result = dummyHead->next;
  delete dummyHead;
  return result;
}

int main() {
  /*
  l1 : 2 -> 3 -> 4
  l2 : 4 -> 5 -> 5
  */
  ListNode<int> *l1 = new ListNode<int>(2);
  l1->next = new ListNode<int>(3);
  l1->next->next = new ListNode<int>(4);

  ListNode<int> *l2 = new ListNode<int>(4);
  l2->next = new ListNode<int>(5);
  l2->next->next = new ListNode<int>(5);

  ListNode<int> *res;

  res = addTwoNumbers(l1, l2);
  printList(res);

  return 0;
}