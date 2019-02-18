#include "common.h"

class Solution {
public:
  vector<int> majorityElement(vector<int> &nums) {
    if (nums.empty())
      return {};

    const int n = nums.size() / 3;
    int candidate1, candidate2;
    int count1{0}, count2{0};
    for (int num : nums) {
      if (num == candidate1)
        ++count1;
      else if (num == candidate2)
        ++count2;
      else if (count1 == 0) {
        candidate1 = num;
        count1 = 1;
      } else if (count2 == 0) {
        candidate2 = num;
        count2 = 1;
      } else {
        --count1;
        --count2;
      }
    }

    count1 = count2 = 0;
    for (int num : nums) {
      if (num == candidate1)
        ++count1;
      else if (num == candidate2)
        ++count2;
    }

    vector<int> res;
    if (count1 > n)
      res.push_back(candidate1);
    if (count2 > n)
      res.push_back(candidate2);
    return res;
  }
};