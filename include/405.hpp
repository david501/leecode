#include "common.h"

class Solution
{
  public:
    string toHex(int num)
    {
        string s;
        const char smap[]="0123456789abcdef";
        for (int i = 0; i < 8; ++i)
        {
            s = smap[num & 0xf] + s;
            num = num >> 4;
            if (num == 0)
                break;
        }
        return s;
    }
};