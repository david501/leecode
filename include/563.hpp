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
  int findTilt(TreeNode *root) {
    int tilt = 0;
    function<int(TreeNode *)> traversal = [&](TreeNode *root) -> int {
      if (!root)
        return 0;
      int left = traversal(root->left);
      int right = traversal(root->right);
      tilt += abs(left - right);
      return root->val + left + right;
    };

    traversal(root);
    return tilt;
  }
};