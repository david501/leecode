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
  vector<int> postorder(Node *root) {
    if (!root)
      return {};

    vector<int> res;
    stack<Node *> st;
    st.push(root);
    while (!st.empty()) {
      auto p = st.top();
      st.pop();
      res.push_back(p->val);

      for (auto child : p->children) {
        st.push(child);
      }
    }
    return {res.rbegin(), res.rend()};
  }
};