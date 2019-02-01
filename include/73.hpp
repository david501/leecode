class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    if (matrix.empty())
      return;
    const int m = matrix.size();
    const int n = matrix[0].size();

    bool r0 = false;
    for (int i = 0; i < n; ++i) {
      if (!matrix[0][i]) {
        r0 = true;
        break;
      }
    }

    bool c0 = false;
    for (int i = 0; i < m; ++i) {
      if (!matrix[i][0]) {
        c0 = true;
        break;
      }
    }

    for (int i = 1; i < m; ++i) {
      for (int j = 1; j < n; ++j) {
        if (!matrix[i][j]) {
          if (matrix[0][j]) {
            for (int k = 0; k < i; ++k)
              matrix[k][j] = 0;
          }
          if (j && matrix[i][0]) {
            for (int k = 0; k < j; ++k)
              matrix[i][k] = 0;
          }
        } else {
          if ((j && !matrix[i][0]) || !matrix[0][j]) {
            matrix[i][j] = 0;
          }
        }
      }
    }

    if (r0) {
      for (int i = 0; i < n; ++i) {
        matrix[0][i] = 0;
      }
    }

    if (c0) {
      for (int i = 0; i < m; ++i) {
        matrix[i][0] = 0;
      }
    }
  }
};