/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include "common.h"
class Solution {
public:
  // ListNode *swapPairs(ListNode *head) {
  //   if (!head || !head->next)
  //     return head;

  //   ListNode *last{head}, *current{head->next};
  //   head = current;
  //   last->next = current->next;
  //   current->next = last;
  //   current = last->next;

  //   while (current && current->next) {
  //     ListNode *next = current->next;
  //     last->next = next;
  //     current->next = next->next;
  //     next->next = current;

  //     last = current;
  //     current = current->next;
  //   }

  //   return head;
  // }

  ListNode *swapPairs(ListNode *head) {
    ListNode **p(&head), *a, *b;
    while ((a = *p) && (b = a->next)) {
      a->next = b->next;
      b->next = a;
      *p = b;
      p = &(a->next);
    }

    return head;
  }
};