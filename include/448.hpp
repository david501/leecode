#include "common.h"

class Solution
{
  public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        const int len = nums.size();

        vector<int> res;
        for (int i = 0; i < len; ++i)
        {
            int ni = nums[i];
            if (i == ni - 1)
                continue;

            nums[i] = 0;
            while (nums[ni - 1] != ni)
            {
                int tmp = nums[ni - 1];
                nums[ni - 1] = ni;
                if (tmp)
                    ni = tmp;
            }
        }

        for (int i = 0; i < len; ++i)
        {
            if (nums[i] == 0)
                res.push_back(i + 1);
        }
        return res;
    }
};