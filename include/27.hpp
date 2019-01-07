#include <vector>
using std::vector;

class Solution
{
  public:
    int removeElement(vector<int> &nums, int val)
    {
        int index = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (val == nums[i])
                continue;
            nums[index++] = nums[i];
        }
        return index;
    }
};