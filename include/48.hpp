class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    const int n = matrix.size();

    for (int i = 0; i < (n + 1) / 2; ++i) {
      for (int j = 0; j < n - 2 * i - 1; ++j) {
        int r = i, c = i + j;
        const int tmp = matrix[r][c];
        for (int k = 0; k < 3; ++k) {
          const int t = n - 1 - c;
          matrix[r][c] = matrix[t][r];
          c = r;
          r = t;
        }
        matrix[r][c] = tmp;
      }
    }
  }
};