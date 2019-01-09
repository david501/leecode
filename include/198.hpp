#include <vector>
using namespace std;

class Solution
{
  public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;

        int last = nums[0];
        int no_last = 0;
        for (int i = 1; i < nums.size(); ++i)
        {
            const int cur_last = no_last + nums[i];
            no_last = max(last, no_last);
            last = cur_last;
        }
        return max(last, no_last);
    }
};