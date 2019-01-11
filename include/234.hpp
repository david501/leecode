/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include "listnode_helper.h"

class Solution
{
  public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *cur = head;
        int len = 0;
        while (cur)
        {
            cur = cur->next;
            ++len;
        }
        if (len < 2)
            return true;

        const int mid = len / 2;
        cur = head;
        ListNode *next = cur->next;
        cur->next = nullptr;
        for (int i = 1; i < mid; ++i)
        {
            ListNode *temp = next->next;
            next->next = cur;
            cur = next;
            next = temp;
        }

        ListNode *const h1 = cur;
        ListNode *const h2 = next;

        bool result = true;
        if (len & 1)
            next = next->next;
        for (int i = 0; i < mid; ++i)
        {
            if (cur->val != next->val)
            {
                result = false;
                break;
            }
            cur = cur->next;
            next = next->next;
        }

        cur = h1;
        next = cur->next;
        cur->next = nullptr;
        for (int i = 1; i < mid; ++i)
        {
            ListNode *temp = next->next;
            next->next = cur;
            cur = next;
            next = temp;
        }
        h1->next = h2;

        return result;
    }
};