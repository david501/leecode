#include <string>
using std::string;

class Solution
{
  public:
    string addBinary(string a, string b)
    {
        int la = a.length();
        int lb = b.length();
        if (la == 0)
            return b;
        if (lb == 0)
            return a;

        string r;
        int sum = 0;
        while (la > 0 || lb > 0)
        {
            if (la > 0)
            {
                --la;
                sum += (a[la] == '0') ? 0 : 1;
            }
            if (lb > 0)
            {
                --lb;
                sum += (b[lb] == '0') ? 0 : 1;
            }
            switch (sum)
            {
            case 0:
                sum = 0;
                r = "0" + r;
                break;
            case 1:
                sum = 0;
                r = "1" + r;
                break;
            case 2:
                sum = 1;
                r = "0" + r;
                break;
            case 3:
                sum = 1;
                r = "1" + r;
                break;
            }
        }
        if (sum)
        {
            r = "1" + r;
        }
        return r;
    }
};