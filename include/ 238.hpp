#include "common.h"
class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    const int n = nums.size();
    vector<int> res(n);
    res[n - 1] = nums[n - 1];
    for (int i = n - 2; i > 0; --i) {
      res[i] = nums[i] * res[i + 1];
    }
    int p = 1;
    for (int i = 0; i < n - 1; ++i) {
      res[i] = p * res[i + 1];
      p *= nums[i];
    }
    res[n - 1] = p;

    return res;
  }
};