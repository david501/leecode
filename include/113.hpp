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
  vector<vector<int>> pathSum(TreeNode *root, int sum) {
    vector<vector<int>> res;
    vector<int> path;

    function<void(TreeNode *, int)> helper = [&](TreeNode *root, int rest) {
      if (!root)
        return;

      path.push_back(root->val);
      if (!root->left && !root->right && rest == root->val) {
        res.push_back(path);
        path.pop_back();
        return;
      }
      helper(root->left, rest - root->val);
      helper(root->right, rest - root->val);
      path.pop_back();
    };

    helper(root, sum);
    return res;
  }
};