#include "common.h"
class Solution
{
  public:
    int firstUniqChar(string s)
    {
        int dict[256] = {0};
        for (const char c : s)
        {
            ++dict[c];
        }

        for (int i = 0; i < s.size(); ++i)
        {
            if (dict[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};