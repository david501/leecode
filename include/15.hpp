#include "common.h"

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    const int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());

    auto twoSum = [&](int l, int r, int target) {
      while (l < r) {
        if ((nums[l] + nums[r]) == target) {
          res.push_back({-target, nums[l++], nums[r--]});
          while (l < r && nums[l] == nums[l - 1])
            ++l;
          while (l < r && nums[r] == nums[r + 1])
            --r;
        } else
          (nums[l] + nums[r] > target) ? --r : ++l;
      }
    };

    for (int i = 0; i < n - 2; ++i) {
      if (i == 0 || nums[i] != nums[i - 1]) {
        twoSum(i + 1, n - 1, -nums[i]);
      }
    }

    return res;
  }
};