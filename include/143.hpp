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
  void reorderList(ListNode *head) {
    if (!head)
      return;

    ListNode *fast{head}, *slow{head};
    while (fast->next) {
      slow = slow->next;
      fast = fast->next;
      if (!fast->next)
        break;
      fast = fast->next;
    }

    ListNode *head2{slow->next};
    if (!head2)
      return nullptr;
    fast = head2;
    slow->next = nullptr;
    while (fast->next) {
      auto next = fast->next;
      fast->next = next->next;
      next->next = head2;
      head2 = next;
    }

    fast = head;
    while (head2) {
      auto next = fast->next;
      fast->next = head2;
      head2 = head2->next;
      fast = fast->next;
      fast->next = next;
      fast = next;
    }
  }
};