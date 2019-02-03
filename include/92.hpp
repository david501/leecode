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
  ListNode *reverseBetween(ListNode *head, int m, int n) {
    if (!head)
      return head;

    ListNode **p{&head}, *cur{head};
    while (--m) {
      --n;
      p = &(cur->next);
      cur = cur->next;
    }
    while (--n) {
      auto next = cur->next;
      cur->next = next->next;
      next->next = *p;
      *p = next;
    }

    return head;
  }
};