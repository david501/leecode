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
  ListNode *sortList(ListNode *head) {
    if (!head || !(head->next))
      return head;

    ListNode *l1{head}, *l2{head->next};
    ListNode *c1{l1}, *c2{l2}, *next{c2->next};
    c1->next = c2->next = nullptr;
    while (next) {
      c1->next = next;
      next = next->next;
      c1 = c1->next;
      c1->next = nullptr;

      if (next) {
        c2->next = next;
        next = next->next;
        c2 = c2->next;
        c2->next = nullptr;
      }
    }

    l1 = sortList(l1);
    l2 = sortList(l2);
    
    ListNode *res{nullptr}, **p{&res};
    while (l1 && l2) {
      if (l1->val < l2->val) {
        *p = l1;
        p = &(l1->next);
        l1 = l1->next;
      } else {
        *p = l2;
        p = &(l2->next);
        l2 = l2->next;
      }
    }

    if (l1)
      *p = l1;
    if (l2)
      *p = l2;

    return res;
  }
};