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
  int sumNumbers(TreeNode *root) {
    int sum{0};
    int s{0};
    function<void(TreeNode *)> helper = [&](TreeNode *root) {
      if (!root)
        return;

      if (!root->left && !root->right) {
        sum += s * 10 + root->val;
      } else {
        s = s * 10 + root->val;
        helper(root->left);
        helper(root->right);
        s /= 10;
      }
    };

    helper(root);
    return sum;
  }
};