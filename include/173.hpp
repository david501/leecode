/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
  BSTIterator(TreeNode *root) {
    while (root) {
      st.push(root);
      root = root->left;
    }
  }

  /** @return the next smallest number */
  int next() {
    auto root = st.top();
    st.pop();
    int val = root->val;

    root = root->right;
    while (root) {
      st.push(root);
      root = root->left;
    }

    return val;
  }

  /** @return whether we have a next smallest number */
  bool hasNext() {
    return !st.empty();
  }

private:
  stack<TreeNode *> st;
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */