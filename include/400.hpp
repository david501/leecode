#include "common.h"
class Solution
{
  public:
    int findNthDigit(int n)
    {
        int digits = 1;
        int base = 9;
        for (; digits < 9 && n > digits * base; ++digits)
        {
            n -= digits * base;
            base *= 10;
        }
        --n;

        int num = base / 9 + n / digits;
        for (int i = (n % digits) + 1; i < digits; ++i)
            num /= 10;
        return num % 10;
    }
};