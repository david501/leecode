class Solution {
public:
  int minimumTotal(vector<vector<int>> &triangle) {
    const int n = triangle.size();
    vector<int> minTotal(n, 0);
    minTotal[0] = triangle[0][0];

    int res = minTotal[0];
    for (int i = 1; i < n; ++i) {
      res = INT_MAX;
      for (int j = i; j >= 0; --j) {
        if (j == i) {
          minTotal[j] = minTotal[j - 1] + triangle[i][j];
        } else if (j == 0) {
          minTotal[j] += triangle[i][j];
        } else {
          minTotal[j] = min(minTotal[j - 1] + triangle[i][j],
                            minTotal[j] + triangle[i][j]);
        }
        if (i == n - 1)
          res = min(res, minTotal[j]);
      }
    }

    return res;
  }
  // int minimumTotal(vector<vector<int>> &triangle) {
  //   const int rows = triangle.size();
  //   if (rows == 0)
  //     return 0;

  //   int res = INT_MAX;
  //   int minTotal{0};
  //   function<void(int, int)> helper = [&](int r, int k) {
  //     if (r == rows) {
  //       res = min(res, minTotal);
  //       return;
  //     }
  //     minTotal += triangle[r][k];
  //     helper(r + 1, k);
  //     if (k < rows)
  //       helper(r + 1, k + 1);
  //     minTotal -= triangle[r][k];
  //   };

  //   helper(0, 0);
  //   return res;
  // }
};