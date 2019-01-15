/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
class Solution
{
  public:
    Node *construct(vector<vector<int>> &grid)
    {
        function<Node *(int, int, int)> subNode = [&](int top, int left, int dim) -> Node * {
            if (dim == 1)
            {
                return new Node(gird[top][left], true, nullptr, nullptr, nullptr, nullptr);
            }
            const int dim2 = dim / 2;
            Node *topLeft = subNode(top, left, dim2);
            Node *topRight = subNode(top, left + dim2, dim2);
            Node *bottomLeft = subNode(top + dim2, left, dim2);
            Node *bottomRight = subNode(top + dim2, left + dim2, dim2);
            if (topLeft->isLeaf && topRight->isLeaf && bottomLeft->isLeaf && bottomRight->isLeaf)
            {
                if ((topLeft->val && topRight->val && bottomLeft->val && bottomRight->val) ||
                    (!topLeft->val && !topRight->val && !bottomLeft->val && !bottomRight->val))
                {
                    Node *res = new Node(topLeft->val, true, nullptr, nullptr, nullptr, nullptr);
                    delete topLeft;
                    delete topRight;
                    delete bottomLeft;
                    delete bottomRight;
                    return res;
                }
            }
            return new Node(true, false, topLeft, topRight, bottomLeft, bottomRight);
        }

        return subNode(0, 0, grid.size());
    }
};