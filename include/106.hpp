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
  TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
    function<TreeNode *(int, int, int, int)> helper =
        [&](int i1, int i2, int p1, int p2) -> TreeNode * {
      if (p1 > p2 || i1 > i2)
        return nullptr;

      int i;
      for (i = i2; i >= i1; --i) {
        if (inorder[i] == postorder[p2])
          break;
      }

      TreeNode *root = new TreeNode(postorder[p2]);
      root->right = helper(i + 1, i2, p2 - i2 + i, p2 - 1);
      root->left = helper(i1, i - 1, p1, p2 - 1 - i2 + i);
      return root;
    };

    const int n = inorder.size();
    return helper(0, n - 1, 0, n - 1);
  }
};