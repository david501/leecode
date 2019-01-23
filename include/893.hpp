class Solution {
public:
  int numSpecialEquivGroups(vector<string> &A) {
    set<map<char, int>> groups;
    for (const auto &s : A) {
      map<char, int> m;
      for (int i = 0; i < s.size(); ++i) {
        ++m[(i % 2) ? s[i] : -s[i]];
      }
      groups.insert(m);
    }
    return groups.size();
  }
};