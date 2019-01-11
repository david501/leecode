#include <vector>
#include <ostream>
#include <iostream>
#include <algorithm>
#include <sstream>

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


void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

ListNode* stringToListNode(string input) {
    // Generate list from the input
    vector<int> list = stringToIntegerVector(input);

    // Now convert that list into linked list
    ListNode* dummyRoot = new ListNode(0);
    ListNode* ptr = dummyRoot;
    for(int item : list) {
        ptr->next = new ListNode(item);
        ptr = ptr->next;
    }
    ptr = dummyRoot->next;
    delete dummyRoot;
    return ptr;
}

int stringToInteger(string input) {
    return stoi(input);
}

string listNodeToString(ListNode* node) {
    if (node == nullptr) {
        return "[]";
    }

    string result;
    while (node) {
        result += to_string(node->val) + ", ";
        node = node->next;
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}
