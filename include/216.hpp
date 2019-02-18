#include "common.h"
class Solution {
public:
  vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> res;
    vector<int> cur;
    function<void(int, int, int)> dfs = [&](int k, int m, int n) {
      if (k == 0) {
        if (n == 0)
          res.push_back(cur);
        return;
      }

      for (int i = m; i < 11 - k && i <= n; ++i) {
        cur.push_back(i);
        dfs(k - 1, i + 1, n - i);
        cur.pop_back();
      }
    };

    dfs(k, 1, n);
    return res;
  }
};