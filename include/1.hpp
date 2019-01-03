#include <map>
#include <vector>

using namespace std;

class Solution
{
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> index;
        int n = 0;
        for (const auto &num : nums)
        {
            const int m = index[num];
            if (m)
            {
                return {m - 1, n};
            }
            index[target - num] = ++n;
        }
        return {};
    }
};
