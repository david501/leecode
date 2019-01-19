#include "common.h"
class Solution
{
  public:
    bool detectCapitalUse(string word)
    {
        bool has_lower = false;
        bool all_capital = false;
        for (int i = 0; i < word.size(); ++i)
        {
            const char c = word[i];
            if (islower(c))
            {
                if (all_capital)
                    return false;
                has_lower = true;
            }
            else if (i)
            {
                if (has_lower)
                    return false;
                all_capital = true;
            }
        }
        return true;
    }
};