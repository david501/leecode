#include "common.h"

class Solution {
public:
  bool wordBreak(string s, vector<string> &wordDict) {
    const int ns = s.size();
    vector<bool> pathed(ns + 1, false);

    pathed[0] = true;
    for (int i = 1; i <= ns; ++i) {
      for (const auto &word : wordDict) {
        const int n = word.size();
        const int k = i - n;
        if (k >= 0 && pathed[k]) {
          int j;
          for (j = 0; j < n; ++j) {
            if (word[j] != s[k + j])
              break;
          }
          if (j == n) {
            pathed[i] = true;
            break;
          }
        }
      }
    }
    return pathed[ns];
  }
};