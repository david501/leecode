#include "common.h"
class Solution {
public:
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    vector<vector<int>> res;
    vector<int> vec;

    function<void(int, int)> dfs = [&](int start, int target) {
      if (target == 0) {
        res.push_back(vec);
        return;
      }

      for (int i = start; i < candidates.size(); ++i) {
        const int candidate = candidates[i];
        if (target >= candidate) {
          vec.push_back(candidate);
          dfs(i + 1, target - candidate);
          while (i < candidates.size() - 1 && candidates[i + 1] == candidate)
            ++i;
          vec.pop_back();
        }
      }
    };

    sort(candidates.begin(), candidates.end());
    dfs(0, target);
    return res;
  }
};