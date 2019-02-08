/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
  RandomListNode *copyRandomList(RandomListNode *head) {
    if (!head)
      return nullptr;

    RandomListNode *node{head}, *clone;
    while (node) {
      clone = new RandomListNode(node->label);
      clone->next = node->next;
      node->next = clone;
      node = clone->next;
    }

    node = head;
    while (node) {
      clone = node->next;
      if (node->random) {
        clone->random = node->random->next;
      }
      node = clone->next;
    }

    node = head;
    head = head->next;
    while (node) {
      clone = node->next;
      node->next = clone->next;
      if (node->next)
        clone->next = node->next->next;
      node = node->next;
    }
    return head;
  }
};