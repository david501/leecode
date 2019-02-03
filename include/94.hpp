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
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> res;
    stack<TreeNode *> st;

    while (root) {
      if (root->left) {
        st.push(root);
        root = root->left;
      } else {
        res.push_back(root->val);
        if (root->right)
          root = root->right;
        else {
          root = nullptr;
          while (!st.empty()) {
            root = st.top();
            st.pop();
            res.push_back(root->val);
            if (root->right) {
              root = root->right;
              break;
            } else
              root = nullptr;
          }
        }
      }
    }
    return res;
  }
};