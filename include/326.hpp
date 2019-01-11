#include "common.h"

class Solution
{
  public:
    bool isPowerOfThree(int n)
    {
        constexpr int Max3PowerInt = 1162261467; 
        return n > 0 && Max3PowerInt % n == 0;
    }
};