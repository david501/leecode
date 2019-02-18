#include "common.h"

class Solution {
public:
  vector<string> summaryRanges(vector<int> &nums) {
    vector<string> res;
    if (nums.empty())
      return res;

    int start{0}, end = {0};
    for (int i = 1; i < nums.size(); ++i) {
      if (nums[i] == nums[end] + 1) {
        end = i;
      } else {
        if (start != end) {
          res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
        } else {
          res.push_back(to_string(nums[start]));
        }
        start = end = i;
      }
    }

    if (start != end) {
      res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
    } else {
      res.push_back(to_string(nums[start]));
    }
    
    return res;
  }
};