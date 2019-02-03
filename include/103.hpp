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
  vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
    if (!root)
      return {};

    vector<vector<int>> res;
    vector<TreeNode *> level{root};
    bool flag = true;

    while (!level.empty()) {
      vector<TreeNode *> next;
      vector<int> vec;
      vec.reserve(level.size());
      for (auto &p : level) {
        vec.push_back(p->val);
        if (p->left)
          next.push_back(p->left);
        if (p->right)
          next.push_back(p->right);
      }
      if (flag) {
        res.emplace_back(vec);
      } else {
        res.push_back({vec.rbegin(), vec.rend()});
      }
      flag = !flag;
      swap(level, next);
    }
    return res;
  }
};