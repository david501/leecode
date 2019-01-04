#include <string>
#include <map>

using namespace std;

class Solution
{
  public:
    int romanToInt(string s)
    {
        static map<string, int> roman{
            {"I", 1},
            {"V", 5},
            {"X", 10},
            {"L", 50},
            {"C", 100},
            {"D", 500},
            {"M", 1000},
            {"IV", 4},
            {"IX", 9},
            {"XL", 40},
            {"XC", 90},
            {"CD", 400},
            {"CM", 900}};

        int result = 0;
        for (int i = 0, length = s.length(); i < length; ++i)
        {
            if (i < length - 1)
            {
                string s2 = s.substr(i, 2);
                if (roman.find(s2) != roman.end())
                {
                    result += roman[s2];
                    ++i;
                    continue;
                }
            }
            result += roman[s.substr(i, 1)];
        }
        return result;
    }
};