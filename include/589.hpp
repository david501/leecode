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
class Solution {
public:
  vector<int> preorder(Node *root) {
    vector<int> r;
    stack<Node *> st;
    st.push(root);
    while (!st.empty()) {
      auto p = st.top();
      st.pop();

      if (p) {
        r.push_back(p->val);
        for (auto child = p->children.rbegin(); child != p->children.rend();
             ++child) {
          st.push(*child);
        }
      }
    }
    return r;
  }
};