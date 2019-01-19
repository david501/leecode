#include "common.h"

class Solution
{
  public:
    string convertToBase7(int num)
    {
        if (num == 0)
            return "0";
        if (num < 0)
            return "-" + convertToBase7(-num);

        string s;
        while (num)
        {
            s += to_string(num % 7);
            num /= 7;
        }
        return {s.rbegin(), s.rend()};
    }
};