#include "common.h"

class Solution
{
  public:
    int findPairs(vector<int> &nums, int k)
    {
        if (k < 0)
            return 0;

        map<int, int> dict;
        for (int n : nums)
            ++dict[n];

        int count = 0;
        if (k == 0)
        {
            for (auto &it : dict)
            {
                if (it.second > 1)
                    ++count;
            }
        }
        else
        {
            for (auto &it : dict)
            {
                if (dict.count(it.first + k))
                    ++count;
            }
        }

        return count;
    }
};