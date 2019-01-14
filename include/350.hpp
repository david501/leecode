#include <common.h>

class Solution
{
  public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;

        map<int, int> dict;
        for (const int n : nums1)
        {
            dict[n]++;
        }
        for (const int n : nums2)
        {
            if (--dict[n] >= 0)
                res.push_back(n);
        }

        return res;
    }
};