class Trie {
  struct Tree;
  struct Tree {
    bool end{false};
    array<Tree*, 26> node;
    Tree() {
      end = false;
      node.fill(nullptr);
    }
  };

public:
  /** Initialize your data structure here. */
  Trie() { root = new Tree(); }

  /** Inserts a word into the trie. */
  void insert(string word) {
    Tree *cur{root};
    for (char c : word) {
      const int id = c - 'a';
      if (!cur->node[id]) {
        cur->node[id] = new Tree();
      }
      cur = cur->node[id];
    }
    cur->end = true;
  }

  /** Returns if the word is in the trie. */
  bool search(string word) {
    Tree *cur{root};
    for (char c : word) {
      const int id = c - 'a';
      if (cur->node[id] == nullptr)
        return false;
      cur = cur->node[id];
    }
    return cur->end;
  }

  /** Returns if there is any word in the trie that starts with the given
   * prefix. */
  bool startsWith(string prefix) {
    Tree *cur{root};
    for (char c : prefix) {
      const int id = c - 'a';
      if (cur->node[id] == nullptr)
        return false;
      cur = cur->node[id];
    }
    return true;
  }

private:
  Tree *root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */