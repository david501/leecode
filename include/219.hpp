#include "common.h"

class Solution
{
  public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        map<int, int> index;

        for (int j = 0; j < nums.size(); ++j)
        {
            const int n = nums[j];
            if (index.find(n) != index.end())
            {
                if (j - index[n] <= k)
                    return true;
            }
            index[n] = j;
        }
        return false;
    }
};