#include "common.h"

class Solution {
public:
  int pivotIndex(vector<int> &nums) {
    const int n = nums.size();
    if (!n)
      return -1;

    for (int i = 1; i < n; ++i) {
      nums[i] += nums[i - 1];
    }

    if (nums[0] == nums[n - 1])
      return 0;
    for (int i = 1; i < n; ++i) {
      if (nums[i] == nums[n - 1] - nums[i - 1])
        return i;
    }
    return -1;
  }
};