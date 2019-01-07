#include <vector>
using std::vector;

class Solution
{
  public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size();
        while (left < right)
        {
            const int middle = (left + right) / 2;
            if (nums[middle] == target)
                return middle;
            if (nums[middle] < target)
            {
                left = middle + 1;
            }
            else
            {
                right = middle;
            }
        }

        return left;
    }
};