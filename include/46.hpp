class Solution {
public:
  // vector<vector<int>> permute(vector<int> &nums) {
  //   const int n = nums.size();
  //   if (n == 1)
  //     return {nums};

  //   vector<vector<int>> res;
  //   vector<int> tmp(n - 1);
  //   for (int i = 0; i < n; ++i) {
  //     for (int j = 0, k = 0; j < n; ++j) {
  //       if (j == i)
  //         continue;
  //       tmp[k++] = nums[j];
  //     }
  //     for (auto v : permute(tmp)) {
  //       v.push_back(nums[i]);
  //       res.push_back(v);
  //     }
  //   }
  //   return res;
  // }

  vector<vector<int>> permute(vector<int> &nums) {
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
      }
    };

    helper(0);

    return res;
  }
};