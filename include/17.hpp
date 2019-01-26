#include "common.h"

class Solution {
public:
  vector<string> letterCombinations(string digits) {
    static const string letter_map[] = {"abc", "def",  "ghi", "jkl",
                                  "mno", "pqrs", "tuv", "wxyz"};
    const int n = digits.size();
    if (n == 0)
      return {};

    vector<string> res;
    vector<string> strs{""};
    if (n > 1)
      strs = letterCombinations(digits.substr(0, n - 1));

    for (char c : letter_map[digits[n - 1] - '2']) {
      string sc = string(1, c);
      for (auto &s : strs) {
        res.push_back(s + sc);
      }
    }

    return res;
  }
};