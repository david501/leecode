
class Solution
{
  public:
    char findTheDifference(string s, string t)
    {
        char cc = 0;
        for (const char c : s)
            cc ^= c;
        for (const char c : t)
            cc ^= c;
        return cc;
    }
};