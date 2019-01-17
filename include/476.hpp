#include "common.h"
class Solution
{
  public:
    int findComplement(int num)
    {
        int mask = -1;
        int n = num;
        for (int i = 0; n > 0 && i < 32; ++i)
        {
            mask = mask << 1;
            n = n >> 1;
        }
        return (-num - 1) ^ mask;
    }
};
