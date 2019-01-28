#include "common.h"

class Solution {
public:
  string getPermutation(int n, int k) {
    int ni = 1;
    vector<char> nums(n);
    for (int i = 1; i <= n; ++i) {
      ni *= i;
      nums[i - 1] = '0' + i;
    }

    string res;
    --k;
    for (int i = n; i > 1; --i) {
      ni /= i;
      const int cur = k / ni;
      k = k % ni;

      res += string(1, nums[cur]);
      nums.erase(nums.begin() + cur);
    }

    res += string(1, nums[0]);
    return res;
  }
};