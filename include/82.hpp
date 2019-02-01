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
  ListNode *deleteDuplicates(ListNode *head) {
    if (!head)
      return head;

    ListNode **p{&head}, *cur;
    while ((cur = *p) && cur->next) {
      const int val = cur->val;
      if (cur->next->val == val) {
        while (cur && cur->val==val) {
          ListNode *t = cur;
          cur = cur->next;
          delete t;
        }
        *p=cur;
      }
      else {
        p=&(cur->next);
      }
    }

    return head;
  }
};