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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        auto getLength = [](ListNode *r) -> int {
            int l = 0;
            while (r)
            {
                ++l;
                r = r->next;
            }
            return l;
        };

        int a = getLength(headA);
        int b = getLength(headB);
        while (a > b)
        {
            --a;
            headA = headA->next;
        }

        while (b > a)
        {
            --b;
            headB = headB->next;
        }

        while (headA)
        {
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};