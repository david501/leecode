#include "common.h"

class Solution {
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target) {
    const int n = nums.size();
    sort(nums.begin(), nums.end());

    vector<vector<int>> res;
    for (int i = 0; i < n - 3; ++i) {
      if (i == 0 || nums[i] != nums[i - 1]) {
        for (int j = i + 1; j < n - 2; ++j) {
          if (j == i + 1 || nums[j] != nums[j - 1]) {
            int l = j + 1, r = n - 1;
            const int t = target - nums[i] - nums[j];
            
            if (nums[l] + nums[l + 1] > t)
              break;
            if (nums[r] + nums[r - 1] < t)
              continue;

            while (l < r) {
              if (nums[l] + nums[r] == t) {
                res.push_back({nums[i], nums[j], nums[l++], nums[r--]});
                while (l < r && nums[l] == nums[l - 1])
                  ++l;
                while (l < r && nums[r] == nums[r + 1])
                  --r;
              } else
                (nums[l] + nums[r] < t) ? ++l : --r;
            }
          }
        }
      }
    }
    return res;
  }
};