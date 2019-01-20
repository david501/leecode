class Solution {
public:
  vector<vector<int>> imageSmoother(vector<vector<int>> &M) {
    const int rows = M.size();
    const int cols = M[0].size();
    vector<vector<int>> out(rows);

    for (int r = 0; r < rows; ++r) {
      out[r].resize(cols);
      for (int c = 0; c < cols; ++c) {
        int sum = 0, count = 0;
        for (int i = max(0, r - 1); i <= min(rows-1, r + 1); ++i) {
          for (int j = max(0, c - 1); j <= min(cols-1, c + 1); ++j) {
            sum += M[i][j];
            ++count;
          }
        }
        out[r][c] = min(255, sum / count);
      }
    }
    return out;
  }
};