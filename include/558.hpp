class Solution {
public:
  Node *intersect(Node *quadTree1, Node *quadTree2) {
    if (!quadTree1)
      return quadTree1;

    if (quadTree1->isLeaf)
      return (quadTree1->val) ? quadTree1 : quadTree2;

    if (quadTree2->isLeaf)
      return (quadTree2->val) ? quadTree2 : quadTree1;

    Node *topLeft = intersect(quadTree1->topLeft, quadTree2->topLeft);
    Node *topRight = intersect(quadTree1->topRight, quadTree2->topRight);
    Node *bottomLeft = intersect(quadTree1->bottomLeft, quadTree2->bottomLeft);
    Node *bottomRight =
        intersect(quadTree1->bottomRight, quadTree2->bottomRight);
    if (topLeft->isLeaf && topRight->isLeaf && bottomLeft->isLeaf &&
        bottomRight->isLeaf &&
        ((topLeft->val && topRight->val && bottomLeft->val &&
          bottomRight->val) ||
         (!topLeft->val && !topRight->val && !bottomLeft->val &&
          !bottomRight->val))) {
      bool val=topLeft->val;
      delete topLeft;
      delete topRight;
      delete bottomLeft;
      delete bottomRight;
      return new Node(val, true, nullptr, nullptr, nullptr, nullptr);
    }
    return new Node(false, false, topLeft, topRight, bottomLeft, bottomRight);
  }
};