/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
  public:
    bool hasCycle(ListNode *head)
    {
        if (!head)
            return false;
        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast)
        {
            if (fast == slow)
                return true;
                
            slow = slow->next;
            fast = fast->next;
            if (fast == slow)
                return true;
            if (fast)
                fast = fast->next;
        }
        return false;
    }
};