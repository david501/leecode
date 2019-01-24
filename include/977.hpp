class Solution {
public:
  vector<int> sortedSquares(vector<int> &A) {
    vector<int> res(A.size());
    for (int i = A.size() - 1, l = 0, r = A.size() - 1; i >= 0; --i) {
      res[i] = (abs(A[r]) > abs(A[l])) ? A[r] * A[r--] : A[l] * A[l++];
    }
    return res;
  }
};