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
  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    function<TreeNode *(int, int, int, int)> helper =
        [&](int p1, int p2, int i1, int i2) -> TreeNode * {
      if (p1 >= p2 || i1 >= i2)
        return nullptr;

      int i;
      for (i = i1; i < i2; ++i) {
        if (inorder[i] == preorder[p1])
          break;
      }

      TreeNode *root = new TreeNode(preorder[p1]);
      root->left = helper(p1 + 1, p1 + 1 + i - i1, i1, i);
      root->right = helper(p1 + 1 + i - i1, p2, i + 1, i2);
      return root;
    };

    return helper(0, preorder.size(), 0, inorder.size());
  }
};