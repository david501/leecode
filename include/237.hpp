#include "common.h"

class Solution
{
  public:
    void deleteNode(ListNode *node)
    {
        auto next = node->next;
        node->val = next->val;
        node->next = next->next;
        delete next;
    }
};