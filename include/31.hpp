#include "common.h"

class Solution {
public:
  void nextPermutation(vector<int> &nums) {
    int r = nums.size() - 1;
    int i = r;
    while (i > 0 && nums[i - 1] >= nums[i])
      --i;

    if (i) {
      for (int j = r; j >= i; --j) {
        if (nums[j] > nums[i - 1]) {
          swap(nums[j], nums[i - 1]);
          break;
        }
      }
    }

    for (int l = i; l < r;)
      swap(nums[l++], nums[r--]);
  }
};