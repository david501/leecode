#include "common.h"
class Solution
{
  public:
    vector<string> findRelativeRankss(vector<int> &nums)
    {
        string top3[] = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        priority_queue<pair<int, int>> ranks;
        for (int i = 0; i < nums.size(); ++i)
        {
            ranks.push(pair(nums[i], i));
        }

        vector<string> res(nums.size());
        int rank = 0;
        while (!ranks.empty())
        {
            if (rank < 3)
                res[ranks.top().second] = top3[rank++];
            else
                res[ranks.top().second] = to_string(++rank);
            ranks.pop();
        }
        return res;
    }
};