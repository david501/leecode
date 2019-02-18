#include "common.h"

class Solution {
public:
  int maxProduct(vector<int> &nums) {
    if (nums.empty())
      return 0;

    const int n = nums.size();
    int res = INT_MIN;
    int neg = 1, pos = 1;
    bool first_neg = true;
    for (int i : nums) {
      if (i == 0) {
        first_neg = true;
        pos = neg = 1;
        res = max(res, 0);
      } else if (i < 0) {
        if (first_neg) {
          first_neg = false;
          neg = pos * i;
          pos = 1;
          res = max(res, neg);
        } else {
          const int tmp = neg;
          neg = pos * i;
          pos = tmp * i;
          res = max(res, pos);
        }
      } else {
        neg *= i;
        pos *= i;
        res = max(res, pos);
      }
    }
    return res;
  }
};