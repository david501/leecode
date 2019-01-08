#include <vector>
using namespace std;

class Solution
{
  public:
    void rotate(vector<int> &nums, int k)
    {
        const int len = nums.size();
        for (int i = 0, count=0; count < len; ++i)
        {
            int index = i;
            int last = nums[i];
            do
            {
                const int nextId = (index + k) % len;
                const int temp = nums[nextId];
                nums[nextId] = last;
                last = temp;
                index = nextId;
                ++count;
            } while (index != i);
        }
    }
};