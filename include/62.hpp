#include "common.h"

class Solution {
public:
  int uniquePaths(int m, int n) {
    if (n < 2)
      return n;
    if (m < 2)
      return m;

    vector<int> a(m, 1);
    for (int i = 1; i < n; ++i) {
      for (int j = 1; j < m; ++j) {
        a[j] += a[j - 1];
      }
    }
    return a.back();
  }
};