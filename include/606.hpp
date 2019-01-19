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
  string tree2str(TreeNode *t) {
    if (!t)
      return "";

    string s = to_string(t->val);
    if (t->right)
      s += "(" + tree2str(t->left) + ")(" + tree2str(t->right) + ")";
    else if (t->left)
      s += "(" + tree2str(t->left) + ")";

    return s;
  }
};