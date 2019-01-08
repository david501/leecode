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
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        function<TreeNode *(int, int)> helper = [&](int start, int end) -> TreeNode * {
            const int len = end - start;
            if (len == 0)
                return nullptr;

            const int mid = (start + end) / 2;
            TreeNode *root = new TreeNode(nums[mid]);
            root->left = helper(start, mid);
            root->right = helper(mid + 1, end);
            return root;
        };

        return helper(0, nums.size());
    }
};