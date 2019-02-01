class Solution {
public:
  vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> res;
    vector<int> vec(k);

    function<void(int, int)> dfs = [&](int start, int rest) {
      if (rest == 0) {
        res.push_back(vec);
        return;
      }
      for (int i = start; i <= n - rest; ++i) {
        vec[k - rest] = i + 1;
        dfs(i + 1, rest - 1);
      }
    };

    dfs(0, k);
    return res;
  }
};