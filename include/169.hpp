#include <vector>
#include <map>
using namespace std;

class Solution
{
  public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> m;
        for (const auto n : nums)
        {
            m[n]++;
        }

        int num;
        int maxCount = 0;
        for (const auto &it : m)
        {
            if (it.second > maxCount)
            {
                maxCount = it.second;
                num = it.first;
            }
        }
        return num;
    }
};