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
  bool findTarget(TreeNode *root, int k) {
    bool found = false;
    stack<int> st;

    function<void(TreeNode *)> traversal = [&](TreeNode *root) {
      if (!root || found)
        return;

      traversal(root->left);
      if(found) return;

      while (!st.empty() && root->val > st.top()) {
        st.pop();
      }

      if (!st.empty() && st.top() == root->val) {
        found = true;
        return;
      }

      const int need = k - root->val;
      if (need >= root->val)
        st.push(need);

      traversal(root->right);
    };

    traversal(root);
    return found;
  }
};