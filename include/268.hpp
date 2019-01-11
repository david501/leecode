#include "common.h"
class Solution
{
  public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        for (const auto i : nums)
            sum += i;

        const int n = nums.size();
        return n * (n + 1) / 2  - sum;
    }
};