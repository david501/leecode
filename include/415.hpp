#include "common.h"
class Solution
{
  public:
    string addStrings(string num1, string num2)
    {
        const int len1 = num1.size();
        const int len2 = num2.size();
        const int len = max(len1, len2);

        string s;
        s.reserve(len + 1);
        int carry = 0;
        for (int i = 0; i < len; ++i)
        {
            int sum = carry;
            if (i < len1)
            {
                sum += num1[len1 - 1 - i] - '0';
            }
            if (i < len2)
            {
                sum += num2[len2 - 1 - i] - '0';
            }
            if (sum < 10)
            {
                carry = 0;
            }
            else
            {
                sum -= 10;
                carry = 1;
            }
            s += to_string(sum);
        }
        if (carry)
            s += "1";

        return {s.rbegin(), s.rend()};
    }
};