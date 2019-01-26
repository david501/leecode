#include "common.h"
class Solution {
public:
  int threeSumClosest(vector<int> &nums, int target) {
    const int n = nums.size();
    int delta = INT_MAX;
    sort(nums.begin(), nums.end());

    auto twoSumClosest = [&](int l, int r, int t) -> bool {
      int dt = t - nums[r] - nums[r - 1];
      if (dt >= 0) {
        if (dt < abs(delta))
          delta = dt;
        return delta == 0;
      }

      dt = t - nums[l] - nums[l + 1];
      if (dt <= 0) {
        if (-dt < abs(delta))
          delta = dt;
        return delta == 0;
      }

      while (l < r) {
        dt = t - nums[l] - nums[r];
        if (abs(dt) < abs(delta))
          delta = dt;
        if (dt == 0)
          return true;
        (dt > 0) ? ++l : --r;
      }
      return false;
    };

    for (int i = 0; i < n - 2; ++i) {
      if (i == 0 || nums[i] != nums[i - 1]) {
        if (twoSumClosest(i + 1, n - 1, target - nums[i]))
          break;
      }
    }

    return target - delta;
  }
};