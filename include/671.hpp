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
  int findSecondMinimumValue(TreeNode *root) {
    if (!root)
      return -1;

    int res = INT_MAX;
    const int smallest = root->val;
    function<void(TreeNode *)> traversal = [&](TreeNode *root) {
      if (!root)
        return;
      if (root->val != smallest) {
        res = min(res, root->val);
        return;
      }
      traversal(root->left);
      traversal(root->right);
    };

    traversal(root);
    return (res == INT_MAX) ? -1 : res;
  }
};