#include "common.h"

class Solution {
public:
  int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    if (obstacleGrid.empty())
      return 0;
    const int n = obstacleGrid.size();
    const int m = obstacleGrid[0].size();
    if (m == 0)
      return 0;

    vector<int> arr(m, 0);
    arr[0] = 1;
    for (int i = 0; i < n; ++i) {
      arr[0] = (obstacleGrid[i][0]) ? 0 : arr[0];
      for (int j = 1; j < m; ++j) {
        arr[j] = (obstacleGrid[i][j]) ? 0 : arr[j] + arr[j - 1];
      }
    }
    return arr.back();
  }
};