#include "common.h"

class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    auto binarySearch = [&](int l, int r, double target) -> int {
      while (l < r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] < target)
          l = mid + 1;
        else
          r = mid;
      }
      return l;
    };

    const int n = nums.size();
    int upper = -1, lower = binarySearch(0, n, target - 0.5);
    if (lower >= n || nums[lower] != target)
      lower = -1;
    else {
      upper = binarySearch(lower, n, target + 0.5) - 1;
    }

    return {lower, upper};
  }
};