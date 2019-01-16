#include "common.h"

class Solution
{
  public:
    bool repeatedSubstringPattern(string s)
    {
        const int len = s.size();
        if (len < 2)
            return false;

        int pos = 0;
        while ((pos = s.find(s[0], pos + 1)) != string::npos && pos <= len / 2)
        {
            if (len % pos == 0)
            {
                bool found = true;
                for (int i = 1; i < len / pos; ++i)
                {
                    const int offset = i * pos;
                    for (int j = 0; j < pos; ++j)
                    {
                        if (s[j] != s[offset + j])
                        {
                            found = false;
                            break;
                        }
                    }
                    if (!found)
                        break;
                }
                if (found)
                    return true;
            }
        }

        return false;
    }
};