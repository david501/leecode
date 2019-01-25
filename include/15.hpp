#include "common.h"

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    unordered_map<int, int> counts;
    for (int n : nums)
      ++counts[n];

    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); ++i) {
      const int a = nums[i];
      if (a >= 0)
        break;
      if (a == nums[i + 1])
        continue;

      for (int j = nums.size() - 1; nums[j] > 0; j--) {
        const int b = nums[j];
        if (b == nums[j - 1])
          continue;

        const int c = 0 - a - b;
        if (c > b)
          break;

        if (c < a || counts.count(c) == 0)
          continue;
        if ((c == a || c == b) && counts[c] == 1)
          continue;
        res.push_back({a, c, b});
      }
    }
    if (counts[0] >= 3)
      res.push_back({0, 0, 0});
    return res;
  }
};