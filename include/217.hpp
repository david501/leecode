#include "common.h"

class Solution
{
  public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> m;

        for (const auto n : nums)
        {
            if (++m[n] > 1)
                return true;
                }
        return false;
    }
};