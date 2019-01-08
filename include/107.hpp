/**
 * DefinpNodeion for a binary tree node.
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
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> result;
        if (!root)
            return result;

        vector<TreeNode *> currentRow{root};
        while (currentRow.size() > 0)
        {
            vector<int> vVal;
            vector<TreeNode *> nextRow;
            for (const auto pNode : currentRow)
            {
                vVal.push_back(pNode->val);
                if (pNode->left)
                    nextRow.push_back(pNode->left);
                if (pNode->right)
                    nextRow.push_back(pNode->right);
            }
            
            result.push_back(vVal);
            currentRow = nextRow;
        }
        reverse(result.begin(), result.end());
        return result;
    };