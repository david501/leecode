#include "common.h"

class Solution {
public:
  int nthUglyNumber(int n) {
    int t2{0}, t3{0}, t5{0};
    int kt2{2}, kt3{3}, kt5{5};
    vector<int> k(n);
    k[0] = 1;
    for (int i = 1; i < n; i++) {
      k[i] = min(kt2, min(kt3, kt5));
      if (k[i] == kt2)
        kt2 = k[++t2] * 2;
      if (k[i] == kt3)
        kt3 = k[++t3] * 3;
      if (k[i] == kt5)
        kt5 = k[++t5] * 5;
    }
    return k[n - 1];
  }
};