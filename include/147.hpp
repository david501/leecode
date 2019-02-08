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
  ListNode *insertionSortList(ListNode *head) {
    if (!head)
      return head;

    ListNode *cur{head->next};
    head->next = nullptr;

    while (cur) {
      auto next = cur->next;
      if (cur->val < head->val) {
        cur->next = head;
        head = cur;
      } else {
        for (auto p = head;; p = p->next) {
          if (p->next == nullptr || p->next->val >= cur->val) {
            cur->next = p->next;
            p->next = cur;
            break;
          }
        }
      }
      cur = next;
    }
    return head;
  }
};