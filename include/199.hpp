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
  vector<int> rightSideView(TreeNode *root) {
    if (!root)
      return {};

    vector<TreeNode *> line{root};
    vector<int> res;
    while (!line.empty()) {
      vector<TreeNode *> next;
      res.push_back(line.back()->val);
      for (auto &node : line) {
        if (node->left)
          next.push_back(node->left);
        if (node->right)
          next.push_back(node->right);
      }
      swap(line, next);
    }
    return res;
  }
};