class Solution {
public:
  bool isAlienSorted(vector<string> &words, string order) {
    int dict[256];
    for (int i = 0; i < order.size();)
      dict[order[i]] = ++i;

    for (int i = 1; i < words.size(); ++i) {
      const string &current = words[i];
      const string &last = words[i - 1];
      bool flag = false;
      for (int j = 0; j < current.size() & j < last.size(); ++j) {
        if (dict[last[j]] < dict[current[j]]) {
          flag = true;
          break;
        }
        if (dict[last[j]] > dict[current[j]])
          return false;
      }
      if (flag == false && last.size() > current.size())
        return false;
    }
    return true;
  }
};