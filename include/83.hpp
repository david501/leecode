#include "listnode_helper.h"

class Solution
{
  public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
            return head;

        ListNode *cur = head;
        while (cur->next)
        {
            ListNode *next = cur->next;
            if (next->val != cur->val)
            {
                cur = cur->next;
            }
            else
            {
                cur->next = next->next;
                delete next;
            }
        }
        return head;
    }
};