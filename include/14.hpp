#include <string>
#include <vector>

using namespace std;

class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        const int len = strs.size();
        if (len == 0)
            return "";

        const string &s = strs[0];
        int longest = s.length();
        for (int i = 1; longest > 0 && i < len; ++i)
        {
            const string &si = strs[i];
            longest = (si.length() < longest) ? si.length() : longest;
            for (int j = 0; j < longest; ++j)
            {
                if (s[j] != si[j])
                {
                    longest = j;
                    break;
                }
            }
        }
        return s.substr(0, longest);
    }
};