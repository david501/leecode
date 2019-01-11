#include "common.h"

class Solution
{
  public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> nset(nums1.begin(), nums1.end());

        vector<int> result;
        for (const int n : nums2)
        {
            if (nset.find(n) != nset.end())
            {
                result.push_back(n);
                nset.erase(n);
            }
        }

        return result;
    }
};
