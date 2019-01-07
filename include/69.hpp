#include <iostream>
using namespace std;

class Solution
{
  public:
    int mySqrt(int x)
    {
        if (x < 2)
            return x;

        int left = 0;
        int right = x;

        while (left < right)
        {
            const int middle = (left + right) / 2;
            if (x / middle >= middle)
            {
                left = middle + 1;
            }
            else
            {
                right = middle;
            }
        }
        return right - 1;
    }
};