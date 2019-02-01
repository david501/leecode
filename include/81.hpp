#include "common.h"

class Solution {
public:
  bool search(vector<int> &nums, int target) {
    const int n = nums.size();
    int left{0}, right{n - 1};
    while (left < right) {
      const int mid = left + (right - left) / 2;
      const int val = nums[mid];
      if (val == target)
        return true;
      if (val > nums[right]) {
        if (val > target && target >= nums[left])
          right = mid;
        else
          left = mid + 1;
      } else {
        if (val < nums[right]) {
          if (val < target && target <= nums[right])
            left = mid + 1;
          else
            right = mid;
        } else {
          --right;
        }
      }
    }
    return nums[left] == target;
  }
};