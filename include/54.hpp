#include "common.h"

class Solution {
public:
  // vector<int> spiralOrder(vector<vector<int>> &matrix) {
  //   const int m = matrix.size();
  //   if (m == 0 || matrix[0].size() == 0)
  //     return {};
  //   const int n = matrix[0].size();

  //   vector<int> res;
  //   res.reserve(n * m);
  //   int r, c;
  //   for (int i = 0; i < (min(m, n) + 1) / 2; ++i) {
  //     r = c = i;
  //     for (int j = 0, d = 1; j < 2; ++j, d = -d) {
  //       const int nn = n - 1 - 2 * i;
  //       const int mn = m - 1 - 2 * i;
  //       for (int k = 0; k < nn; ++k, c += d) {
  //         res.push_back(matrix[r][c]);
  //       }
  //       for (int k = 0; k < mn; ++k, r += d) {
  //         res.push_back(matrix[r][c]);
  //       }
  //       if (nn == 0 || mn == 0)
  //         break;
  //     }
  //   }
  //   if (res.size() != n * m)
  //     res.push_back(matrix[r][c]);

  //   return res;
  // }

  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    if (matrix.empty())
      return {};
    const int m = matrix.size();
    const int n = matrix[0].size();

    vector<int> res;
    res.reserve(m * n);
    int u{0}, d{m - 1}, l{0}, r{n - 1};
    while (true) {
      // top
      for (int col = l; col <= r; ++col)
        res.push_back(matrix[u][col]);
      if (++u > d)
        break;
      // right
      for (int row = u; row <= d; ++row)
        res.push_back(matrix[row][r]);
      if (--r < l)
        break;
      // bottom
      for (int col = r; col >= l; --col)
        res.push_back(matrix[d][col]);
      if (--d < u)
        break;
      // left
      for (int row = d; row >= u; --row)
        res.push_back(matrix[row][l]);
      if (++l > r)
        break;
    }

    return res;
  }
};