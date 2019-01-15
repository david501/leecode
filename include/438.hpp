class Solution
{
  public:
    vector<int> findAnagrams(string s, string p)
    {
        const int len = p.size();

        if (s.size() < len)
            return {};

        map<char, int> pdict;
        map<char, int> sdict;

        for (int i = 0; i < len; i++)
        {
            ++pdict[p[i]];
            ++sdict[s[i]];
        }

        vector<int> res;
        for (int i = 0; i <= s.size() - len; ++i)
        {
            bool flag = true;
            for (auto &it : pdict)
            {
                if (it.second != sdict[it.first])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                res.push_back(i);

            if (i < s.size() - len)
            {
                ++sdict[s[i + len]];
                --sdict[s[i]];
            }
        }
        return res;
    }
};