#include "common.h"
class Solution {
public:
  vector<int> diffWaysToCompute(string input) {
    vector<int> res;
    for (int i = 0; i < input.size(); ++i) {
      const char c = input[i];
      if (ispunct(c)) {
        for (auto a : diffWaysToCompute(input.substr(0, i))) {
          for (auto b : diffWaysToCompute(input.substr(i + 1))) {
            res.push_back((c == '+') ? a + b : (c == '-') ? a - b : a * b);
          }
        }
      }
    }

    if (res.empty())
      res.push_back(atoi(input.c_str()));

    return res;
  }
};