#include "common.h"

class Solution
{
  public:
    vector<string> findWords(vector<string> &words)
    {
        static const int lines[] = {
            1, 2, 2, 1, 0, 1, 1, // a,b,c,d,e,f,g,
            1, 0, 1, 1, 1, 2, 2, // h,i,j,k,l,m,n,
            0, 0, 0, 0, 1, 0,    // o,p,q,r,s,t,
            0, 2, 0, 2, 0, 2     // u,v,w,x,y,z
        };

        vector<string> result;
        for (string &word : words)
        {
            bool flag = true;
            for (int i = 0, first; i < word.size() && flag; ++i)
            {
                const int line = lines[tolower(word[i]) - 'a'];
                if (i == 0)
                    first = line;
                flag = first == line;
            }
            if (flag)
                result.push_back(word);
        }
        return result;
    }
};
