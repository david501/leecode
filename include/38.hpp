#include <string>
using std::string;

class Solution
{
  public:
    string countAndSay(int n)
    {
        if (n == 1)
            return "1";
        string s = countAndSay(n - 1);

        string result;
        int count = 0;
        char cc = ' ';
        for (const char c : s)
        {
            if (c == cc)
            {
                ++count;
            }
            else
            {
                if (count)
                    result += std::to_string(count) + cc;
                cc = c;
                count = 1;
            }
        }

        if (count)
            result += std::to_string(count) + cc;
        return result;
    }
};