#include "common.h"
class Solution {
public:
  int countBinarySubstrings(string s) {
    int total{0}, last{0}, current{1};
    for (int i = 1; i < s.size(); ++i) {
      if (s[i] == s[i - 1])
        ++current;
      else {
        total += min(last, current);
        last = current;
        current = 1;
      }
    }
    return total + min(last, current);
  }
};