#include <string>
using std::string;

class Solution
{
  public:
    int lengthOfLastWord(string s)
    {
        int len = 0;
        bool space = false;
        for (const char c : s)
        {
            if (c == ' ')
            {
                space = true;
            }
            else
            {
                if (space)
                {
                    len = 0;
                    space = false;
                }
                ++len;
            }
        }
        return len;
    }
};