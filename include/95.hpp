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
  vector<TreeNode *> generateTrees(int n) {
    function<vector<TreeNode *>(int, int)> generater =
        [&](int m, int n) -> vector<TreeNode *> {
      vector<TreeNode *> out;
      for (int i = m; i <= n; ++i) {
        auto left = generater(m, i - 1);
        if (left.size() == 0)
          left.push_back(nullptr);

        auto right = generater(i + 1, n);
        if (right.size() == 0)
          right.push_back(nullptr);
          
        for (auto l : left) {
          for (auto r : right) {
            TreeNode *root = new TreeNode(i);
            root->left = l;
            root->right = r;
            out.push_back(root);
          }
        }
      }
      return out;
    };

    return generater(1, n);
  }
};