class Solution {
public:
  vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    sort(nums.begin(), nums.end());

    const int n = nums.size();
    vector<vector<int>> res;
    vector<int> vec;
    vec.reserve(n);

    function<void(int)> dfs = [&](int start) {
      res.push_back(vec);

      for (int i = start; i < n; ++i) {
        vec.push_back(nums[i]);
        dfs(i + 1);
        vec.pop_back();
        while (i < n - 1 && nums[i + 1] == nums[i])
          ++i;
      }
    };

    dfs(0);
    return res;
  }
};