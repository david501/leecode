#include "common.h"

class Solution {
public:
  // int search(vector<int> &nums, int target) {
  //   const int n = nums.size();
  //   if (n == 0)
  //     return -1;

  //   const bool lower = target >= nums[0];

  //   int left{0}, right{n};
  //   while (left < right) {
  //     const int mid = left + (right - left) / 2;
  //     const int num = nums[mid];
  //     if (num == target)
  //       return mid;

  //     if (num < target) {
  //       if (!lower || num >= nums[0])
  //         left = mid + 1;
  //       else
  //         right = mid;
  //     } else {
  //       if (lower || num <= nums[n - 1])
  //         right = mid;
  //       else
  //         left = mid + 1;
  //     }
  //   }

  //   return -1;
  // }

  int search(vector<int> &nums, int target) {
    if (nums.size() == 0)
      return -1;

    const bool lower = target < nums[0];
    const long default_mid = lower ? INT_MIN - 1l : INT_MAX + 1l;

    int left = 0, right = nums.size();
    while (left < right) {
      const int mid = left + (right - left) / 2;
      const long num = (nums[mid] < nums[0]) == lower ? nums[mid] : default_mid;

      if (num == target)
        return mid;
      if (num < target)
        left = mid + 1;
      else
        right = mid;
    }

    return -1;
  }
};