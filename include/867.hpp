class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>> &A) {
    const int rows = A.size();
    const int cols = A[0].size();

    vector<vector<int>> B(cols);
    for (int i = 0; i < cols; ++i) {
      B[i].reserve(rows);
      for (int j - 0; j < rows; ++j) {
        B[i].push_back(A[j][i]);
      }
    }
    return B;
  }
};