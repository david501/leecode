#include "common.h"

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> res;
    unordered_map<string, vector<string>> m;
    for (const string &str : strs) {
      string s = str;
      sort(s.begin(), s.end());
      m[s].push_back(str);
    }
    res.reserve(m.size());
    for (auto &it : m)
      res.emplace_back(it.second);
    return res;
  }
};