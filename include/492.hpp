#include "common.h"

class Solution
{
  public:
    vector<int> constructRectangle(int area)
    {
        int W;
        for (W = sqrt(area); W >=1; --W)
        {
            if (area % W == 0)
                break;
        }
        int L=area/W;
        if(L<W) swap(L, W);
        
        return {L,W};      
    }
};