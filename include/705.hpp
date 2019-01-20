class MyHashSet {
public:
  /** Initialize your data structure here. */
  MyHashSet() : mHash(HASH_NUMBER){};

  void add(int key) {
    if (!contains(key))
      mHash[key % HASH_NUMBER].push_back(key);
  }

  void remove(int key) {
    auto &vec = mHash[key % HASH_NUMBER];
    for (auto it = vec.begin(); it != vec.end(); ++it) {
      if (*it == key) {
        vec.erase(it);
        return;
      }
    }
  }

  /** Returns true if this set contains the specified element */
  bool contains(int key) {
    auto &vec = mHash[key % HASH_NUMBER];
    for (auto it = vec.begin(); it != vec.end(); ++it) {
      if (*it == key) {
        return true;
      }
    }
    return false;
  }

private:
  constexpr int HASH_NUMBER = 100;
  vector<vector<int>> mHash;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * bool param_3 = obj.contains(key);
 */