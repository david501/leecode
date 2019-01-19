#include "common.h"

class Solution
{
  public:
    string reverseStr(string s, int k)
    {
        const int len = s.size();
        for (int i = 0; i < len; i += k + k)
        {
            int l = min(k, len - i);
            reverse(s.begin() + i, s.begin() + i + l);
        }
        return s;
    }
};