#include <vector>
using namespace std;

class Solution
{
  public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int index1 = 0;
        int index2 = numbers.size() - 1;
        while (index1 < index2)
        {
            const int sum = numbers[index1] + numbers[index2];
            if (sum == target)
                break;
            if (sum < target)
                ++index1;
            else
                --index2;
        }
        return {index1 + 1, index2 + 1};
    }
};