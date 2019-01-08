#include <string>
using namespace std;

class Solution
{
  public:
    int titleToNumber(string s)
    {
        int number = 0;
        for (const char c : s)
        {
            const int num = c - 'A' + 1;
            number = number * 26 + num;
        }
        return number;
    }
};