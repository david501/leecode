#include <vector>
using std::vector;

class Solution
{
  public:
    int maxSubArray(vector<int> &nums)
    {
        int global = nums[0];
        int local = nums[0];
        for (int i = 1; i < nums.size(); ++i)
        {
            const int num = nums[i];
            local = std::max(local + num, num);
            if (local > global)
                global = local;
        }

        return global;
    }
};