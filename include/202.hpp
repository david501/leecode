#include <climits>
#include <set>
using namespace std;

class Solution
{
  public:
    bool isHappy(int n)
    {
        set<int> s{n};
        while (n != 1)
        {
            int sum = 0;
            while (n)
            {
                const int k = n % 10;
                n = n / 10;
                sum += k * k;
            }
            n = sum;

            if (s.find(n) != s.end())
                break;
            s.insert(n);
        }
        return n == 1;
    }
};