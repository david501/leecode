#include "common.h"

class Solution
{
  public:
    int numberOfBoomerangs(vector<pair<int, int>> &points)
    {
        int total = 0;
        const int n = points.size();
        for (int i = 0; i < n; ++i)
        {
            map<int, int> dist_map;
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                    continue;

                const int dx = points[i].first - points[j].first;
                const int dy = points[i].second - points[j].second;
                total += dist_map[dx * dx + dy * dy]++;
            }
        }
        return 2 * total;
    }
};