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
  bool isValidBST(TreeNode *root) {
     function<bool(TreeNode *, long, long)> helper =
        [&](TreeNode *root, long min_val, long max_val) -> bool {
      return !root || ((min_val < root->val && root->val < max_val) &&
                       helper(root->left, min_val, root->val) &&
                       helper(root->right, root->val, max_val));
    };

    return helper(root, INT_MIN - 1l, INT_MAX + 1l);
  }
};