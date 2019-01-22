#include "common.h"

class Solution {
public:
  int minCostClimbingStairs(vector<int> &cost) {
    int last_last = cost[0];
    int last = cost[1];
    for (int i = 2; i < cost.size(); ++i) {
      int tmp_last = min(last_last + cost[i], last + cost[i]);
      last_last = min(last_last + cost[i - 1], last);
      last = tmp_last;
    }
    return min(last_last, last);
  }
};