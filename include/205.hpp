#include "common.h"

class Solution
{
  public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        map<char, char> s2t, t2s;
        for (int i = 0; i < s.length(); ++i)
        {
            auto it = s2t.find(s[i]);
            if (it != s2t.end())
            {
                if (it->second != t[i])
                    return false;
            }
            else
            {
                if (t2s.find(t[i]) != t2s.end())
                    return false;
                t2s[t[i]] = s[i];
                s2t[s[i]] = t[i];
            }
        }

        return true;
    }
};