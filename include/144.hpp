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
  vector<int> preorderTraversal(TreeNode *root) {
    stack<TreeNode *> st;
    st.push(root);
    vector<int> res;
    while (!st.empty()) {
      auto cur = st.top();
      st.pop();
      for (; cur; cur = cur->left) {
        res.push_back(cur->val);
        if (cur->right)
          st.push(cur->right);
      }
    }
    return res;
  }
};