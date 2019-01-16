#include "common.h"
class Solution
{
  public:
    int compress(vector<char> &chars)
    {
        const int len = chars.size();
        if (len < 2)
            return len;

        int count = 1;
        int current = 0;

        auto fillNumber = [&](int count) {
            if (count > 1)
            {
                string s = to_string(count);
                for (const char c : s)
                    chars[++current] = c;
            }
        };

        for (int i = 1; i < len; ++i)
        {
            if (chars[i] == chars[current])
            {
                ++count;
            }
            else
            {
                fillNumber(count);
                count = 1;
                chars[++current] = chars[i];
            }
        }
        fillNumber(count);

        ++current;
        chars.erase(chars.begin() + current, chars.end());
        return current;
    }
};