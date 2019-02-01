#include "common.h"

class Solution {
public:
  void sortColors(vector<int> &nums) {
    const int n = nums.size();

    int left{0}, right{n - 1}, cur{0};
    while (cur <= right) {
      int &color = nums[cur];
      switch (color) {
      case 0:
        if (cur > left)
          swap(nums[left++], color);
        else {
          left = cur = cur + 1;
        }
        break;
      case 1:
        ++cur;
        break;
      case 2:
        swap(color, nums[right--]);
        break;
      }
    }
  }
};