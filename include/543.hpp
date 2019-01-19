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
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        function<int(TreeNode *)> search = [&](TreeNode *root) -> int {
            if (!root)
                return 0;

            const int left = search(root->left);
            const int right = search(root->right);
            const int sum = left + right;
            if (sum > diameter)
                diameter = sum;
            return max(left, right) + 1;
        };

        search(root);
        return diameter;
    }
};