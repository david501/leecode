class Solution {
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A) {
    const int rows = A.size();
    const int cols = A[0].size();

    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < (cols + 1) / 2; ++j) {
        const int t = A[i][j] ^ 1;
        A[i][j] = A[i][cols - 1 - j] ^ 1;
        A[i][cols - 1 - j] = t;
      }
    }
    return A;
  }
};