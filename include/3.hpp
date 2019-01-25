#include "common.h"
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int position[256] = {0};
    int len = 0;
    int start = 0;
    for (int i = 0; i < s.size(); ++i) {
      int &pos = position[s[i]];
      if (pos && pos >= start) {
        len = max(len, i - start);
        start = pos;
      }
      pos = i + 1;
    }
    return max(len, int(s.size() - start));
  }
};