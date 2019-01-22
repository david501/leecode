class Solution {
public:
  bool isToeplitzMatrix(vector<vector<int>> &matrix) {
    const int rows = matrix.size();
    const int cols = matrix[0].size();

    for (int i = 0; i < rows; ++i) {
      int num = matrix[i][0];
      for (int r = i + 1, c = 1; r < rows && c < cols; ++r, ++c) {
        if (matrix[r][c] != num)
          return false;
      }
    }

    for (int i = 1; i < cols; ++i) {
      int num = matrix[0][i];
      for (int r = 1, c = i + 1; r < rows && c < cols; ++r, ++c) {
        if (matrix[r][c] != num)
          return false;
      }
    }

    return true;
  }
};