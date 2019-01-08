#include <vector>
using namespace std;

class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() == 0)
            return 0;

        int profit = 0;
        int localMin = prices[0];
        int localMax = prices[0];
        for (int i = 1; i < prices.size(); ++i)
        {
            const int currentPrice = prices[i];
            if (currentPrice < localMax)
            {
                profit += localMax - localMin;
                localMin = localMax = currentPrice;
                continue;
            }
            if (currentPrice > localMax)
            {
                localMax = currentPrice;
            }
        }
        profit += localMax - localMin;

        return profit;
    }
};