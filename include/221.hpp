#include "common.h"
class Solution {
public:
  int maximalSquare(vector<vector<char>> &matrix) {
    const int m = matrix.size();
    if (m == 0)
      return 0;
    const int n = matrix[0].size();

    int res = 0;
    vector<int> last(n + 1, 0);
    for (int i = 0; i < m; ++i) {
      vector<int> cur(n + 1, 0);
      for (int j = 0; j < n; ++j) {
        if (matrix[i][j] == '0') {
          cur[j + 1] = 0;
        } else {
          cur[j + 1] = min(cur[j], min(last[j], last[j + 1])) + 1;
          res = max(res, cur[j + 1]);
        }
      }
      swap(last, cur);
    }
    return res * res;
  }
};