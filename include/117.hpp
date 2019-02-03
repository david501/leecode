/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
  void connect(TreeLinkNode *root) {
    if (!root)
      return;

    connect(root->left);
    connect(root->right);

    function<TreeLinkNode *(TreeLinkNode *)> nextHead =
        [&](TreeLinkNode *head) -> TreeLinkNode * {
      while (head) {
        if (head->left)
          return head->left;
        if (head->right)
          return head->right;
        head = head->next;
      }
      return nullptr;
    };

    TreeLinkNode *left{root->left}, *right{root->right};
    TreeLinkNode *left_head{root->left};
    while (left) {
      left_head = nextHead(left_head);
      left->next = right;

      if (!left_head)
        break;
      left=left_head;
      while (left->next)
        left = left->next;

      right = nextHead(right);
    }
  }
};