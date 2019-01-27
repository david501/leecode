class Solution {
public:
  vector<vector<int>> permuteUnique(vector<int> &nums) {
    const int n = nums.size();
    vector<vector<int>> res;
    vector<int> vec(n);
    vector<bool> flag(n, false);

    function<void(int)> helper = [&](int d) {
      if (d == n) {
        res.push_back(vec);
        return;
      }

      for (int i = 0; i < n; ++i) {
        if (flag[i])
          continue;
          
        vec[d] = nums[i];
        flag[i] = true;
        helper(d + 1);
        flag[i] = false;

        while (i < (n- 1) && nums[i] == nums[i + 1])
          ++i;
      }
    };

    sort(nums.begin(), nums.end());
    helper(0);
    return res;
  }
};