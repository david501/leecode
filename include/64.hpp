#include "common.h"

class Solution {
public:
  int minPathSum(vector<vector<int>> &grid) {
    if (grid.empty())
      return 0;
    const int n = grid.size();
    const int m = grid[0].size();
    if (m == 0)
      return 0;

    vector<int> arr = grid[0];
    for (int j = 1; j < m; ++j)
      arr[j] += arr[j - 1];

    for (int i = 1; i < n; ++i) {
      arr[0] += grid[i][0];
      for (int j = 1; j < m; ++j) {
        arr[j] = min(arr[j - 1] + grid[i][j], arr[j] + grid[i][j]);
      }
    }
    return arr.back();
  }
};