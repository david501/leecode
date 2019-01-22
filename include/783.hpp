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
  int minDiffInBST(TreeNode *root) {
    int min_diff = INT_MAX;
    int last_val = INT_MIN;
    function<void(TreeNode *)> traversal = [&](TreeNode *root) {
      if (!root)
        return;

      traversal(root->left);

      if (last_val != INT_MIN) {
        const int diff = root->val - last_val;
        if (diff < min_diff)
          min_diff = diff;
      }
      last_val = root->val;

      traversal(root->right);
    };

    traversal(root);
    return min_diff;
  }
};