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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> r;
        if (!root)
            return r;

        if (!root->left && !root->right)
        {
            r.push_back(to_string(root->val));
            return r;
        }

        string sval = to_string(root->val) + "->";
        if (root->left)
        {
            for (auto s : binaryTreePaths(root->left))
            {
                r.push_back(sval + s);
            }
        }
        if (root->right)
        {
            for (auto s : binaryTreePaths(root->right))
            {
                r.push_back(sval + s);
            }
        }
        return r;
    }
};