class MyHashMap {
public:
  /** Initialize your data structure here. */
  MyHashMap() : mHash(BUCKETS) {}

  /** value will always be non-negative. */
  void put(int key, int value) {
    auto &vec = mHash[key % BUCKETS];
    for (auto &it : vec) {
      if (it.first == key) {
        it.second = value;
        return;
      }
    }
    vec.push_back(make_pair(key, value));
  }

  /** Returns the value to which the specified key is mapped, or -1 if this map
   * contains no mapping for the key */
  int get(int key) {
    auto &vec = mHash[key % BUCKETS];
    for (auto &it : vec) {
      if (it.first == key) {
        return it.second;
      }
    }
    return -1;
  }

  /** Removes the mapping of the specified value key if this map contains a
   * mapping for the key */
  void remove(int key) {
    auto &vec = mHash[key % BUCKETS];
    for (auto it = vec.begin(); it != vec.end(); ++it) {
      if ((*it).first == key) {
        vec.erase(it);
        return;
      }
    }
  }

private:
  static constexpr int BUCKETS = 100;
  vector<vector<pair<int, int>>> mHash;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */