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
  ListNode *partition(ListNode *head, int x) {
    if (!head)
      return head;

    ListNode *cur{head};
    ListNode *s{nullptr};
    ListNode *b(nullptr), *hb{nullptr};
    while (cur) {
      if (cur->val < x) {
        if (!s) {
          head = s = cur;
        } else {
          s->next = cur;
          s = s->next;
        }
        cur = cur->next;
        s->next = nullptr;
      } else {
        if (!hb) {
          hb = b = cur;
        } else {
          b->next = cur;
          b = b->next;
        }
        cur = cur->next;
        b->next = nullptr;
      }
    }

    if (s) {
      s->next = hb;
    } else
      head = hb;

    return head;
  }
};