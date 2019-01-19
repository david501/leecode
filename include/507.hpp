#include "common.h"
class Solution
{
  public:
    bool checkPerfectNumber(int num)
    {
        int sum = 1;
        for (int i = 2; i <= sqrt(num); ++i)
        {
            if (num % i == 0)
            {
                sum += i + num / i;
            }
        }
        return num != 1 && sum == num;
    }
};
