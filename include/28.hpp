#include <string>
using std::string;

class Solution
{
  public:
    int strStr(string haystack, string needle)
    {
        const int needle_len = needle.length();
        if (needle_len == 0)
            return 0;

        const int loop = haystack.length() - needle_len + 1;
        for (int i = 0; i < loop; ++i)
        {
            bool success = true;
            for (int j = 0; j < needle_len; ++j)
            {
                if (haystack[i + j] != needle[j])
                {
                    success = false;
                    break;
                }
            }
            if (success)
                return i;
        }

        return -1;
    }
};