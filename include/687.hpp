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
  int longestUnivaluePath(TreeNode *root) {
    if (!root)
      return 0;

    int longest = 0;
    function<int(TreeNode *, int)> traversal = [&](TreeNode *root,
                                                   int val) -> int {
      if (!root)
        return 0;
      if (root->val != val) {
        traversal(root, root->val);
        return 0;
      }
      const int left = traversal(root->left, val);
      const int right = traversal(root->right, val);
      const int length = left + right;
      if (length > longest)
        longest = length;
      return 1 + max(left, right);
    };

    traversal(root, root->val);
    return longest;
  }
};