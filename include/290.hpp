#include "common.h"

class Solution
{
  public:
    bool wordPattern(string pattern, string str)
    {
        map<char, int> pattern2index;
        map<string, int> str2index;

        istringstream in(str);
        int index = 0, n = pattern.size();
        for (string word; in >> word; ++index)
        {
            if (index == n)
                return false;
            if (pattern2index[pattern[index]] != str2index[word])
                return false;
            pattern2index[pattern[index]] = str2index[word] = index + 1;
        }

        return index == n;
    }
};