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
    ListNode *reverseList(ListNode *head)
    {
        if (!head)
            return head;

        ListNode *next = head->next;
        head->next = nullptr;

        while (next)
        {
            ListNode *temp = next->next;
            next->next = head;
            head = next;
            next = temp;
        }
        return head;
    }
};