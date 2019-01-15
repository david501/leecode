/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution
{
  public:
    vector<vector<int>> levelOrder(Node *root)
    {
        if (!root)
            return {};
            
        vector<vector<int>> res;
        vector<Node *> row{root};
        while (!row.empty())
        {
            vector<Node *> next_row;
            vector<int> vec;
            vec.reserve(row.size());
            for (const auto n : row)
            {
                vec.push_back(n->val);
                for (const auto c : n->children)
                    if (c)
                        next_row.push_back(c);
            }
            res.push_back(vec);
            swap(next_row, row);
        }
        return res;
    }
};