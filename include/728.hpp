#include "common.h"
class Solution {
public:
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> res;
    auto check = [](int n) -> bool {
      const int m = n;
      while (n) {
        const int d = n % 10;
        if (d == 0 || m % d != 0)
          return false;
        n /= 10;
      }
      return true;
    };

    for (int i = left; i <= right; ++i) {
      if (check(i))
        res.push_back(i);
    }
    return res;
  }
};