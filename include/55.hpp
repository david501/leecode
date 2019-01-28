#include "common.h"
class Solution {
public:
  // bool canJump(vector<int> &nums) {
  //   if (nums.empty())
  //     return false;

  //   const int n = nums.size();
  //   bool found = false;
  //   function<void(int)> dfs = [&](int index) {
  //     const int max_jump = index + nums[index];
  //     if (max_jump >= n - 1) {
  //       found = true;
  //       return;
  //     }

  //     nums[index] = -nums[index];
  //     for (int i = max_jump; !found && i>index; --i) {
  //       if (nums[i] < 0)
  //         continue;
  //       dfs(i);
  //     }
  //   };

  //   dfs(0);
  //   return found;
  // }

  bool canJump(vector<int> &nums) {
    if (nums.empty())
      return false;

    const int n = nums.size();
    int max_jump = 0;
    for (int i = 0; i <= max_jump && max_jump < n - 1; ++i) {
      if (max_jump < i + nums[i])
        max_jump = i + nums[i];
    }
    return max_jump >= n - 1;
  }
};