#include "common.h"

class Solution
{
  public:
    int countPrimes(int n)
    {
        vector<bool> flag(n, false);

        int count = 0;
        for (int i = 2; i < n; ++i)
        {
            if (flag[i])
                continue;

            ++count;
            for (int j = i + i; j < n; j += i)
            {
                flag[j] = true;
            }
        }
        return count;
    }
};