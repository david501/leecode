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
  bool isSubtree(TreeNode *s, TreeNode *t) {
    function<bool(TreeNode *, TreeNode *)> isSameTree =
        [&](TreeNode *s, TreeNode *t) -> bool {
      if (!s || !t)
        return s == t;
      return s->val == t->val && isSameTree(s->left, t->left) &&
             isSameTree(s->right, t->right);
    };

    if (!s)
      return false;
    return isSameTree(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
  }
};