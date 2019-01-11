#include "common.h"

class Solution
{
  public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        map<char, int> smap, tmap;
        for (const char c : s)
            smap[c]++;
        for (const char c : t)
            tmap[c]++;

        if (smap.size() != tmap.size())
            return false;
        for (auto &it : smap)
        {
            if (tmap[it.first] != it.second)
                return false;
        }

        return true;
    }
};