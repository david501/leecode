#include <cstdint>

class Solution
{
  public:
    int reverse(int x)
    {
        int result = 0;
        while (x)
        {
            const int r = x % 10;
            x = x / 10;
            if (result < INT32_MIN / 10 || (result == INT32_MIN / 10 && r < -8))
                return 0;
            if (result > INT32_MAX / 10 || (result == INT32_MAX / 10 && r > 7))
                return 0;
            result = result * 10 + r;
        }
        return result;
    }
};
