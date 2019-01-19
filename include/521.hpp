#include "common.h"

class Solution
{
  public:
    int findLUSlength(string a, string b)
    {
        if (a.size() != b.size())
            return max(a.size(), b.size());

        return (a == b) ? a.size() : -1;
    }
};
