#pragma once
#include <iostream>

template <typename T> struct ListNode {
  T val;
  ListNode<T> *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(T x) : val(x), next(nullptr) {}
  ListNode(T x, ListNode<T> *next) : val(x), next(next) {}
};

template <typename T> void printList(ListNode<T> *head) {
  while (head != nullptr) {
    std::cout << head->val;

    if (head->next)
      std::cout << " -> ";

    head = head->next;
  }

  std::cout << std::endl;
}
