#include "common.h"
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
  int kthSmallest(TreeNode *root, int k) {
    int val;
    function<void(TreeNode *)> helper = [&](TreeNode *root) {
      if (!root || !k)
        return;

      helper(root->left);
      if ((--k) == 0) {
        val = root->val;
      }
      helper(root->right);
    };

    helper(root);
    return val;
  }
};