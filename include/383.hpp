#include "common.h"
class Solution
{
  public:
    bool canConstruct(string ransomNote, string magazine)
    {
        map<char, int> dict;
        for (const char c : magazine)
            dict[c]++;
        for (const char c : ransomNote)
        {
            if (--dict[c] < 0)
                return false;
        }
        return true;
    }
};