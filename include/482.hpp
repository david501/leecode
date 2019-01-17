#include "common.h"

class Solution
{
  public:
    string licenseKeyFormatting(string S, int K)
    {
        int num = 0;
        for (char c : S)
        {
            if (c != '-')
                ++num;
        }

        int count = num % K;
        if (count == 0)
            count = K;

        string s;
        for (char c : S)
        {
            if (c == '-')
                continue;

            if (!count)
            {
                s += "-";
                count = K;
            }

            s += string(1, toupper(c));
            --count;
        }
        return s;
    }
};
