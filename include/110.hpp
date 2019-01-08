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
    bool isBalanced(TreeNode *root)
    {
        function<int(TreeNode *)> depth = [&](TreeNode *r) -> int {
            if (r == nullptr)
                return 0;

            const int ldepth = depth(r->left);
            if (ldepth < 0)
                return -1;

            const int rdepth = depth(r->right);
            if (rdepth < 0 || abs(ldepth - rdepth) > 1)
                return -1;
                
            return max(ldepth, rdepth) + 1;
        };

        return depth(root) >= 0;
    }
};