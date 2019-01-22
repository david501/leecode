class Solution {
public:
  bool rotateString(string A, string B) {
    const int n = A.size();
    if (n != B.size())
      return false;
    if (n == 0)
      return true;

    const char c = A[0];
    for (int i = 0; i < n; ++i) {
      if (B[i] == c) {
        bool success = true;
        for (int j = 0; j < n; ++j) {
          if (A[j] != B[(i + j) % n]) {
            success = false;
            break;
          }
        }
        if (success)
          return true;
      }
    }
    return false;
  }
};