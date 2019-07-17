#include "common.h"

class Solution {
public:
  vector<int> singleNumber(vector<int> &nums) {
    int x = 0;
    for (int num : nums)
      x ^= num;

    int m = 1;
    while (!(x & m))
      m <<= 1;

    int a{0}, b{0};
    for (int num : nums) {
      if (num & m)
        a ^= num;
      else
        b ^= num;
    }

    return {a, b};
  }
};
