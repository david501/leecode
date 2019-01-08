#include <string>
using namespace std;

class Solution
{
  public:
    string convertToTitle(int n)
    {
        string s = "";
        do
        {
            s = string(1, 'A' + (--n % 26)) + s;
            n = n / 26;
        } while (n);
        return s;
    }
};