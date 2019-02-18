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
  TreeNode *lowestCommonno_parent_match(TreeNode *root, TreeNode *p,
                                        TreeNode *q) {
    TreeNode *found{nullptr};
    function<void(TreeNode *)> helper = [&](TreeNode *root) {
      if (!root || found)
        return;

      bool no_parent_match{p && q};
      if (p == root)
        p = nullptr;
      else if (q == root)
        q = nullptr;

      if (p || q) {
        helper(root->left);
        if (p || q)
          helper(root->right);
      }

      if (!p && !q) {
        if (no_parent_match && !found)
          found = root;
      }
    };

    helper(root);
    return found;
  }
};