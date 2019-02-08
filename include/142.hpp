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
  ListNode *detectCycle(ListNode *head) {
    if (!head)
      return head;

    ListNode *fast{head}, *slow{head};
    while (fast->next) {
      slow = slow->next;
      fast = fast->next;
      if (!fast->next)
        break;
      fast = fast->next;
      if (fast == slow) {
        fast = head;
        while (fast != slow) {
          fast = fast->next;
          slow = slow->next;
        }
        return fast;
      }
    }
    return nullptr;
  }
};