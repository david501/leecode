class Solution {
public:
  vector<vector<int>> largeGroupPositions(string S) {
    vector<vector<int>> groups;
    int start = 0, end = 0;
    char last_char = ' ';
    for (int i = 0; i < S.size(); ++i) {
      if (S[i] == last_char) {
        end = i;
      } else {
        if (end - start >= 2)
          groups.push_back({start, end});
        start = end = i;
        last_char = S[i];
      }
    }
    if (end - start >= 2)
      groups.push_back({start, end});
    return groups;
  }
};