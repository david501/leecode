#include "common.h"

class Solution
{
  public:
    vector<int> findMode(TreeNode *root)
    {
        int max_count = 0;
        int cur_count = 0;
        int last_val = INT_MIN;
        vector<int> result;

        function<void(TreeNode *)> in_order_traversal = [&](TreeNode *root) {
            if (!root)
                return;

            in_order_traversal(root->left);

            if (last_val == root->val)
                ++cur_count;
            else
                cur_count = 1;
            
            if (cur_count > max_count)
            {
                max_count = cur_count;
                result.clear();
                result.push_back(root->val);
            }
            else if (cur_count == max_count)
            {
                result.push_back(root->val);
            }
            last_val = root->val;

            in_order_traversal(root->right);
        };

        in_order_traversal(root);
        return result;
    }
};