/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  TreeNode *sortedListToBST(ListNode *head) {
    if (!head)
      return nullptr;

    ListNode *s{head}, *f{head->next}, **p{&head};
    while (f && f->next) {
      p = &(s->next);
      s = s->next;
      f = f->next;
      if (f)
        f = f->next;
    }

    TreeNode *root = new TreeNode(s->val);
    *p = nullptr;
    root->left = sortedListToBST(head);
    root->right = sortedListToBST(s->next);
    *p = s;

    return root;
  }
};