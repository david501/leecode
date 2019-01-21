class MyLinkedList {
  struct Node;

public:
  /** Initialize your data structure here. */
  MyLinkedList() : head(nullptr), tail(nullptr) {}

  /** Get the value of the index-th node in the linked list. If the index is
   * invalid, return -1. */
  int get(int index) {
    if (index < 0)
      return -1;

    Node *cur = head;
    for (; cur; cur = cur->next, --index) {
      if (!index)
        return cur->val;
    }
    return -1;
  }

  /** Add a node of value val before the first element of the linked list. After
   * the insertion, the new node will be the first node of the linked list. */
  void addAtHead(int val) {
    Node *node = new Node(val);
    if (!head)
      head = tail = node;
    else {
      node->next = head;
      head->prev = node;
      head = node;
    }
  }

  /** Append a node of value val to the last element of the linked list. */
  void addAtTail(int val) {
    Node *node = new Node(val);
    if (!tail)
      head = tail = node;
    else {
      tail->next = node;
      node->prev = tail;
      tail = node;
    }
  }

  /** Add a node of value val before the index-th node in the linked list. If
   * index equals to the length of linked list, the node will be appended to the
   * end of linked list. If index is greater than the length, the node will not
   * be inserted. */
  void addAtIndex(int index, int val) {
    if (index < 0)
      return;

    if (!index) {
      addAtHead(val);
      return;
    }

    Node *cur = head;
    for (; cur; cur = cur->next, --index) {
      if (!index) {
        Node *node = new Node(val);
        node->next = cur;
        node->prev = cur->prev;
        cur->prev = node;
        node->prev->next = node;
      }
    }

    if (!cur && !index)
      addAtTail(val);
  }

  /** Delete the index-th node in the linked list, if the index is valid. */
  void deleteAtIndex(int index) {
    if (index < 0)
      return;
    if (!index) {
      head = head->next;
      delete head->prev;
      head->prev = nullptr;
      return;
    }

    Node *cur = head;
    for (; cur; cur = cur->next, --index) {
      if (!index) {
        cur->prev->next = cur->next;
        if (cur->next) {
          cur->next->prev = cur->prev;
        } else {
          tail = cur->prev;
        }
        delete cur;
      }
    }
  }

private:
  struct Node {
    int val;
    Node *next;
    Node *prev;
    Node(int val, Node *prev = nullptr, Node *next = nullptr)
        : val(val), prev(prev), next(next) {}
  };

  Node *head;
  Node *tail;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */