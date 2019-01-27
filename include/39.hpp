class Solution {
public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
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
          dfs(i, target - candidate);
          vec.pop_back();
        }
      }
    };

    dfs(0, target);
    return res;
  }
};