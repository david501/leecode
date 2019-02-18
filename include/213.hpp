#include "common.h"

class Solution {
public:
  int rob(vector<int> &nums) {
    const int n = nums.size();
    int doRob{0}, unRob{0};
    for (int i = 0; i < n - 1; ++i) {
      int doRob_tmp = doRob;
      doRob = unRob + nums[i];
      unRob = max(doRob_tmp, unRob);
    }
    int res = max(doRob, unRob);

    doRob = 0;
    unRob = 0;
    for (int i = 1; i < n; ++i) {
      int doRob_tmp = doRob;
      doRob = unRob + nums[i];
      unRob = max(doRob_tmp, unRob);
    }
    return max(res, max(doRob, unRob));
  }
};