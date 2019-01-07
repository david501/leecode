#include <vector>
#include <ostream>
#include <iostream>

using namespace std;

//Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *createLists(const vector<int> &v)
{
    ListNode *head = nullptr;
    ListNode *cur = nullptr;

    for (const auto val : v)
    {
        if (!head)
        {
            head = cur = new ListNode(val);
            continue;
        }

        cur->next = new ListNode(val);
        cur = cur->next;
    }

    return head;
};

ostream & operator <<(ostream &out, const ListNode* l)
{
    const ListNode* it=l;
    while (it)
    {
        out << it->val;
        it = it->next;
        if (it)
            out << "->";
    }
    return out;
}

bool compareLists(ListNode *l1, ListNode *l2)
{
    bool OK = true;
    ListNode *lt1 = l1;
    ListNode *lt2 = l2;
    while (lt1 && lt2)
    {
        if (lt1->val != lt2->val)
        {
            OK = false;
            break;
        }
        lt1 = lt1->next;
        lt2 = lt2->next;
    }

    OK &= !lt1 && !lt2;
    if (!OK)
    {
        cout<< "l1:" << l1<<endl;
        cout<< "l2:" << l2<<endl;
    }

    return OK;
}


