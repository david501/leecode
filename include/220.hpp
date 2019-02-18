#include "common.h"
class Solution {
public:
  bool containsNearbyAlmostDuplicate(vector<int> &nums, int k, int t) {
    if (k == 0 || t < 0)
      return false;

    set<int> m;
    for (int i = 0; i < nums.size(); ++i) {
      const int num = nums[i];
      if (i > k) {
        m.erase(nums[i - k - 1]);
      }

      auto it = m.upper_bound(num);
      if (it != m.end() && (long(*it) - num) <= t)
        return true;
      if (it != m.begin() && (long(num) - *(--it)) <= t)
        return true;

      m.insert(num);
    }
    return false;
  }
};