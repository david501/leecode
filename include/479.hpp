#include "common.h"

class Solution
{
  public:
    int largestPalindrome(int n)
    {
        if (n == 1)
            return 9;

        const int upper = pow(10, n) - 1;
        const int lower = pow(10, n - 1);
        for (int i = upper; i >= lower; --i)
        {
            string s = to_string(i);
            s += {s.rbegin(), s.rend()};
            const int64_t palindrome = stol(s);

            for (int64_t j = upper; j >= lower; --j)
            {
                if (j * j < palindrome)
                    break;

                if (palindrome % j == 0 && palindrome / j <= upper)
                {
                    return palindrome % 1337;
                }
            }
        }
        return -1;
    }
};
