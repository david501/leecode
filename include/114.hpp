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
  void flatten(TreeNode *root) {
    function<void(TreeNode *, TreeNode **, TreeNode **)> helper =
        [&](TreeNode *root, TreeNode **head, TreeNode **tail) {
          if (!root)
            return;

          TreeNode *hl{nullptr}, *tl{nullptr};
          TreeNode *hr{nullptr}, *tr{nullptr};
          helper(root->left, &hl, &tl);
          helper(root->right, &hr, &tr);
          root->left = nullptr;
          if (hl) {
            root->right = hl;
            tl->right = hr;
          } else {
            root->right = hr;
          }
          *head = root;
          *tail = (tr) ? tr : (tl) ? tl : root;
        };
    TreeNode *head{nullptr}, *tail{nullptr};
    helper(root, &head, &tail);
  }
};