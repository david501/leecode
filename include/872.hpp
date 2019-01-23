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
  bool leafSimilar(TreeNode *root1, TreeNode *root2) {
    function<vector<int>(TreeNode *)> leafSequence =
        [&](TreeNode *root) -> vector<int> {
      if (!root)
        return {};

      if (!root->left && !root->right)
        return {root->val};

      auto left = leafSequence(root->left);
      for (auto val : leafSequence(root->right)) {
        left.push_back(val);
      }
      return left;
    };

    return leafSequence(root1) == leafSequence(root2);
  }
};