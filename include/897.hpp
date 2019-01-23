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
  TreeNode *increasingBST(TreeNode *root) {
    TreeNode *new_root = nullptr;
    TreeNode *last = nullptr;

    function<void(TreeNode *)> traversal = [&](TreeNode *root) {
      if (!root)
        return;

      traversal(root->left);

      if (!last) {
        new_root = last = root;
      } else {
        root->left = nullptr;
        last->right = root;
        last = root;
      }

      traversal(root->right);
    };

    traversal(root);
    return new_root;
  }
};