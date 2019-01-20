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
  vector<double> averageOfLevels(TreeNode *root) {
    if (!root)
      return {};
    vector<double> res;

    vector<TreeNode *> vec{root};
    while (!vec.empty()) {
      vector<TreeNode *> next;
      double sum = 0.0;
      for (auto v : vec) {
        sum += v->val;
        if (v->left)
          next.push_back(v->left);
        if (v->right)
          next.push_back(v->right);
      }
      res.push_back(sum / vec.size());
      swap(vec, next);
    }
    return res;
  }
};