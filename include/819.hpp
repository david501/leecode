class Solution {
public:
  string mostCommonWord(string paragraph, vector<string> &banned) {
    unordered_set<string> banned_set{banned.begin(), banned.end()};
    map<string, int> count;

    string s;
    for (const char c : paragraph) {
      if (isalpha(c)) {
        s += string(1, tolower(c));
      } else {
        if (s.size() > 0 && banned_set.count(s) == 0) {
          ++count[s];
        }
        s = "";
      }
    }
    if (s.size() > 0 && banned_set.count(s) == 0) {
      ++count[s];
    }

    string res;
    int max_count = 0;
    for (auto it : count) {
      if (it.second > max_count) {
        max_count = it.second;
        res = it.first;
      }
    }
    return res; 
  }
};