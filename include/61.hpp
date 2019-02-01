#include "common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode *rotateRight(ListNode *head, int k) {
    if (!head)
      return head;

    ListNode *fast{head}, *slow{head};
    int i{0};
    while (k--) {
      ++i;
      if (fast->next)
        fast = fast->next;
      else {
        fast = head;
        k = k % i;
      }
    }

    while (fast->next) {
      fast = fast->next;
      if (slow->next)
        slow = slow->next;
      else
        slow = head;
    }

    fast->next = head;
    head = slow->next;
    slow->next = nullptr;

    return head;
  }
};