#include "common.h"

class Solution
{
  public:
    void moveZeroes(vector<int> &nums)
    {
        const int len = nums.size();
        int cur = 0;
        for (int i = 0; i < len; ++i)
        {
            if (nums[i])
            {
                nums[cur++] = nums[i];
            }
        }
        while (cur < len)
            nums[cur++] = 0;
    }
};