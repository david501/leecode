#include "common.h"

class Solution
{
  public:
    int minMoves(vector<int> &nums)
    {
        const int len = nums.size();
        if (len < 2)
            return 0;

        int min_num = nums[0];
        for (int n : nums)
        {
            if (min_num > n)
                min_num = n;
        }

        int sum = 0;
        for (int n : nums)
        {
            sum += n - min_num;
        }

        return sum;
    }
};