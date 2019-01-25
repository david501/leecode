#include "common.h"

class Solution {
public:
  string longestPalindrome(string s) {
    const int n = s.size();
    if (n < 2)
      return s;

    int start = 0;
    int len = 1;
    auto checkPalindrome = [&](int left, int right) {
      while (left >= 0 && right < n && s[left] == s[right]) {
        --left;
        ++right;
      }
      if (right - left - 1 > len) {
        len = right - left - 1;
        start = left + 1;
      }
    };

    for (int i = 1; i < n - len / 2; ++i) {
      checkPalindrome(i - 1, i);
      checkPalindrome(i - 1, i + 1);
    }
    return s.substr(start, len);
  }
};