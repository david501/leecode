/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
  public:
    TreeNode *convertBST(TreeNode *root)
    {
        int sum = 0;
        function<void(TreeNode *)> reverse_traversal = [&](TreeNode *root) {
            if (!root)
                return;

            reverse_traversal(root->right);
            root->val += sum;
            sum = root->val;

            reverse_traversal(root->left);
        };

        reverse_traversal(root);
        return root;
    }
};