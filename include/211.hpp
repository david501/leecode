#include "common.h"

class WordDictionary {
  struct NodeTree;
  struct NodeTree {
    bool end;
    array<NodeTree *, 26> nodes;
    NodeTree() {
      end = false;
      nodes.fill(nullptr);
    }
  };

public:
  /** Initialize your data structure here. */
  WordDictionary() { root = new NodeTree(); }

  /** Adds a word into the data structure. */
  void addWord(string word) {
    NodeTree *cur{root};
    for (char c : word) {
      const int id = c - 'a';
      if (!cur->nodes[id]) {
        cur->nodes[id] = new NodeTree();
      }
      cur = cur->nodes[id];
    }
    cur->end = true;
  }

  /** Returns if the word is in the data structure. A word could contain the dot
   * character '.' to represent any one letter. */
  bool search(string word) {
    return search_helper(root, word, 0);
  }

  bool search_helper(NodeTree *cur, string &word, int start) {
    for (int i = start; i < word.size(); ++i) {
      const char c = word[i];
      if (c == '.') {
        for (int k = 0; k < 26; ++k) {
          if (cur->nodes[k])
            if (search_helper(cur->nodes[k], word, i + 1))
              return true;
        }
        return false;
      } else {
        const int id = c - 'a';
        if (cur->nodes[id])
          cur = cur->nodes[id];
        else
          return false;
      }
    }
    return cur->end;
  }

private:
  NodeTree *root;
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * bool param_2 = obj.search(word);
 */