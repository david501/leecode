class Solution {
public:
  int minDeletionSize(vector<string> &A) {
    const int n = A[0].size();
    int D = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 1; j < A.size(); ++j) {
        if (A[j - 1][i] > A[j][i]) {
          ++D;
          break;
        }
      }
    }

    return D;
  }
};