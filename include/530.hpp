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
    int getMinimumDifference(TreeNode *root)
    {
        int min_diff = INT_MAX;
        int last = INT_MIN;
        function<void(TreeNode *)> in_order_traversal = [&](TreeNode *root) {
            if (!root || min_diff == 0)
                return;
            in_order_traversal(root->left);

            if (last != INT_MIN)
            {
                min_diff = min(min_diff, root->val - last);
            }
            last = root->val;
            in_order_traversal(root->right);
        };

        in_order_traversal(root);
        return min_diff;
    }
};