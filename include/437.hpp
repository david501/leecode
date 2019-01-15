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
    int pathSum(TreeNode *root, int sum)
    {
        if (!root)
            return 0;

        int count = 0;

        function<int(TreeNode *, vector<int>)> helper = [&](TreeNode *r, vector<int> vec) -> int {
            if (!r)
                return 0;

            vector<int> current;
            current.reserve(vec.size() + 1);
            for (const int last_sum : vec)
            {
                int val_sum = last_sum + r->val;
                if (val_sum == sum)
                    ++count;
                current.push_back(val_sum);
            }
            current.push_back(r->val);
            helper(r->left, current);
            helper(r->right, current);
        };

        helper(root, {});

        return count;
    }
};