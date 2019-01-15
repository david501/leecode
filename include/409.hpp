#include "common.h"

class Solution
{
  public:
    int longestPalindrome(string s)
    {
        map<char, int> dict;
        for (const char c : s)
            if (isalpha(c))
                ++dict[c];

        int sum = 0;
        bool flag = false;
        for (const auto it : dict)
        {
            flag |= it.second & 1;
            sum += it.second & (-2);
        }
        return flag ? sum + 1 : sum;
    }
};